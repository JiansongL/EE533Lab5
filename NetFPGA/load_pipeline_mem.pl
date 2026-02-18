#!/usr/bin/perl -w
use strict;

# Script to load I-mem and D-mem from .coe files to NetFPGA pipeline

sub parse_coe_file {
   my($filename) = @_;
   open(my $fh, '<', $filename) or die "Cannot open $filename: $!";
   my @values;
   my $in_vector = 0;
   
   while (my $line = <$fh>) {
      chomp($line);
      # Remove comments
      $line =~ s/--.*//;
      # Skip empty lines
      next if $line =~ /^\s*$/;
      # Look for memory_initialization_vector
      if ($line =~ /memory_initialization_vector\s*=/) {
         $in_vector = 1;
         next;
      }
      # Extract hex values
      if ($in_vector) {
         # Match hex values (with or without 0x prefix)
         while ($line =~ /([0-9a-fA-F]+)[,;]?/g) {
            my $val = $1;
            next if length($val) == 0;
            push @values, hex("0x$val");
         }
      }
   }
   close($fh);
   return @values;
}

sub load_imem {
   my(@instructions) = @_;
   print "\n=== Loading Instruction Memory (I-MEM) ===\n";
   for (my $i = 0; $i < @instructions; $i++) {
      my $addr = $i;
      my $instr = $instructions[$i];
      my $cmd = sprintf("pipelinereg write_inst 0x%x 0x%08x", $addr, $instr);
      print "[$i] $cmd\n";
      system($cmd);
   }
   print "=== I-MEM Load Complete ===\n\n";
}

sub load_dmem {
   my(@data) = @_;
   print "\n=== Loading Data Memory (D-MEM) ===\n";
   for (my $i = 0; $i < @data; $i++) {
      my $addr = $i;
      my $data_lo = $data[$i];
      my $data_hi = 0;  # Assuming 32-bit data in lower word
      my $cmd = sprintf("pipelinereg write_data 0x%x 0x%08x 0x%08x", $addr, $data_lo, $data_hi);
      print "[$i] $cmd\n";
      system($cmd);
   }
   print "=== D-MEM Load Complete ===\n\n";
}

sub verify_memories {
   print "\n=== Verifying Memory Contents ===\n";
   print "Running: pipelinereg allregs\n";
   system("pipelinereg allregs");
}

# Main script
my $inst_file = "Lab5InstInit.coe";
my $data_file = "Lab5MemInit.coe";

# Check if files exist
unless (-e $inst_file) {
   print "Error: $inst_file not found\n";
   exit(1);
}
unless (-e $data_file) {
   print "Error: $data_file not found\n";
   exit(1);
}

print "Loading pipeline memories from .coe files...\n";
print "Instruction file: $inst_file\n";
print "Data file: $data_file\n";

# Parse .coe files
my @instructions = parse_coe_file($inst_file);
my @data = parse_coe_file($data_file);

print "\nParsed " . scalar(@instructions) . " instructions\n";
print "Parsed " . scalar(@data) . " data values\n";

# Load memories
load_imem(@instructions);
load_dmem(@data);

# Verify
print "\nVerify memory initialization? (y/n): ";
my $response = <STDIN>;
chomp($response);
if ($response =~ /^y/i) {
   verify_memories();
}

print "\nPipeline memory initialization complete!\n";

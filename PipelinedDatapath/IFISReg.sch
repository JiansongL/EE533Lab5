VERSION 6
BEGIN SCHEMATIC
    BEGIN ATTR DeviceFamilyName "virtex2p"
        DELETE all:0
        EDITNAME all:0
        EDITTRAIT all:0
    END ATTR
    BEGIN NETLIST
        SIGNAL clk
        SIGNAL XLXN_2
        SIGNAL inst(15:0)
        SIGNAL XLXN_4
        SIGNAL instOut(15:0)
        PORT Input clk
        PORT Input inst(15:0)
        PORT Output instOut(15:0)
        BEGIN BLOCKDEF fd16ce
            TIMESTAMP 2000 1 1 10 10 10
            LINE N 0 -128 64 -128 
            LINE N 0 -192 64 -192 
            LINE N 0 -32 64 -32 
            LINE N 0 -256 64 -256 
            LINE N 384 -256 320 -256 
            LINE N 80 -128 64 -144 
            LINE N 64 -112 80 -128 
            RECTANGLE N 320 -268 384 -244 
            RECTANGLE N 0 -268 64 -244 
            LINE N 192 -32 64 -32 
            LINE N 192 -64 192 -32 
            RECTANGLE N 64 -320 320 -64 
        END BLOCKDEF
        BEGIN BLOCKDEF gnd
            TIMESTAMP 2000 1 1 10 10 10
            LINE N 64 -64 64 -96 
            LINE N 76 -48 52 -48 
            LINE N 68 -32 60 -32 
            LINE N 88 -64 40 -64 
            LINE N 64 -64 64 -80 
            LINE N 64 -128 64 -96 
        END BLOCKDEF
        BEGIN BLOCKDEF vcc
            TIMESTAMP 2000 1 1 10 10 10
            LINE N 64 -32 64 -64 
            LINE N 64 0 64 -32 
            LINE N 96 -64 32 -64 
        END BLOCKDEF
        BEGIN BLOCK XLXI_1 fd16ce
            PIN C clk
            PIN CE XLXN_2
            PIN CLR XLXN_4
            PIN D(15:0) inst(15:0)
            PIN Q(15:0) instOut(15:0)
        END BLOCK
        BEGIN BLOCK XLXI_2 gnd
            PIN G XLXN_4
        END BLOCK
        BEGIN BLOCK XLXI_3 vcc
            PIN P XLXN_2
        END BLOCK
    END NETLIST
    BEGIN SHEET 1 3520 2720
        INSTANCE XLXI_1 1424 752 R0
        BEGIN BRANCH clk
            WIRE 1296 624 1424 624
        END BRANCH
        BEGIN BRANCH inst(15:0)
            WIRE 1344 496 1424 496
        END BRANCH
        BEGIN BRANCH XLXN_4
            WIRE 1296 720 1424 720
            WIRE 1296 720 1296 800
        END BRANCH
        INSTANCE XLXI_2 1232 928 R0
        IOMARKER 1344 496 inst(15:0) R180 28
        IOMARKER 1296 624 clk R180 28
        INSTANCE XLXI_3 1072 560 R0
        BEGIN BRANCH XLXN_2
            WIRE 1136 560 1424 560
        END BRANCH
        BEGIN BRANCH instOut(15:0)
            WIRE 1808 496 1936 496
        END BRANCH
        IOMARKER 1936 496 instOut(15:0) R0 28
    END SHEET
END SCHEMATIC

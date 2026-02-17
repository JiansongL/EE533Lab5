VERSION 6
BEGIN SCHEMATIC
    BEGIN ATTR DeviceFamilyName "virtex2p"
        DELETE all:0
        EDITNAME all:0
        EDITTRAIT all:0
    END ATTR
    BEGIN NETLIST
        SIGNAL inst(31:0)
        SIGNAL instOut(31:0)
        SIGNAL XLXN_2
        SIGNAL clk
        PORT Input inst(31:0)
        PORT Output instOut(31:0)
        PORT Input clk
        BEGIN BLOCKDEF vcc
            TIMESTAMP 2000 1 1 10 10 10
            LINE N 64 -32 64 -64 
            LINE N 64 0 64 -32 
            LINE N 96 -64 32 -64 
        END BLOCKDEF
        BEGIN BLOCKDEF reg32
            TIMESTAMP 2026 2 17 11 32 13
            RECTANGLE N 64 -192 400 0 
            LINE N 64 -160 0 -160 
            LINE N 64 -96 0 -96 
            RECTANGLE N 0 -44 64 -20 
            LINE N 64 -32 0 -32 
            RECTANGLE N 400 -172 464 -148 
            LINE N 400 -160 464 -160 
        END BLOCKDEF
        BEGIN BLOCK XLXI_4 reg32
            PIN clk clk
            PIN en XLXN_2
            PIN data_in(31:0) inst(31:0)
            PIN data_out(31:0) instOut(31:0)
        END BLOCK
        BEGIN BLOCK XLXI_3 vcc
            PIN P XLXN_2
        END BLOCK
    END NETLIST
    BEGIN SHEET 1 3520 2720
        BEGIN INSTANCE XLXI_4 1376 864 R0
        END INSTANCE
        BEGIN BRANCH inst(31:0)
            WIRE 1296 832 1376 832
        END BRANCH
        IOMARKER 1296 832 inst(31:0) R180 28
        BEGIN BRANCH instOut(31:0)
            WIRE 1840 704 1856 704
            WIRE 1856 704 1968 704
        END BRANCH
        IOMARKER 1968 704 instOut(31:0) R0 28
        INSTANCE XLXI_3 1024 768 R0
        BEGIN BRANCH XLXN_2
            WIRE 1088 768 1376 768
        END BRANCH
        BEGIN BRANCH clk
            WIRE 1344 704 1376 704
        END BRANCH
        IOMARKER 1344 704 clk R180 28
    END SHEET
END SCHEMATIC

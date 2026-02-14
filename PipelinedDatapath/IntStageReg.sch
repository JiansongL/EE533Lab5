VERSION 6
BEGIN SCHEMATIC
    BEGIN ATTR DeviceFamilyName "virtex2p"
        DELETE all:0
        EDITNAME all:0
        EDITTRAIT all:0
    END ATTR
    BEGIN NETLIST
        SIGNAL clk
        SIGNAL WMEI
        SIGNAL WREI
        SIGNAL XLXN_17
        SIGNAL WMEO
        SIGNAL WREO
        SIGNAL XLXN_49
        SIGNAL WREG1I(1:0)
        SIGNAL WREG1O(1:0)
        SIGNAL XLXN_52
        SIGNAL REG2I(63:0)
        SIGNAL REG2O(63:0)
        SIGNAL REG1O(63:0)
        SIGNAL REG1I(63:0)
        PORT Input clk
        PORT Input WMEI
        PORT Input WREI
        PORT Output WMEO
        PORT Output WREO
        PORT Input WREG1I(1:0)
        PORT Output WREG1O(1:0)
        PORT Input REG2I(63:0)
        PORT Output REG2O(63:0)
        PORT Output REG1O(63:0)
        PORT Input REG1I(63:0)
        BEGIN BLOCKDEF fd
            TIMESTAMP 2000 1 1 10 10 10
            RECTANGLE N 64 -320 320 -64 
            LINE N 0 -128 64 -128 
            LINE N 0 -256 64 -256 
            LINE N 384 -256 320 -256 
            LINE N 80 -128 64 -144 
            LINE N 64 -112 80 -128 
        END BLOCKDEF
        BEGIN BLOCKDEF vcc
            TIMESTAMP 2000 1 1 10 10 10
            LINE N 64 -32 64 -64 
            LINE N 64 0 64 -32 
            LINE N 96 -64 32 -64 
        END BLOCKDEF
        BEGIN BLOCKDEF reg2
            TIMESTAMP 2026 2 14 5 25 41
            RECTANGLE N 64 -192 320 0 
            LINE N 64 -160 0 -160 
            LINE N 64 -96 0 -96 
            RECTANGLE N 0 -44 64 -20 
            LINE N 64 -32 0 -32 
            RECTANGLE N 320 -172 384 -148 
            LINE N 320 -160 384 -160 
        END BLOCKDEF
        BEGIN BLOCKDEF reg64
            TIMESTAMP 2026 2 14 3 37 17
            LINE N 64 32 0 32 
            LINE N 64 -160 0 -160 
            RECTANGLE N 0 -44 64 -20 
            LINE N 64 -32 0 -32 
            RECTANGLE N 400 -172 464 -148 
            LINE N 400 -160 464 -160 
            RECTANGLE N 64 -192 400 64 
        END BLOCKDEF
        BEGIN BLOCK XLXI_5 fd
            PIN C clk
            PIN D WREI
            PIN Q WREO
        END BLOCK
        BEGIN BLOCK XLXI_6 fd
            PIN C clk
            PIN D WMEI
            PIN Q WMEO
        END BLOCK
        BEGIN BLOCK XLXI_14 reg2
            PIN clk clk
            PIN en XLXN_17
            PIN data_in(1:0) WREG1I(1:0)
            PIN data_out(1:0) WREG1O(1:0)
        END BLOCK
        BEGIN BLOCK XLXI_15 reg64
            PIN clk clk
            PIN en XLXN_17
            PIN data_in(63:0) REG2I(63:0)
            PIN data_out(63:0) REG2O(63:0)
        END BLOCK
        BEGIN BLOCK XLXI_7 vcc
            PIN P XLXN_17
        END BLOCK
        BEGIN BLOCK XLXI_16 reg64
            PIN clk clk
            PIN en XLXN_17
            PIN data_in(63:0) REG1I(63:0)
            PIN data_out(63:0) REG1O(63:0)
        END BLOCK
    END NETLIST
    BEGIN SHEET 1 3520 2720
        INSTANCE XLXI_5 1552 736 R0
        INSTANCE XLXI_6 1552 384 R0
        IOMARKER 1440 256 clk R180 28
        BEGIN BRANCH clk
            WIRE 1440 256 1520 256
            WIRE 1520 256 1552 256
            WIRE 1520 256 1520 608
            WIRE 1520 608 1552 608
            WIRE 1520 608 1520 896
            WIRE 1520 896 1520 1520
            WIRE 1520 1520 1520 2128
            WIRE 1520 2128 1536 2128
            WIRE 1520 1520 1552 1520
            WIRE 1520 896 1552 896
        END BRANCH
        BEGIN BRANCH WMEI
            WIRE 1392 128 1552 128
        END BRANCH
        IOMARKER 1392 128 WMEI R180 28
        BEGIN BRANCH WREI
            WIRE 1392 480 1552 480
        END BRANCH
        IOMARKER 1392 480 WREI R180 28
        BEGIN BRANCH WMEO
            WIRE 1936 128 2096 128
        END BRANCH
        IOMARKER 2096 128 WMEO R0 28
        BEGIN BRANCH WREO
            WIRE 1936 480 2096 480
        END BRANCH
        IOMARKER 2096 480 WREO R0 28
        BEGIN INSTANCE XLXI_14 1536 2288 R0
        END INSTANCE
        BEGIN BRANCH WREG1I(1:0)
            WIRE 1376 2256 1536 2256
        END BRANCH
        IOMARKER 1376 2256 WREG1I(1:0) R180 28
        BEGIN BRANCH WREG1O(1:0)
            WIRE 1920 2128 2080 2128
        END BRANCH
        IOMARKER 2080 2128 WREG1O(1:0) R0 28
        BEGIN INSTANCE XLXI_15 1552 1680 R0
        END INSTANCE
        BEGIN BRANCH REG2I(63:0)
            WIRE 1392 1648 1552 1648
        END BRANCH
        IOMARKER 1392 1648 REG2I(63:0) R180 28
        BEGIN BRANCH REG2O(63:0)
            WIRE 2016 1520 2176 1520
        END BRANCH
        IOMARKER 2176 1520 REG2O(63:0) R0 28
        BEGIN BRANCH XLXN_17
            WIRE 1440 752 1440 1088
            WIRE 1440 1088 1440 1712
            WIRE 1440 1712 1552 1712
            WIRE 1440 1712 1440 2192
            WIRE 1440 2192 1536 2192
            WIRE 1440 1088 1552 1088
        END BRANCH
        INSTANCE XLXI_7 1376 752 R0
        BEGIN INSTANCE XLXI_16 1552 1056 R0
        END INSTANCE
        BEGIN BRANCH REG1O(63:0)
            WIRE 2016 896 2176 896
        END BRANCH
        IOMARKER 2176 896 REG1O(63:0) R0 28
        BEGIN BRANCH REG1I(63:0)
            WIRE 1392 1024 1552 1024
        END BRANCH
        IOMARKER 1392 1024 REG1I(63:0) R180 28
    END SHEET
END SCHEMATIC

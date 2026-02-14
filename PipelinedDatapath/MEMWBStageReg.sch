VERSION 6
BEGIN SCHEMATIC
    BEGIN ATTR DeviceFamilyName "virtex2p"
        DELETE all:0
        EDITNAME all:0
        EDITTRAIT all:0
    END ATTR
    BEGIN NETLIST
        SIGNAL clk
        SIGNAL XLXN_17
        SIGNAL WDataI(63:0)
        SIGNAL XLXN_35
        SIGNAL XLXN_46
        SIGNAL WDataO(63:0)
        SIGNAL WREO
        SIGNAL WREI
        SIGNAL XLXN_55
        SIGNAL XLXN_56
        SIGNAL WREG1I(1:0)
        SIGNAL WREG1O(1:0)
        PORT Input clk
        PORT Input WDataI(63:0)
        PORT Output WDataO(63:0)
        PORT Output WREO
        PORT Input WREI
        PORT Input WREG1I(1:0)
        PORT Output WREG1O(1:0)
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
        BEGIN BLOCK XLXI_5 fd
            PIN C clk
            PIN D WREI
            PIN Q WREO
        END BLOCK
        BEGIN BLOCK XLXI_7 vcc
            PIN P XLXN_17
        END BLOCK
        BEGIN BLOCK XLXI_9 reg64
            PIN clk clk
            PIN en XLXN_17
            PIN data_in(63:0) WDataI(63:0)
            PIN data_out(63:0) WDataO(63:0)
        END BLOCK
        BEGIN BLOCK XLXI_11 reg2
            PIN clk XLXN_17
            PIN en clk
            PIN data_in(1:0) WREG1I(1:0)
            PIN data_out(1:0) WREG1O(1:0)
        END BLOCK
    END NETLIST
    BEGIN SHEET 1 3520 2720
        INSTANCE XLXI_5 1552 736 R0
        INSTANCE XLXI_7 1376 752 R0
        BEGIN BRANCH WDataI(63:0)
            WIRE 640 832 800 832
            BEGIN DISPLAY 800 832 ATTR Name
                ALIGNMENT SOFT-LEFT
            END DISPLAY
        END BRANCH
        IOMARKER 640 832 WDataI(63:0) R180 28
        BEGIN BRANCH WDataO(63:0)
            WIRE 2720 832 2880 832
            BEGIN DISPLAY 2720 832 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        IOMARKER 2880 832 WDataO(63:0) R0 28
        BEGIN BRANCH XLXN_17
            WIRE 1440 752 1440 1392
            WIRE 1440 1392 1552 1392
            WIRE 1440 1392 1440 2208
            WIRE 1440 2208 1536 2208
        END BRANCH
        BEGIN INSTANCE XLXI_9 1552 1360 R0
        END INSTANCE
        BEGIN BRANCH WDataI(63:0)
            WIRE 1392 1328 1552 1328
            BEGIN DISPLAY 1392 1328 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH WDataO(63:0)
            WIRE 2016 1200 2080 1200
            BEGIN DISPLAY 2080 1200 ATTR Name
                ALIGNMENT SOFT-LEFT
            END DISPLAY
        END BRANCH
        IOMARKER 2096 480 WREO R0 28
        BEGIN BRANCH WREO
            WIRE 1936 480 2096 480
        END BRANCH
        IOMARKER 1392 480 WREI R180 28
        BEGIN BRANCH WREI
            WIRE 1392 480 1552 480
        END BRANCH
        BEGIN BRANCH clk
            WIRE 1440 608 1520 608
            WIRE 1520 608 1520 1200
            WIRE 1520 1200 1552 1200
            WIRE 1520 1200 1520 2272
            WIRE 1520 2272 1536 2272
            WIRE 1520 608 1552 608
        END BRANCH
        IOMARKER 1440 608 clk R180 28
        BEGIN INSTANCE XLXI_11 1536 2368 R0
        END INSTANCE
        BEGIN BRANCH WREG1I(1:0)
            WIRE 1376 2336 1536 2336
        END BRANCH
        IOMARKER 1376 2336 WREG1I(1:0) R180 28
        BEGIN BRANCH WREG1O(1:0)
            WIRE 1920 2208 2080 2208
        END BRANCH
        IOMARKER 2080 2208 WREG1O(1:0) R0 28
    END SHEET
END SCHEMATIC

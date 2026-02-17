VERSION 6
BEGIN SCHEMATIC
    BEGIN ATTR DeviceFamilyName "virtex2p"
        DELETE all:0
        EDITNAME all:0
        EDITTRAIT all:0
    END ATTR
    BEGIN NETLIST
        SIGNAL XLXN_1(63:0)
        SIGNAL oper(2:0)
        SIGNAL XLXN_5(63:0)
        SIGNAL XLXN_6
        SIGNAL clk
        SIGNAL ProgCounter(63:0)
        SIGNAL XLXN_9
        PORT Input oper(2:0)
        PORT Input clk
        PORT Output ProgCounter(63:0)
        BEGIN BLOCKDEF ALU64Bit
            TIMESTAMP 2026 2 17 7 58 37
            RECTANGLE N 64 -320 320 0 
            LINE N 64 -288 0 -288 
            RECTANGLE N 0 -236 64 -212 
            LINE N 64 -224 0 -224 
            RECTANGLE N 0 -172 64 -148 
            LINE N 64 -160 0 -160 
            RECTANGLE N 0 -108 64 -84 
            LINE N 64 -96 0 -96 
            RECTANGLE N 0 -44 64 -20 
            LINE N 64 -32 0 -32 
            RECTANGLE N 320 -300 384 -276 
            LINE N 320 -288 384 -288 
            LINE N 320 -32 384 -32 
        END BLOCKDEF
        BEGIN BLOCKDEF reg64
            TIMESTAMP 2026 2 15 7 34 21
            LINE N 64 32 0 32 
            LINE N 64 -160 0 -160 
            RECTANGLE N 0 -44 64 -20 
            LINE N 64 -32 0 -32 
            RECTANGLE N 400 -172 464 -148 
            LINE N 400 -160 464 -160 
            RECTANGLE N 64 -192 400 64 
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
        BEGIN BLOCK XLXI_1 ALU64Bit
            PIN cin XLXN_9
            PIN op(2:0) oper(2:0)
            PIN a(63:0) XLXN_1(63:0)
            PIN b(63:0) XLXN_5(63:0)
            PIN amask(7:0) XLXN_5(63:0)
            PIN res(63:0) ProgCounter(63:0)
            PIN cout
        END BLOCK
        BEGIN BLOCK XLXI_2 reg64
            PIN clk clk
            PIN en XLXN_9
            PIN data_in(63:0) ProgCounter(63:0)
            PIN data_out(63:0) XLXN_1(63:0)
        END BLOCK
        BEGIN BLOCK XLXI_3 gnd
            PIN G XLXN_5(63:0)
        END BLOCK
        BEGIN BLOCK XLXI_4 vcc
            PIN P XLXN_9
        END BLOCK
    END NETLIST
    BEGIN SHEET 1 3520 2720
        BEGIN INSTANCE XLXI_1 1968 1376 R0
        END INSTANCE
        BEGIN BRANCH XLXN_1(63:0)
            WIRE 1440 1216 1968 1216
        END BRANCH
        INSTANCE XLXI_3 1840 1568 R0
        INSTANCE XLXI_4 1856 1024 R0
        BEGIN BRANCH oper(2:0)
            WIRE 1792 864 1792 1152
            WIRE 1792 1152 1968 1152
        END BRANCH
        BEGIN INSTANCE XLXI_2 976 1376 R0
        END INSTANCE
        BEGIN BRANCH XLXN_5(63:0)
            WIRE 1904 1280 1968 1280
            WIRE 1904 1280 1904 1344
            WIRE 1904 1344 1904 1440
            WIRE 1904 1344 1968 1344
        END BRANCH
        IOMARKER 1792 864 oper(2:0) R270 28
        BEGIN BRANCH clk
            WIRE 880 1216 976 1216
        END BRANCH
        BEGIN BRANCH ProgCounter(63:0)
            WIRE 928 1040 928 1344
            WIRE 928 1344 976 1344
            WIRE 928 1040 2416 1040
            WIRE 2416 1040 2416 1088
            WIRE 2416 1040 2512 1040
            WIRE 2352 1088 2416 1088
        END BRANCH
        BEGIN BRANCH XLXN_9
            WIRE 944 1088 944 1408
            WIRE 944 1408 976 1408
            WIRE 944 1088 1920 1088
            WIRE 1920 1088 1968 1088
            WIRE 1920 1024 1920 1088
        END BRANCH
        IOMARKER 880 1216 clk R180 28
        IOMARKER 2512 1040 ProgCounter(63:0) R0 28
    END SHEET
END SCHEMATIC

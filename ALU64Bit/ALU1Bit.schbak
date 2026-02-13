VERSION 6
BEGIN SCHEMATIC
    BEGIN ATTR DeviceFamilyName "virtex2p"
        DELETE all:0
        EDITNAME all:0
        EDITTRAIT all:0
    END ATTR
    BEGIN NETLIST
        SIGNAL ANDRes
        SIGNAL SUM
        SIGNAL a
        SIGNAL b
        SIGNAL op(0)
        SIGNAL op(1)
        SIGNAL cin
        SIGNAL op(2:0)
        SIGNAL XLXN_9
        SIGNAL ORRes
        SIGNAL XLXN_46
        SIGNAL op(2)
        SIGNAL res
        SIGNAL XLXN_32
        SIGNAL cout
        SIGNAL XLXN_49
        SIGNAL XLXN_15
        SIGNAL XLXN_21
        SIGNAL XLXN_20
        SIGNAL XLXN_84
        SIGNAL XLXN_93
        PORT Input a
        PORT Input b
        PORT Input cin
        PORT Input op(2:0)
        PORT Output res
        PORT Output cout
        BEGIN BLOCKDEF and2
            TIMESTAMP 2000 1 1 10 10 10
            LINE N 0 -64 64 -64 
            LINE N 0 -128 64 -128 
            LINE N 256 -96 192 -96 
            ARC N 96 -144 192 -48 144 -48 144 -144 
            LINE N 144 -48 64 -48 
            LINE N 64 -144 144 -144 
            LINE N 64 -48 64 -144 
        END BLOCKDEF
        BEGIN BLOCKDEF or2
            TIMESTAMP 2000 1 1 10 10 10
            LINE N 0 -64 64 -64 
            LINE N 0 -128 64 -128 
            LINE N 256 -96 192 -96 
            ARC N 28 -224 204 -48 112 -48 192 -96 
            ARC N -40 -152 72 -40 48 -48 48 -144 
            LINE N 112 -144 48 -144 
            ARC N 28 -144 204 32 192 -96 112 -144 
            LINE N 112 -48 48 -48 
        END BLOCKDEF
        BEGIN BLOCKDEF xor3
            TIMESTAMP 2000 1 1 10 10 10
            LINE N 0 -64 48 -64 
            LINE N 0 -128 72 -128 
            LINE N 0 -192 48 -192 
            LINE N 256 -128 208 -128 
            ARC N -40 -184 72 -72 48 -80 48 -176 
            ARC N -24 -184 88 -72 64 -80 64 -176 
            ARC N 44 -176 220 0 208 -128 128 -176 
            LINE N 48 -64 48 -80 
            LINE N 48 -192 48 -176 
            LINE N 128 -80 64 -80 
            LINE N 128 -176 64 -176 
            ARC N 44 -256 220 -80 128 -80 208 -128 
        END BLOCKDEF
        BEGIN BLOCKDEF vcc
            TIMESTAMP 2000 1 1 10 10 10
            LINE N 64 -32 64 -64 
            LINE N 64 0 64 -32 
            LINE N 96 -64 32 -64 
        END BLOCKDEF
        BEGIN BLOCKDEF xor2
            TIMESTAMP 2000 1 1 10 10 10
            LINE N 0 -64 64 -64 
            LINE N 0 -128 60 -128 
            LINE N 256 -96 208 -96 
            ARC N -40 -152 72 -40 48 -48 44 -144 
            ARC N -24 -152 88 -40 64 -48 64 -144 
            LINE N 128 -144 64 -144 
            LINE N 128 -48 64 -48 
            ARC N 44 -144 220 32 208 -96 128 -144 
            ARC N 44 -224 220 -48 128 -48 208 -96 
        END BLOCKDEF
        BEGIN BLOCKDEF m2_1
            TIMESTAMP 2000 1 1 10 10 10
            LINE N 96 -64 96 -192 
            LINE N 256 -96 96 -64 
            LINE N 256 -160 256 -96 
            LINE N 96 -192 256 -160 
            LINE N 176 -32 96 -32 
            LINE N 176 -80 176 -32 
            LINE N 0 -32 96 -32 
            LINE N 320 -128 256 -128 
            LINE N 0 -96 96 -96 
            LINE N 0 -160 96 -160 
        END BLOCKDEF
        BEGIN BLOCKDEF m8_1e
            TIMESTAMP 2000 1 1 10 10 10
            LINE N 0 -224 96 -224 
            LINE N 0 -160 96 -160 
            LINE N 0 -96 96 -96 
            LINE N 0 -288 96 -288 
            LINE N 0 -352 96 -352 
            LINE N 0 -416 96 -416 
            LINE N 0 -544 96 -544 
            LINE N 0 -608 96 -608 
            LINE N 0 -672 96 -672 
            LINE N 0 -736 96 -736 
            LINE N 160 -160 96 -160 
            LINE N 160 -268 160 -160 
            LINE N 128 -224 96 -224 
            LINE N 128 -264 128 -224 
            LINE N 192 -96 96 -96 
            LINE N 192 -276 192 -96 
            LINE N 224 -32 96 -32 
            LINE N 224 -280 224 -32 
            LINE N 320 -512 256 -512 
            LINE N 96 -768 96 -256 
            LINE N 256 -704 96 -768 
            LINE N 256 -288 256 -704 
            LINE N 96 -256 256 -288 
            LINE N 0 -32 96 -32 
            LINE N 0 -480 96 -480 
        END BLOCKDEF
        BEGIN BLOCKDEF xnor2
            TIMESTAMP 2000 1 1 10 10 10
            LINE N 0 -64 64 -64 
            LINE N 0 -128 60 -128 
            ARC N -40 -152 72 -40 48 -48 44 -144 
            ARC N -24 -152 88 -40 64 -48 64 -144 
            LINE N 128 -144 64 -144 
            LINE N 128 -48 64 -48 
            ARC N 44 -144 220 32 208 -96 128 -144 
            ARC N 44 -224 220 -48 128 -48 208 -96 
            CIRCLE N 212 -104 228 -88 
            LINE N 228 -96 256 -96 
            LINE N 60 -28 60 -28 
        END BLOCKDEF
        BEGIN BLOCK XLXI_2 or2
            PIN I0 b
            PIN I1 a
            PIN O ORRes
        END BLOCK
        BEGIN BLOCK XLXI_3 xor3
            PIN I0 cin
            PIN I1 b
            PIN I2 a
            PIN O SUM
        END BLOCK
        BEGIN BLOCK XLXI_5 vcc
            PIN P XLXN_9
        END BLOCK
        BEGIN BLOCK XLXI_18 m8_1e
            PIN D0 ANDRes
            PIN D1 ORRes
            PIN D2 SUM
            PIN D3 SUM
            PIN D4 XLXN_46
            PIN D5 XLXN_46
            PIN D6 cin
            PIN D7 cin
            PIN E XLXN_9
            PIN S0 op(0)
            PIN S1 op(1)
            PIN S2 op(2)
            PIN O res
        END BLOCK
        BEGIN BLOCK XLXI_22 xnor2
            PIN I0 b
            PIN I1 a
            PIN O XLXN_46
        END BLOCK
        BEGIN BLOCK XLXI_1 and2
            PIN I0 b
            PIN I1 a
            PIN O ANDRes
        END BLOCK
        BEGIN BLOCK XLXI_15 m2_1
            PIN D0 XLXN_32
            PIN D1 a
            PIN S0 XLXN_49
            PIN O cout
        END BLOCK
        BEGIN BLOCK XLXI_24 and2
            PIN I0 op(1)
            PIN I1 op(2)
            PIN O XLXN_49
        END BLOCK
        BEGIN BLOCK XLXI_9 xor2
            PIN I0 b
            PIN I1 XLXN_93
            PIN O XLXN_15
        END BLOCK
        BEGIN BLOCK XLXI_6 or2
            PIN I0 XLXN_21
            PIN I1 XLXN_20
            PIN O XLXN_32
        END BLOCK
        BEGIN BLOCK XLXI_8 and2
            PIN I0 b
            PIN I1 XLXN_93
            PIN O XLXN_21
        END BLOCK
        BEGIN BLOCK XLXI_7 and2
            PIN I0 cin
            PIN I1 XLXN_15
            PIN O XLXN_20
        END BLOCK
        BEGIN BLOCK XLXI_39 xor2
            PIN I0 XLXN_84
            PIN I1 a
            PIN O XLXN_93
        END BLOCK
        BEGIN BLOCK XLXI_40 and2
            PIN I0 op(1)
            PIN I1 op(0)
            PIN O XLXN_84
        END BLOCK
    END NETLIST
    BEGIN SHEET 1 3520 2720
        INSTANCE XLXI_2 1472 672 R0
        INSTANCE XLXI_3 1472 928 R0
        IOMARKER 1120 336 a R180 28
        IOMARKER 1120 400 b R180 28
        BEGIN BRANCH op(0)
            WIRE 2160 640 2192 640
            BEGIN DISPLAY 2160 640 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH op(1)
            WIRE 2160 704 2192 704
            BEGIN DISPLAY 2160 704 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH cin
            WIRE 1120 864 1472 864
        END BRANCH
        IOMARKER 1120 864 cin R180 28
        BEGIN BRANCH op(2:0)
            WIRE 1184 960 1312 960
            BEGIN DISPLAY 1312 960 ATTR Name
                ALIGNMENT SOFT-LEFT
            END DISPLAY
        END BRANCH
        IOMARKER 1184 960 op(2:0) R180 28
        BEGIN BRANCH XLXN_9
            WIRE 2032 752 2032 832
            WIRE 2032 832 2192 832
        END BRANCH
        INSTANCE XLXI_5 1968 752 R0
        INSTANCE XLXI_18 2192 864 R0
        BEGIN BRANCH ORRes
            WIRE 1728 576 1872 576
            WIRE 1872 192 2192 192
            WIRE 1872 192 1872 576
        END BRANCH
        BEGIN BRANCH SUM
            WIRE 1728 800 1968 800
            WIRE 1968 256 2192 256
            WIRE 1968 256 1968 320
            WIRE 1968 320 2192 320
            WIRE 1968 320 1968 800
        END BRANCH
        BEGIN BRANCH cin
            WIRE 2080 512 2128 512
            WIRE 2128 512 2128 576
            WIRE 2128 576 2192 576
            WIRE 2128 512 2192 512
            BEGIN DISPLAY 2080 512 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        INSTANCE XLXI_22 1472 272 R0
        BEGIN BRANCH XLXN_46
            WIRE 1728 176 1776 176
            WIRE 1776 176 1776 384
            WIRE 1776 384 2192 384
            WIRE 1776 384 1776 448
            WIRE 1776 448 2192 448
        END BRANCH
        BEGIN BRANCH a
            WIRE 1120 336 1376 336
            WIRE 1376 336 1376 544
            WIRE 1376 544 1472 544
            WIRE 1376 544 1376 736
            WIRE 1376 736 1472 736
            WIRE 1376 336 1472 336
            WIRE 1376 144 1472 144
            WIRE 1376 144 1376 336
        END BRANCH
        BEGIN BRANCH b
            WIRE 1120 400 1328 400
            WIRE 1328 400 1328 608
            WIRE 1328 608 1472 608
            WIRE 1328 608 1328 800
            WIRE 1328 800 1472 800
            WIRE 1328 400 1472 400
            WIRE 1328 208 1472 208
            WIRE 1328 208 1328 400
        END BRANCH
        INSTANCE XLXI_1 1472 464 R0
        BEGIN BRANCH op(2)
            WIRE 2160 768 2192 768
            BEGIN DISPLAY 2160 768 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH res
            WIRE 2512 352 2592 352
        END BRANCH
        IOMARKER 2592 352 res R0 28
        BEGIN DISPLAY 1372 64 TEXT "OPCodes:0 and, 1 or, 2 sum, 3 sub, 4 XNOR, 5 COMP, 6 7 shift"
            FONT 32 "Arial"
        END DISPLAY
        BEGIN BRANCH XLXN_32
            WIRE 2576 1200 3008 1200
        END BRANCH
        BEGIN BRANCH cout
            WIRE 3328 1232 3376 1232
        END BRANCH
        BEGIN BRANCH XLXN_49
            WIRE 2944 1376 3008 1376
            WIRE 3008 1328 3008 1376
        END BRANCH
        BEGIN BRANCH a
            WIRE 2944 1264 3008 1264
            BEGIN DISPLAY 2944 1264 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        INSTANCE XLXI_15 3008 1360 R0
        BEGIN BRANCH op(1)
            WIRE 2624 1408 2688 1408
            BEGIN DISPLAY 2624 1408 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH op(2)
            WIRE 2624 1344 2688 1344
            BEGIN DISPLAY 2624 1344 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        INSTANCE XLXI_24 2688 1472 R0
        IOMARKER 3376 1232 cout R0 28
        BEGIN BRANCH XLXN_15
            WIRE 1776 1040 1968 1040
        END BRANCH
        BEGIN BRANCH b
            WIRE 1456 1072 1520 1072
            BEGIN DISPLAY 1456 1072 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        INSTANCE XLXI_9 1520 1136 R0
        BEGIN BRANCH b
            WIRE 1888 1344 1968 1344
            BEGIN DISPLAY 1888 1344 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH cin
            WIRE 1888 1104 1968 1104
            BEGIN DISPLAY 1888 1104 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH XLXN_21
            WIRE 2224 1312 2304 1312
            WIRE 2304 1232 2320 1232
            WIRE 2304 1232 2304 1312
        END BRANCH
        BEGIN BRANCH XLXN_20
            WIRE 2224 1072 2304 1072
            WIRE 2304 1072 2304 1168
            WIRE 2304 1168 2320 1168
        END BRANCH
        INSTANCE XLXI_6 2320 1296 R0
        INSTANCE XLXI_8 1968 1408 R0
        INSTANCE XLXI_7 1968 1168 R0
        INSTANCE XLXI_39 1600 1376 R0
        BEGIN BRANCH XLXN_84
            WIRE 1440 1312 1600 1312
        END BRANCH
        BEGIN BRANCH a
            WIRE 1520 1248 1600 1248
            BEGIN DISPLAY 1520 1248 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        INSTANCE XLXI_40 1184 1408 R0
        BEGIN BRANCH op(0)
            WIRE 1120 1280 1184 1280
            BEGIN DISPLAY 1120 1280 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH op(1)
            WIRE 1120 1344 1184 1344
            BEGIN DISPLAY 1120 1344 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH XLXN_93
            WIRE 1392 1008 1392 1184
            WIRE 1392 1184 1920 1184
            WIRE 1920 1184 1920 1280
            WIRE 1920 1280 1968 1280
            WIRE 1392 1008 1520 1008
            WIRE 1856 1280 1920 1280
        END BRANCH
        BEGIN BRANCH ANDRes
            WIRE 1728 368 1824 368
            WIRE 1824 128 2192 128
            WIRE 1824 128 1824 368
        END BRANCH
    END SHEET
END SCHEMATIC

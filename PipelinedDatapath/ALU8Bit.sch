VERSION 6
BEGIN SCHEMATIC
    BEGIN ATTR DeviceFamilyName "virtex2p"
        DELETE all:0
        EDITNAME all:0
        EDITTRAIT all:0
    END ATTR
    BEGIN NETLIST
        SIGNAL res(7:0)
        SIGNAL Car7
        SIGNAL op(2:0)
        SIGNAL a(7:0)
        SIGNAL b(7:0)
        SIGNAL res(7)
        SIGNAL res(6)
        SIGNAL Car6
        SIGNAL res(5)
        SIGNAL Car5
        SIGNAL res(4)
        SIGNAL Car4
        SIGNAL res(3)
        SIGNAL Car3
        SIGNAL res(2)
        SIGNAL Car2
        SIGNAL res(1)
        SIGNAL Car1
        SIGNAL res(0)
        SIGNAL Car0
        SIGNAL b(2)
        SIGNAL b(1)
        SIGNAL b(0)
        SIGNAL cin
        SIGNAL b(3)
        SIGNAL a(4)
        SIGNAL b(4)
        SIGNAL b(5)
        SIGNAL a(5)
        SIGNAL b(6)
        SIGNAL a(6)
        SIGNAL b(7)
        SIGNAL a(7)
        SIGNAL a(1)
        SIGNAL a(2)
        SIGNAL a(3)
        SIGNAL a(0)
        SIGNAL XLXN_65
        SIGNAL XLXN_66
        SIGNAL op(2)
        SIGNAL op(1)
        SIGNAL XLXN_69
        SIGNAL XLXN_70
        SIGNAL XLXN_81
        SIGNAL op(0)
        SIGNAL cout
        SIGNAL XLXN_82
        PORT Output res(7:0)
        PORT Input op(2:0)
        PORT Input a(7:0)
        PORT Input b(7:0)
        PORT Input cin
        PORT Output cout
        BEGIN BLOCKDEF ALU1Bit
            TIMESTAMP 2026 2 17 23 45 12
            RECTANGLE N 64 -256 320 0 
            LINE N 64 -224 0 -224 
            LINE N 64 -160 0 -160 
            LINE N 64 -96 0 -96 
            RECTANGLE N 0 -44 64 -20 
            LINE N 64 -32 0 -32 
            LINE N 320 -224 384 -224 
            LINE N 320 -32 384 -32 
        END BLOCKDEF
        BEGIN BLOCKDEF and2b1
            TIMESTAMP 2000 1 1 10 10 10
            LINE N 64 -48 64 -144 
            LINE N 64 -144 144 -144 
            LINE N 144 -48 64 -48 
            ARC N 96 -144 192 -48 144 -48 144 -144 
            LINE N 256 -96 192 -96 
            LINE N 0 -128 64 -128 
            LINE N 0 -64 40 -64 
            CIRCLE N 40 -76 64 -52 
        END BLOCKDEF
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
        BEGIN BLOCKDEF and4
            TIMESTAMP 2000 1 1 10 10 10
            LINE N 144 -112 64 -112 
            ARC N 96 -208 192 -112 144 -112 144 -208 
            LINE N 64 -208 144 -208 
            LINE N 64 -64 64 -256 
            LINE N 256 -160 192 -160 
            LINE N 0 -256 64 -256 
            LINE N 0 -192 64 -192 
            LINE N 0 -128 64 -128 
            LINE N 0 -64 64 -64 
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
        BEGIN BLOCKDEF and3b1
            TIMESTAMP 2000 1 1 10 10 10
            LINE N 0 -64 40 -64 
            CIRCLE N 40 -76 64 -52 
            LINE N 0 -128 64 -128 
            LINE N 0 -192 64 -192 
            LINE N 256 -128 192 -128 
            LINE N 64 -64 64 -192 
            ARC N 96 -176 192 -80 144 -80 144 -176 
            LINE N 144 -80 64 -80 
            LINE N 64 -176 144 -176 
        END BLOCKDEF
        BEGIN BLOCK XLXI_1 ALU1Bit
            PIN a a(0)
            PIN b b(0)
            PIN cin XLXN_65
            PIN op(2:0) op(2:0)
            PIN res res(0)
            PIN cout Car0
        END BLOCK
        BEGIN BLOCK XLXI_2 ALU1Bit
            PIN a a(1)
            PIN b b(1)
            PIN cin Car0
            PIN op(2:0) op(2:0)
            PIN res res(1)
            PIN cout Car1
        END BLOCK
        BEGIN BLOCK XLXI_3 ALU1Bit
            PIN a a(2)
            PIN b b(2)
            PIN cin Car1
            PIN op(2:0) op(2:0)
            PIN res res(2)
            PIN cout Car2
        END BLOCK
        BEGIN BLOCK XLXI_4 ALU1Bit
            PIN a a(3)
            PIN b b(3)
            PIN cin Car2
            PIN op(2:0) op(2:0)
            PIN res res(3)
            PIN cout Car3
        END BLOCK
        BEGIN BLOCK XLXI_5 ALU1Bit
            PIN a a(4)
            PIN b b(4)
            PIN cin Car3
            PIN op(2:0) op(2:0)
            PIN res res(4)
            PIN cout Car4
        END BLOCK
        BEGIN BLOCK XLXI_6 ALU1Bit
            PIN a a(5)
            PIN b b(5)
            PIN cin Car4
            PIN op(2:0) op(2:0)
            PIN res res(5)
            PIN cout Car5
        END BLOCK
        BEGIN BLOCK XLXI_7 ALU1Bit
            PIN a a(6)
            PIN b b(6)
            PIN cin Car5
            PIN op(2:0) op(2:0)
            PIN res res(6)
            PIN cout Car6
        END BLOCK
        BEGIN BLOCK XLXI_8 ALU1Bit
            PIN a a(7)
            PIN b b(7)
            PIN cin Car6
            PIN op(2:0) op(2:0)
            PIN res res(7)
            PIN cout Car7
        END BLOCK
        BEGIN BLOCK XLXI_9 and2b1
            PIN I0 XLXN_66
            PIN I1 cin
            PIN O XLXN_65
        END BLOCK
        BEGIN BLOCK XLXI_10 and2
            PIN I0 op(2)
            PIN I1 op(1)
            PIN O XLXN_66
        END BLOCK
        BEGIN BLOCK XLXI_11 and4
            PIN I0 res(4)
            PIN I1 res(5)
            PIN I2 res(6)
            PIN I3 res(7)
            PIN O XLXN_69
        END BLOCK
        BEGIN BLOCK XLXI_12 and4
            PIN I0 res(0)
            PIN I1 res(1)
            PIN I2 res(2)
            PIN I3 res(3)
            PIN O XLXN_70
        END BLOCK
        BEGIN BLOCK XLXI_13 and2
            PIN I0 XLXN_70
            PIN I1 XLXN_69
            PIN O XLXN_81
        END BLOCK
        BEGIN BLOCK XLXI_14 m2_1
            PIN D0 Car7
            PIN D1 XLXN_81
            PIN S0 XLXN_82
            PIN O cout
        END BLOCK
        BEGIN BLOCK XLXI_16 and3b1
            PIN I0 op(1)
            PIN I1 op(2)
            PIN I2 op(0)
            PIN O XLXN_82
        END BLOCK
    END NETLIST
    BEGIN SHEET 1 3520 2720
        BEGIN INSTANCE XLXI_1 1248 2704 R0
        END INSTANCE
        BEGIN INSTANCE XLXI_2 1248 2368 R0
        END INSTANCE
        BEGIN INSTANCE XLXI_3 1248 2032 R0
        END INSTANCE
        BEGIN INSTANCE XLXI_4 1248 1696 R0
        END INSTANCE
        BEGIN INSTANCE XLXI_5 1248 1360 R0
        END INSTANCE
        BEGIN INSTANCE XLXI_6 1248 1024 R0
        END INSTANCE
        BEGIN INSTANCE XLXI_7 1248 688 R0
        END INSTANCE
        BEGIN INSTANCE XLXI_8 1248 352 R0
        END INSTANCE
        BEGIN BRANCH res(7:0)
            WIRE 2800 96 3008 96
            BEGIN DISPLAY 2800 96 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH op(2:0)
            WIRE 416 384 608 384
            BEGIN DISPLAY 608 384 ATTR Name
                ALIGNMENT SOFT-LEFT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH a(7:0)
            WIRE 480 96 608 96
            BEGIN DISPLAY 608 96 ATTR Name
                ALIGNMENT SOFT-LEFT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH b(7:0)
            WIRE 480 224 608 224
            BEGIN DISPLAY 608 224 ATTR Name
                ALIGNMENT SOFT-LEFT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH res(7)
            WIRE 1632 128 1728 128
            BEGIN DISPLAY 1728 128 ATTR Name
                ALIGNMENT SOFT-LEFT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH res(6)
            WIRE 1632 464 1728 464
            BEGIN DISPLAY 1728 464 ATTR Name
                ALIGNMENT SOFT-LEFT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH Car7
            WIRE 1632 320 1728 320
            BEGIN DISPLAY 1728 320 ATTR Name
                ALIGNMENT SOFT-LEFT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH Car6
            WIRE 1632 656 1728 656
            BEGIN DISPLAY 1728 656 ATTR Name
                ALIGNMENT SOFT-LEFT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH res(5)
            WIRE 1632 800 1728 800
            BEGIN DISPLAY 1728 800 ATTR Name
                ALIGNMENT SOFT-LEFT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH Car5
            WIRE 1632 992 1728 992
            BEGIN DISPLAY 1728 992 ATTR Name
                ALIGNMENT SOFT-LEFT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH res(4)
            WIRE 1632 1136 1728 1136
            BEGIN DISPLAY 1728 1136 ATTR Name
                ALIGNMENT SOFT-LEFT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH Car4
            WIRE 1632 1328 1728 1328
            BEGIN DISPLAY 1728 1328 ATTR Name
                ALIGNMENT SOFT-LEFT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH res(3)
            WIRE 1632 1472 1728 1472
            BEGIN DISPLAY 1728 1472 ATTR Name
                ALIGNMENT SOFT-LEFT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH Car3
            WIRE 1632 1664 1728 1664
            BEGIN DISPLAY 1728 1664 ATTR Name
                ALIGNMENT SOFT-LEFT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH res(2)
            WIRE 1632 1808 1728 1808
            BEGIN DISPLAY 1728 1808 ATTR Name
                ALIGNMENT SOFT-LEFT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH Car2
            WIRE 1632 2000 1728 2000
            BEGIN DISPLAY 1728 2000 ATTR Name
                ALIGNMENT SOFT-LEFT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH res(1)
            WIRE 1632 2144 1728 2144
            BEGIN DISPLAY 1728 2144 ATTR Name
                ALIGNMENT SOFT-LEFT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH Car1
            WIRE 1632 2336 1728 2336
            BEGIN DISPLAY 1728 2336 ATTR Name
                ALIGNMENT SOFT-LEFT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH res(0)
            WIRE 1632 2480 1728 2480
            BEGIN DISPLAY 1728 2480 ATTR Name
                ALIGNMENT SOFT-LEFT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH Car0
            WIRE 1632 2672 1728 2672
            BEGIN DISPLAY 1728 2672 ATTR Name
                ALIGNMENT SOFT-LEFT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH b(2)
            WIRE 1168 1872 1248 1872
            BEGIN DISPLAY 1168 1872 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH Car1
            WIRE 1168 1936 1248 1936
            BEGIN DISPLAY 1168 1936 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH op(2:0)
            WIRE 1168 2672 1248 2672
            BEGIN DISPLAY 1168 2672 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH op(2:0)
            WIRE 1168 2000 1248 2000
            BEGIN DISPLAY 1168 2000 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH b(1)
            WIRE 1168 2208 1248 2208
            BEGIN DISPLAY 1168 2208 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH Car0
            WIRE 1168 2272 1248 2272
            BEGIN DISPLAY 1168 2272 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH b(0)
            WIRE 1168 2544 1248 2544
            BEGIN DISPLAY 1168 2544 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH op(2:0)
            WIRE 1168 1664 1248 1664
            BEGIN DISPLAY 1168 1664 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH Car2
            WIRE 1168 1600 1248 1600
            BEGIN DISPLAY 1168 1600 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH b(3)
            WIRE 1168 1536 1248 1536
            BEGIN DISPLAY 1168 1536 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH op(2:0)
            WIRE 1168 1328 1248 1328
            BEGIN DISPLAY 1168 1328 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH Car3
            WIRE 1168 1264 1248 1264
            BEGIN DISPLAY 1168 1264 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH b(4)
            WIRE 1168 1200 1248 1200
            BEGIN DISPLAY 1168 1200 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH a(4)
            WIRE 1168 1136 1248 1136
            BEGIN DISPLAY 1168 1136 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH op(2:0)
            WIRE 1168 992 1248 992
            BEGIN DISPLAY 1168 992 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH Car4
            WIRE 1168 928 1248 928
            BEGIN DISPLAY 1168 928 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH b(5)
            WIRE 1168 864 1248 864
            BEGIN DISPLAY 1168 864 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH a(5)
            WIRE 1168 800 1248 800
            BEGIN DISPLAY 1168 800 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH op(2:0)
            WIRE 1168 656 1248 656
            BEGIN DISPLAY 1168 656 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH Car5
            WIRE 1168 592 1248 592
            BEGIN DISPLAY 1168 592 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH b(6)
            WIRE 1168 528 1248 528
            BEGIN DISPLAY 1168 528 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH a(6)
            WIRE 1168 464 1248 464
            BEGIN DISPLAY 1168 464 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH op(2:0)
            WIRE 1168 320 1248 320
            BEGIN DISPLAY 1168 320 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH Car6
            WIRE 1168 256 1248 256
            BEGIN DISPLAY 1168 256 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH b(7)
            WIRE 1168 192 1248 192
            BEGIN DISPLAY 1168 192 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH a(7)
            WIRE 1168 128 1248 128
            BEGIN DISPLAY 1168 128 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        IOMARKER 3008 96 res(7:0) R0 28
        BEGIN BRANCH op(2:0)
            WIRE 1168 2336 1248 2336
            BEGIN DISPLAY 1168 2336 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH a(1)
            WIRE 1168 2144 1248 2144
            BEGIN DISPLAY 1168 2144 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH a(2)
            WIRE 1168 1808 1248 1808
            BEGIN DISPLAY 1168 1808 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH a(3)
            WIRE 1168 1472 1248 1472
            BEGIN DISPLAY 1168 1472 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH a(0)
            WIRE 1168 2480 1248 2480
            BEGIN DISPLAY 1168 2480 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        IOMARKER 480 96 a(7:0) R180 28
        IOMARKER 480 224 b(7:0) R180 28
        IOMARKER 416 384 op(2:0) R180 28
        BEGIN BRANCH cin
            WIRE 480 480 608 480
            BEGIN DISPLAY 608 480 ATTR Name
                ALIGNMENT SOFT-LEFT
            END DISPLAY
        END BRANCH
        IOMARKER 480 480 cin R180 28
        INSTANCE XLXI_9 704 2704 R0
        BEGIN BRANCH cin
            WIRE 608 2576 704 2576
            BEGIN DISPLAY 608 2576 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH XLXN_65
            WIRE 960 2608 1248 2608
        END BRANCH
        BEGIN BRANCH XLXN_66
            WIRE 464 2448 512 2448
            WIRE 512 2448 512 2640
            WIRE 512 2640 704 2640
        END BRANCH
        INSTANCE XLXI_10 208 2544 R0
        BEGIN BRANCH op(2)
            WIRE 160 2480 208 2480
            BEGIN DISPLAY 160 2480 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH op(1)
            WIRE 160 2416 208 2416
            BEGIN DISPLAY 160 2416 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        INSTANCE XLXI_11 2256 624 R0
        INSTANCE XLXI_12 2256 912 R0
        INSTANCE XLXI_13 2608 704 R0
        BEGIN BRANCH XLXN_69
            WIRE 2512 464 2560 464
            WIRE 2560 464 2560 576
            WIRE 2560 576 2608 576
        END BRANCH
        BEGIN BRANCH XLXN_70
            WIRE 2512 752 2560 752
            WIRE 2560 640 2560 752
            WIRE 2560 640 2608 640
        END BRANCH
        BEGIN BRANCH res(7)
            WIRE 2224 368 2256 368
            BEGIN DISPLAY 2224 368 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH res(6)
            WIRE 2224 432 2256 432
            BEGIN DISPLAY 2224 432 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH res(5)
            WIRE 2224 496 2256 496
            BEGIN DISPLAY 2224 496 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH res(4)
            WIRE 2224 560 2256 560
            BEGIN DISPLAY 2224 560 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH res(3)
            WIRE 2224 656 2256 656
            BEGIN DISPLAY 2224 656 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH res(2)
            WIRE 2224 720 2256 720
            BEGIN DISPLAY 2224 720 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH res(1)
            WIRE 2224 784 2256 784
            BEGIN DISPLAY 2224 784 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH res(0)
            WIRE 2224 848 2256 848
            BEGIN DISPLAY 2224 848 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH Car7
            WIRE 2560 336 2832 336
            WIRE 2832 336 2832 544
            WIRE 2832 544 2912 544
            BEGIN DISPLAY 2560 336 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        INSTANCE XLXI_14 2912 704 R0
        BEGIN BRANCH XLXN_81
            WIRE 2864 608 2912 608
        END BRANCH
        INSTANCE XLXI_16 2608 1008 R0
        BEGIN BRANCH op(0)
            WIRE 2560 816 2608 816
            BEGIN DISPLAY 2560 816 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH op(2)
            WIRE 2560 880 2608 880
            BEGIN DISPLAY 2560 880 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH op(1)
            WIRE 2560 944 2608 944
            BEGIN DISPLAY 2560 944 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH cout
            WIRE 3232 576 3264 576
        END BRANCH
        IOMARKER 3264 576 cout R0 28
        BEGIN BRANCH XLXN_82
            WIRE 2864 880 2912 880
            WIRE 2912 672 2912 880
        END BRANCH
    END SHEET
END SCHEMATIC

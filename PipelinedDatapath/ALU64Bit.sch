VERSION 6
BEGIN SCHEMATIC
    BEGIN ATTR DeviceFamilyName "virtex2p"
        DELETE all:0
        EDITNAME all:0
        EDITTRAIT all:0
    END ATTR
    BEGIN NETLIST
        SIGNAL Car0
        SIGNAL Car6
        SIGNAL Car5
        SIGNAL Car4
        SIGNAL Car3
        SIGNAL Car2
        SIGNAL Car1
        SIGNAL Car7
        SIGNAL res(63:0)
        SIGNAL XLXN_236
        SIGNAL cout
        SIGNAL op(0)
        SIGNAL op(2)
        SIGNAL op(1)
        SIGNAL cin
        SIGNAL a(7:0)
        SIGNAL b(7:0)
        SIGNAL b(15:8)
        SIGNAL a(15:8)
        SIGNAL b(23:16)
        SIGNAL a(23:16)
        SIGNAL b(31:24)
        SIGNAL a(31:24)
        SIGNAL b(39:32)
        SIGNAL a(39:32)
        SIGNAL b(47:40)
        SIGNAL a(47:40)
        SIGNAL b(55:48)
        SIGNAL a(55:48)
        SIGNAL b(63:56)
        SIGNAL a(63:56)
        SIGNAL op(2:0)
        SIGNAL a(63:0)
        SIGNAL b(63:0)
        SIGNAL res(63:56)
        SIGNAL res(55:48)
        SIGNAL res(47:40)
        SIGNAL res(39:32)
        SIGNAL res(31:24)
        SIGNAL res(23:16)
        SIGNAL res(15:8)
        SIGNAL res(7:0)
        SIGNAL amask(7:0)
        SIGNAL amask(7)
        SIGNAL amask(6)
        SIGNAL amask(5)
        SIGNAL amask(4)
        SIGNAL amask(3)
        SIGNAL amask(2)
        SIGNAL amask(1)
        SIGNAL amask(0)
        SIGNAL XLXN_178
        SIGNAL XLXN_179
        SIGNAL XLXN_180
        SIGNAL XLXN_181
        SIGNAL XLXN_182
        SIGNAL XLXN_183
        SIGNAL XLXN_184
        SIGNAL XLXN_185
        SIGNAL XLXN_262
        PORT Output res(63:0)
        PORT Output cout
        PORT Input cin
        PORT Input op(2:0)
        PORT Input a(63:0)
        PORT Input b(63:0)
        PORT Input amask(7:0)
        BEGIN BLOCKDEF ALU8Bit
            TIMESTAMP 2026 2 17 23 45 49
            RECTANGLE N 64 -256 320 0 
            RECTANGLE N 0 -236 64 -212 
            LINE N 64 -224 0 -224 
            RECTANGLE N 0 -172 64 -148 
            LINE N 64 -160 0 -160 
            RECTANGLE N 0 -108 64 -84 
            LINE N 64 -96 0 -96 
            LINE N 64 -32 0 -32 
            RECTANGLE N 320 -236 384 -212 
            LINE N 320 -224 384 -224 
            LINE N 320 -32 384 -32 
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
        BEGIN BLOCKDEF and8
            TIMESTAMP 2000 1 1 10 10 10
            LINE N 64 -64 64 -512 
            LINE N 0 -64 64 -64 
            LINE N 0 -128 64 -128 
            LINE N 0 -192 64 -192 
            LINE N 0 -256 64 -256 
            LINE N 0 -320 64 -320 
            LINE N 0 -384 64 -384 
            LINE N 0 -448 64 -448 
            LINE N 0 -512 64 -512 
            LINE N 64 -336 144 -336 
            LINE N 144 -240 64 -240 
            ARC N 96 -336 192 -240 144 -240 144 -336 
            LINE N 256 -288 192 -288 
        END BLOCKDEF
        BEGIN BLOCKDEF or2b1
            TIMESTAMP 2000 1 1 10 10 10
            LINE N 0 -64 32 -64 
            CIRCLE N 32 -76 56 -52 
            LINE N 0 -128 64 -128 
            LINE N 256 -96 192 -96 
            LINE N 112 -48 48 -48 
            ARC N 28 -144 204 32 192 -96 112 -144 
            LINE N 112 -144 48 -144 
            ARC N -40 -152 72 -40 48 -48 48 -144 
            ARC N 28 -224 204 -48 112 -48 192 -96 
        END BLOCKDEF
        BEGIN BLOCK XLXI_14 m2_1
            PIN D0 Car7
            PIN D1 XLXN_236
            PIN S0 XLXN_262
            PIN O cout
        END BLOCK
        BEGIN BLOCK XLXI_16 and3b1
            PIN I0 op(1)
            PIN I1 op(2)
            PIN I2 op(0)
            PIN O XLXN_262
        END BLOCK
        BEGIN BLOCK XLXI_1 ALU8Bit
            PIN op(2:0) op(2:0)
            PIN a(7:0) a(7:0)
            PIN b(7:0) b(7:0)
            PIN cin cin
            PIN res(7:0) res(7:0)
            PIN cout Car0
        END BLOCK
        BEGIN BLOCK XLXI_2 ALU8Bit
            PIN op(2:0) op(2:0)
            PIN a(7:0) a(15:8)
            PIN b(7:0) b(15:8)
            PIN cin Car0
            PIN res(7:0) res(15:8)
            PIN cout Car1
        END BLOCK
        BEGIN BLOCK XLXI_3 ALU8Bit
            PIN op(2:0) op(2:0)
            PIN a(7:0) a(23:16)
            PIN b(7:0) b(23:16)
            PIN cin Car1
            PIN res(7:0) res(23:16)
            PIN cout Car2
        END BLOCK
        BEGIN BLOCK XLXI_4 ALU8Bit
            PIN op(2:0) op(2:0)
            PIN a(7:0) a(31:24)
            PIN b(7:0) b(31:24)
            PIN cin Car2
            PIN res(7:0) res(31:24)
            PIN cout Car3
        END BLOCK
        BEGIN BLOCK XLXI_5 ALU8Bit
            PIN op(2:0) op(2:0)
            PIN a(7:0) a(39:32)
            PIN b(7:0) b(39:32)
            PIN cin Car3
            PIN res(7:0) res(39:32)
            PIN cout Car4
        END BLOCK
        BEGIN BLOCK XLXI_6 ALU8Bit
            PIN op(2:0) op(2:0)
            PIN a(7:0) a(47:40)
            PIN b(7:0) b(47:40)
            PIN cin Car4
            PIN res(7:0) res(47:40)
            PIN cout Car5
        END BLOCK
        BEGIN BLOCK XLXI_7 ALU8Bit
            PIN op(2:0) op(2:0)
            PIN a(7:0) a(55:48)
            PIN b(7:0) b(55:48)
            PIN cin Car5
            PIN res(7:0) res(55:48)
            PIN cout Car6
        END BLOCK
        BEGIN BLOCK XLXI_8 ALU8Bit
            PIN op(2:0) op(2:0)
            PIN a(7:0) a(63:56)
            PIN b(7:0) b(63:56)
            PIN cin Car6
            PIN res(7:0) res(63:56)
            PIN cout Car7
        END BLOCK
        BEGIN BLOCK XLXI_35 or2b1
            PIN I0 amask(6)
            PIN I1 Car6
            PIN O XLXN_184
        END BLOCK
        BEGIN BLOCK XLXI_36 or2b1
            PIN I0 amask(7)
            PIN I1 Car7
            PIN O XLXN_185
        END BLOCK
        BEGIN BLOCK XLXI_39 or2b1
            PIN I0 amask(5)
            PIN I1 Car5
            PIN O XLXN_183
        END BLOCK
        BEGIN BLOCK XLXI_40 or2b1
            PIN I0 amask(4)
            PIN I1 Car4
            PIN O XLXN_178
        END BLOCK
        BEGIN BLOCK XLXI_41 or2b1
            PIN I0 amask(3)
            PIN I1 Car3
            PIN O XLXN_179
        END BLOCK
        BEGIN BLOCK XLXI_42 or2b1
            PIN I0 amask(2)
            PIN I1 Car2
            PIN O XLXN_180
        END BLOCK
        BEGIN BLOCK XLXI_43 or2b1
            PIN I0 amask(1)
            PIN I1 Car1
            PIN O XLXN_181
        END BLOCK
        BEGIN BLOCK XLXI_44 or2b1
            PIN I0 amask(0)
            PIN I1 Car0
            PIN O XLXN_182
        END BLOCK
        BEGIN BLOCK XLXI_34 and8
            PIN I0 XLXN_182
            PIN I1 XLXN_181
            PIN I2 XLXN_180
            PIN I3 XLXN_179
            PIN I4 XLXN_178
            PIN I5 XLXN_183
            PIN I6 XLXN_184
            PIN I7 XLXN_185
            PIN O XLXN_236
        END BLOCK
    END NETLIST
    BEGIN SHEET 1 3520 2720
        BEGIN BRANCH res(63:0)
            WIRE 2096 128 2192 128
            BEGIN DISPLAY 2096 128 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        IOMARKER 2192 128 res(63:0) R0 28
        BEGIN BRANCH XLXN_236
            WIRE 2592 1792 2752 1792
            WIRE 2752 1792 3040 1792
            WIRE 3040 1792 3056 1792
        END BRANCH
        BEGIN BRANCH cout
            WIRE 3376 1760 3408 1760
        END BRANCH
        INSTANCE XLXI_14 3056 1888 R0
        BEGIN BRANCH op(0)
            WIRE 2704 2192 2752 2192
            BEGIN DISPLAY 2704 2192 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH op(2)
            WIRE 2704 2256 2752 2256
            BEGIN DISPLAY 2704 2256 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH op(1)
            WIRE 2704 2320 2752 2320
            BEGIN DISPLAY 2704 2320 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        INSTANCE XLXI_16 2752 2384 R0
        IOMARKER 3408 1760 cout R0 28
        BEGIN INSTANCE XLXI_1 608 2704 R0
        END INSTANCE
        BEGIN INSTANCE XLXI_2 608 2368 R0
        END INSTANCE
        BEGIN INSTANCE XLXI_3 608 2032 R0
        END INSTANCE
        BEGIN INSTANCE XLXI_4 608 1696 R0
        END INSTANCE
        BEGIN INSTANCE XLXI_5 608 1360 R0
        END INSTANCE
        BEGIN INSTANCE XLXI_6 608 1024 R0
        END INSTANCE
        BEGIN INSTANCE XLXI_7 608 688 R0
        END INSTANCE
        BEGIN INSTANCE XLXI_8 608 352 R0
        END INSTANCE
        BEGIN BRANCH cin
            WIRE 480 2672 608 2672
        END BRANCH
        BEGIN BRANCH Car0
            WIRE 992 2672 1040 2672
            BEGIN DISPLAY 1040 2672 ATTR Name
                ALIGNMENT SOFT-LEFT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH Car0
            WIRE 576 2336 608 2336
            BEGIN DISPLAY 576 2336 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH Car1
            WIRE 576 2000 608 2000
            BEGIN DISPLAY 576 2000 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH Car2
            WIRE 576 1664 608 1664
            BEGIN DISPLAY 576 1664 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH Car3
            WIRE 576 1328 608 1328
            BEGIN DISPLAY 576 1328 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH Car4
            WIRE 576 992 608 992
            BEGIN DISPLAY 576 992 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH Car5
            WIRE 576 656 608 656
            BEGIN DISPLAY 576 656 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH Car6
            WIRE 576 320 608 320
            BEGIN DISPLAY 576 320 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH Car6
            WIRE 992 656 1040 656
            BEGIN DISPLAY 1040 656 ATTR Name
                ALIGNMENT SOFT-LEFT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH Car5
            WIRE 992 992 1040 992
            BEGIN DISPLAY 1040 992 ATTR Name
                ALIGNMENT SOFT-LEFT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH Car4
            WIRE 992 1328 1040 1328
            BEGIN DISPLAY 1040 1328 ATTR Name
                ALIGNMENT SOFT-LEFT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH Car3
            WIRE 992 1664 1040 1664
            BEGIN DISPLAY 1040 1664 ATTR Name
                ALIGNMENT SOFT-LEFT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH Car2
            WIRE 992 2000 1040 2000
            BEGIN DISPLAY 1040 2000 ATTR Name
                ALIGNMENT SOFT-LEFT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH Car1
            WIRE 992 2336 1040 2336
            BEGIN DISPLAY 1040 2336 ATTR Name
                ALIGNMENT SOFT-LEFT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH a(7:0)
            WIRE 576 2544 608 2544
            BEGIN DISPLAY 576 2544 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH b(7:0)
            WIRE 576 2608 608 2608
            BEGIN DISPLAY 576 2608 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH b(15:8)
            WIRE 576 2272 608 2272
            BEGIN DISPLAY 576 2272 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH a(15:8)
            WIRE 576 2208 608 2208
            BEGIN DISPLAY 576 2208 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH b(23:16)
            WIRE 576 1936 608 1936
            BEGIN DISPLAY 576 1936 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH a(23:16)
            WIRE 576 1872 608 1872
            BEGIN DISPLAY 576 1872 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH b(31:24)
            WIRE 576 1600 608 1600
            BEGIN DISPLAY 576 1600 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH a(31:24)
            WIRE 576 1536 608 1536
            BEGIN DISPLAY 576 1536 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH b(39:32)
            WIRE 576 1264 608 1264
            BEGIN DISPLAY 576 1264 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH a(39:32)
            WIRE 576 1200 608 1200
            BEGIN DISPLAY 576 1200 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH b(47:40)
            WIRE 576 928 608 928
            BEGIN DISPLAY 576 928 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH a(47:40)
            WIRE 576 864 608 864
            BEGIN DISPLAY 576 864 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH b(55:48)
            WIRE 576 592 608 592
            BEGIN DISPLAY 576 592 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH a(55:48)
            WIRE 576 528 608 528
            BEGIN DISPLAY 576 528 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH b(63:56)
            WIRE 576 256 608 256
            BEGIN DISPLAY 576 256 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH a(63:56)
            WIRE 576 192 608 192
            BEGIN DISPLAY 576 192 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH op(2:0)
            WIRE 240 128 432 128
            WIRE 432 128 432 464
            WIRE 432 464 432 800
            WIRE 432 800 432 1136
            WIRE 432 1136 432 1472
            WIRE 432 1472 432 1808
            WIRE 432 1808 432 2144
            WIRE 432 2144 432 2480
            WIRE 432 2480 608 2480
            WIRE 432 2144 608 2144
            WIRE 432 1808 608 1808
            WIRE 432 1472 608 1472
            WIRE 432 1136 608 1136
            WIRE 432 800 608 800
            WIRE 432 464 608 464
            WIRE 432 128 608 128
        END BRANCH
        BEGIN BRANCH Car7
            WIRE 992 320 1040 320
            BEGIN DISPLAY 1040 320 ATTR Name
                ALIGNMENT SOFT-LEFT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH a(63:0)
            WIRE 240 192 304 192
            BEGIN DISPLAY 304 192 ATTR Name
                ALIGNMENT SOFT-LEFT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH b(63:0)
            WIRE 240 256 304 256
            BEGIN DISPLAY 304 256 ATTR Name
                ALIGNMENT SOFT-LEFT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH res(63:56)
            WIRE 992 128 1040 128
            BEGIN DISPLAY 1040 128 ATTR Name
                ALIGNMENT SOFT-LEFT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH res(55:48)
            WIRE 992 464 1040 464
            BEGIN DISPLAY 1040 464 ATTR Name
                ALIGNMENT SOFT-LEFT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH res(47:40)
            WIRE 992 800 1040 800
            BEGIN DISPLAY 1040 800 ATTR Name
                ALIGNMENT SOFT-LEFT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH res(39:32)
            WIRE 992 1136 1024 1136
            WIRE 1024 1136 1040 1136
            BEGIN DISPLAY 1040 1136 ATTR Name
                ALIGNMENT SOFT-LEFT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH res(31:24)
            WIRE 992 1472 1040 1472
            BEGIN DISPLAY 1040 1472 ATTR Name
                ALIGNMENT SOFT-LEFT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH res(23:16)
            WIRE 992 1808 1040 1808
            BEGIN DISPLAY 1040 1808 ATTR Name
                ALIGNMENT SOFT-LEFT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH res(15:8)
            WIRE 992 2144 1040 2144
            BEGIN DISPLAY 1040 2144 ATTR Name
                ALIGNMENT SOFT-LEFT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH res(7:0)
            WIRE 992 2480 1040 2480
            BEGIN DISPLAY 1040 2480 ATTR Name
                ALIGNMENT SOFT-LEFT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH amask(7:0)
            WIRE 208 336 240 336
            WIRE 240 336 256 336
            BEGIN DISPLAY 256 336 ATTR Name
                ALIGNMENT SOFT-LEFT
            END DISPLAY
        END BRANCH
        IOMARKER 480 2672 cin R180 28
        IOMARKER 240 192 a(63:0) R180 28
        IOMARKER 240 256 b(63:0) R180 28
        IOMARKER 240 128 op(2:0) R180 28
        IOMARKER 208 336 amask(7:0) R180 28
        INSTANCE XLXI_35 1952 1568 R0
        INSTANCE XLXI_36 1952 1440 R0
        INSTANCE XLXI_39 1952 1696 R0
        INSTANCE XLXI_40 1952 1824 R0
        INSTANCE XLXI_41 1952 1952 R0
        INSTANCE XLXI_42 1952 2080 R0
        INSTANCE XLXI_43 1952 2208 R0
        INSTANCE XLXI_44 1952 2336 R0
        INSTANCE XLXI_34 2336 2080 R0
        BEGIN BRANCH Car7
            WIRE 1936 1312 1952 1312
            BEGIN DISPLAY 1936 1312 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH amask(7)
            WIRE 1936 1376 1952 1376
            BEGIN DISPLAY 1936 1376 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH Car6
            WIRE 1936 1440 1952 1440
            BEGIN DISPLAY 1936 1440 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH amask(6)
            WIRE 1936 1504 1952 1504
            BEGIN DISPLAY 1936 1504 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH Car5
            WIRE 1936 1568 1952 1568
            BEGIN DISPLAY 1936 1568 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH amask(5)
            WIRE 1936 1632 1952 1632
            BEGIN DISPLAY 1936 1632 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH Car4
            WIRE 1936 1696 1952 1696
            BEGIN DISPLAY 1936 1696 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH amask(4)
            WIRE 1936 1760 1952 1760
            BEGIN DISPLAY 1936 1760 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH Car3
            WIRE 1936 1824 1952 1824
            BEGIN DISPLAY 1936 1824 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH amask(3)
            WIRE 1936 1888 1952 1888
            BEGIN DISPLAY 1936 1888 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH Car2
            WIRE 1936 1952 1952 1952
            BEGIN DISPLAY 1936 1952 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH amask(2)
            WIRE 1936 2016 1952 2016
            BEGIN DISPLAY 1936 2016 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH Car1
            WIRE 1936 2080 1952 2080
            BEGIN DISPLAY 1936 2080 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH amask(1)
            WIRE 1936 2144 1952 2144
            BEGIN DISPLAY 1936 2144 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH Car0
            WIRE 1936 2208 1952 2208
            BEGIN DISPLAY 1936 2208 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH amask(0)
            WIRE 1936 2272 1952 2272
            BEGIN DISPLAY 1936 2272 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH XLXN_178
            WIRE 2208 1728 2272 1728
            WIRE 2272 1728 2272 1760
            WIRE 2272 1760 2336 1760
        END BRANCH
        BEGIN BRANCH XLXN_179
            WIRE 2208 1856 2272 1856
            WIRE 2272 1824 2272 1856
            WIRE 2272 1824 2336 1824
        END BRANCH
        BEGIN BRANCH XLXN_180
            WIRE 2208 1984 2272 1984
            WIRE 2272 1888 2272 1984
            WIRE 2272 1888 2336 1888
        END BRANCH
        BEGIN BRANCH XLXN_181
            WIRE 2208 2112 2288 2112
            WIRE 2288 1952 2288 2112
            WIRE 2288 1952 2336 1952
        END BRANCH
        BEGIN BRANCH XLXN_182
            WIRE 2208 2240 2336 2240
            WIRE 2336 2016 2336 2240
        END BRANCH
        BEGIN BRANCH XLXN_183
            WIRE 2208 1600 2272 1600
            WIRE 2272 1600 2272 1696
            WIRE 2272 1696 2336 1696
        END BRANCH
        BEGIN BRANCH XLXN_184
            WIRE 2208 1472 2288 1472
            WIRE 2288 1472 2288 1632
            WIRE 2288 1632 2336 1632
        END BRANCH
        BEGIN BRANCH XLXN_185
            WIRE 2208 1344 2336 1344
            WIRE 2336 1344 2336 1568
        END BRANCH
        BEGIN BRANCH Car7
            WIRE 2960 1728 3056 1728
            BEGIN DISPLAY 2960 1728 ATTR Name
                ALIGNMENT SOFT-RIGHT
            END DISPLAY
        END BRANCH
        BEGIN BRANCH XLXN_262
            WIRE 3008 2256 3056 2256
            WIRE 3056 1856 3056 2256
        END BRANCH
    END SHEET
END SCHEMATIC

VERSION 6
BEGIN SCHEMATIC
    BEGIN ATTR DeviceFamilyName "spartan3a"
        DELETE all:0
        EDITNAME all:0
        EDITTRAIT all:0
    END ATTR
    BEGIN NETLIST
        SIGNAL addra(7:0)
        SIGNAL dina(31:0)
        SIGNAL wea(0:0)
        SIGNAL clka
        SIGNAL douta(31:0)
        PORT Input addra(7:0)
        PORT Input dina(31:0)
        PORT Input wea(0:0)
        PORT Input clka
        PORT Output douta(31:0)
    END NETLIST
    BEGIN SHEET 1 3520 2720
        BEGIN BRANCH addra(7:0)
            WIRE 320 640 480 640
        END BRANCH
        IOMARKER 320 640 addra(7:0) R180 28
        BEGIN BRANCH dina(31:0)
            WIRE 320 992 480 992
        END BRANCH
        IOMARKER 320 992 dina(31:0) R180 28
        BEGIN BRANCH wea(0:0)
            WIRE 320 1344 480 1344
        END BRANCH
        IOMARKER 320 1344 wea(0:0) R180 28
        BEGIN BRANCH clka
            WIRE 320 1696 480 1696
        END BRANCH
        IOMARKER 320 1696 clka R180 28
        BEGIN BRANCH douta(31:0)
            WIRE 3040 640 3200 640
        END BRANCH
        IOMARKER 3200 640 douta(31:0) R0 28
    END SHEET
END SCHEMATIC

/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2007 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/

/* This file is designed for use with ISim build 0x734844ce */

#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/labs/ALU64Bit/ALU64Bit_tb.ant";
static const char *ng1 = "Annotate[%d,cout,%b]";
static int ng2[] = {1, 0};
static const char *ng3 = "Annotate[%d,res,%b]";
static const char *ng4 = "C:\\labs\\ALU64Bit\\ALU64Bit_tb.ano";
static const char *ng5 = "Success! Annotation Simulation Complete.";
static const char *ng6 = "Total[%d]";
static unsigned int ng7[] = {4294967295U, 0U, 4294967295U, 0U};
static unsigned int ng8[] = {0U, 0U, 0U, 0U};
static unsigned int ng9[] = {1U, 0U};
static unsigned int ng10[] = {2U, 0U};
static unsigned int ng11[] = {1U, 0U, 0U, 0U};
static unsigned int ng12[] = {0U, 0U};
static unsigned int ng13[] = {3U, 0U};
static unsigned int ng14[] = {4U, 0U};
static unsigned int ng15[] = {255U, 0U};
static unsigned int ng16[] = {5U, 0U};
static unsigned int ng17[] = {136U, 0U};
static unsigned int ng18[] = {7U, 0U};



static int sp_ANNOTATE_cout(char *t1, char *t2)
{
    char t10[16];
    char t14[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;

LAB0:    t0 = 1;
    t3 = (t2 + 24U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 456);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(232, ng0);
    t5 = (t2 + 28U);
    t6 = *((char **)t5);
    xsi_process_wait(t6, 0LL);
    *((char **)t3) = &&LAB5;
    t0 = 1;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 24U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB5:    xsi_set_current_line(232, ng0);

LAB6:    xsi_set_current_line(233, ng0);
    t7 = (t1 + 1816);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t11 = xsi_vlog_time(t10, 1000000.000000000, 1000.000000000000);
    t12 = (t1 + 1044U);
    t13 = *((char **)t12);
    xsi_vlogfile_fwrite(*((unsigned int *)t9), 1, 0, ng1, 3, t1, (char)118, t10, 64, (char)118, t13, 1);
    xsi_set_current_line(234, ng0);
    t4 = (t1 + 1816);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    xsi_vlogfile_fflush(0, *((unsigned int *)t6));
    xsi_set_current_line(235, ng0);
    t4 = (t1 + 1908);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t14, 0, 8);
    xsi_vlog_signed_add(t14, 32, t6, 32, t7, 32);
    t8 = (t1 + 1908);
    xsi_vlogvar_assign_value(t8, t14, 0, 0, 32);
    goto LAB4;

}

static int sp_ANNOTATE_res(char *t1, char *t2)
{
    char t10[16];
    char t14[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;

LAB0:    t0 = 1;
    t3 = (t2 + 24U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 696);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(240, ng0);
    t5 = (t2 + 28U);
    t6 = *((char **)t5);
    xsi_process_wait(t6, 0LL);
    *((char **)t3) = &&LAB5;
    t0 = 1;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 24U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB5:    xsi_set_current_line(240, ng0);

LAB6:    xsi_set_current_line(241, ng0);
    t7 = (t1 + 1816);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t11 = xsi_vlog_time(t10, 1000000.000000000, 1000.000000000000);
    t12 = (t1 + 1132U);
    t13 = *((char **)t12);
    xsi_vlogfile_fwrite(*((unsigned int *)t9), 1, 0, ng3, 3, t1, (char)118, t10, 64, (char)118, t13, 64);
    xsi_set_current_line(242, ng0);
    t4 = (t1 + 1816);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    xsi_vlogfile_fflush(0, *((unsigned int *)t6));
    xsi_set_current_line(243, ng0);
    t4 = (t1 + 1908);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t14, 0, 8);
    xsi_vlog_signed_add(t14, 32, t6, 32, t7, 32);
    t8 = (t1 + 1908);
    xsi_vlogvar_assign_value(t8, t14, 0, 0, 32);
    goto LAB4;

}

static void I43_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 2384U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);

LAB4:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 2300);
    xsi_process_wait(t2, 0LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 2300);
    t3 = (t0 + 456);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB7:    t5 = (t0 + 2348);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    t9 = (t8 + 132U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);
    if (t13 != 0)
        goto LAB9;

LAB8:    t6 = (t0 + 456);
    xsi_vlog_subprogram_popinvocation(t6);

LAB6:    t14 = (t0 + 2348);
    t15 = *((char **)t14);
    t14 = (t0 + 456);
    t16 = (t0 + 2348);
    t17 = *((char **)t16);
    t16 = (t0 + 2300);
    t18 = 0;
    xsi_delete_subprogram_invocation(t14, t17, t0, t16, t18);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 2300);
    t3 = (t0 + 696);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB11:    t5 = (t0 + 2348);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    t9 = (t8 + 132U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);
    if (t13 != 0)
        goto LAB13;

LAB12:    t6 = (t0 + 696);
    xsi_vlog_subprogram_popinvocation(t6);

LAB10:    t14 = (t0 + 2348);
    t15 = *((char **)t14);
    t14 = (t0 + 696);
    t16 = (t0 + 2348);
    t17 = *((char **)t16);
    t16 = (t0 + 2300);
    t18 = 0;
    xsi_delete_subprogram_invocation(t14, t17, t0, t16, t18);
    xsi_set_current_line(47, ng0);

LAB14:    xsi_set_current_line(47, ng0);

LAB15:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 2300);
    xsi_process_wait(t2, 50000000LL);
    *((char **)t1) = &&LAB16;
    goto LAB1;

LAB9:    t5 = (t0 + 2384U);
    *((char **)t5) = &&LAB7;
    goto LAB1;

LAB13:    t5 = (t0 + 2384U);
    *((char **)t5) = &&LAB11;
    goto LAB1;

LAB16:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 2300);
    t3 = (t0 + 456);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB18:    t5 = (t0 + 2348);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    t9 = (t8 + 132U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);
    if (t13 != 0)
        goto LAB20;

LAB19:    t6 = (t0 + 456);
    xsi_vlog_subprogram_popinvocation(t6);

LAB17:    t14 = (t0 + 2348);
    t15 = *((char **)t14);
    t14 = (t0 + 456);
    t16 = (t0 + 2348);
    t17 = *((char **)t16);
    t16 = (t0 + 2300);
    t18 = 0;
    xsi_delete_subprogram_invocation(t14, t17, t0, t16, t18);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 2300);
    t3 = (t0 + 696);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB22:    t5 = (t0 + 2348);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    t9 = (t8 + 132U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);
    if (t13 != 0)
        goto LAB24;

LAB23:    t6 = (t0 + 696);
    xsi_vlog_subprogram_popinvocation(t6);

LAB21:    t14 = (t0 + 2348);
    t15 = *((char **)t14);
    t14 = (t0 + 696);
    t16 = (t0 + 2348);
    t17 = *((char **)t16);
    t16 = (t0 + 2300);
    t18 = 0;
    xsi_delete_subprogram_invocation(t14, t17, t0, t16, t18);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 2300);
    xsi_process_wait(t2, 50000000LL);
    *((char **)t1) = &&LAB25;
    goto LAB1;

LAB20:    t5 = (t0 + 2384U);
    *((char **)t5) = &&LAB18;
    goto LAB1;

LAB24:    t5 = (t0 + 2384U);
    *((char **)t5) = &&LAB22;
    goto LAB1;

LAB25:    goto LAB14;

LAB26:    goto LAB1;

}

static void I55_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 2512U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55, ng0);

LAB4:    xsi_set_current_line(56, ng0);
    *((int *)t3) = xsi_vlogfile_file_open_of_cname(ng4);
    t2 = (t3 + 4);
    *((int *)t2) = 0;
    t4 = (t0 + 1816);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 2428);
    xsi_process_wait(t2, 20000000000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(58, ng0);
    xsi_vlogfile_write(1, 0, ng5, 1, t0);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 1816);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t0 + 1908);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    xsi_vlogfile_fwrite(*((unsigned int *)t5), 1, 0, ng6, 2, t0, (char)119, t8, 32);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1816);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    xsi_vlogfile_fclose(*((unsigned int *)t5));
    xsi_set_current_line(61, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

}

static void I64_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;

LAB0:    t1 = (t0 + 2640U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(64, ng0);

LAB4:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 2556);
    xsi_process_wait(t2, 100000000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 1356);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 2556);
    xsi_process_wait(t2, 100000000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 1540);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 2556);
    xsi_process_wait(t2, 100000000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 1356);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 2556);
    xsi_process_wait(t2, 100000000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 1540);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 1724);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 2556);
    xsi_process_wait(t2, 100000000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 1356);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 2556);
    xsi_process_wait(t2, 100000000LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 1540);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(91, ng0);
    t2 = (t0 + 2556);
    xsi_process_wait(t2, 100000000LL);
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 1356);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(95, ng0);
    t2 = (t0 + 2556);
    xsi_process_wait(t2, 100000000LL);
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB12:    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 1540);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 1724);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(100, ng0);
    t2 = (t0 + 2556);
    xsi_process_wait(t2, 100000000LL);
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB13:    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 1356);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 1540);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(105, ng0);
    t2 = (t0 + 2556);
    xsi_process_wait(t2, 100000000LL);
    *((char **)t1) = &&LAB14;
    goto LAB1;

LAB14:    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 1540);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(109, ng0);
    t2 = (t0 + 2556);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB15:    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 1356);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(113, ng0);
    t2 = (t0 + 2556);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB16;
    goto LAB1;

LAB16:    xsi_set_current_line(114, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 1540);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(117, ng0);
    t2 = (t0 + 2556);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB17;
    goto LAB1;

LAB17:    xsi_set_current_line(118, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 1632);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(119, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 1356);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(120, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 1540);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(123, ng0);
    t2 = (t0 + 2556);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB18;
    goto LAB1;

LAB18:    xsi_set_current_line(124, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 1632);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(125, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 1356);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(126, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 1724);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(129, ng0);
    t2 = (t0 + 2556);
    xsi_process_wait(t2, 100000000LL);
    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB19:    xsi_set_current_line(130, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 1356);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(131, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 1540);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(134, ng0);
    t2 = (t0 + 2556);
    xsi_process_wait(t2, 100000000LL);
    *((char **)t1) = &&LAB20;
    goto LAB1;

LAB20:    xsi_set_current_line(135, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 1540);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(138, ng0);
    t2 = (t0 + 2556);
    xsi_process_wait(t2, 100000000LL);
    *((char **)t1) = &&LAB21;
    goto LAB1;

LAB21:    xsi_set_current_line(139, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 1356);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(140, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 1724);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(143, ng0);
    t2 = (t0 + 2556);
    xsi_process_wait(t2, 100000000LL);
    *((char **)t1) = &&LAB22;
    goto LAB1;

LAB22:    xsi_set_current_line(144, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 1540);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(147, ng0);
    t2 = (t0 + 2556);
    xsi_process_wait(t2, 100000000LL);
    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB23:    xsi_set_current_line(148, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 1356);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(151, ng0);
    t2 = (t0 + 2556);
    xsi_process_wait(t2, 100000000LL);
    *((char **)t1) = &&LAB24;
    goto LAB1;

LAB24:    xsi_set_current_line(152, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 1540);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(155, ng0);
    t2 = (t0 + 2556);
    xsi_process_wait(t2, 100000000LL);
    *((char **)t1) = &&LAB25;
    goto LAB1;

LAB25:    xsi_set_current_line(156, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 1356);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(159, ng0);
    t2 = (t0 + 2556);
    xsi_process_wait(t2, 100000000LL);
    *((char **)t1) = &&LAB26;
    goto LAB1;

LAB26:    xsi_set_current_line(160, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 1540);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(163, ng0);
    t2 = (t0 + 2556);
    xsi_process_wait(t2, 100000000LL);
    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB27:    xsi_set_current_line(164, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 1356);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(165, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(166, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 1724);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(169, ng0);
    t2 = (t0 + 2556);
    xsi_process_wait(t2, 100000000LL);
    *((char **)t1) = &&LAB28;
    goto LAB1;

LAB28:    xsi_set_current_line(170, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 1540);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(173, ng0);
    t2 = (t0 + 2556);
    xsi_process_wait(t2, 100000000LL);
    *((char **)t1) = &&LAB29;
    goto LAB1;

LAB29:    xsi_set_current_line(174, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 1356);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(177, ng0);
    t2 = (t0 + 2556);
    xsi_process_wait(t2, 100000000LL);
    *((char **)t1) = &&LAB30;
    goto LAB1;

LAB30:    xsi_set_current_line(178, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 1540);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(181, ng0);
    t2 = (t0 + 2556);
    xsi_process_wait(t2, 100000000LL);
    *((char **)t1) = &&LAB31;
    goto LAB1;

LAB31:    xsi_set_current_line(182, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 1356);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(183, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(186, ng0);
    t2 = (t0 + 2556);
    xsi_process_wait(t2, 100000000LL);
    *((char **)t1) = &&LAB32;
    goto LAB1;

LAB32:    xsi_set_current_line(187, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 1540);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(190, ng0);
    t2 = (t0 + 2556);
    xsi_process_wait(t2, 100000000LL);
    *((char **)t1) = &&LAB33;
    goto LAB1;

LAB33:    xsi_set_current_line(191, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 1356);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(194, ng0);
    t2 = (t0 + 2556);
    xsi_process_wait(t2, 100000000LL);
    *((char **)t1) = &&LAB34;
    goto LAB1;

LAB34:    xsi_set_current_line(195, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 1540);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(198, ng0);
    t2 = (t0 + 2556);
    xsi_process_wait(t2, 100000000LL);
    *((char **)t1) = &&LAB35;
    goto LAB1;

LAB35:    xsi_set_current_line(199, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 1356);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(202, ng0);
    t2 = (t0 + 2556);
    xsi_process_wait(t2, 100000000LL);
    *((char **)t1) = &&LAB36;
    goto LAB1;

LAB36:    xsi_set_current_line(203, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 1540);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(206, ng0);
    t2 = (t0 + 2556);
    xsi_process_wait(t2, 100000000LL);
    *((char **)t1) = &&LAB37;
    goto LAB1;

LAB37:    xsi_set_current_line(207, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 1356);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(210, ng0);
    t2 = (t0 + 2556);
    xsi_process_wait(t2, 100000000LL);
    *((char **)t1) = &&LAB38;
    goto LAB1;

LAB38:    xsi_set_current_line(211, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 1540);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(214, ng0);
    t2 = (t0 + 2556);
    xsi_process_wait(t2, 100000000LL);
    *((char **)t1) = &&LAB39;
    goto LAB1;

LAB39:    xsi_set_current_line(215, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 1356);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(218, ng0);
    t2 = (t0 + 2556);
    xsi_process_wait(t2, 100000000LL);
    *((char **)t1) = &&LAB40;
    goto LAB1;

LAB40:    xsi_set_current_line(219, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 1540);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(222, ng0);
    t2 = (t0 + 2556);
    xsi_process_wait(t2, 100000000LL);
    *((char **)t1) = &&LAB41;
    goto LAB1;

LAB41:    xsi_set_current_line(223, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 1356);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(226, ng0);
    t2 = (t0 + 2556);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB42;
    goto LAB1;

LAB42:    xsi_set_current_line(227, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 1356);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(228, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 1724);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB1;

}


extern void work_m_00000000000615784474_0717890908_init()
{
	static char *pe[] = {(void *)I43_0,(void *)I55_1,(void *)I64_2};
	static char *se[] = {(void *)sp_ANNOTATE_cout,(void *)sp_ANNOTATE_res};
	xsi_register_didat("work_m_00000000000615784474_0717890908", "isim/_tmp/work/m_00000000000615784474_0717890908.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

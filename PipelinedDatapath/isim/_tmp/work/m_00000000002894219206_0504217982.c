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
static const char *ng0 = "C:/labs/PipelinedDatapath/reg_file_tb.ant";
static const char *ng1 = "Annotate[%d,r0data,%b]";
static int ng2[] = {1, 0};
static const char *ng3 = "Annotate[%d,r1data,%b]";
static unsigned int ng4[] = {0U, 0U};
static unsigned int ng5[] = {1U, 0U};
static const char *ng6 = "C:\\labs\\PipelinedDatapath\\reg_file_tb.ano";
static const char *ng7 = "Success! Annotation Simulation Complete.";
static const char *ng8 = "Total[%d]";
static unsigned int ng9[] = {0U, 0U, 4026531840U, 0U};
static unsigned int ng10[] = {0U, 0U, 251658240U, 0U};
static unsigned int ng11[] = {2U, 0U};
static unsigned int ng12[] = {3U, 0U};
static unsigned int ng13[] = {0U, 0U, 15728640U, 0U};
static unsigned int ng14[] = {0U, 0U, 983040U, 0U};
static unsigned int ng15[] = {0U, 0U, 0U, 0U};



static int sp_ANNOTATE_r0data(char *t1, char *t2)
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

LAB2:    t4 = (t1 + 684);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(199, ng0);
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

LAB5:    xsi_set_current_line(199, ng0);

LAB6:    xsi_set_current_line(200, ng0);
    t7 = (t1 + 2136);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t11 = xsi_vlog_time(t10, 1000000.000000000, 1000.000000000000);
    t12 = (t1 + 1272U);
    t13 = *((char **)t12);
    xsi_vlogfile_fwrite(*((unsigned int *)t9), 1, 0, ng1, 3, t1, (char)118, t10, 64, (char)118, t13, 64);
    xsi_set_current_line(201, ng0);
    t4 = (t1 + 2136);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    xsi_vlogfile_fflush(0, *((unsigned int *)t6));
    xsi_set_current_line(202, ng0);
    t4 = (t1 + 2228);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t14, 0, 8);
    xsi_vlog_signed_add(t14, 32, t6, 32, t7, 32);
    t8 = (t1 + 2228);
    xsi_vlogvar_assign_value(t8, t14, 0, 0, 32);
    goto LAB4;

}

static int sp_ANNOTATE_r1data(char *t1, char *t2)
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

LAB2:    t4 = (t1 + 924);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(207, ng0);
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

LAB5:    xsi_set_current_line(207, ng0);

LAB6:    xsi_set_current_line(208, ng0);
    t7 = (t1 + 2136);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t11 = xsi_vlog_time(t10, 1000000.000000000, 1000.000000000000);
    t12 = (t1 + 1360U);
    t13 = *((char **)t12);
    xsi_vlogfile_fwrite(*((unsigned int *)t9), 1, 0, ng3, 3, t1, (char)118, t10, 64, (char)118, t13, 64);
    xsi_set_current_line(209, ng0);
    t4 = (t1 + 2136);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    xsi_vlogfile_fflush(0, *((unsigned int *)t6));
    xsi_set_current_line(210, ng0);
    t4 = (t1 + 2228);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t14, 0, 8);
    xsi_vlog_signed_add(t14, 32, t6, 32, t7, 32);
    t8 = (t1 + 2228);
    xsi_vlogvar_assign_value(t8, t14, 0, 0, 32);
    goto LAB4;

}

static void I35_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 2704U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);

LAB4:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 2620);
    xsi_process_wait(t2, 0LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(38, ng0);

LAB6:    xsi_set_current_line(39, ng0);

LAB7:    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1584);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(41, ng0);
    t2 = (t0 + 2620);
    xsi_process_wait(t2, 10000000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(41, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 1584);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 2620);
    xsi_process_wait(t2, 10000000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    goto LAB6;

LAB10:    goto LAB1;

}

static void I59_1(char *t0)
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

LAB0:    t1 = (t0 + 2832U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(59, ng0);

LAB4:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 2748);
    xsi_process_wait(t2, 0LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 2748);
    t3 = (t0 + 684);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB7:    t5 = (t0 + 2796);
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

LAB8:    t6 = (t0 + 684);
    xsi_vlog_subprogram_popinvocation(t6);

LAB6:    t14 = (t0 + 2796);
    t15 = *((char **)t14);
    t14 = (t0 + 684);
    t16 = (t0 + 2796);
    t17 = *((char **)t16);
    t16 = (t0 + 2748);
    t18 = 0;
    xsi_delete_subprogram_invocation(t14, t17, t0, t16, t18);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 2748);
    t3 = (t0 + 924);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB11:    t5 = (t0 + 2796);
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

LAB12:    t6 = (t0 + 924);
    xsi_vlog_subprogram_popinvocation(t6);

LAB10:    t14 = (t0 + 2796);
    t15 = *((char **)t14);
    t14 = (t0 + 924);
    t16 = (t0 + 2796);
    t17 = *((char **)t16);
    t16 = (t0 + 2748);
    t18 = 0;
    xsi_delete_subprogram_invocation(t14, t17, t0, t16, t18);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 2748);
    xsi_process_wait(t2, 0LL);
    *((char **)t1) = &&LAB14;
    goto LAB1;

LAB9:    t5 = (t0 + 2832U);
    *((char **)t5) = &&LAB7;
    goto LAB1;

LAB13:    t5 = (t0 + 2832U);
    *((char **)t5) = &&LAB11;
    goto LAB1;

LAB14:    xsi_set_current_line(64, ng0);

LAB15:    xsi_set_current_line(64, ng0);

LAB16:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 2748);
    xsi_process_wait(t2, 15000000LL);
    *((char **)t1) = &&LAB17;
    goto LAB1;

LAB17:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 2748);
    t3 = (t0 + 684);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB19:    t5 = (t0 + 2796);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    t9 = (t8 + 132U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);
    if (t13 != 0)
        goto LAB21;

LAB20:    t6 = (t0 + 684);
    xsi_vlog_subprogram_popinvocation(t6);

LAB18:    t14 = (t0 + 2796);
    t15 = *((char **)t14);
    t14 = (t0 + 684);
    t16 = (t0 + 2796);
    t17 = *((char **)t16);
    t16 = (t0 + 2748);
    t18 = 0;
    xsi_delete_subprogram_invocation(t14, t17, t0, t16, t18);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 2748);
    t3 = (t0 + 924);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB23:    t5 = (t0 + 2796);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    t9 = (t8 + 132U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);
    if (t13 != 0)
        goto LAB25;

LAB24:    t6 = (t0 + 924);
    xsi_vlog_subprogram_popinvocation(t6);

LAB22:    t14 = (t0 + 2796);
    t15 = *((char **)t14);
    t14 = (t0 + 924);
    t16 = (t0 + 2796);
    t17 = *((char **)t16);
    t16 = (t0 + 2748);
    t18 = 0;
    xsi_delete_subprogram_invocation(t14, t17, t0, t16, t18);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 2748);
    xsi_process_wait(t2, 5000000LL);
    *((char **)t1) = &&LAB26;
    goto LAB1;

LAB21:    t5 = (t0 + 2832U);
    *((char **)t5) = &&LAB19;
    goto LAB1;

LAB25:    t5 = (t0 + 2832U);
    *((char **)t5) = &&LAB23;
    goto LAB1;

LAB26:    goto LAB15;

LAB27:    goto LAB1;

}

static void I72_2(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 2960U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(72, ng0);

LAB4:    xsi_set_current_line(73, ng0);
    *((int *)t3) = xsi_vlogfile_file_open_of_cname(ng6);
    t2 = (t3 + 4);
    *((int *)t2) = 0;
    t4 = (t0 + 2136);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 2876);
    xsi_process_wait(t2, 1020000000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(75, ng0);
    xsi_vlogfile_write(1, 0, ng7, 1, t0);
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 2136);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t0 + 2228);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    xsi_vlogfile_fwrite(*((unsigned int *)t5), 1, 0, ng8, 2, t0, (char)119, t8, 32);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 2136);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    xsi_vlogfile_fclose(*((unsigned int *)t5));
    xsi_set_current_line(78, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

}

static void I81_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;

LAB0:    t1 = (t0 + 3088U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(81, ng0);

LAB4:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 3004);
    xsi_process_wait(t2, 85000000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2044);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 1952);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(88, ng0);
    t2 = (t0 + 3004);
    xsi_process_wait(t2, 40000000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1860);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 1952);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 3004);
    xsi_process_wait(t2, 20000000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 1860);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(97, ng0);
    t2 = (t0 + 3004);
    xsi_process_wait(t2, 20000000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 1860);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 1952);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(102, ng0);
    t2 = (t0 + 3004);
    xsi_process_wait(t2, 20000000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2044);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1860);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(107, ng0);
    t2 = (t0 + 3004);
    xsi_process_wait(t2, 20000000LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(108, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1676);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 1952);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(113, ng0);
    t2 = (t0 + 3004);
    xsi_process_wait(t2, 20000000LL);
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(114, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 1676);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(115, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(118, ng0);
    t2 = (t0 + 3004);
    xsi_process_wait(t2, 20000000LL);
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB12:    xsi_set_current_line(119, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 1676);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(120, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 1952);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(124, ng0);
    t2 = (t0 + 3004);
    xsi_process_wait(t2, 20000000LL);
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB13:    xsi_set_current_line(125, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1676);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(126, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(129, ng0);
    t2 = (t0 + 3004);
    xsi_process_wait(t2, 20000000LL);
    *((char **)t1) = &&LAB14;
    goto LAB1;

LAB14:    xsi_set_current_line(130, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1676);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(133, ng0);
    t2 = (t0 + 3004);
    xsi_process_wait(t2, 20000000LL);
    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB15:    xsi_set_current_line(134, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 1676);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(137, ng0);
    t2 = (t0 + 3004);
    xsi_process_wait(t2, 20000000LL);
    *((char **)t1) = &&LAB16;
    goto LAB1;

LAB16:    xsi_set_current_line(138, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 1676);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(141, ng0);
    t2 = (t0 + 3004);
    xsi_process_wait(t2, 20000000LL);
    *((char **)t1) = &&LAB17;
    goto LAB1;

LAB17:    xsi_set_current_line(142, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1676);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(143, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(146, ng0);
    t2 = (t0 + 3004);
    xsi_process_wait(t2, 20000000LL);
    *((char **)t1) = &&LAB18;
    goto LAB1;

LAB18:    xsi_set_current_line(147, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1676);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(150, ng0);
    t2 = (t0 + 3004);
    xsi_process_wait(t2, 20000000LL);
    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB19:    xsi_set_current_line(151, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 1676);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(154, ng0);
    t2 = (t0 + 3004);
    xsi_process_wait(t2, 20000000LL);
    *((char **)t1) = &&LAB20;
    goto LAB1;

LAB20:    xsi_set_current_line(155, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 1676);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(158, ng0);
    t2 = (t0 + 3004);
    xsi_process_wait(t2, 20000000LL);
    *((char **)t1) = &&LAB21;
    goto LAB1;

LAB21:    xsi_set_current_line(159, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1676);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(160, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(163, ng0);
    t2 = (t0 + 3004);
    xsi_process_wait(t2, 20000000LL);
    *((char **)t1) = &&LAB22;
    goto LAB1;

LAB22:    xsi_set_current_line(164, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1676);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(167, ng0);
    t2 = (t0 + 3004);
    xsi_process_wait(t2, 20000000LL);
    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB23:    xsi_set_current_line(168, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 1676);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(171, ng0);
    t2 = (t0 + 3004);
    xsi_process_wait(t2, 20000000LL);
    *((char **)t1) = &&LAB24;
    goto LAB1;

LAB24:    xsi_set_current_line(172, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 1676);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(175, ng0);
    t2 = (t0 + 3004);
    xsi_process_wait(t2, 20000000LL);
    *((char **)t1) = &&LAB25;
    goto LAB1;

LAB25:    xsi_set_current_line(176, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1676);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(177, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(180, ng0);
    t2 = (t0 + 3004);
    xsi_process_wait(t2, 20000000LL);
    *((char **)t1) = &&LAB26;
    goto LAB1;

LAB26:    xsi_set_current_line(181, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1676);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(184, ng0);
    t2 = (t0 + 3004);
    xsi_process_wait(t2, 20000000LL);
    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB27:    xsi_set_current_line(185, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 1676);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(188, ng0);
    t2 = (t0 + 3004);
    xsi_process_wait(t2, 20000000LL);
    *((char **)t1) = &&LAB28;
    goto LAB1;

LAB28:    xsi_set_current_line(189, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 1676);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(192, ng0);
    t2 = (t0 + 3004);
    xsi_process_wait(t2, 20000000LL);
    *((char **)t1) = &&LAB29;
    goto LAB1;

LAB29:    xsi_set_current_line(193, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1676);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(194, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB1;

}


extern void work_m_00000000002894219206_0504217982_init()
{
	static char *pe[] = {(void *)I35_0,(void *)I59_1,(void *)I72_2,(void *)I81_3};
	static char *se[] = {(void *)sp_ANNOTATE_r0data,(void *)sp_ANNOTATE_r1data};
	xsi_register_didat("work_m_00000000002894219206_0504217982", "isim/_tmp/work/m_00000000002894219206_0504217982.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

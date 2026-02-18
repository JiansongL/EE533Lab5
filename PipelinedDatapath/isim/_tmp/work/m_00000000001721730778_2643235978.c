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
static const char *ng0 = "//vmware-host/Shared Folders/shared/SharedProjects/EE533Lab5-main/PipelinedDatapath/m4_64b.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};



static void A30_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    int t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 1616U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 1796);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(30, ng0);

LAB5:    xsi_set_current_line(31, ng0);
    t3 = (t0 + 916U);
    t4 = *((char **)t3);

LAB6:    t3 = ((char*)((ng1)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 2, t3, 2);
    if (t5 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t5 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t5 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t5 == 1)
        goto LAB13;

LAB14:
LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(32, ng0);
    t6 = (t0 + 564U);
    t7 = *((char **)t6);
    t6 = (t0 + 1140);
    xsi_vlogvar_assign_value(t6, t7, 0, 0, 64);
    goto LAB15;

LAB9:    xsi_set_current_line(33, ng0);
    t3 = (t0 + 652U);
    t6 = *((char **)t3);
    t3 = (t0 + 1140);
    xsi_vlogvar_assign_value(t3, t6, 0, 0, 64);
    goto LAB15;

LAB11:    xsi_set_current_line(34, ng0);
    t3 = (t0 + 740U);
    t6 = *((char **)t3);
    t3 = (t0 + 1140);
    xsi_vlogvar_assign_value(t3, t6, 0, 0, 64);
    goto LAB15;

LAB13:    xsi_set_current_line(35, ng0);
    t3 = (t0 + 828U);
    t6 = *((char **)t3);
    t3 = (t0 + 1140);
    xsi_vlogvar_assign_value(t3, t6, 0, 0, 64);
    goto LAB15;

}


extern void work_m_00000000001721730778_2643235978_init()
{
	static char *pe[] = {(void *)A30_0};
	xsi_register_didat("work_m_00000000001721730778_2643235978", "isim/_tmp/work/m_00000000001721730778_2643235978.didat");
	xsi_register_executes(pe);
}

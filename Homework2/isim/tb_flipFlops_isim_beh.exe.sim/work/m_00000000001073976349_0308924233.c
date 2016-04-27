/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xa0883be4 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Chris/Documents/CompE470/Homework2/Homework2/Question1.v";
static unsigned int ng1[] = {15U, 0U};
static int ng2[] = {0, 0};
static int ng3[] = {1, 0};
static int ng4[] = {2, 0};
static int ng5[] = {3, 0};



static void Always_10_0(char *t0)
{
    char t13[8];
    char t14[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    int t32;

LAB0:    t1 = (t0 + 3008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(10, ng0);
    t2 = (t0 + 3328);
    *((int *)t2) = 1;
    t3 = (t0 + 3040);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(10, ng0);

LAB5:    xsi_set_current_line(11, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(13, ng0);

LAB9:    xsi_set_current_line(14, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t14, 0, 8);
    t5 = (t14 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t14) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 0);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t10 & 7U);
    t15 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t15 & 7U);
    memset(t13, 0, 8);
    t12 = (t14 + 4);
    t16 = *((unsigned int *)t14);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    if (t18 != 7U)
        goto LAB11;

LAB10:    if (*((unsigned int *)t12) == 0)
        goto LAB12;

LAB13:    t19 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t19) = 1;

LAB11:    t20 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t20, t13, 0, 0, 1, 0LL);
    xsi_set_current_line(15, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1608);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    memset(t13, 0, 8);
    t19 = (t13 + 4);
    t20 = (t12 + 4);
    t6 = *((unsigned int *)t12);
    t7 = (t6 >> 3);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t20);
    t10 = (t9 >> 3);
    t15 = (t10 & 1);
    *((unsigned int *)t19) = t15;
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t13);
    t18 = (t16 ^ t17);
    *((unsigned int *)t14) = t18;
    t21 = (t4 + 4);
    t22 = (t13 + 4);
    t23 = (t14 + 4);
    t24 = *((unsigned int *)t21);
    t25 = *((unsigned int *)t22);
    t26 = (t24 | t25);
    *((unsigned int *)t23) = t26;
    t27 = *((unsigned int *)t23);
    t28 = (t27 != 0);
    if (t28 == 1)
        goto LAB14;

LAB15:
LAB16:    t31 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t31, t14, 0, 0, 1, 0LL);
    xsi_set_current_line(16, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1608);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    memset(t13, 0, 8);
    t19 = (t13 + 4);
    t20 = (t12 + 4);
    t6 = *((unsigned int *)t12);
    t7 = (t6 >> 0);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t20);
    t10 = (t9 >> 0);
    t15 = (t10 & 1);
    *((unsigned int *)t19) = t15;
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t13);
    t18 = (t16 ^ t17);
    *((unsigned int *)t14) = t18;
    t21 = (t4 + 4);
    t22 = (t13 + 4);
    t23 = (t14 + 4);
    t24 = *((unsigned int *)t21);
    t25 = *((unsigned int *)t22);
    t26 = (t24 | t25);
    *((unsigned int *)t23) = t26;
    t27 = *((unsigned int *)t23);
    t28 = (t27 != 0);
    if (t28 == 1)
        goto LAB17;

LAB18:
LAB19:    t31 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t31, t14, 0, 0, 1, 0LL);
    xsi_set_current_line(17, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1608);
    t11 = (t0 + 1608);
    t12 = (t11 + 72U);
    t19 = *((char **)t12);
    t20 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t13, t19, 2, t20, 32, 1);
    t21 = (t13 + 4);
    t6 = *((unsigned int *)t21);
    t32 = (!(t6));
    if (t32 == 1)
        goto LAB20;

LAB21:    xsi_set_current_line(18, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 0);
    t15 = (t10 & 1);
    *((unsigned int *)t5) = t15;
    t12 = (t0 + 1608);
    t19 = (t0 + 1608);
    t20 = (t19 + 72U);
    t21 = *((char **)t20);
    t22 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t14, t21, 2, t22, 32, 1);
    t23 = (t14 + 4);
    t16 = *((unsigned int *)t23);
    t32 = (!(t16));
    if (t32 == 1)
        goto LAB22;

LAB23:    xsi_set_current_line(19, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 1);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 1);
    t15 = (t10 & 1);
    *((unsigned int *)t5) = t15;
    t12 = (t0 + 1608);
    t19 = (t0 + 1608);
    t20 = (t19 + 72U);
    t21 = *((char **)t20);
    t22 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t14, t21, 2, t22, 32, 1);
    t23 = (t14 + 4);
    t16 = *((unsigned int *)t23);
    t32 = (!(t16));
    if (t32 == 1)
        goto LAB24;

LAB25:    xsi_set_current_line(20, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 2);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 2);
    t15 = (t10 & 1);
    *((unsigned int *)t5) = t15;
    t12 = (t0 + 1608);
    t19 = (t0 + 1608);
    t20 = (t19 + 72U);
    t21 = *((char **)t20);
    t22 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t14, t21, 2, t22, 32, 1);
    t23 = (t14 + 4);
    t16 = *((unsigned int *)t23);
    t32 = (!(t16));
    if (t32 == 1)
        goto LAB26;

LAB27:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(12, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1608);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 4);
    goto LAB8;

LAB12:    *((unsigned int *)t13) = 1;
    goto LAB11;

LAB14:    t29 = *((unsigned int *)t14);
    t30 = *((unsigned int *)t23);
    *((unsigned int *)t14) = (t29 | t30);
    goto LAB16;

LAB17:    t29 = *((unsigned int *)t14);
    t30 = *((unsigned int *)t23);
    *((unsigned int *)t14) = (t29 | t30);
    goto LAB19;

LAB20:    xsi_vlogvar_wait_assign_value(t5, t4, 0, *((unsigned int *)t13), 1, 0LL);
    goto LAB21;

LAB22:    xsi_vlogvar_wait_assign_value(t12, t13, 0, *((unsigned int *)t14), 1, 0LL);
    goto LAB23;

LAB24:    xsi_vlogvar_wait_assign_value(t12, t13, 0, *((unsigned int *)t14), 1, 0LL);
    goto LAB25;

LAB26:    xsi_vlogvar_wait_assign_value(t12, t13, 0, *((unsigned int *)t14), 1, 0LL);
    goto LAB27;

}


extern void work_m_00000000001073976349_0308924233_init()
{
	static char *pe[] = {(void *)Always_10_0};
	xsi_register_didat("work_m_00000000001073976349_0308924233", "isim/tb_flipFlops_isim_beh.exe.sim/work/m_00000000001073976349_0308924233.didat");
	xsi_register_executes(pe);
}

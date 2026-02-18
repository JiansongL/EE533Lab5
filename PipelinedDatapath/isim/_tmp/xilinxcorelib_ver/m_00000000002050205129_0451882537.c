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
static int ng0[] = {0, 0};
static int ng1[] = {1702376048, 0, 1986622068, 0};
static int ng2[] = {1952806964, 0, 7760242, 0};
static int ng3[] = {1, 0};
static const char *ng4 = "%h";
static int ng5[] = {0, 0, 0, 0};



static void C117_0(char *t0)
{
    char t4[8];
    char t5[8];
    char t20[8];
    char t27[8];
    char t55[8];
    char t70[8];
    char t83[16];
    char t84[8];
    char t92[8];
    char t124[8];
    char t132[8];
    char *t1;
    char *t2;
    char *t3;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    char *t69;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    char *t82;
    char *t85;
    char *t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;
    char *t97;
    char *t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    char *t106;
    char *t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    int t116;
    int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    char *t125;
    char *t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    char *t136;
    char *t137;
    char *t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    char *t146;
    char *t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    char *t160;
    char *t161;
    char *t162;
    char *t163;
    char *t164;
    char *t165;
    unsigned int t166;
    unsigned int t167;
    char *t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    char *t175;

LAB0:    t1 = (t0 + 3144U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 552);
    t3 = *((char **)t2);
    t2 = ((char*)((ng0)));
    memset(t4, 0, 8);
    xsi_vlog_signed_equal(t4, 32, t3, 32, t2, 32);
    memset(t5, 0, 8);
    t6 = (t5 + 4U);
    t7 = (t4 + 4U);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t7) != 0)
        goto LAB6;

LAB7:    t13 = (t5 + 4U);
    t14 = *((unsigned int *)t5);
    t15 = (!(t14));
    t16 = *((unsigned int *)t13);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB8;

LAB9:    memcpy(t27, t5, 8);

LAB10:    memset(t55, 0, 8);
    t56 = (t55 + 4U);
    t57 = (t27 + 4U);
    t58 = *((unsigned int *)t57);
    t59 = (~(t58));
    t60 = *((unsigned int *)t27);
    t61 = (t60 & t59);
    t62 = (t61 & 1U);
    if (t62 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t57) != 0)
        goto LAB20;

LAB21:    t63 = (t55 + 4U);
    t64 = *((unsigned int *)t55);
    t65 = (!(t64));
    t66 = *((unsigned int *)t63);
    t67 = (t65 || t66);
    if (t67 > 0)
        goto LAB22;

LAB23:    memcpy(t132, t55, 8);

LAB24:    t160 = (t0 + 3904);
    t161 = (t160 + 32U);
    t162 = *((char **)t161);
    t163 = (t162 + 40U);
    t164 = *((char **)t163);
    t165 = (t164 + 4U);
    t166 = 1U;
    t167 = t166;
    t168 = (t132 + 4U);
    t169 = *((unsigned int *)t132);
    t166 = (t166 & t169);
    t170 = *((unsigned int *)t168);
    t167 = (t167 & t170);
    t171 = *((unsigned int *)t164);
    *((unsigned int *)t164) = (t171 & 4294967294U);
    t172 = *((unsigned int *)t164);
    *((unsigned int *)t164) = (t172 | t166);
    t173 = *((unsigned int *)t165);
    *((unsigned int *)t165) = (t173 & 4294967294U);
    t174 = *((unsigned int *)t165);
    *((unsigned int *)t165) = (t174 | t167);
    xsi_driver_vfirst_trans(t160, 0, 0);
    t175 = (t0 + 3836);
    *((int *)t175) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t5) = 1;
    goto LAB7;

LAB6:    *((unsigned int *)t5) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB7;

LAB8:    t18 = (t0 + 1816U);
    t19 = *((char **)t18);
    memset(t20, 0, 8);
    t18 = (t20 + 4U);
    t21 = (t19 + 4U);
    t22 = *((unsigned int *)t21);
    t23 = (~(t22));
    t24 = *((unsigned int *)t19);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t21) != 0)
        goto LAB13;

LAB14:    t28 = *((unsigned int *)t5);
    t29 = *((unsigned int *)t20);
    t30 = (t28 | t29);
    *((unsigned int *)t27) = t30;
    t31 = (t5 + 4U);
    t32 = (t20 + 4U);
    t33 = (t27 + 4U);
    t34 = *((unsigned int *)t31);
    t35 = *((unsigned int *)t32);
    t36 = (t34 | t35);
    *((unsigned int *)t33) = t36;
    t37 = *((unsigned int *)t33);
    t38 = (t37 != 0);
    if (t38 == 1)
        goto LAB15;

LAB16:
LAB17:    goto LAB10;

LAB11:    *((unsigned int *)t20) = 1;
    goto LAB14;

LAB13:    *((unsigned int *)t20) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB14;

LAB15:    t39 = *((unsigned int *)t27);
    t40 = *((unsigned int *)t33);
    *((unsigned int *)t27) = (t39 | t40);
    t41 = (t5 + 4U);
    t42 = (t20 + 4U);
    t43 = *((unsigned int *)t41);
    t44 = (~(t43));
    t45 = *((unsigned int *)t5);
    t46 = (t45 & t44);
    t47 = *((unsigned int *)t42);
    t48 = (~(t47));
    t49 = *((unsigned int *)t20);
    t50 = (t49 & t48);
    t51 = (~(t46));
    t52 = (~(t50));
    t53 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t53 & t51);
    t54 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t54 & t52);
    goto LAB17;

LAB18:    *((unsigned int *)t55) = 1;
    goto LAB21;

LAB20:    *((unsigned int *)t55) = 1;
    *((unsigned int *)t56) = 1;
    goto LAB21;

LAB22:    t68 = (t0 + 628);
    t69 = *((char **)t68);
    memset(t70, 0, 8);
    t68 = (t70 + 4U);
    t71 = (t69 + 4U);
    t72 = *((unsigned int *)t71);
    t73 = (~(t72));
    t74 = *((unsigned int *)t69);
    t75 = (t74 & t73);
    t76 = (t75 & 4294967295U);
    if (t76 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t71) != 0)
        goto LAB27;

LAB28:    t77 = (t70 + 4U);
    t78 = *((unsigned int *)t70);
    t79 = *((unsigned int *)t77);
    t80 = (t78 || t79);
    if (t80 > 0)
        goto LAB29;

LAB30:    memcpy(t92, t70, 8);

LAB31:    memset(t124, 0, 8);
    t125 = (t124 + 4U);
    t126 = (t92 + 4U);
    t127 = *((unsigned int *)t126);
    t128 = (~(t127));
    t129 = *((unsigned int *)t92);
    t130 = (t129 & t128);
    t131 = (t130 & 1U);
    if (t131 != 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t126) != 0)
        goto LAB41;

LAB42:    t133 = *((unsigned int *)t55);
    t134 = *((unsigned int *)t124);
    t135 = (t133 | t134);
    *((unsigned int *)t132) = t135;
    t136 = (t55 + 4U);
    t137 = (t124 + 4U);
    t138 = (t132 + 4U);
    t139 = *((unsigned int *)t136);
    t140 = *((unsigned int *)t137);
    t141 = (t139 | t140);
    *((unsigned int *)t138) = t141;
    t142 = *((unsigned int *)t138);
    t143 = (t142 != 0);
    if (t143 == 1)
        goto LAB43;

LAB44:
LAB45:    goto LAB24;

LAB25:    *((unsigned int *)t70) = 1;
    goto LAB28;

LAB27:    *((unsigned int *)t70) = 1;
    *((unsigned int *)t68) = 1;
    goto LAB28;

LAB29:    t81 = ((char*)((ng1)));
    t82 = ((char*)((ng2)));
    xsi_vlog_unsigned_equal(t83, 64, t81, 64, t82, 64);
    memset(t84, 0, 8);
    t85 = (t84 + 4U);
    t86 = (t83 + 4U);
    t87 = *((unsigned int *)t86);
    t88 = (~(t87));
    t89 = *((unsigned int *)t83);
    t90 = (t89 & t88);
    t91 = (t90 & 1U);
    if (t91 != 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t86) != 0)
        goto LAB34;

LAB35:    t93 = *((unsigned int *)t70);
    t94 = *((unsigned int *)t84);
    t95 = (t93 & t94);
    *((unsigned int *)t92) = t95;
    t96 = (t70 + 4U);
    t97 = (t84 + 4U);
    t98 = (t92 + 4U);
    t99 = *((unsigned int *)t96);
    t100 = *((unsigned int *)t97);
    t101 = (t99 | t100);
    *((unsigned int *)t98) = t101;
    t102 = *((unsigned int *)t98);
    t103 = (t102 != 0);
    if (t103 == 1)
        goto LAB36;

LAB37:
LAB38:    goto LAB31;

LAB32:    *((unsigned int *)t84) = 1;
    goto LAB35;

LAB34:    *((unsigned int *)t84) = 1;
    *((unsigned int *)t85) = 1;
    goto LAB35;

LAB36:    t104 = *((unsigned int *)t92);
    t105 = *((unsigned int *)t98);
    *((unsigned int *)t92) = (t104 | t105);
    t106 = (t70 + 4U);
    t107 = (t84 + 4U);
    t108 = *((unsigned int *)t70);
    t109 = (~(t108));
    t110 = *((unsigned int *)t106);
    t111 = (~(t110));
    t112 = *((unsigned int *)t84);
    t113 = (~(t112));
    t114 = *((unsigned int *)t107);
    t115 = (~(t114));
    t116 = (t109 & t111);
    t117 = (t113 & t115);
    t118 = (~(t116));
    t119 = (~(t117));
    t120 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t120 & t118);
    t121 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t121 & t119);
    t122 = *((unsigned int *)t92);
    *((unsigned int *)t92) = (t122 & t118);
    t123 = *((unsigned int *)t92);
    *((unsigned int *)t92) = (t123 & t119);
    goto LAB38;

LAB39:    *((unsigned int *)t124) = 1;
    goto LAB42;

LAB41:    *((unsigned int *)t124) = 1;
    *((unsigned int *)t125) = 1;
    goto LAB42;

LAB43:    t144 = *((unsigned int *)t132);
    t145 = *((unsigned int *)t138);
    *((unsigned int *)t132) = (t144 | t145);
    t146 = (t55 + 4U);
    t147 = (t124 + 4U);
    t148 = *((unsigned int *)t146);
    t149 = (~(t148));
    t150 = *((unsigned int *)t55);
    t151 = (t150 & t149);
    t152 = *((unsigned int *)t147);
    t153 = (~(t152));
    t154 = *((unsigned int *)t124);
    t155 = (t154 & t153);
    t156 = (~(t151));
    t157 = (~(t155));
    t158 = *((unsigned int *)t138);
    *((unsigned int *)t138) = (t158 & t156);
    t159 = *((unsigned int *)t138);
    *((unsigned int *)t138) = (t159 & t157);
    goto LAB45;

}

static void C124_1(char *t0)
{
    char t4[8];
    char t5[8];
    char t19[8];
    char t26[8];
    char t58[8];
    char t73[8];
    char t74[8];
    char t88[8];
    char t89[8];
    char t104[8];
    char t111[8];
    char t139[8];
    char t147[8];
    char t179[8];
    char t187[8];
    char t215[8];
    char t230[8];
    char t243[16];
    char t244[8];
    char t252[8];
    char t284[8];
    char t292[8];
    char *t1;
    char *t2;
    char *t3;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    int t50;
    int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    char *t72;
    char *t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    char *t87;
    char *t90;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    char *t102;
    char *t103;
    char *t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    char *t115;
    char *t116;
    char *t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    char *t125;
    char *t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    char *t140;
    char *t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    char *t151;
    char *t152;
    char *t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    char *t161;
    char *t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    int t171;
    int t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    unsigned int t178;
    char *t180;
    char *t181;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    char *t191;
    char *t192;
    char *t193;
    unsigned int t194;
    unsigned int t195;
    unsigned int t196;
    unsigned int t197;
    unsigned int t198;
    unsigned int t199;
    unsigned int t200;
    char *t201;
    char *t202;
    unsigned int t203;
    unsigned int t204;
    unsigned int t205;
    int t206;
    unsigned int t207;
    unsigned int t208;
    unsigned int t209;
    int t210;
    unsigned int t211;
    unsigned int t212;
    unsigned int t213;
    unsigned int t214;
    char *t216;
    char *t217;
    unsigned int t218;
    unsigned int t219;
    unsigned int t220;
    unsigned int t221;
    unsigned int t222;
    char *t223;
    unsigned int t224;
    unsigned int t225;
    unsigned int t226;
    unsigned int t227;
    char *t228;
    char *t229;
    char *t231;
    unsigned int t232;
    unsigned int t233;
    unsigned int t234;
    unsigned int t235;
    unsigned int t236;
    char *t237;
    unsigned int t238;
    unsigned int t239;
    unsigned int t240;
    char *t241;
    char *t242;
    char *t245;
    char *t246;
    unsigned int t247;
    unsigned int t248;
    unsigned int t249;
    unsigned int t250;
    unsigned int t251;
    unsigned int t253;
    unsigned int t254;
    unsigned int t255;
    char *t256;
    char *t257;
    char *t258;
    unsigned int t259;
    unsigned int t260;
    unsigned int t261;
    unsigned int t262;
    unsigned int t263;
    unsigned int t264;
    unsigned int t265;
    char *t266;
    char *t267;
    unsigned int t268;
    unsigned int t269;
    unsigned int t270;
    unsigned int t271;
    unsigned int t272;
    unsigned int t273;
    unsigned int t274;
    unsigned int t275;
    int t276;
    int t277;
    unsigned int t278;
    unsigned int t279;
    unsigned int t280;
    unsigned int t281;
    unsigned int t282;
    unsigned int t283;
    char *t285;
    char *t286;
    unsigned int t287;
    unsigned int t288;
    unsigned int t289;
    unsigned int t290;
    unsigned int t291;
    unsigned int t293;
    unsigned int t294;
    unsigned int t295;
    char *t296;
    char *t297;
    char *t298;
    unsigned int t299;
    unsigned int t300;
    unsigned int t301;
    unsigned int t302;
    unsigned int t303;
    unsigned int t304;
    unsigned int t305;
    char *t306;
    char *t307;
    unsigned int t308;
    unsigned int t309;
    unsigned int t310;
    int t311;
    unsigned int t312;
    unsigned int t313;
    unsigned int t314;
    int t315;
    unsigned int t316;
    unsigned int t317;
    unsigned int t318;
    unsigned int t319;
    char *t320;
    char *t321;
    char *t322;
    char *t323;
    char *t324;
    char *t325;
    unsigned int t326;
    unsigned int t327;
    char *t328;
    unsigned int t329;
    unsigned int t330;
    unsigned int t331;
    unsigned int t332;
    unsigned int t333;
    unsigned int t334;
    char *t335;

LAB0:    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 476);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t4, 0, 8);
    xsi_vlog_signed_equal(t4, 32, t3, 32, t2, 32);
    memset(t5, 0, 8);
    t6 = (t5 + 4U);
    t7 = (t4 + 4U);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t7) != 0)
        goto LAB6;

LAB7:    t13 = (t5 + 4U);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t13);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB8;

LAB9:    memcpy(t26, t5, 8);

LAB10:    memset(t58, 0, 8);
    t59 = (t58 + 4U);
    t60 = (t26 + 4U);
    t61 = *((unsigned int *)t60);
    t62 = (~(t61));
    t63 = *((unsigned int *)t26);
    t64 = (t63 & t62);
    t65 = (t64 & 1U);
    if (t65 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t60) != 0)
        goto LAB20;

LAB21:    t66 = (t58 + 4U);
    t67 = *((unsigned int *)t58);
    t68 = (!(t67));
    t69 = *((unsigned int *)t66);
    t70 = (t68 || t69);
    if (t70 > 0)
        goto LAB22;

LAB23:    memcpy(t187, t58, 8);

LAB24:    memset(t215, 0, 8);
    t216 = (t215 + 4U);
    t217 = (t187 + 4U);
    t218 = *((unsigned int *)t217);
    t219 = (~(t218));
    t220 = *((unsigned int *)t187);
    t221 = (t220 & t219);
    t222 = (t221 & 1U);
    if (t222 != 0)
        goto LAB60;

LAB61:    if (*((unsigned int *)t217) != 0)
        goto LAB62;

LAB63:    t223 = (t215 + 4U);
    t224 = *((unsigned int *)t215);
    t225 = (!(t224));
    t226 = *((unsigned int *)t223);
    t227 = (t225 || t226);
    if (t227 > 0)
        goto LAB64;

LAB65:    memcpy(t292, t215, 8);

LAB66:    t320 = (t0 + 3940);
    t321 = (t320 + 32U);
    t322 = *((char **)t321);
    t323 = (t322 + 40U);
    t324 = *((char **)t323);
    t325 = (t324 + 4U);
    t326 = 1U;
    t327 = t326;
    t328 = (t292 + 4U);
    t329 = *((unsigned int *)t292);
    t326 = (t326 & t329);
    t330 = *((unsigned int *)t328);
    t327 = (t327 & t330);
    t331 = *((unsigned int *)t324);
    *((unsigned int *)t324) = (t331 & 4294967294U);
    t332 = *((unsigned int *)t324);
    *((unsigned int *)t324) = (t332 | t326);
    t333 = *((unsigned int *)t325);
    *((unsigned int *)t325) = (t333 & 4294967294U);
    t334 = *((unsigned int *)t325);
    *((unsigned int *)t325) = (t334 | t327);
    xsi_driver_vfirst_trans(t320, 0, 0);
    t335 = (t0 + 3844);
    *((int *)t335) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t5) = 1;
    goto LAB7;

LAB6:    *((unsigned int *)t5) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB7;

LAB8:    t17 = (t0 + 1728U);
    t18 = *((char **)t17);
    memset(t19, 0, 8);
    t17 = (t19 + 4U);
    t20 = (t18 + 4U);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t18);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t20) != 0)
        goto LAB13;

LAB14:    t27 = *((unsigned int *)t5);
    t28 = *((unsigned int *)t19);
    t29 = (t27 & t28);
    *((unsigned int *)t26) = t29;
    t30 = (t5 + 4U);
    t31 = (t19 + 4U);
    t32 = (t26 + 4U);
    t33 = *((unsigned int *)t30);
    t34 = *((unsigned int *)t31);
    t35 = (t33 | t34);
    *((unsigned int *)t32) = t35;
    t36 = *((unsigned int *)t32);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB15;

LAB16:
LAB17:    goto LAB10;

LAB11:    *((unsigned int *)t19) = 1;
    goto LAB14;

LAB13:    *((unsigned int *)t19) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB14;

LAB15:    t38 = *((unsigned int *)t26);
    t39 = *((unsigned int *)t32);
    *((unsigned int *)t26) = (t38 | t39);
    t40 = (t5 + 4U);
    t41 = (t19 + 4U);
    t42 = *((unsigned int *)t5);
    t43 = (~(t42));
    t44 = *((unsigned int *)t40);
    t45 = (~(t44));
    t46 = *((unsigned int *)t19);
    t47 = (~(t46));
    t48 = *((unsigned int *)t41);
    t49 = (~(t48));
    t50 = (t43 & t45);
    t51 = (t47 & t49);
    t52 = (~(t50));
    t53 = (~(t51));
    t54 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t54 & t52);
    t55 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t55 & t53);
    t56 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t56 & t52);
    t57 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t57 & t53);
    goto LAB17;

LAB18:    *((unsigned int *)t58) = 1;
    goto LAB21;

LAB20:    *((unsigned int *)t58) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB21;

LAB22:    t71 = (t0 + 476);
    t72 = *((char **)t71);
    t71 = ((char*)((ng0)));
    memset(t73, 0, 8);
    xsi_vlog_signed_equal(t73, 32, t72, 32, t71, 32);
    memset(t74, 0, 8);
    t75 = (t74 + 4U);
    t76 = (t73 + 4U);
    t77 = *((unsigned int *)t76);
    t78 = (~(t77));
    t79 = *((unsigned int *)t73);
    t80 = (t79 & t78);
    t81 = (t80 & 1U);
    if (t81 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t76) != 0)
        goto LAB27;

LAB28:    t82 = (t74 + 4U);
    t83 = *((unsigned int *)t74);
    t84 = *((unsigned int *)t82);
    t85 = (t83 || t84);
    if (t85 > 0)
        goto LAB29;

LAB30:    memcpy(t147, t74, 8);

LAB31:    memset(t179, 0, 8);
    t180 = (t179 + 4U);
    t181 = (t147 + 4U);
    t182 = *((unsigned int *)t181);
    t183 = (~(t182));
    t184 = *((unsigned int *)t147);
    t185 = (t184 & t183);
    t186 = (t185 & 1U);
    if (t186 != 0)
        goto LAB53;

LAB54:    if (*((unsigned int *)t181) != 0)
        goto LAB55;

LAB56:    t188 = *((unsigned int *)t58);
    t189 = *((unsigned int *)t179);
    t190 = (t188 | t189);
    *((unsigned int *)t187) = t190;
    t191 = (t58 + 4U);
    t192 = (t179 + 4U);
    t193 = (t187 + 4U);
    t194 = *((unsigned int *)t191);
    t195 = *((unsigned int *)t192);
    t196 = (t194 | t195);
    *((unsigned int *)t193) = t196;
    t197 = *((unsigned int *)t193);
    t198 = (t197 != 0);
    if (t198 == 1)
        goto LAB57;

LAB58:
LAB59:    goto LAB24;

LAB25:    *((unsigned int *)t74) = 1;
    goto LAB28;

LAB27:    *((unsigned int *)t74) = 1;
    *((unsigned int *)t75) = 1;
    goto LAB28;

LAB29:    t86 = (t0 + 552);
    t87 = *((char **)t86);
    t86 = ((char*)((ng0)));
    memset(t88, 0, 8);
    xsi_vlog_signed_equal(t88, 32, t87, 32, t86, 32);
    memset(t89, 0, 8);
    t90 = (t89 + 4U);
    t91 = (t88 + 4U);
    t92 = *((unsigned int *)t91);
    t93 = (~(t92));
    t94 = *((unsigned int *)t88);
    t95 = (t94 & t93);
    t96 = (t95 & 1U);
    if (t96 != 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t91) != 0)
        goto LAB34;

LAB35:    t97 = (t89 + 4U);
    t98 = *((unsigned int *)t89);
    t99 = (!(t98));
    t100 = *((unsigned int *)t97);
    t101 = (t99 || t100);
    if (t101 > 0)
        goto LAB36;

LAB37:    memcpy(t111, t89, 8);

LAB38:    memset(t139, 0, 8);
    t140 = (t139 + 4U);
    t141 = (t111 + 4U);
    t142 = *((unsigned int *)t141);
    t143 = (~(t142));
    t144 = *((unsigned int *)t111);
    t145 = (t144 & t143);
    t146 = (t145 & 1U);
    if (t146 != 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t141) != 0)
        goto LAB48;

LAB49:    t148 = *((unsigned int *)t74);
    t149 = *((unsigned int *)t139);
    t150 = (t148 & t149);
    *((unsigned int *)t147) = t150;
    t151 = (t74 + 4U);
    t152 = (t139 + 4U);
    t153 = (t147 + 4U);
    t154 = *((unsigned int *)t151);
    t155 = *((unsigned int *)t152);
    t156 = (t154 | t155);
    *((unsigned int *)t153) = t156;
    t157 = *((unsigned int *)t153);
    t158 = (t157 != 0);
    if (t158 == 1)
        goto LAB50;

LAB51:
LAB52:    goto LAB31;

LAB32:    *((unsigned int *)t89) = 1;
    goto LAB35;

LAB34:    *((unsigned int *)t89) = 1;
    *((unsigned int *)t90) = 1;
    goto LAB35;

LAB36:    t102 = (t0 + 1816U);
    t103 = *((char **)t102);
    memset(t104, 0, 8);
    t102 = (t104 + 4U);
    t105 = (t103 + 4U);
    t106 = *((unsigned int *)t105);
    t107 = (~(t106));
    t108 = *((unsigned int *)t103);
    t109 = (t108 & t107);
    t110 = (t109 & 1U);
    if (t110 != 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t105) != 0)
        goto LAB41;

LAB42:    t112 = *((unsigned int *)t89);
    t113 = *((unsigned int *)t104);
    t114 = (t112 | t113);
    *((unsigned int *)t111) = t114;
    t115 = (t89 + 4U);
    t116 = (t104 + 4U);
    t117 = (t111 + 4U);
    t118 = *((unsigned int *)t115);
    t119 = *((unsigned int *)t116);
    t120 = (t118 | t119);
    *((unsigned int *)t117) = t120;
    t121 = *((unsigned int *)t117);
    t122 = (t121 != 0);
    if (t122 == 1)
        goto LAB43;

LAB44:
LAB45:    goto LAB38;

LAB39:    *((unsigned int *)t104) = 1;
    goto LAB42;

LAB41:    *((unsigned int *)t104) = 1;
    *((unsigned int *)t102) = 1;
    goto LAB42;

LAB43:    t123 = *((unsigned int *)t111);
    t124 = *((unsigned int *)t117);
    *((unsigned int *)t111) = (t123 | t124);
    t125 = (t89 + 4U);
    t126 = (t104 + 4U);
    t127 = *((unsigned int *)t125);
    t128 = (~(t127));
    t129 = *((unsigned int *)t89);
    t130 = (t129 & t128);
    t131 = *((unsigned int *)t126);
    t132 = (~(t131));
    t133 = *((unsigned int *)t104);
    t134 = (t133 & t132);
    t135 = (~(t130));
    t136 = (~(t134));
    t137 = *((unsigned int *)t117);
    *((unsigned int *)t117) = (t137 & t135);
    t138 = *((unsigned int *)t117);
    *((unsigned int *)t117) = (t138 & t136);
    goto LAB45;

LAB46:    *((unsigned int *)t139) = 1;
    goto LAB49;

LAB48:    *((unsigned int *)t139) = 1;
    *((unsigned int *)t140) = 1;
    goto LAB49;

LAB50:    t159 = *((unsigned int *)t147);
    t160 = *((unsigned int *)t153);
    *((unsigned int *)t147) = (t159 | t160);
    t161 = (t74 + 4U);
    t162 = (t139 + 4U);
    t163 = *((unsigned int *)t74);
    t164 = (~(t163));
    t165 = *((unsigned int *)t161);
    t166 = (~(t165));
    t167 = *((unsigned int *)t139);
    t168 = (~(t167));
    t169 = *((unsigned int *)t162);
    t170 = (~(t169));
    t171 = (t164 & t166);
    t172 = (t168 & t170);
    t173 = (~(t171));
    t174 = (~(t172));
    t175 = *((unsigned int *)t153);
    *((unsigned int *)t153) = (t175 & t173);
    t176 = *((unsigned int *)t153);
    *((unsigned int *)t153) = (t176 & t174);
    t177 = *((unsigned int *)t147);
    *((unsigned int *)t147) = (t177 & t173);
    t178 = *((unsigned int *)t147);
    *((unsigned int *)t147) = (t178 & t174);
    goto LAB52;

LAB53:    *((unsigned int *)t179) = 1;
    goto LAB56;

LAB55:    *((unsigned int *)t179) = 1;
    *((unsigned int *)t180) = 1;
    goto LAB56;

LAB57:    t199 = *((unsigned int *)t187);
    t200 = *((unsigned int *)t193);
    *((unsigned int *)t187) = (t199 | t200);
    t201 = (t58 + 4U);
    t202 = (t179 + 4U);
    t203 = *((unsigned int *)t201);
    t204 = (~(t203));
    t205 = *((unsigned int *)t58);
    t206 = (t205 & t204);
    t207 = *((unsigned int *)t202);
    t208 = (~(t207));
    t209 = *((unsigned int *)t179);
    t210 = (t209 & t208);
    t211 = (~(t206));
    t212 = (~(t210));
    t213 = *((unsigned int *)t193);
    *((unsigned int *)t193) = (t213 & t211);
    t214 = *((unsigned int *)t193);
    *((unsigned int *)t193) = (t214 & t212);
    goto LAB59;

LAB60:    *((unsigned int *)t215) = 1;
    goto LAB63;

LAB62:    *((unsigned int *)t215) = 1;
    *((unsigned int *)t216) = 1;
    goto LAB63;

LAB64:    t228 = (t0 + 628);
    t229 = *((char **)t228);
    memset(t230, 0, 8);
    t228 = (t230 + 4U);
    t231 = (t229 + 4U);
    t232 = *((unsigned int *)t231);
    t233 = (~(t232));
    t234 = *((unsigned int *)t229);
    t235 = (t234 & t233);
    t236 = (t235 & 4294967295U);
    if (t236 != 0)
        goto LAB67;

LAB68:    if (*((unsigned int *)t231) != 0)
        goto LAB69;

LAB70:    t237 = (t230 + 4U);
    t238 = *((unsigned int *)t230);
    t239 = *((unsigned int *)t237);
    t240 = (t238 || t239);
    if (t240 > 0)
        goto LAB71;

LAB72:    memcpy(t252, t230, 8);

LAB73:    memset(t284, 0, 8);
    t285 = (t284 + 4U);
    t286 = (t252 + 4U);
    t287 = *((unsigned int *)t286);
    t288 = (~(t287));
    t289 = *((unsigned int *)t252);
    t290 = (t289 & t288);
    t291 = (t290 & 1U);
    if (t291 != 0)
        goto LAB81;

LAB82:    if (*((unsigned int *)t286) != 0)
        goto LAB83;

LAB84:    t293 = *((unsigned int *)t215);
    t294 = *((unsigned int *)t284);
    t295 = (t293 | t294);
    *((unsigned int *)t292) = t295;
    t296 = (t215 + 4U);
    t297 = (t284 + 4U);
    t298 = (t292 + 4U);
    t299 = *((unsigned int *)t296);
    t300 = *((unsigned int *)t297);
    t301 = (t299 | t300);
    *((unsigned int *)t298) = t301;
    t302 = *((unsigned int *)t298);
    t303 = (t302 != 0);
    if (t303 == 1)
        goto LAB85;

LAB86:
LAB87:    goto LAB66;

LAB67:    *((unsigned int *)t230) = 1;
    goto LAB70;

LAB69:    *((unsigned int *)t230) = 1;
    *((unsigned int *)t228) = 1;
    goto LAB70;

LAB71:    t241 = ((char*)((ng1)));
    t242 = ((char*)((ng2)));
    xsi_vlog_unsigned_equal(t243, 64, t241, 64, t242, 64);
    memset(t244, 0, 8);
    t245 = (t244 + 4U);
    t246 = (t243 + 4U);
    t247 = *((unsigned int *)t246);
    t248 = (~(t247));
    t249 = *((unsigned int *)t243);
    t250 = (t249 & t248);
    t251 = (t250 & 1U);
    if (t251 != 0)
        goto LAB74;

LAB75:    if (*((unsigned int *)t246) != 0)
        goto LAB76;

LAB77:    t253 = *((unsigned int *)t230);
    t254 = *((unsigned int *)t244);
    t255 = (t253 & t254);
    *((unsigned int *)t252) = t255;
    t256 = (t230 + 4U);
    t257 = (t244 + 4U);
    t258 = (t252 + 4U);
    t259 = *((unsigned int *)t256);
    t260 = *((unsigned int *)t257);
    t261 = (t259 | t260);
    *((unsigned int *)t258) = t261;
    t262 = *((unsigned int *)t258);
    t263 = (t262 != 0);
    if (t263 == 1)
        goto LAB78;

LAB79:
LAB80:    goto LAB73;

LAB74:    *((unsigned int *)t244) = 1;
    goto LAB77;

LAB76:    *((unsigned int *)t244) = 1;
    *((unsigned int *)t245) = 1;
    goto LAB77;

LAB78:    t264 = *((unsigned int *)t252);
    t265 = *((unsigned int *)t258);
    *((unsigned int *)t252) = (t264 | t265);
    t266 = (t230 + 4U);
    t267 = (t244 + 4U);
    t268 = *((unsigned int *)t230);
    t269 = (~(t268));
    t270 = *((unsigned int *)t266);
    t271 = (~(t270));
    t272 = *((unsigned int *)t244);
    t273 = (~(t272));
    t274 = *((unsigned int *)t267);
    t275 = (~(t274));
    t276 = (t269 & t271);
    t277 = (t273 & t275);
    t278 = (~(t276));
    t279 = (~(t277));
    t280 = *((unsigned int *)t258);
    *((unsigned int *)t258) = (t280 & t278);
    t281 = *((unsigned int *)t258);
    *((unsigned int *)t258) = (t281 & t279);
    t282 = *((unsigned int *)t252);
    *((unsigned int *)t252) = (t282 & t278);
    t283 = *((unsigned int *)t252);
    *((unsigned int *)t252) = (t283 & t279);
    goto LAB80;

LAB81:    *((unsigned int *)t284) = 1;
    goto LAB84;

LAB83:    *((unsigned int *)t284) = 1;
    *((unsigned int *)t285) = 1;
    goto LAB84;

LAB85:    t304 = *((unsigned int *)t292);
    t305 = *((unsigned int *)t298);
    *((unsigned int *)t292) = (t304 | t305);
    t306 = (t215 + 4U);
    t307 = (t284 + 4U);
    t308 = *((unsigned int *)t306);
    t309 = (~(t308));
    t310 = *((unsigned int *)t215);
    t311 = (t310 & t309);
    t312 = *((unsigned int *)t307);
    t313 = (~(t312));
    t314 = *((unsigned int *)t284);
    t315 = (t314 & t313);
    t316 = (~(t311));
    t317 = (~(t315));
    t318 = *((unsigned int *)t298);
    *((unsigned int *)t298) = (t318 & t316);
    t319 = *((unsigned int *)t298);
    *((unsigned int *)t298) = (t319 & t317);
    goto LAB87;

}

static void C129_2(char *t0)
{
    char t4[8];
    char t5[8];
    char t19[8];
    char t26[8];
    char *t1;
    char *t2;
    char *t3;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    int t50;
    int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;

LAB0:    t1 = (t0 + 3400U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 324);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t4, 0, 8);
    xsi_vlog_signed_equal(t4, 32, t3, 32, t2, 32);
    memset(t5, 0, 8);
    t6 = (t5 + 4U);
    t7 = (t4 + 4U);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t7) != 0)
        goto LAB6;

LAB7:    t13 = (t5 + 4U);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t13);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB8;

LAB9:    memcpy(t26, t5, 8);

LAB10:    t58 = (t0 + 3976);
    t59 = (t58 + 32U);
    t60 = *((char **)t59);
    t61 = (t60 + 40U);
    t62 = *((char **)t61);
    t63 = (t62 + 4U);
    t64 = 1U;
    t65 = t64;
    t66 = (t26 + 4U);
    t67 = *((unsigned int *)t26);
    t64 = (t64 & t67);
    t68 = *((unsigned int *)t66);
    t65 = (t65 & t68);
    t69 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t69 & 4294967294U);
    t70 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t70 | t64);
    t71 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t71 & 4294967294U);
    t72 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t72 | t65);
    xsi_driver_vfirst_trans(t58, 0, 0);
    t73 = (t0 + 3852);
    *((int *)t73) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t5) = 1;
    goto LAB7;

LAB6:    *((unsigned int *)t5) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB7;

LAB8:    t17 = (t0 + 1640U);
    t18 = *((char **)t17);
    memset(t19, 0, 8);
    t17 = (t19 + 4U);
    t20 = (t18 + 4U);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t18);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t20) != 0)
        goto LAB13;

LAB14:    t27 = *((unsigned int *)t5);
    t28 = *((unsigned int *)t19);
    t29 = (t27 & t28);
    *((unsigned int *)t26) = t29;
    t30 = (t5 + 4U);
    t31 = (t19 + 4U);
    t32 = (t26 + 4U);
    t33 = *((unsigned int *)t30);
    t34 = *((unsigned int *)t31);
    t35 = (t33 | t34);
    *((unsigned int *)t32) = t35;
    t36 = *((unsigned int *)t32);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB15;

LAB16:
LAB17:    goto LAB10;

LAB11:    *((unsigned int *)t19) = 1;
    goto LAB14;

LAB13:    *((unsigned int *)t19) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB14;

LAB15:    t38 = *((unsigned int *)t26);
    t39 = *((unsigned int *)t32);
    *((unsigned int *)t26) = (t38 | t39);
    t40 = (t5 + 4U);
    t41 = (t19 + 4U);
    t42 = *((unsigned int *)t5);
    t43 = (~(t42));
    t44 = *((unsigned int *)t40);
    t45 = (~(t44));
    t46 = *((unsigned int *)t19);
    t47 = (~(t46));
    t48 = *((unsigned int *)t41);
    t49 = (~(t48));
    t50 = (t43 & t45);
    t51 = (t47 & t49);
    t52 = (~(t50));
    t53 = (~(t51));
    t54 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t54 & t52);
    t55 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t55 & t53);
    t56 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t56 & t52);
    t57 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t57 & t53);
    goto LAB17;

}

static void I134_3(char *t0)
{
    char t1[8];
    char t6[16];
    char t7[8];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;

LAB0:
LAB2:    t2 = (t0 + 2576);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t0 + 2668);
    *((int *)t7) = xsi_vlogfile_sscanf(t4, 512, ng4, 2, t0, (char)118, t6, 64);
    t8 = (t7 + 4);
    *((int *)t8) = 0;
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 64);
    memset(t1, 0, 8);
    t9 = (t1 + 4U);
    t10 = (t7 + 4U);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t7);
    t14 = (t13 & t12);
    t15 = (t14 & 4294967295U);
    if (t15 != 0)
        goto LAB6;

LAB4:    if (*((unsigned int *)t10) == 0)
        goto LAB3;

LAB5:    *((unsigned int *)t1) = 1;
    *((unsigned int *)t9) = 1;

LAB6:    t16 = (t1 + 4U);
    t17 = *((unsigned int *)t16);
    t18 = (~(t17));
    t19 = *((unsigned int *)t1);
    t20 = (t19 & t18);
    t21 = (t20 != 0);
    if (t21 > 0)
        goto LAB7;

LAB8:
LAB9:    t2 = (t0 + 2668);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t0 + 2392);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 64);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2668);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    xsi_vlog_mul_concat(t6, 64, 64, t2, 1U, t5, 64);
    t8 = (t0 + 2484);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 2);

LAB1:    return;
LAB3:    *((unsigned int *)t1) = 1;
    goto LAB6;

LAB7:
LAB10:    t22 = ((char*)((ng5)));
    t23 = (t0 + 2668);
    xsi_vlogvar_assign_value(t23, t22, 0, 0, 64);
    goto LAB9;

}

static void A147_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 3656U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 3860);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t3 = (t0 + 1904U);
    t4 = *((char **)t3);
    t3 = (t0 + 2392);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 64);
    goto LAB2;

}


extern void xilinxcorelib_ver_m_00000000002050205129_0451882537_init()
{
	static char *pe[] = {(void *)C117_0,(void *)C124_1,(void *)C129_2,(void *)I134_3,(void *)A147_4};
	xsi_register_didat("xilinxcorelib_ver_m_00000000002050205129_0451882537", "isim/_tmp/xilinxcorelib_ver/m_00000000002050205129_0451882537.didat");
	xsi_register_executes(pe);
}

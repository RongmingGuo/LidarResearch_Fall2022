/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:11:17 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_VectorNav_to_LeftToeBottom_src.h"

#ifdef _MSC_VER
  #define INLINE __forceinline /* use __forceinline (VC++ specific) */
#else
  #define INLINE static __inline__        /* use standard inline */
#endif

/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
INLINE double Power(double x, double y) { return pow(x, y); }
INLINE double Sqrt(double x) { return sqrt(x); }

INLINE double Abs(double x) { return fabs(x); }

INLINE double Exp(double x) { return exp(x); }
INLINE double Log(double x) { return log(x); }

INLINE double Sin(double x) { return sin(x); }
INLINE double Cos(double x) { return cos(x); }
INLINE double Tan(double x) { return tan(x); }

INLINE double Csc(double x) { return 1.0/sin(x); }
INLINE double Sec(double x) { return 1.0/cos(x); }

INLINE double ArcSin(double x) { return asin(x); }
INLINE double ArcCos(double x) { return acos(x); }

/* update ArcTan function to use atan2 instead. */
INLINE double ArcTan(double x, double y) { return atan2(y,x); }

INLINE double Sinh(double x) { return sinh(x); }
INLINE double Cosh(double x) { return cosh(x); }
INLINE double Tanh(double x) { return tanh(x); }

#define E 2.71828182845904523536029
#define Pi 3.14159265358979323846264
#define Degree 0.01745329251994329576924

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1)
{
  double t248;
  double t446;
  double t703;
  double t891;
  double t985;
  double t995;
  double t1137;
  double t1372;
  double t1659;
  double t1666;
  double t1706;
  double t1914;
  double t2055;
  double t2071;
  double t2133;
  double t2302;
  double t2378;
  double t2386;
  double t2432;
  double t2437;
  double t2444;
  double t2487;
  double t2598;
  double t2616;
  double t2631;
  double t2783;
  double t2829;
  double t2840;
  double t3058;
  double t3068;
  double t3088;
  double t3265;
  double t3376;
  double t3380;
  double t3400;
  double t3533;
  double t3588;
  double t3627;
  double t3824;
  double t3832;
  double t3844;
  double t3868;
  double t4013;
  double t4018;
  double t4038;
  double t4190;
  double t4349;
  double t4354;
  double t511;
  double t562;
  double t680;
  double t719;
  double t729;
  double t1014;
  double t1196;
  double t1272;
  double t1471;
  double t1534;
  double t1537;
  double t1880;
  double t1963;
  double t1964;
  double t2193;
  double t2236;
  double t2238;
  double t2450;
  double t2501;
  double t2564;
  double t4704;
  double t4716;
  double t4720;
  double t4755;
  double t4814;
  double t4819;
  double t2679;
  double t2705;
  double t2782;
  double t3159;
  double t3277;
  double t3299;
  double t4836;
  double t4847;
  double t4853;
  double t4867;
  double t4878;
  double t4925;
  double t3456;
  double t3486;
  double t3496;
  double t3850;
  double t3911;
  double t3933;
  double t4964;
  double t4987;
  double t5065;
  double t5118;
  double t5149;
  double t5162;
  double t4071;
  double t4110;
  double t4125;
  double t5207;
  double t5215;
  double t5230;
  double t5330;
  double t5354;
  double t5359;
  double t5586;
  double t5599;
  double t5627;
  double t5671;
  double t5719;
  double t5760;
  double t5805;
  double t5814;
  double t5841;
  double t5899;
  double t5908;
  double t5915;
  double t5942;
  double t6051;
  double t6064;
  double t6101;
  double t6108;
  double t6136;
  double t6449;
  double t6454;
  double t6455;
  double t6465;
  double t6466;
  double t6475;
  double t6489;
  double t6496;
  double t6501;
  double t6542;
  double t6548;
  double t6556;
  double t6573;
  double t6585;
  double t6614;
  double t6626;
  double t6627;
  double t6662;
  double t6367;
  double t6371;
  double t6383;
  double t6792;
  double t6799;
  double t6802;
  double t6806;
  double t6809;
  double t6811;
  double t6835;
  double t6875;
  double t6878;
  double t6894;
  double t6897;
  double t6899;
  double t6935;
  double t6943;
  double t6946;
  double t6950;
  double t6959;
  double t6960;
  double t7076;
  double t7080;
  double t7087;
  double t7097;
  double t7100;
  double t7102;
  double t7123;
  double t7135;
  double t7141;
  double t7150;
  double t7152;
  double t7164;
  double t7175;
  double t7176;
  double t7180;
  double t7183;
  double t7185;
  double t7189;
  double t7053;
  double t7056;
  double t7057;
  double t7273;
  double t7274;
  double t7286;
  double t7313;
  double t7325;
  double t7342;
  double t7345;
  double t7367;
  double t7378;
  double t7400;
  double t7410;
  double t7419;
  double t7435;
  double t7438;
  double t7473;
  double t7479;
  double t7487;
  double t7508;
  double t7511;
  double t7524;
  double t7234;
  double t7237;
  double t7582;
  double t7590;
  double t7591;
  double t7596;
  double t7597;
  double t7601;
  double t7612;
  double t7618;
  double t7631;
  double t7635;
  double t7638;
  double t7658;
  double t7674;
  double t7680;
  double t7696;
  double t7702;
  double t7714;
  double t7736;
  double t7739;
  double t7744;
  double t7094;
  double t7115;
  double t7143;
  double t7173;
  double t7182;
  double t7193;
  double t7194;
  double t7196;
  double t7199;
  double t7200;
  double t7202;
  double t7211;
  double t7216;
  double t7219;
  double t7788;
  double t7800;
  double t7804;
  double t7810;
  double t7812;
  double t7838;
  double t7850;
  double t7862;
  double t7868;
  double t7877;
  double t7893;
  double t7894;
  double t7899;
  double t7901;
  double t7907;
  double t7919;
  double t7943;
  double t7961;
  double t8004;
  double t8016;
  double t8019;
  double t8049;
  double t8064;
  double t8075;
  double t8078;
  double t8086;
  double t8088;
  double t8091;
  double t8094;
  double t8122;
  double t8123;
  double t8137;
  double t8142;
  double t8143;
  double t8145;
  double t8147;
  double t8153;
  double t8209;
  double t8223;
  double t8237;
  double t8245;
  double t8249;
  double t8264;
  double t8266;
  double t8274;
  double t8281;
  double t8284;
  double t8288;
  double t8293;
  double t8294;
  double t8187;
  double t8190;
  double t8201;
  double t8203;
  double t8207;
  double t8365;
  double t8371;
  double t8384;
  double t8388;
  double t8392;
  double t8406;
  double t8408;
  double t8471;
  double t8477;
  double t8481;
  double t8489;
  double t8492;
  double t8495;
  double t8503;
  double t8509;
  double t8511;
  double t8520;
  double t8530;
  double t8532;
  double t8538;
  double t8592;
  double t8594;
  double t8598;
  double t8609;
  double t8620;
  double t8625;
  double t8626;
  double t8583;
  double t8588;
  double t8589;
  double t8601;
  double t8602;
  double t8674;
  double t8678;
  double t5424;
  double t8725;
  double t8732;
  double t8735;
  double t8752;
  double t8753;
  double t8758;
  double t8763;
  double t8637;
  double t8829;
  double t8830;
  double t8840;
  double t8653;
  double t8817;
  double t8819;
  double t8821;
  double t8826;
  double t8827;
  double t8690;
  double t5435;
  double t5456;
  double t8775;
  double t8877;
  double t8878;
  double t8884;
  double t8785;
  t248 = Sin(var1[0]);
  t446 = Cos(var1[1]);
  t703 = Sin(var1[1]);
  t891 = Cos(var1[2]);
  t985 = -1.*t891;
  t995 = 1. + t985;
  t1137 = Sin(var1[2]);
  t1372 = Cos(var1[0]);
  t1659 = Cos(var1[3]);
  t1666 = -1.*t1659;
  t1706 = 1. + t1666;
  t1914 = Sin(var1[3]);
  t2055 = -1.*t891*t248*t703;
  t2071 = -1.*t1372*t1137;
  t2133 = t2055 + t2071;
  t2302 = -1.*t1372*t891;
  t2378 = t248*t703*t1137;
  t2386 = t2302 + t2378;
  t2432 = Cos(var1[4]);
  t2437 = -1.*t2432;
  t2444 = 1. + t2437;
  t2487 = Sin(var1[4]);
  t2598 = -1.*t1914*t2133;
  t2616 = t1659*t2386;
  t2631 = t2598 + t2616;
  t2783 = t1659*t2133;
  t2829 = t1914*t2386;
  t2840 = t2783 + t2829;
  t3058 = Cos(var1[5]);
  t3068 = -1.*t3058;
  t3088 = 1. + t3068;
  t3265 = Sin(var1[5]);
  t3376 = t2487*t2631;
  t3380 = t2432*t2840;
  t3400 = t3376 + t3380;
  t3533 = t2432*t2631;
  t3588 = -1.*t2487*t2840;
  t3627 = t3533 + t3588;
  t3824 = Cos(var1[6]);
  t3832 = -1.*t3824;
  t3844 = 1. + t3832;
  t3868 = Sin(var1[6]);
  t4013 = -1.*t3265*t3400;
  t4018 = t3058*t3627;
  t4038 = t4013 + t4018;
  t4190 = t3058*t3400;
  t4349 = t3265*t3627;
  t4354 = t4190 + t4349;
  t511 = -1.*t446;
  t562 = 1. + t511;
  t680 = 0.135*t562;
  t719 = 0.049*t703;
  t729 = 0. + t680 + t719;
  t1014 = -0.049*t995;
  t1196 = -0.09*t1137;
  t1272 = 0. + t1014 + t1196;
  t1471 = -0.09*t995;
  t1534 = 0.049*t1137;
  t1537 = 0. + t1471 + t1534;
  t1880 = -0.049*t1706;
  t1963 = -0.21*t1914;
  t1964 = 0. + t1880 + t1963;
  t2193 = -0.21*t1706;
  t2236 = 0.049*t1914;
  t2238 = 0. + t2193 + t2236;
  t2450 = -0.2707*t2444;
  t2501 = 0.0016*t2487;
  t2564 = 0. + t2450 + t2501;
  t4704 = t1372*t891*t703;
  t4716 = -1.*t248*t1137;
  t4720 = t4704 + t4716;
  t4755 = -1.*t891*t248;
  t4814 = -1.*t1372*t703*t1137;
  t4819 = t4755 + t4814;
  t2679 = -0.0016*t2444;
  t2705 = -0.2707*t2487;
  t2782 = 0. + t2679 + t2705;
  t3159 = 0.0184*t3088;
  t3277 = -0.7055*t3265;
  t3299 = 0. + t3159 + t3277;
  t4836 = -1.*t1914*t4720;
  t4847 = t1659*t4819;
  t4853 = t4836 + t4847;
  t4867 = t1659*t4720;
  t4878 = t1914*t4819;
  t4925 = t4867 + t4878;
  t3456 = -0.7055*t3088;
  t3486 = -0.0184*t3265;
  t3496 = 0. + t3456 + t3486;
  t3850 = -1.1135*t3844;
  t3911 = 0.0216*t3868;
  t3933 = 0. + t3850 + t3911;
  t4964 = t2487*t4853;
  t4987 = t2432*t4925;
  t5065 = t4964 + t4987;
  t5118 = t2432*t4853;
  t5149 = -1.*t2487*t4925;
  t5162 = t5118 + t5149;
  t4071 = -0.0216*t3844;
  t4110 = -1.1135*t3868;
  t4125 = 0. + t4071 + t4110;
  t5207 = -1.*t3265*t5065;
  t5215 = t3058*t5162;
  t5230 = t5207 + t5215;
  t5330 = t3058*t5065;
  t5354 = t3265*t5162;
  t5359 = t5330 + t5354;
  t5586 = t891*t1914*t703;
  t5599 = t1659*t703*t1137;
  t5627 = t5586 + t5599;
  t5671 = -1.*t1659*t891*t703;
  t5719 = t1914*t703*t1137;
  t5760 = t5671 + t5719;
  t5805 = t2487*t5627;
  t5814 = t2432*t5760;
  t5841 = t5805 + t5814;
  t5899 = t2432*t5627;
  t5908 = -1.*t2487*t5760;
  t5915 = t5899 + t5908;
  t5942 = -1.*t3265*t5841;
  t6051 = t3058*t5915;
  t6064 = t5942 + t6051;
  t6101 = t3058*t5841;
  t6108 = t3265*t5915;
  t6136 = t6101 + t6108;
  t6449 = -1.*t1372*t446*t891*t1914;
  t6454 = -1.*t1659*t1372*t446*t1137;
  t6455 = t6449 + t6454;
  t6465 = t1659*t1372*t446*t891;
  t6466 = -1.*t1372*t446*t1914*t1137;
  t6475 = t6465 + t6466;
  t6489 = t2487*t6455;
  t6496 = t2432*t6475;
  t6501 = t6489 + t6496;
  t6542 = t2432*t6455;
  t6548 = -1.*t2487*t6475;
  t6556 = t6542 + t6548;
  t6573 = -1.*t3265*t6501;
  t6585 = t3058*t6556;
  t6614 = t6573 + t6585;
  t6626 = t3058*t6501;
  t6627 = t3265*t6556;
  t6662 = t6626 + t6627;
  t6367 = 0.049*t446;
  t6371 = 0.135*t703;
  t6383 = t6367 + t6371;
  t6792 = -1.*t446*t891*t1914*t248;
  t6799 = -1.*t1659*t446*t248*t1137;
  t6802 = t6792 + t6799;
  t6806 = t1659*t446*t891*t248;
  t6809 = -1.*t446*t1914*t248*t1137;
  t6811 = t6806 + t6809;
  t6835 = t2487*t6802;
  t6875 = t2432*t6811;
  t6878 = t6835 + t6875;
  t6894 = t2432*t6802;
  t6897 = -1.*t2487*t6811;
  t6899 = t6894 + t6897;
  t6935 = -1.*t3265*t6878;
  t6943 = t3058*t6899;
  t6946 = t6935 + t6943;
  t6950 = t3058*t6878;
  t6959 = t3265*t6899;
  t6960 = t6950 + t6959;
  t7076 = -1.*t446*t891*t1914;
  t7080 = -1.*t1659*t446*t1137;
  t7087 = t7076 + t7080;
  t7097 = -1.*t1659*t446*t891;
  t7100 = t446*t1914*t1137;
  t7102 = t7097 + t7100;
  t7123 = -1.*t2487*t7087;
  t7135 = t2432*t7102;
  t7141 = t7123 + t7135;
  t7150 = t2432*t7087;
  t7152 = t2487*t7102;
  t7164 = t7150 + t7152;
  t7175 = t3265*t7141;
  t7176 = t3058*t7164;
  t7180 = t7175 + t7176;
  t7183 = t3058*t7141;
  t7185 = -1.*t3265*t7164;
  t7189 = t7183 + t7185;
  t7053 = -0.09*t891;
  t7056 = -0.049*t1137;
  t7057 = t7053 + t7056;
  t7273 = -1.*t1372*t891*t703;
  t7274 = t248*t1137;
  t7286 = t7273 + t7274;
  t7313 = t1914*t7286;
  t7325 = t7313 + t4847;
  t7342 = t1659*t7286;
  t7345 = -1.*t1914*t4819;
  t7367 = t7342 + t7345;
  t7378 = -1.*t2487*t7325;
  t7400 = t2432*t7367;
  t7410 = t7378 + t7400;
  t7419 = t2432*t7325;
  t7435 = t2487*t7367;
  t7438 = t7419 + t7435;
  t7473 = t3265*t7410;
  t7479 = t3058*t7438;
  t7487 = t7473 + t7479;
  t7508 = t3058*t7410;
  t7511 = -1.*t3265*t7438;
  t7524 = t7508 + t7511;
  t7234 = 0.049*t891;
  t7237 = t7234 + t1196;
  t7582 = t1372*t891;
  t7590 = -1.*t248*t703*t1137;
  t7591 = t7582 + t7590;
  t7596 = t1914*t2133;
  t7597 = t1659*t7591;
  t7601 = t7596 + t7597;
  t7612 = -1.*t1914*t7591;
  t7618 = t2783 + t7612;
  t7631 = -1.*t2487*t7601;
  t7635 = t2432*t7618;
  t7638 = t7631 + t7635;
  t7658 = t2432*t7601;
  t7674 = t2487*t7618;
  t7680 = t7658 + t7674;
  t7696 = t3265*t7638;
  t7702 = t3058*t7680;
  t7714 = t7696 + t7702;
  t7736 = t3058*t7638;
  t7739 = -1.*t3265*t7680;
  t7744 = t7736 + t7739;
  t7094 = t2782*t7087;
  t7115 = t2564*t7102;
  t7143 = t3496*t7141;
  t7173 = t3299*t7164;
  t7182 = t4125*t7180;
  t7193 = t3933*t7189;
  t7194 = -1.*t3868*t7180;
  t7196 = t3824*t7189;
  t7199 = t7194 + t7196;
  t7200 = -1.1312*t7199;
  t7202 = t3824*t7180;
  t7211 = t3868*t7189;
  t7216 = t7202 + t7211;
  t7219 = 0.0306*t7216;
  t7788 = -0.21*t1659;
  t7800 = -0.049*t1914;
  t7804 = t7788 + t7800;
  t7810 = 0.049*t1659;
  t7812 = t7810 + t1963;
  t7838 = -1.*t1659*t4720;
  t7850 = t7838 + t7345;
  t7862 = -1.*t2487*t4853;
  t7868 = t2432*t7850;
  t7877 = t7862 + t7868;
  t7893 = t2487*t7850;
  t7894 = t5118 + t7893;
  t7899 = t3265*t7877;
  t7901 = t3058*t7894;
  t7907 = t7899 + t7901;
  t7919 = t3058*t7877;
  t7943 = -1.*t3265*t7894;
  t7961 = t7919 + t7943;
  t8004 = t891*t248*t703;
  t8016 = t1372*t1137;
  t8019 = t8004 + t8016;
  t8049 = -1.*t1914*t8019;
  t8064 = t8049 + t7597;
  t8075 = -1.*t1659*t8019;
  t8078 = t8075 + t7612;
  t8086 = -1.*t2487*t8064;
  t8088 = t2432*t8078;
  t8091 = t8086 + t8088;
  t8094 = t2432*t8064;
  t8122 = t2487*t8078;
  t8123 = t8094 + t8122;
  t8137 = t3265*t8091;
  t8142 = t3058*t8123;
  t8143 = t8137 + t8142;
  t8145 = t3058*t8091;
  t8147 = -1.*t3265*t8123;
  t8153 = t8145 + t8147;
  t8209 = t1659*t446*t891;
  t8223 = -1.*t446*t1914*t1137;
  t8237 = t8209 + t8223;
  t8245 = -1.*t2432*t8237;
  t8249 = t7123 + t8245;
  t8264 = -1.*t2487*t8237;
  t8266 = t7150 + t8264;
  t8274 = t3265*t8249;
  t8281 = t3058*t8266;
  t8284 = t8274 + t8281;
  t8288 = t3058*t8249;
  t8293 = -1.*t3265*t8266;
  t8294 = t8288 + t8293;
  t8187 = 0.0016*t2432;
  t8190 = t8187 + t2705;
  t8201 = -0.2707*t2432;
  t8203 = -0.0016*t2487;
  t8207 = t8201 + t8203;
  t8365 = -1.*t2432*t4925;
  t8371 = t7862 + t8365;
  t8384 = t3265*t8371;
  t8388 = t8384 + t5215;
  t8392 = t3058*t8371;
  t8406 = -1.*t3265*t5162;
  t8408 = t8392 + t8406;
  t8471 = t1659*t8019;
  t8477 = t1914*t7591;
  t8481 = t8471 + t8477;
  t8489 = -1.*t2432*t8481;
  t8492 = t8086 + t8489;
  t8495 = -1.*t2487*t8481;
  t8503 = t8094 + t8495;
  t8509 = t3265*t8492;
  t8511 = t3058*t8503;
  t8520 = t8509 + t8511;
  t8530 = t3058*t8492;
  t8532 = -1.*t3265*t8503;
  t8538 = t8530 + t8532;
  t8592 = t2487*t7087;
  t8594 = t2432*t8237;
  t8598 = t8592 + t8594;
  t8609 = -1.*t3265*t8598;
  t8620 = t8609 + t8281;
  t8625 = -1.*t3058*t8598;
  t8626 = t8625 + t8293;
  t8583 = -0.7055*t3058;
  t8588 = 0.0184*t3265;
  t8589 = t8583 + t8588;
  t8601 = -0.0184*t3058;
  t8602 = t8601 + t3277;
  t8674 = -1.*t3058*t5065;
  t8678 = t8674 + t8406;
  t5424 = t3824*t5230;
  t8725 = t2487*t8064;
  t8732 = t2432*t8481;
  t8735 = t8725 + t8732;
  t8752 = -1.*t3265*t8735;
  t8753 = t8752 + t8511;
  t8758 = -1.*t3058*t8735;
  t8763 = t8758 + t8532;
  t8637 = -1.*t3868*t8620;
  t8829 = t3058*t8598;
  t8830 = t3265*t8266;
  t8840 = t8829 + t8830;
  t8653 = t3824*t8620;
  t8817 = 0.0216*t3824;
  t8819 = t8817 + t4110;
  t8821 = -1.1135*t3824;
  t8826 = -0.0216*t3868;
  t8827 = t8821 + t8826;
  t8690 = -1.*t3868*t5230;
  t5435 = -1.*t3868*t5359;
  t5456 = t5424 + t5435;
  t8775 = -1.*t3868*t8753;
  t8877 = t3058*t8735;
  t8878 = t3265*t8503;
  t8884 = t8877 + t8878;
  t8785 = t3824*t8753;
  p_output1[0]=0;
  p_output1[1]=-1.*t1372*t1537 + t1964*t2133 + t2238*t2386 + 0.135*t248 + t2564*t2631 + t2782*t2840 + t3299*t3400 + t3496*t3627 + t3933*t4038 + t4125*t4354 + 0.0306*(t3868*t4038 + t3824*t4354) - 1.1312*(t3824*t4038 - 1.*t3868*t4354) - 0.1305*t248*t446 - 1.*t1272*t248*t703 - 1.*t248*t729;
  p_output1[2]=-0.135*t1372 - 1.*t1537*t248 + 0.1305*t1372*t446 + t1964*t4720 + t2238*t4819 + t2564*t4853 + t2782*t4925 + t3299*t5065 + t3496*t5162 + t3933*t5230 + t4125*t5359 + 0.0306*(t3868*t5230 + t3824*t5359) - 1.1312*t5456 + t1272*t1372*t703 + t1372*t729;
  p_output1[3]=0.004500000000000004*t446 + t2564*t5627 + t2782*t5760 + t3299*t5841 + t3496*t5915 + t3933*t6064 + t4125*t6136 + 0.0306*(t3868*t6064 + t3824*t6136) - 1.1312*(t3824*t6064 - 1.*t3868*t6136) - 0.049*t703 - 1.*t1272*t703 + t1137*t2238*t703 - 1.*t1964*t703*t891;
  p_output1[4]=t1272*t1372*t446 - 1.*t1137*t1372*t2238*t446 + t1372*t6383 + t2564*t6455 + t2782*t6475 + t3299*t6501 + t3496*t6556 + t3933*t6614 + t4125*t6662 + 0.0306*(t3868*t6614 + t3824*t6662) - 1.1312*(t3824*t6614 - 1.*t3868*t6662) - 0.1305*t1372*t703 + t1372*t1964*t446*t891;
  p_output1[5]=t1272*t248*t446 - 1.*t1137*t2238*t248*t446 + t248*t6383 + t2564*t6802 + t2782*t6811 + t3299*t6878 + t3496*t6899 + t3933*t6946 + t4125*t6960 + 0.0306*(t3868*t6946 + t3824*t6960) - 1.1312*(t3824*t6946 - 1.*t3868*t6960) - 0.1305*t248*t703 + t1964*t248*t446*t891;
  p_output1[6]=-1.*t1137*t1964*t446 + t446*t7057 + t7094 + t7115 + t7143 + t7173 + t7182 + t7193 + t7200 + t7219 - 1.*t2238*t446*t891;
  p_output1[7]=t1964*t4819 + t1372*t703*t7057 - 1.*t248*t7237 + t2238*t7286 + t2782*t7325 + t2564*t7367 + t3496*t7410 + t3299*t7438 + t4125*t7487 + t3933*t7524 - 1.1312*(-1.*t3868*t7487 + t3824*t7524) + 0.0306*(t3824*t7487 + t3868*t7524);
  p_output1[8]=t2133*t2238 + t248*t703*t7057 + t1372*t7237 + t1964*t7591 + t2782*t7601 + t2564*t7618 + t3496*t7638 + t3299*t7680 + t4125*t7714 + t3933*t7744 - 1.1312*(-1.*t3868*t7714 + t3824*t7744) + 0.0306*(t3824*t7714 + t3868*t7744);
  p_output1[9]=t7094 + t7115 + t7143 + t7173 + t7182 + t7193 + t7200 + t7219 - 1.*t1137*t446*t7812 + t446*t7804*t891;
  p_output1[10]=t2782*t4853 + t4720*t7804 + t4819*t7812 + t2564*t7850 + t3496*t7877 + t3299*t7894 + t4125*t7907 + t3933*t7961 - 1.1312*(-1.*t3868*t7907 + t3824*t7961) + 0.0306*(t3824*t7907 + t3868*t7961);
  p_output1[11]=t7591*t7812 + t7804*t8019 + t2782*t8064 + t2564*t8078 + t3496*t8091 + t3299*t8123 + t4125*t8143 + t3933*t8153 - 1.1312*(-1.*t3868*t8143 + t3824*t8153) + 0.0306*(t3824*t8143 + t3868*t8153);
  p_output1[12]=t7087*t8190 + t8207*t8237 + t3496*t8249 + t3299*t8266 + t4125*t8284 + t3933*t8294 - 1.1312*(-1.*t3868*t8284 + t3824*t8294) + 0.0306*(t3824*t8284 + t3868*t8294);
  p_output1[13]=t3299*t5162 + t4853*t8190 + t4925*t8207 + t3496*t8371 + t4125*t8388 + t3933*t8408 - 1.1312*(-1.*t3868*t8388 + t3824*t8408) + 0.0306*(t3824*t8388 + t3868*t8408);
  p_output1[14]=t8064*t8190 + t8207*t8481 + t3496*t8492 + t3299*t8503 + t4125*t8520 + t3933*t8538 - 1.1312*(-1.*t3868*t8520 + t3824*t8538) + 0.0306*(t3824*t8520 + t3868*t8538);
  p_output1[15]=t8589*t8598 + t8266*t8602 + t4125*t8620 + t3933*t8626 - 1.1312*(t3824*t8626 + t8637) + 0.0306*(t3868*t8626 + t8653);
  p_output1[16]=t4125*t5230 + t5065*t8589 + t5162*t8602 + t3933*t8678 + 0.0306*(t5424 + t3868*t8678) - 1.1312*(t3824*t8678 + t8690);
  p_output1[17]=t8503*t8602 + t8589*t8735 + t4125*t8753 + t3933*t8763 - 1.1312*(t3824*t8763 + t8775) + 0.0306*(t3868*t8763 + t8785);
  p_output1[18]=t8620*t8819 + t8827*t8840 - 1.1312*(t8637 - 1.*t3824*t8840) + 0.0306*(t8653 - 1.*t3868*t8840);
  p_output1[19]=0.0306*t5456 - 1.1312*(-1.*t3824*t5359 + t8690) + t5230*t8819 + t5359*t8827;
  p_output1[20]=t8753*t8819 + t8827*t8884 - 1.1312*(t8775 - 1.*t3824*t8884) + 0.0306*(t8785 - 1.*t3868*t8884);
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
}



void Jp_VectorNav_to_LeftToeBottom_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}

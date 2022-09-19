/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:28:26 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dJb_RightThigh_src.h"

#ifdef _MSC_VER
  #define INLINE __forceinline /* use __forceinline (VC++ specific) */
#else
  #define INLINE inline        /* use standard inline */
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
//INLINE double ArcTan(double x) { return atan(x); }

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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t64;
  double t136;
  double t141;
  double t213;
  double t235;
  double t135;
  double t312;
  double t318;
  double t360;
  double t131;
  double t411;
  double t427;
  double t437;
  double t45;
  double t107;
  double t851;
  double t709;
  double t714;
  double t779;
  double t654;
  double t216;
  double t376;
  double t377;
  double t431;
  double t47;
  double t124;
  double t1478;
  double t1488;
  double t1491;
  double t1416;
  double t1430;
  double t1449;
  double t1079;
  double t1110;
  double t77;
  double t90;
  double t384;
  double t513;
  double t532;
  double t1907;
  double t1910;
  double t1950;
  double t2121;
  double t2153;
  double t2157;
  double t1930;
  double t2072;
  double t2081;
  double t2386;
  double t2400;
  double t2407;
  double t2333;
  double t2968;
  double t2980;
  double t2992;
  double t2923;
  double t2927;
  double t2935;
  double t2338;
  double t2412;
  double t2592;
  double t2594;
  double t2651;
  double t2661;
  double t2665;
  double t3416;
  double t3423;
  double t3438;
  double t3459;
  double t3720;
  double t3729;
  double t3401;
  double t3430;
  double t3469;
  double t3487;
  double t123;
  double t536;
  double t548;
  double t831;
  double t877;
  double t933;
  double t967;
  double t995;
  double t997;
  double t1058;
  double t1069;
  double t1070;
  double t1113;
  double t1209;
  double t1214;
  double t1221;
  double t1252;
  double t1254;
  double t1310;
  double t1315;
  double t1341;
  double t1370;
  double t1465;
  double t1492;
  double t1513;
  double t1536;
  double t1569;
  double t1583;
  double t1605;
  double t1621;
  double t1651;
  double t1730;
  double t1801;
  double t1802;
  double t1816;
  double t2119;
  double t2164;
  double t2175;
  double t2239;
  double t2249;
  double t2261;
  double t2471;
  double t2497;
  double t2506;
  double t2507;
  double t2628;
  double t2675;
  double t2681;
  double t2699;
  double t2704;
  double t2715;
  double t2738;
  double t2758;
  double t2771;
  double t2791;
  double t2806;
  double t2878;
  double t2943;
  double t2998;
  double t3011;
  double t3034;
  double t3039;
  double t3041;
  double t3043;
  double t3089;
  double t3102;
  double t3179;
  double t3235;
  double t3236;
  double t3266;
  double t3403;
  double t3491;
  double t3503;
  double t3518;
  double t3542;
  double t3576;
  double t3627;
  double t3633;
  double t3634;
  double t3691;
  double t3702;
  double t3711;
  double t3736;
  double t3774;
  double t3816;
  double t3836;
  double t3876;
  double t3896;
  double t3921;
  double t3923;
  double t3956;
  double t3973;
  double t3977;
  double t3978;
  double t3987;
  double t3996;
  double t5107;
  double t5029;
  double t5037;
  double t5076;
  double t5086;
  double t5087;
  double t5088;
  double t5101;
  double t5116;
  double t5121;
  double t5122;
  double t5123;
  double t5126;
  double t5127;
  double t5138;
  double t5141;
  double t5144;
  double t5145;
  double t5059;
  double t5135;
  double t5153;
  double t5230;
  double t5235;
  double t5190;
  double t5194;
  double t5196;
  double t5207;
  double t5215;
  double t5274;
  double t5276;
  double t5280;
  double t5163;
  double t5164;
  double t5173;
  double t5174;
  double t5175;
  double t5048;
  double t5157;
  double t5298;
  double t5301;
  double t5331;
  double t5345;
  double t5368;
  double t5381;
  double t5393;
  double t5161;
  double t5178;
  double t5186;
  double t5288;
  double t5367;
  double t5396;
  double t5402;
  double t5407;
  double t5408;
  double t5412;
  double t5224;
  double t5250;
  double t5258;
  double t5020;
  double t5558;
  double t5423;
  double t5424;
  double t5433;
  double t5442;
  double t5534;
  double t5542;
  double t5544;
  double t5487;
  double t5495;
  double t5503;
  double t5505;
  double t4912;
  double t4923;
  double t4930;
  double t4884;
  double t4888;
  double t4889;
  double t5788;
  double t5810;
  double t5817;
  double t5774;
  double t4821;
  double t4822;
  double t4840;
  double t5947;
  double t5948;
  double t4941;
  double t4942;
  double t4943;
  double t6032;
  double t6033;
  double t6074;
  double t6079;
  double t6086;
  double t6088;
  double t6090;
  double t5988;
  double t5993;
  double t5994;
  double t6084;
  double t6156;
  double t6157;
  double t6171;
  double t6176;
  double t6179;
  double t4856;
  double t4861;
  double t4865;
  double t6333;
  double t6335;
  double t6341;
  double t6346;
  double t6351;
  double t6413;
  double t6419;
  double t6420;
  double t6343;
  double t6352;
  double t6369;
  double t6476;
  double t6493;
  double t6507;
  double t6412;
  double t6421;
  double t6422;
  double t6434;
  double t6508;
  double t6511;
  double t6515;
  double t6526;
  double t6528;
  double t6646;
  double t6695;
  double t6700;
  double t6704;
  double t6728;
  double t6775;
  double t6777;
  double t6795;
  double t6801;
  double t4717;
  double t4729;
  double t4734;
  double t4615;
  double t4623;
  double t4640;
  double t4648;
  double t4656;
  double t4683;
  double t7286;
  double t7287;
  double t7288;
  double t7290;
  double t7328;
  double t7332;
  double t7337;
  double t7347;
  double t4596;
  double t4598;
  double t4645;
  double t4685;
  double t4768;
  double t4782;
  double t4792;
  double t4795;
  double t4849;
  double t4878;
  double t4893;
  double t4898;
  double t4907;
  double t4911;
  double t4936;
  double t4977;
  double t5002;
  double t5189;
  double t5265;
  double t5453;
  double t5459;
  double t7702;
  double t7703;
  double t7712;
  double t5525;
  double t5555;
  double t5636;
  double t5642;
  double t7738;
  double t7739;
  double t7742;
  double t5945;
  double t5995;
  double t6250;
  double t6261;
  double t6431;
  double t6561;
  double t6567;
  double t6842;
  double t6853;
  double t6922;
  double t6936;
  double t7914;
  double t7915;
  double t7916;
  double t6647;
  double t6655;
  double t7931;
  double t7933;
  double t7934;
  double t6734;
  double t6749;
  double t7084;
  double t7088;
  double t7123;
  double t7124;
  double t7170;
  double t7214;
  double t7215;
  double t7399;
  double t7402;
  double t7432;
  double t7441;
  double t7266;
  double t7268;
  double t8041;
  double t8042;
  double t8043;
  double t8045;
  double t8050;
  double t8055;
  double t7295;
  double t7297;
  double t7564;
  double t7568;
  double t7616;
  double t7618;
  double t7664;
  double t7668;
  double t7683;
  double t7684;
  double t7829;
  double t7831;
  double t7864;
  double t7866;
  double t7890;
  double t8232;
  double t8234;
  double t8236;
  double t7897;
  double t7899;
  double t7975;
  double t7979;
  double t7990;
  double t7991;
  double t8298;
  double t8299;
  double t8302;
  double t8012;
  double t8018;
  double t8019;
  double t8121;
  double t8124;
  double t8134;
  double t8135;
  double t8392;
  double t8393;
  double t8394;
  double t8147;
  double t8156;
  double t8403;
  double t8404;
  double t8405;
  double t8168;
  double t8170;
  double t8453;
  double t8455;
  double t8456;
  double t8502;
  double t8503;
  double t8504;
  double t8554;
  double t8555;
  double t8556;
  double t8565;
  double t8567;
  double t8568;
  double t8443;
  double t8447;
  double t8448;
  double t8449;
  double t8450;
  double t8451;
  double t8452;
  double t8590;
  double t8534;
  double t8576;
  double t8621;
  t64 = Sin(var1[15]);
  t136 = Cos(var1[15]);
  t141 = -1.*t136;
  t213 = 0. + t141;
  t235 = Sin(var1[13]);
  t135 = Cos(var1[13]);
  t312 = Sin(var1[14]);
  t318 = t312*t64;
  t360 = 0. + t318;
  t131 = Cos(var1[5]);
  t411 = -1.*t213*t235;
  t427 = t135*t360;
  t437 = Sin(var1[5]);
  t45 = Cos(var1[3]);
  t107 = Sin(var1[4]);
  t851 = t411 + t427;
  t709 = -1.*t135*t213;
  t714 = -1.*t235*t360;
  t779 = t709 + t714;
  t654 = Sin(var1[3]);
  t216 = t135*t213;
  t376 = t235*t360;
  t377 = 0. + t216 + t376;
  t431 = 0. + t411 + t427;
  t47 = Cos(var1[14]);
  t124 = Cos(var1[4]);
  t1478 = t136*t235*t312;
  t1488 = t135*t64;
  t1491 = t1478 + t1488;
  t1416 = t135*t136*t312;
  t1430 = -1.*t235*t64;
  t1449 = t1416 + t1430;
  t1079 = t131*t431;
  t1110 = -1.*t377*t437;
  t77 = t47*t64;
  t90 = 0. + t77;
  t384 = t131*t377;
  t513 = t431*t437;
  t532 = 0. + t384 + t513;
  t1907 = t136*t312;
  t1910 = 0. + t1907;
  t1950 = 0. + t64;
  t2121 = -1.*t235*t1910;
  t2153 = -1.*t135*t1950;
  t2157 = t2121 + t2153;
  t1930 = t135*t1910;
  t2072 = -1.*t235*t1950;
  t2081 = t1930 + t2072;
  t2386 = t235*t1910;
  t2400 = t135*t1950;
  t2407 = 0. + t2386 + t2400;
  t2333 = 0. + t1930 + t2072;
  t2968 = t135*t136;
  t2980 = -1.*t235*t312*t64;
  t2992 = t2968 + t2980;
  t2923 = -1.*t136*t235;
  t2927 = -1.*t135*t312*t64;
  t2935 = t2923 + t2927;
  t2338 = t131*t2333;
  t2412 = -1.*t2407*t437;
  t2592 = t47*t136;
  t2594 = 0. + t2592;
  t2651 = t131*t2407;
  t2661 = t2333*t437;
  t2665 = 0. + t2651 + t2661;
  t3416 = -1.*t47*t235;
  t3423 = 0. + t3416;
  t3438 = -1.*t135*t47;
  t3459 = 0. + t3438;
  t3720 = t3459*t131;
  t3729 = -1.*t3423*t437;
  t3401 = 0. + t312;
  t3430 = t131*t3423;
  t3469 = t3459*t437;
  t3487 = 0. + t3430 + t3469;
  t123 = -1.*t90*t107;
  t536 = t124*t532;
  t548 = t123 + t536;
  t831 = t131*t779;
  t877 = -1.*t851*t437;
  t933 = t831 + t877;
  t967 = t131*t851;
  t995 = t779*t437;
  t997 = t967 + t995;
  t1058 = -1.*t131*t377;
  t1069 = -1.*t431*t437;
  t1070 = t1058 + t1069;
  t1113 = t1079 + t1110;
  t1209 = t135*t47*t131*t64;
  t1214 = -1.*t47*t235*t64*t437;
  t1221 = t1209 + t1214;
  t1252 = -1.*t124*t312*t64;
  t1254 = t47*t131*t235*t64;
  t1310 = t135*t47*t64*t437;
  t1315 = t1254 + t1310;
  t1341 = t107*t1315;
  t1370 = t1252 + t1341;
  t1465 = t131*t1449;
  t1492 = -1.*t1491*t437;
  t1513 = t1465 + t1492;
  t1536 = t47*t136*t124;
  t1569 = t131*t1491;
  t1583 = t1449*t437;
  t1605 = t1569 + t1583;
  t1621 = t107*t1605;
  t1651 = t1536 + t1621;
  t1730 = 0. + t1079 + t1110;
  t1801 = t124*t90;
  t1802 = t107*t532;
  t1816 = 0. + t1801 + t1802;
  t2119 = t131*t2081;
  t2164 = t2157*t437;
  t2175 = t2119 + t2164;
  t2239 = t131*t2157;
  t2249 = -1.*t2081*t437;
  t2261 = t2239 + t2249;
  t2471 = t2338 + t2412;
  t2497 = -1.*t131*t2407;
  t2506 = -1.*t2333*t437;
  t2507 = t2497 + t2506;
  t2628 = -1.*t2594*t107;
  t2675 = t124*t2665;
  t2681 = t2628 + t2675;
  t2699 = t135*t47*t136*t131;
  t2704 = -1.*t47*t136*t235*t437;
  t2715 = t2699 + t2704;
  t2738 = -1.*t136*t124*t312;
  t2758 = t47*t136*t131*t235;
  t2771 = t135*t47*t136*t437;
  t2791 = t2758 + t2771;
  t2806 = t107*t2791;
  t2878 = t2738 + t2806;
  t2943 = t131*t2935;
  t2998 = -1.*t2992*t437;
  t3011 = t2943 + t2998;
  t3034 = -1.*t47*t124*t64;
  t3039 = t131*t2992;
  t3041 = t2935*t437;
  t3043 = t3039 + t3041;
  t3089 = t107*t3043;
  t3102 = t3034 + t3089;
  t3179 = 0. + t2338 + t2412;
  t3235 = t2594*t124;
  t3236 = t107*t2665;
  t3266 = 0. + t3235 + t3236;
  t3403 = -1.*t3401*t107;
  t3491 = t124*t3487;
  t3503 = t3403 + t3491;
  t3518 = t47*t131*t235;
  t3542 = t135*t47*t437;
  t3576 = t3518 + t3542;
  t3627 = -1.*t135*t47*t131;
  t3633 = t47*t235*t437;
  t3634 = t3627 + t3633;
  t3691 = -1.*t131*t3423;
  t3702 = -1.*t3459*t437;
  t3711 = t3691 + t3702;
  t3736 = t3720 + t3729;
  t3774 = 0. + t3720 + t3729;
  t3816 = t124*t3401;
  t3836 = t107*t3487;
  t3876 = 0. + t3816 + t3836;
  t3896 = t135*t131*t312;
  t3921 = -1.*t235*t312*t437;
  t3923 = t3896 + t3921;
  t3956 = t47*t124;
  t3973 = t131*t235*t312;
  t3977 = t135*t312*t437;
  t3978 = t3973 + t3977;
  t3987 = t107*t3978;
  t3996 = t3956 + t3987;
  t5107 = 1. + t141;
  t5029 = -1.*t135;
  t5037 = 1. + t5029;
  t5076 = -1.*t47;
  t5086 = 1. + t5076;
  t5087 = -0.135*t5086;
  t5088 = -0.1708*t47;
  t5101 = 0.08055*t312;
  t5116 = -0.08055*t5107;
  t5121 = -0.08045*t136;
  t5122 = 0.0598*t64;
  t5123 = 0. + t5116 + t5121 + t5122;
  t5126 = t312*t5123;
  t5127 = 0. + t5087 + t5088 + t5101 + t5126;
  t5138 = -0.01004*t5107;
  t5141 = -0.06984*t136;
  t5144 = 0.00010000000000000286*t64;
  t5145 = 0. + t5138 + t5141 + t5144;
  t5059 = 0.07996*t235;
  t5135 = t135*t5127;
  t5153 = -1.*t235*t5145;
  t5230 = 0.135*t135;
  t5235 = t5230 + t5059 + t5135 + t5153;
  t5190 = 0.07996*t135;
  t5194 = -0.135*t235;
  t5196 = -1.*t235*t5127;
  t5207 = -1.*t135*t5145;
  t5215 = t5190 + t5194 + t5196 + t5207;
  t5274 = t131*t5235;
  t5276 = t5215*t437;
  t5280 = t5274 + t5276;
  t5163 = 0.07996*t5037;
  t5164 = 0.135*t235;
  t5173 = t235*t5127;
  t5174 = t135*t5145;
  t5175 = 0. + t5163 + t5164 + t5173 + t5174;
  t5048 = -0.135*t5037;
  t5157 = 0. + t5048 + t5059 + t5135 + t5153;
  t5298 = -0.08055*t5086;
  t5301 = 0.0358*t312;
  t5331 = t47*t5123;
  t5345 = 0. + t5298 + t5301 + t5331;
  t5368 = t131*t5175;
  t5381 = t5157*t437;
  t5393 = 0. + t5368 + t5381;
  t5161 = t131*t5157;
  t5178 = -1.*t5175*t437;
  t5186 = 0. + t5161 + t5178;
  t5288 = 0. + t3403 + t3491;
  t5367 = -1.*t5345*t107;
  t5396 = t124*t5393;
  t5402 = 0. + t5367 + t5396;
  t5407 = t124*t5345;
  t5408 = t107*t5393;
  t5412 = 0. + t5407 + t5408;
  t5224 = t131*t5215;
  t5250 = -1.*t5235*t437;
  t5258 = t5224 + t5250;
  t5020 = 0. + t2628 + t2675;
  t5558 = t5161 + t5178;
  t5423 = t3774*t5186;
  t5424 = t5288*t5402;
  t5433 = t3876*t5412;
  t5442 = t5423 + t5424 + t5433;
  t5534 = -1.*t131*t5175;
  t5542 = -1.*t5157*t437;
  t5544 = t5534 + t5542;
  t5487 = -1.*t5186*t3179;
  t5495 = -1.*t5402*t5020;
  t5503 = -1.*t5412*t3266;
  t5505 = t5487 + t5495 + t5503;
  t4912 = -1.*t124*t3401;
  t4923 = -1.*t107*t3487;
  t4930 = t4912 + t4923;
  t4884 = -1.*t2594*t124;
  t4888 = -1.*t107*t2665;
  t4889 = t4884 + t4888;
  t5788 = -1.*t124*t5345;
  t5810 = -1.*t107*t5393;
  t5817 = t5788 + t5810;
  t5774 = t5367 + t5396;
  t4821 = t136*t312*t107;
  t4822 = t124*t2791;
  t4840 = t4821 + t4822;
  t5947 = 0.08055*t47;
  t5948 = t5947 + t5301 + t5331;
  t4941 = -1.*t47*t107;
  t4942 = t124*t3978;
  t4943 = t4941 + t4942;
  t6032 = 0.0358*t47;
  t6033 = -0.08055*t312;
  t6074 = -1.*t312*t5123;
  t6079 = t6032 + t6033 + t6074;
  t6086 = t131*t235*t5948;
  t6088 = t135*t5948*t437;
  t6090 = t6086 + t6088;
  t5988 = t135*t131*t5948;
  t5993 = -1.*t235*t5948*t437;
  t5994 = t5988 + t5993;
  t6084 = -1.*t6079*t107;
  t6156 = t124*t6090;
  t6157 = t6084 + t6156;
  t6171 = t124*t6079;
  t6176 = t107*t6090;
  t6179 = t6171 + t6176;
  t4856 = t47*t64*t107;
  t4861 = t124*t3043;
  t4865 = t4856 + t4861;
  t6333 = 0.0598*t136;
  t6335 = -0.00010000000000000286*t64;
  t6341 = t6333 + t6335;
  t6346 = 0.00010000000000000286*t136;
  t6351 = t6346 + t5122;
  t6413 = t235*t312*t6341;
  t6419 = t135*t6351;
  t6420 = t6413 + t6419;
  t6343 = t135*t312*t6341;
  t6352 = -1.*t235*t6351;
  t6369 = t6343 + t6352;
  t6476 = t131*t6420;
  t6493 = t6369*t437;
  t6507 = t6476 + t6493;
  t6412 = t131*t6369;
  t6421 = -1.*t6420*t437;
  t6422 = t6412 + t6421;
  t6434 = -1.*t47*t6341*t107;
  t6508 = t124*t6507;
  t6511 = t6434 + t6508;
  t6515 = t47*t124*t6341;
  t6526 = t107*t6507;
  t6528 = t6515 + t6526;
  t6646 = 0. + t123 + t536;
  t6695 = -1.*t3774*t5186;
  t6700 = -1.*t5288*t5402;
  t6704 = -1.*t3876*t5412;
  t6728 = t6695 + t6700 + t6704;
  t6775 = t5186*t1730;
  t6777 = t5402*t6646;
  t6795 = t5412*t1816;
  t6801 = t6775 + t6777 + t6795;
  t4717 = -1.*t124*t90;
  t4729 = -1.*t107*t532;
  t4734 = t4717 + t4729;
  t4615 = t312*t64*t107;
  t4623 = t124*t1315;
  t4640 = t4615 + t4623;
  t4648 = -1.*t47*t136*t107;
  t4656 = t124*t1605;
  t4683 = t4648 + t4656;
  t7286 = t5186*t3179;
  t7287 = t5402*t5020;
  t7288 = t5412*t3266;
  t7290 = t7286 + t7287 + t7288;
  t7328 = -1.*t5186*t1730;
  t7332 = -1.*t5402*t6646;
  t7337 = -1.*t5412*t1816;
  t7347 = t7328 + t7332 + t7337;
  t4596 = var2[13]*t124*t997;
  t4598 = var2[5]*t124*t1113;
  t4645 = var2[14]*t4640;
  t4685 = var2[15]*t4683;
  t4768 = var2[4]*t4734;
  t4782 = t4596 + t4598 + t4645 + t4685 + t4768;
  t4792 = var2[13]*t124*t2175;
  t4795 = var2[5]*t124*t2471;
  t4849 = var2[14]*t4840;
  t4878 = var2[15]*t4865;
  t4893 = var2[4]*t4889;
  t4898 = t4792 + t4795 + t4849 + t4878 + t4893;
  t4907 = var2[13]*t124*t3634;
  t4911 = var2[5]*t124*t3736;
  t4936 = var2[4]*t4930;
  t4977 = var2[14]*t4943;
  t5002 = t4907 + t4911 + t4936 + t4977;
  t5189 = t3576*t5186;
  t5265 = t3774*t5258;
  t5453 = -1.*t5258*t3179;
  t5459 = -1.*t5186*t2261;
  t7702 = t3401*t5345;
  t7703 = t3487*t5393;
  t7712 = t7702 + t5423 + t7703;
  t5525 = t3711*t5186;
  t5555 = t3774*t5544;
  t5636 = -1.*t5544*t3179;
  t5642 = -1.*t5186*t2507;
  t7738 = -1.*t2594*t5345;
  t7739 = -1.*t5393*t2665;
  t7742 = t7738 + t5487 + t7739;
  t5945 = t3923*t5186;
  t5995 = t3774*t5994;
  t6250 = -1.*t2715*t5186;
  t6261 = -1.*t5994*t3179;
  t6431 = t3774*t6422;
  t6561 = -1.*t5186*t3011;
  t6567 = -1.*t6422*t3179;
  t6842 = -1.*t3711*t5186;
  t6853 = -1.*t3774*t5544;
  t6922 = t5186*t1070;
  t6936 = t5544*t1730;
  t7914 = -1.*t3401*t5345;
  t7915 = -1.*t3487*t5393;
  t7916 = t7914 + t6695 + t7915;
  t6647 = -1.*t3576*t5186;
  t6655 = -1.*t3774*t5258;
  t7931 = t5345*t90;
  t7933 = t5393*t532;
  t7934 = t7931 + t7933 + t6775;
  t6734 = t5186*t933;
  t6749 = t5258*t1730;
  t7084 = -1.*t3923*t5186;
  t7088 = -1.*t3774*t5994;
  t7123 = t5186*t1221;
  t7124 = t5994*t1730;
  t7170 = -1.*t3774*t6422;
  t7214 = t5186*t1513;
  t7215 = t6422*t1730;
  t7399 = t5544*t3179;
  t7402 = t5186*t2507;
  t7432 = -1.*t5186*t1070;
  t7441 = -1.*t5544*t1730;
  t7266 = t5258*t3179;
  t7268 = t5186*t2261;
  t8041 = t2594*t5345;
  t8042 = t5393*t2665;
  t8043 = t8041 + t7286 + t8042;
  t8045 = -1.*t5345*t90;
  t8050 = -1.*t5393*t532;
  t8055 = t8045 + t8050 + t7328;
  t7295 = -1.*t5186*t933;
  t7297 = -1.*t5258*t1730;
  t7564 = t2715*t5186;
  t7568 = t5994*t3179;
  t7616 = -1.*t5186*t1221;
  t7618 = -1.*t5994*t1730;
  t7664 = t5186*t3011;
  t7668 = t6422*t3179;
  t7683 = -1.*t5186*t1513;
  t7684 = -1.*t6422*t1730;
  t7829 = t47*t5345;
  t7831 = t3401*t6079;
  t7864 = t136*t312*t5345;
  t7866 = -1.*t2594*t6079;
  t7890 = t47*t3401*t6341;
  t8232 = t3423*t5175;
  t8234 = t3459*t5157;
  t8236 = t8232 + t8234 + t7702;
  t7897 = -1.*t47*t2594*t6341;
  t7899 = t47*t5345*t64;
  t7975 = -1.*t47*t5345;
  t7979 = -1.*t3401*t6079;
  t7990 = -1.*t312*t5345*t64;
  t7991 = t6079*t90;
  t8298 = -1.*t3423*t5175;
  t8299 = -1.*t3459*t5157;
  t8302 = t8298 + t8299 + t7914;
  t8012 = -1.*t47*t3401*t6341;
  t8018 = t47*t136*t5345;
  t8019 = t47*t6341*t90;
  t8121 = -1.*t136*t312*t5345;
  t8124 = t2594*t6079;
  t8134 = t312*t5345*t64;
  t8135 = -1.*t6079*t90;
  t8392 = t5175*t2407;
  t8393 = t5157*t2333;
  t8394 = t8041 + t8392 + t8393;
  t8147 = t47*t2594*t6341;
  t8156 = -1.*t47*t5345*t64;
  t8403 = -1.*t5157*t431;
  t8404 = -1.*t5175*t377;
  t8405 = t8045 + t8403 + t8404;
  t8168 = -1.*t47*t136*t5345;
  t8170 = -1.*t47*t6341*t90;
  t8453 = t312*t5345;
  t8455 = -1.*t47*t5127;
  t8456 = 0. + t8453 + t8455;
  t8502 = -1.*t312*t5345;
  t8503 = t47*t5127;
  t8504 = 0. + t8502 + t8503;
  t8554 = t1910*t5127;
  t8555 = t5145*t1950;
  t8556 = t8041 + t8554 + t8555;
  t8565 = -1.*t213*t5145;
  t8567 = -1.*t5127*t360;
  t8568 = t8565 + t8045 + t8567;
  t8443 = var2[15]*t47*t136;
  t8447 = -1.*var2[14]*t312*t64;
  t8448 = t8443 + t8447;
  t8449 = -1.*var2[14]*t136*t312;
  t8450 = -1.*var2[15]*t47*t64;
  t8451 = t8449 + t8450;
  t8452 = var2[14]*t47;
  t8590 = -1.*t5145*t64;
  t8534 = t5145*t64;
  t8576 = t136*t5145;
  t8621 = -1.*t5123*t64;
  p_output1[0]=(-1.*t1730*t45 - 1.*t1816*t654)*var2[3] + t45*t548*var2[4] + (t107*t1113*t45 - 1.*t1070*t654)*var2[5] + (-1.*t654*t933 + t107*t45*t997)*var2[13] + (t1370*t45 - 1.*t1221*t654)*var2[14] + (t1651*t45 - 1.*t1513*t654)*var2[15];
  p_output1[1]=(-1.*t3179*t45 - 1.*t3266*t654)*var2[3] + t2681*t45*var2[4] + (t107*t2471*t45 - 1.*t2507*t654)*var2[5] + (t107*t2175*t45 - 1.*t2261*t654)*var2[13] + (t2878*t45 - 1.*t2715*t654)*var2[14] + (t3102*t45 - 1.*t3011*t654)*var2[15];
  p_output1[2]=(-1.*t3774*t45 - 1.*t3876*t654)*var2[3] + t3503*t45*var2[4] + (t107*t3736*t45 - 1.*t3711*t654)*var2[5] + (t107*t3634*t45 - 1.*t3576*t654)*var2[13] + (t3996*t45 - 1.*t3923*t654)*var2[14];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=(t1816*t45 - 1.*t1730*t654)*var2[3] + t548*t654*var2[4] + (t1070*t45 + t107*t1113*t654)*var2[5] + (t45*t933 + t107*t654*t997)*var2[13] + (t1221*t45 + t1370*t654)*var2[14] + (t1513*t45 + t1651*t654)*var2[15];
  p_output1[7]=(t3266*t45 - 1.*t3179*t654)*var2[3] + t2681*t654*var2[4] + (t2507*t45 + t107*t2471*t654)*var2[5] + (t2261*t45 + t107*t2175*t654)*var2[13] + (t2715*t45 + t2878*t654)*var2[14] + (t3011*t45 + t3102*t654)*var2[15];
  p_output1[8]=(t3876*t45 - 1.*t3774*t654)*var2[3] + t3503*t654*var2[4] + (t3711*t45 + t107*t3736*t654)*var2[5] + (t3576*t45 + t107*t3634*t654)*var2[13] + (t3923*t45 + t3996*t654)*var2[14];
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t4782;
  p_output1[13]=t4898;
  p_output1[14]=t5002;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=(t4889*t5442 + t4930*t5505 + t5288*(-1.*t4889*t5402 - 1.*t2681*t5412 - 1.*t3266*t5774 - 1.*t5020*t5817) + t5020*(t4930*t5402 + t3503*t5412 + t3876*t5774 + t5288*t5817))*var2[4] + (t124*t2471*t5442 + t124*t3736*t5505 + t5020*(t124*t3736*t5402 + t107*t3736*t5412 + t5525 + t5555 + t107*t3876*t5558 + t124*t5288*t5558) + t5288*(-1.*t124*t2471*t5402 - 1.*t107*t2471*t5412 - 1.*t107*t3266*t5558 - 1.*t124*t5020*t5558 + t5636 + t5642))*var2[5] + (t5020*(t5189 + t5265 + t107*t3876*t5280 + t124*t5280*t5288 + t124*t3634*t5402 + t107*t3634*t5412) + t124*t2175*t5442 + t5288*(-1.*t107*t3266*t5280 - 1.*t124*t5020*t5280 - 1.*t124*t2175*t5402 - 1.*t107*t2175*t5412 + t5453 + t5459) + t124*t3634*t5505)*var2[13] + (t4840*t5442 + t4943*t5505 + t5020*(t4943*t5402 + t3996*t5412 + t5945 + t5995 + t5288*t6157 + t3876*t6179) + t5288*(-1.*t4840*t5402 - 1.*t2878*t5412 - 1.*t5020*t6157 - 1.*t3266*t6179 + t6250 + t6261))*var2[14] + (t4865*t5442 + t5020*(t6431 + t5288*t6511 + t3876*t6528) + t5288*(-1.*t4865*t5402 - 1.*t3102*t5412 - 1.*t5020*t6511 - 1.*t3266*t6528 + t6561 + t6567))*var2[15];
  p_output1[19]=((-1.*t4930*t5402 - 1.*t3503*t5412 - 1.*t3876*t5774 - 1.*t5288*t5817)*t6646 + t5288*(t4734*t5402 + t5412*t548 + t1816*t5774 + t5817*t6646) + t4734*t6728 + t4930*t6801)*var2[4] + (t1113*t124*t6728 + t124*t3736*t6801 + t6646*(-1.*t124*t3736*t5402 - 1.*t107*t3736*t5412 - 1.*t107*t3876*t5558 - 1.*t124*t5288*t5558 + t6842 + t6853) + t5288*(t1113*t124*t5402 + t107*t1113*t5412 + t107*t1816*t5558 + t124*t5558*t6646 + t6922 + t6936))*var2[5] + (t6646*(-1.*t107*t3876*t5280 - 1.*t124*t5280*t5288 - 1.*t124*t3634*t5402 - 1.*t107*t3634*t5412 + t6647 + t6655) + t124*t3634*t6801 + t124*t6728*t997 + t5288*(t107*t1816*t5280 + t124*t5280*t6646 + t6734 + t6749 + t124*t5402*t997 + t107*t5412*t997))*var2[13] + (t4640*t6728 + t4943*t6801 + t6646*(-1.*t4943*t5402 - 1.*t3996*t5412 - 1.*t5288*t6157 - 1.*t3876*t6179 + t7084 + t7088) + t5288*(t4640*t5402 + t1370*t5412 + t1816*t6179 + t6157*t6646 + t7123 + t7124))*var2[14] + (t4683*t6728 + t6646*(-1.*t5288*t6511 - 1.*t3876*t6528 + t7170) + t5288*(t4683*t5402 + t1651*t5412 + t1816*t6528 + t6511*t6646 + t7214 + t7215))*var2[15];
  p_output1[20]=((t4889*t5402 + t2681*t5412 + t3266*t5774 + t5020*t5817)*t6646 + t5020*(-1.*t4734*t5402 - 1.*t5412*t548 - 1.*t1816*t5774 - 1.*t5817*t6646) + t4734*t7290 + t4889*t7347)*var2[4] + (t1113*t124*t7290 + t124*t2471*t7347 + t6646*(t124*t2471*t5402 + t107*t2471*t5412 + t107*t3266*t5558 + t124*t5020*t5558 + t7399 + t7402) + t5020*(-1.*t1113*t124*t5402 - 1.*t107*t1113*t5412 - 1.*t107*t1816*t5558 - 1.*t124*t5558*t6646 + t7432 + t7441))*var2[5] + (t6646*(t107*t3266*t5280 + t124*t5020*t5280 + t124*t2175*t5402 + t107*t2175*t5412 + t7266 + t7268) + t124*t2175*t7347 + t124*t7290*t997 + t5020*(-1.*t107*t1816*t5280 - 1.*t124*t5280*t6646 + t7295 + t7297 - 1.*t124*t5402*t997 - 1.*t107*t5412*t997))*var2[13] + (t4640*t7290 + t4840*t7347 + t6646*(t4840*t5402 + t2878*t5412 + t5020*t6157 + t3266*t6179 + t7564 + t7568) + t5020*(-1.*t4640*t5402 - 1.*t1370*t5412 - 1.*t1816*t6179 - 1.*t6157*t6646 + t7616 + t7618))*var2[14] + (t4683*t7290 + t4865*t7347 + t6646*(t4865*t5402 + t3102*t5412 + t5020*t6511 + t3266*t6528 + t7664 + t7668) + t5020*(-1.*t4683*t5402 - 1.*t1651*t5412 - 1.*t1816*t6528 - 1.*t6511*t6646 + t7683 + t7684))*var2[15];
  p_output1[21]=t4782;
  p_output1[22]=t4898;
  p_output1[23]=t5002;
  p_output1[24]=(t3179*(t3736*t5393 + t5525 + t5555 + t3487*t5558) + t3774*(-1.*t2471*t5393 - 1.*t2665*t5558 + t5636 + t5642) + t2507*t7712 + t3711*t7742)*var2[5] + (t3179*(t5189 + t5265 + t3487*t5280 + t3634*t5393) + t3774*(-1.*t2665*t5280 - 1.*t2175*t5393 + t5453 + t5459) + t2261*t7712 + t3576*t7742)*var2[13] + (t2715*t7712 + t3923*t7742 + t3179*(t3978*t5393 + t5945 + t5995 + t3487*t6090 + t7829 + t7831) + t3774*(-1.*t2791*t5393 - 1.*t2665*t6090 + t6250 + t6261 + t7864 + t7866))*var2[14] + (t3011*t7712 + t3179*(t6431 + t3487*t6507 + t7890) + t3774*(-1.*t3043*t5393 - 1.*t2665*t6507 + t6561 + t6567 + t7897 + t7899))*var2[15];
  p_output1[25]=(t1730*(-1.*t3736*t5393 - 1.*t3487*t5558 + t6842 + t6853) + t3774*(t1113*t5393 + t532*t5558 + t6922 + t6936) + t1070*t7916 + t3711*t7934)*var2[5] + (t1730*(-1.*t3487*t5280 - 1.*t3634*t5393 + t6647 + t6655) + t3576*t7934 + t7916*t933 + t3774*(t5280*t532 + t6734 + t6749 + t5393*t997))*var2[13] + (t1221*t7916 + t3923*t7934 + t1730*(-1.*t3978*t5393 - 1.*t3487*t6090 + t7084 + t7088 + t7975 + t7979) + t3774*(t1315*t5393 + t532*t6090 + t7123 + t7124 + t7990 + t7991))*var2[14] + (t1513*t7916 + t1730*(-1.*t3487*t6507 + t7170 + t8012) + t3774*(t1605*t5393 + t532*t6507 + t7214 + t7215 + t8018 + t8019))*var2[15];
  p_output1[26]=(t1730*(t2471*t5393 + t2665*t5558 + t7399 + t7402) + t3179*(-1.*t1113*t5393 - 1.*t532*t5558 + t7432 + t7441) + t1070*t8043 + t2507*t8055)*var2[5] + (t1730*(t2665*t5280 + t2175*t5393 + t7266 + t7268) + t2261*t8055 + t8043*t933 + t3179*(-1.*t5280*t532 + t7295 + t7297 - 1.*t5393*t997))*var2[13] + (t1221*t8043 + t2715*t8055 + t1730*(t2791*t5393 + t2665*t6090 + t7564 + t7568 + t8121 + t8124) + t3179*(-1.*t1315*t5393 - 1.*t532*t6090 + t7616 + t7618 + t8134 + t8135))*var2[14] + (t1513*t8043 + t3011*t8055 + t1730*(t3043*t5393 + t2665*t6507 + t7664 + t7668 + t8147 + t8156) + t3179*(-1.*t1605*t5393 - 1.*t532*t6507 + t7683 + t7684 + t8168 + t8170))*var2[15];
  p_output1[27]=t1070*var2[5] + t933*var2[13] + t1221*var2[14] + t1513*var2[15];
  p_output1[28]=t2507*var2[5] + t2261*var2[13] + t2715*var2[14] + t3011*var2[15];
  p_output1[29]=t3711*var2[5] + t3576*var2[13] + t3923*var2[14];
  p_output1[30]=(t3401*(-1.*t2157*t5157 - 1.*t2081*t5175 - 1.*t2333*t5215 - 1.*t2407*t5235) + t2594*(t235*t47*t5157 - 1.*t135*t47*t5175 + t3459*t5215 + t3423*t5235))*var2[13] + (t47*(-1.*t2333*t5157 - 1.*t2407*t5175 + t7738) + t2594*(t135*t312*t5157 + t235*t312*t5175 + t235*t3423*t5948 + t135*t3459*t5948 + t7829 + t7831) + t3401*(-1.*t135*t136*t47*t5157 - 1.*t136*t235*t47*t5175 - 1.*t135*t2333*t5948 - 1.*t235*t2407*t5948 + t7864 + t7866) - 1.*t136*t312*t8236)*var2[14] + (t2594*(t3459*t6369 + t3423*t6420 + t7890) + t3401*(-1.*t2935*t5157 - 1.*t2992*t5175 - 1.*t2333*t6369 - 1.*t2407*t6420 + t7897 + t7899) - 1.*t47*t64*t8236)*var2[15];
  p_output1[31]=(t3401*(t431*t5215 + t377*t5235 + t5157*t779 + t5175*t851) + (-1.*t235*t47*t5157 + t135*t47*t5175 - 1.*t3459*t5215 - 1.*t3423*t5235)*t90)*var2[13] + (t47*(t431*t5157 + t377*t5175 + t7931) + t3401*(t235*t377*t5948 + t135*t431*t5948 + t135*t47*t5157*t64 + t235*t47*t5175*t64 + t7990 + t7991) - 1.*t312*t64*t8302 + (-1.*t135*t312*t5157 - 1.*t235*t312*t5175 - 1.*t235*t3423*t5948 - 1.*t135*t3459*t5948 + t7975 + t7979)*t90)*var2[14] + (t3401*(t1449*t5157 + t1491*t5175 + t431*t6369 + t377*t6420 + t8018 + t8019) + t136*t47*t8302 + (-1.*t3459*t6369 - 1.*t3423*t6420 + t8012)*t90)*var2[15];
  p_output1[32]=(t2594*(-1.*t431*t5215 - 1.*t377*t5235 - 1.*t5157*t779 - 1.*t5175*t851) + (t2157*t5157 + t2081*t5175 + t2333*t5215 + t2407*t5235)*t90)*var2[13] + (t2594*(-1.*t235*t377*t5948 - 1.*t135*t431*t5948 - 1.*t135*t47*t5157*t64 - 1.*t235*t47*t5175*t64 + t8134 + t8135) - 1.*t312*t64*t8394 - 1.*t136*t312*t8405 + (t135*t136*t47*t5157 + t136*t235*t47*t5175 + t135*t2333*t5948 + t235*t2407*t5948 + t8121 + t8124)*t90)*var2[14] + (t2594*(-1.*t1449*t5157 - 1.*t1491*t5175 - 1.*t431*t6369 - 1.*t377*t6420 + t8168 + t8170) + t136*t47*t8394 - 1.*t47*t64*t8405 + (t2935*t5157 + t2992*t5175 + t2333*t6369 + t2407*t6420 + t8147 + t8156)*t90)*var2[15];
  p_output1[33]=t8448;
  p_output1[34]=t8451;
  p_output1[35]=t8452;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
  p_output1[60]=0;
  p_output1[61]=0;
  p_output1[62]=0;
  p_output1[63]=0;
  p_output1[64]=0;
  p_output1[65]=0;
  p_output1[66]=0;
  p_output1[67]=0;
  p_output1[68]=0;
  p_output1[69]=0;
  p_output1[70]=0;
  p_output1[71]=0;
  p_output1[72]=0;
  p_output1[73]=0;
  p_output1[74]=0;
  p_output1[75]=0;
  p_output1[76]=0;
  p_output1[77]=0;
  p_output1[78]=(0.07996*t47*t64 + t47*(-1.*t1910*t5127 - 1.*t1950*t5145 + t7738) + t2594*(t312*t5127 - 1.*t47*t5948 + t312*t6079 + t7829) + t312*(-1.*t136*t47*t5127 - 1.*t1910*t5948 + t7864 + t7866) - 1.*t136*t312*t8456)*var2[14] + (0.07996*t136*t312 + 0.135*t64 + t312*(-1.*t136*t5145 - 1.*t1910*t312*t6341 - 1.*t1950*t6351 + t312*t5127*t64 + t7897 + t7899) - 1.*t47*t64*t8456)*var2[15];
  p_output1[79]=(0.07996*t136*t47 + t47*(t360*t5127 + t213*t5145 + t7931) + t312*(t360*t5948 + t47*t5127*t64 + t7990 + t7991) - 1.*t312*t64*t8504 + (-1.*t312*t5127 + t47*t5948 - 1.*t312*t6079 + t7975)*t90)*var2[14] + (0.135*t136 - 0.07996*t312*t64 + t136*t47*t8504 + t312*(t136*t312*t5127 + t312*t360*t6341 + t213*t6351 + t8018 + t8019 + t8534))*var2[15];
  p_output1[80]=(0.07996*t312 + t2594*(-1.*t360*t5948 - 1.*t47*t5127*t64 + t8134 + t8135) - 1.*t312*t64*t8556 - 1.*t136*t312*t8568 + (t136*t47*t5127 + t1910*t5948 + t8121 + t8124)*t90)*var2[14] + (t136*t47*t8556 - 1.*t47*t64*t8568 + t2594*(-1.*t136*t312*t5127 - 1.*t312*t360*t6341 - 1.*t213*t6351 + t8168 + t8170 + t8590) + (t1910*t312*t6341 + t1950*t6351 - 1.*t312*t5127*t64 + t8147 + t8156 + t8576)*t90)*var2[15];
  p_output1[81]=t8448;
  p_output1[82]=t8451;
  p_output1[83]=t8452;
  p_output1[84]=0.0358*t136*var2[15];
  p_output1[85]=-0.0358*t64*var2[15];
  p_output1[86]=(t64*(0. + t136*t5123 + t8534) + t64*(-1.*t136*t5123 + t136*t6351 - 1.*t6341*t64 + t8590) + t136*(0. + t8576 + t8621) - 1.*t136*(t136*t6341 + t6351*t64 + t8576 + t8621))*var2[15];
  p_output1[87]=t64*var2[15];
  p_output1[88]=t136*var2[15];
  p_output1[89]=0;
  p_output1[90]=0;
  p_output1[91]=0;
  p_output1[92]=0;
  p_output1[93]=0;
  p_output1[94]=0;
  p_output1[95]=0;
  p_output1[96]=0;
  p_output1[97]=0;
  p_output1[98]=0;
  p_output1[99]=0;
  p_output1[100]=0;
  p_output1[101]=0;
  p_output1[102]=0;
  p_output1[103]=0;
  p_output1[104]=0;
  p_output1[105]=0;
  p_output1[106]=0;
  p_output1[107]=0;
  p_output1[108]=0;
  p_output1[109]=0;
  p_output1[110]=0;
  p_output1[111]=0;
  p_output1[112]=0;
  p_output1[113]=0;
  p_output1[114]=0;
  p_output1[115]=0;
  p_output1[116]=0;
  p_output1[117]=0;
  p_output1[118]=0;
  p_output1[119]=0;
}



void dJb_RightThigh_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
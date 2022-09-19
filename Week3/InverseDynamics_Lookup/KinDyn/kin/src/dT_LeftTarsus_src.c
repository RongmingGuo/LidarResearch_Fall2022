/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:26:21 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dT_LeftTarsus_src.h"

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
  double t179;
  double t116;
  double t181;
  double t131;
  double t214;
  double t71;
  double t96;
  double t155;
  double t224;
  double t270;
  double t287;
  double t306;
  double t309;
  double t333;
  double t340;
  double t349;
  double t350;
  double t363;
  double t374;
  double t377;
  double t396;
  double t426;
  double t493;
  double t36;
  double t57;
  double t500;
  double t622;
  double t465;
  double t516;
  double t575;
  double t26;
  double t641;
  double t652;
  double t688;
  double t23;
  double t986;
  double t1002;
  double t1053;
  double t1088;
  double t1096;
  double t1097;
  double t981;
  double t1055;
  double t1060;
  double t1070;
  double t1102;
  double t1115;
  double t1139;
  double t1152;
  double t1153;
  double t774;
  double t1133;
  double t1175;
  double t1190;
  double t1234;
  double t1235;
  double t1239;
  double t1403;
  double t1416;
  double t1386;
  double t1390;
  double t1392;
  double t1432;
  double t1438;
  double t1465;
  double t1470;
  double t1487;
  double t1447;
  double t1508;
  double t1512;
  double t1541;
  double t1546;
  double t1558;
  double t1663;
  double t1676;
  double t1690;
  double t1623;
  double t1631;
  double t1632;
  double t1641;
  double t1643;
  double t1647;
  double t1655;
  double t1716;
  double t1718;
  double t1743;
  double t1750;
  double t1761;
  double t1722;
  double t1764;
  double t1771;
  double t1781;
  double t1786;
  double t1790;
  double t1952;
  double t1962;
  double t1974;
  double t1894;
  double t1922;
  double t1935;
  double t2061;
  double t2080;
  double t2085;
  double t1892;
  double t1938;
  double t1981;
  double t1991;
  double t2012;
  double t2051;
  double t2053;
  double t2124;
  double t2144;
  double t2170;
  double t2179;
  double t2183;
  double t2151;
  double t2187;
  double t2188;
  double t2199;
  double t2203;
  double t2205;
  double t2317;
  double t2322;
  double t2324;
  double t2325;
  double t2344;
  double t2363;
  double t2384;
  double t2392;
  double t2395;
  double t2366;
  double t2404;
  double t2409;
  double t2424;
  double t2428;
  double t2469;
  double t2539;
  double t2545;
  double t2557;
  double t2574;
  double t2593;
  double t2604;
  double t2638;
  double t2597;
  double t2667;
  double t2692;
  double t2693;
  double t2694;
  double t2736;
  double t2749;
  double t2750;
  double t2830;
  double t2841;
  double t2845;
  double t2846;
  double t2854;
  double t2858;
  double t2867;
  double t2871;
  double t2873;
  double t2875;
  double t2879;
  double t2888;
  double t2891;
  double t2892;
  double t2894;
  double t2923;
  double t2926;
  double t2937;
  double t3049;
  double t3052;
  double t3028;
  double t3030;
  double t3044;
  double t3045;
  double t3053;
  double t3064;
  double t3075;
  double t3076;
  double t3079;
  double t3068;
  double t3085;
  double t3090;
  double t3101;
  double t3103;
  double t3104;
  double t3196;
  double t3205;
  double t3182;
  double t3189;
  double t3195;
  double t3215;
  double t3225;
  double t3227;
  double t3233;
  double t3234;
  double t3226;
  double t3244;
  double t3250;
  double t3262;
  double t3278;
  double t3282;
  double t3377;
  double t3378;
  double t3390;
  double t3351;
  double t3354;
  double t3360;
  double t3361;
  double t3365;
  double t3370;
  double t3374;
  double t3402;
  double t3405;
  double t3419;
  double t3431;
  double t3432;
  double t3413;
  double t3433;
  double t3445;
  double t3460;
  double t3463;
  double t3475;
  double t3528;
  double t3529;
  double t3531;
  double t3532;
  double t3540;
  double t3541;
  double t3552;
  double t3572;
  double t3577;
  double t3551;
  double t3578;
  double t3580;
  double t3590;
  double t3612;
  double t3615;
  double t3669;
  double t3674;
  double t3676;
  double t3677;
  double t3683;
  double t3697;
  double t3701;
  double t3691;
  double t3718;
  double t3746;
  double t3747;
  double t3756;
  double t3771;
  double t3777;
  double t3787;
  double t2766;
  double t2775;
  double t2778;
  double t3870;
  double t3872;
  double t3879;
  double t3880;
  double t3885;
  double t3888;
  double t3889;
  double t3897;
  double t3901;
  double t3928;
  double t3930;
  double t3937;
  double t4028;
  double t4029;
  double t4038;
  double t4011;
  double t4015;
  double t4020;
  double t4022;
  double t4039;
  double t4043;
  double t4052;
  double t4053;
  double t4057;
  double t4048;
  double t4072;
  double t4078;
  double t4089;
  double t4094;
  double t4101;
  double t4082;
  double t4103;
  double t4105;
  double t4117;
  double t4124;
  double t4126;
  double t4127;
  double t4129;
  double t4140;
  double t4172;
  double t4174;
  double t4175;
  double t4176;
  double t4180;
  double t4187;
  double t4192;
  double t4212;
  double t4216;
  double t4189;
  double t4221;
  double t4227;
  double t4229;
  double t4237;
  double t4240;
  double t4278;
  double t4284;
  double t4285;
  double t4286;
  double t4294;
  double t4297;
  double t4298;
  double t4296;
  double t4304;
  double t4317;
  double t4321;
  double t4326;
  double t4337;
  double t4338;
  double t4342;
  double t4406;
  double t4413;
  double t4416;
  double t4378;
  double t4384;
  double t4385;
  double t4389;
  double t4397;
  double t4399;
  double t4400;
  double t4422;
  double t4424;
  double t4428;
  double t4432;
  double t4433;
  double t4427;
  double t4441;
  double t4443;
  double t4446;
  double t4448;
  double t4454;
  double t605;
  double t692;
  double t699;
  double t817;
  double t836;
  double t872;
  double t1195;
  double t1289;
  double t1296;
  double t1320;
  double t1327;
  double t1340;
  double t1529;
  double t1561;
  double t1583;
  double t1590;
  double t1595;
  double t1596;
  double t1777;
  double t1791;
  double t1812;
  double t1824;
  double t1826;
  double t1836;
  double t2192;
  double t2223;
  double t2252;
  double t2266;
  double t2267;
  double t2286;
  double t2414;
  double t2475;
  double t2484;
  double t2509;
  double t2512;
  double t2521;
  double t2652;
  double t2655;
  double t2670;
  double t2671;
  double t2729;
  double t2731;
  double t4589;
  double t2895;
  double t2942;
  double t2972;
  double t2978;
  double t2982;
  double t2984;
  double t3100;
  double t3105;
  double t3106;
  double t3115;
  double t3117;
  double t3139;
  double t3256;
  double t3287;
  double t3296;
  double t3299;
  double t3314;
  double t3325;
  double t3459;
  double t3480;
  double t3485;
  double t3501;
  double t3505;
  double t3510;
  double t3584;
  double t3617;
  double t3618;
  double t3627;
  double t3631;
  double t3632;
  double t3703;
  double t3707;
  double t3719;
  double t3723;
  double t3757;
  double t3759;
  double t3808;
  double t3812;
  double t3815;
  double t4698;
  double t2782;
  double t2787;
  double t3924;
  double t3945;
  double t3951;
  double t3967;
  double t3972;
  double t3982;
  double t4740;
  double t4742;
  double t4743;
  double t4228;
  double t4243;
  double t4244;
  double t4254;
  double t4255;
  double t4263;
  double t4300;
  double t4301;
  double t4310;
  double t4311;
  double t4328;
  double t4333;
  double t4350;
  double t4359;
  double t4365;
  double t4776;
  double t4444;
  double t4455;
  double t4457;
  double t4466;
  double t4469;
  double t4473;
  double t4972;
  double t4973;
  double t5028;
  double t5034;
  double t5053;
  double t5055;
  double t4489;
  double t4494;
  double t4500;
  double t5114;
  double t5115;
  double t4999;
  double t5001;
  double t5002;
  double t5003;
  double t5005;
  double t4979;
  double t4983;
  double t4990;
  double t5014;
  double t5017;
  double t5020;
  double t5035;
  double t5039;
  double t5041;
  double t5047;
  double t5049;
  double t5050;
  double t5062;
  double t5063;
  double t5069;
  double t5074;
  double t5076;
  double t5082;
  double t4502;
  double t4506;
  double t4509;
  double t5131;
  double t5148;
  double t5149;
  double t5150;
  double t5153;
  double t5154;
  double t5177;
  double t5178;
  double t5179;
  double t4523;
  double t4528;
  double t4532;
  double t5118;
  double t5120;
  double t5122;
  double t5130;
  double t5134;
  double t4960;
  double t4540;
  double t4543;
  double t4548;
  double t5309;
  double t5311;
  double t4551;
  double t4553;
  double t4554;
  double t4561;
  double t4564;
  double t4567;
  double t4576;
  double t4577;
  double t4580;
  double t4588;
  double t4599;
  double t4602;
  double t4606;
  double t5585;
  double t4932;
  double t4936;
  double t4944;
  double t4953;
  double t4962;
  double t4611;
  double t4613;
  double t4617;
  double t4621;
  double t4627;
  double t4631;
  double t5225;
  double t5228;
  double t5231;
  double t5232;
  double t5237;
  double t4637;
  double t4639;
  double t4640;
  double t4649;
  double t4653;
  double t4661;
  double t5434;
  double t5436;
  double t5441;
  double t5448;
  double t5458;
  double t4669;
  double t4670;
  double t4671;
  double t5504;
  double t5505;
  double t5509;
  double t5514;
  double t5515;
  double t4680;
  double t4681;
  double t4692;
  double t5554;
  double t5558;
  double t5565;
  double t5566;
  double t5567;
  double t4695;
  double t4699;
  double t5596;
  double t5604;
  double t5605;
  double t5611;
  double t5612;
  double t4708;
  double t4709;
  double t5970;
  double t4729;
  double t4731;
  double t4736;
  double t6163;
  double t6171;
  double t6172;
  double t6173;
  double t6174;
  double t6175;
  double t6177;
  double t6178;
  double t6182;
  double t6183;
  double t6186;
  double t6188;
  double t6198;
  double t6200;
  double t6204;
  double t4753;
  double t4760;
  double t4761;
  double t4766;
  double t4771;
  double t4772;
  double t4774;
  double t4777;
  double t4782;
  double t4785;
  double t6294;
  double t4809;
  double t4812;
  double t4814;
  t179 = Cos(var1[3]);
  t116 = Cos(var1[5]);
  t181 = Sin(var1[4]);
  t131 = Sin(var1[3]);
  t214 = Sin(var1[5]);
  t71 = Cos(var1[7]);
  t96 = Cos(var1[6]);
  t155 = -1.*t116*t131;
  t224 = t179*t181*t214;
  t270 = t155 + t224;
  t287 = t96*t270;
  t306 = t179*t116*t181;
  t309 = t131*t214;
  t333 = t306 + t309;
  t340 = Sin(var1[6]);
  t349 = t333*t340;
  t350 = t287 + t349;
  t363 = t71*t350;
  t374 = Cos(var1[4]);
  t377 = Sin(var1[7]);
  t396 = -1.*t179*t374*t377;
  t426 = t363 + t396;
  t493 = Cos(var1[9]);
  t36 = Cos(var1[8]);
  t57 = Sin(var1[9]);
  t500 = Sin(var1[8]);
  t622 = Cos(var1[10]);
  t465 = -1.*t36*t57*t426;
  t516 = -1.*t493*t426*t500;
  t575 = t465 + t516;
  t26 = Sin(var1[10]);
  t641 = t493*t36*t426;
  t652 = -1.*t57*t426*t500;
  t688 = t641 + t652;
  t23 = Sin(var1[11]);
  t986 = t116*t131;
  t1002 = -1.*t179*t181*t214;
  t1053 = t986 + t1002;
  t1088 = t96*t1053;
  t1096 = -1.*t333*t340;
  t1097 = t1088 + t1096;
  t981 = t96*t333;
  t1055 = t1053*t340;
  t1060 = t981 + t1055;
  t1070 = t36*t1060*t377;
  t1102 = t1097*t500;
  t1115 = t1070 + t1102;
  t1139 = t36*t1097;
  t1152 = -1.*t1060*t377*t500;
  t1153 = t1139 + t1152;
  t774 = Cos(var1[11]);
  t1133 = -1.*t57*t1115;
  t1175 = t493*t1153;
  t1190 = t1133 + t1175;
  t1234 = t493*t1115;
  t1235 = t57*t1153;
  t1239 = t1234 + t1235;
  t1403 = -1.*t96*t270;
  t1416 = t1403 + t1096;
  t1386 = -1.*t270*t340;
  t1390 = t981 + t1386;
  t1392 = t36*t1390*t377;
  t1432 = t1416*t500;
  t1438 = t1392 + t1432;
  t1465 = t36*t1416;
  t1470 = -1.*t1390*t377*t500;
  t1487 = t1465 + t1470;
  t1447 = -1.*t57*t1438;
  t1508 = t493*t1487;
  t1512 = t1447 + t1508;
  t1541 = t493*t1438;
  t1546 = t57*t1487;
  t1558 = t1541 + t1546;
  t1663 = t179*t374*t116*t96;
  t1676 = -1.*t179*t374*t214*t340;
  t1690 = t1663 + t1676;
  t1623 = -1.*t179*t71*t181;
  t1631 = t179*t374*t96*t214;
  t1632 = t179*t374*t116*t340;
  t1641 = t1631 + t1632;
  t1643 = t1641*t377;
  t1647 = t1623 + t1643;
  t1655 = t36*t1647;
  t1716 = t1690*t500;
  t1718 = t1655 + t1716;
  t1743 = t36*t1690;
  t1750 = -1.*t1647*t500;
  t1761 = t1743 + t1750;
  t1722 = -1.*t57*t1718;
  t1764 = t493*t1761;
  t1771 = t1722 + t1764;
  t1781 = t493*t1718;
  t1786 = t57*t1761;
  t1790 = t1781 + t1786;
  t1952 = -1.*t116*t131*t181;
  t1962 = t179*t214;
  t1974 = t1952 + t1962;
  t1894 = -1.*t179*t116;
  t1922 = -1.*t131*t181*t214;
  t1935 = t1894 + t1922;
  t2061 = t96*t1974;
  t2080 = -1.*t1935*t340;
  t2085 = t2061 + t2080;
  t1892 = -1.*t374*t71*t131;
  t1938 = t96*t1935;
  t1981 = t1974*t340;
  t1991 = t1938 + t1981;
  t2012 = t1991*t377;
  t2051 = t1892 + t2012;
  t2053 = t36*t2051;
  t2124 = t2085*t500;
  t2144 = t2053 + t2124;
  t2170 = t36*t2085;
  t2179 = -1.*t2051*t500;
  t2183 = t2170 + t2179;
  t2151 = -1.*t57*t2144;
  t2187 = t493*t2183;
  t2188 = t2151 + t2187;
  t2199 = t493*t2144;
  t2203 = t57*t2183;
  t2205 = t2199 + t2203;
  t2317 = t179*t374*t71;
  t2322 = t350*t377;
  t2324 = t2317 + t2322;
  t2325 = -1.*t36*t2324;
  t2344 = -1.*t1390*t500;
  t2363 = t2325 + t2344;
  t2384 = t36*t1390;
  t2392 = -1.*t2324*t500;
  t2395 = t2384 + t2392;
  t2366 = t57*t2363;
  t2404 = t493*t2395;
  t2409 = t2366 + t2404;
  t2424 = t493*t2363;
  t2428 = -1.*t57*t2395;
  t2469 = t2424 + t2428;
  t2539 = t36*t2324;
  t2545 = t1390*t500;
  t2557 = t2539 + t2545;
  t2574 = -1.*t57*t2557;
  t2593 = t2574 + t2404;
  t2604 = -1.*t493*t2557;
  t2638 = t2604 + t2428;
  t2597 = -1.*t26*t2593;
  t2667 = t622*t2593;
  t2692 = t493*t2557;
  t2693 = t57*t2395;
  t2694 = t2692 + t2693;
  t2736 = -1.*t26*t2694;
  t2749 = t2667 + t2736;
  t2750 = t23*t2749;
  t2830 = t179*t116;
  t2841 = t131*t181*t214;
  t2845 = t2830 + t2841;
  t2846 = t96*t2845;
  t2854 = t116*t131*t181;
  t2858 = -1.*t179*t214;
  t2867 = t2854 + t2858;
  t2871 = t2867*t340;
  t2873 = t2846 + t2871;
  t2875 = t71*t2873;
  t2879 = -1.*t374*t131*t377;
  t2888 = t2875 + t2879;
  t2891 = -1.*t36*t57*t2888;
  t2892 = -1.*t493*t2888*t500;
  t2894 = t2891 + t2892;
  t2923 = t493*t36*t2888;
  t2926 = -1.*t57*t2888*t500;
  t2937 = t2923 + t2926;
  t3049 = -1.*t2867*t340;
  t3052 = t1938 + t3049;
  t3028 = t96*t2867;
  t3030 = t1935*t340;
  t3044 = t3028 + t3030;
  t3045 = t36*t3044*t377;
  t3053 = t3052*t500;
  t3064 = t3045 + t3053;
  t3075 = t36*t3052;
  t3076 = -1.*t3044*t377*t500;
  t3079 = t3075 + t3076;
  t3068 = -1.*t57*t3064;
  t3085 = t493*t3079;
  t3090 = t3068 + t3085;
  t3101 = t493*t3064;
  t3103 = t57*t3079;
  t3104 = t3101 + t3103;
  t3196 = -1.*t96*t2845;
  t3205 = t3196 + t3049;
  t3182 = -1.*t2845*t340;
  t3189 = t3028 + t3182;
  t3195 = t36*t3189*t377;
  t3215 = t3205*t500;
  t3225 = t3195 + t3215;
  t3227 = t36*t3205;
  t3233 = -1.*t3189*t377*t500;
  t3234 = t3227 + t3233;
  t3226 = -1.*t57*t3225;
  t3244 = t493*t3234;
  t3250 = t3226 + t3244;
  t3262 = t493*t3225;
  t3278 = t57*t3234;
  t3282 = t3262 + t3278;
  t3377 = t374*t116*t96*t131;
  t3378 = -1.*t374*t131*t214*t340;
  t3390 = t3377 + t3378;
  t3351 = -1.*t71*t131*t181;
  t3354 = t374*t96*t131*t214;
  t3360 = t374*t116*t131*t340;
  t3361 = t3354 + t3360;
  t3365 = t3361*t377;
  t3370 = t3351 + t3365;
  t3374 = t36*t3370;
  t3402 = t3390*t500;
  t3405 = t3374 + t3402;
  t3419 = t36*t3390;
  t3431 = -1.*t3370*t500;
  t3432 = t3419 + t3431;
  t3413 = -1.*t57*t3405;
  t3433 = t493*t3432;
  t3445 = t3413 + t3433;
  t3460 = t493*t3405;
  t3463 = t57*t3432;
  t3475 = t3460 + t3463;
  t3528 = t374*t71*t131;
  t3529 = t2873*t377;
  t3531 = t3528 + t3529;
  t3532 = -1.*t36*t3531;
  t3540 = -1.*t3189*t500;
  t3541 = t3532 + t3540;
  t3552 = t36*t3189;
  t3572 = -1.*t3531*t500;
  t3577 = t3552 + t3572;
  t3551 = t57*t3541;
  t3578 = t493*t3577;
  t3580 = t3551 + t3578;
  t3590 = t493*t3541;
  t3612 = -1.*t57*t3577;
  t3615 = t3590 + t3612;
  t3669 = t36*t3531;
  t3674 = t3189*t500;
  t3676 = t3669 + t3674;
  t3677 = -1.*t57*t3676;
  t3683 = t3677 + t3578;
  t3697 = -1.*t493*t3676;
  t3701 = t3697 + t3612;
  t3691 = -1.*t26*t3683;
  t3718 = t622*t3683;
  t3746 = t493*t3676;
  t3747 = t57*t3577;
  t3756 = t3746 + t3747;
  t3771 = -1.*t26*t3756;
  t3777 = t3718 + t3771;
  t3787 = t23*t3777;
  t2766 = t26*t2593;
  t2775 = t622*t2694;
  t2778 = t2766 + t2775;
  t3870 = t374*t96*t214;
  t3872 = t374*t116*t340;
  t3879 = t3870 + t3872;
  t3880 = t71*t3879;
  t3885 = t181*t377;
  t3888 = t3880 + t3885;
  t3889 = -1.*t36*t57*t3888;
  t3897 = -1.*t493*t3888*t500;
  t3901 = t3889 + t3897;
  t3928 = t493*t36*t3888;
  t3930 = -1.*t57*t3888*t500;
  t3937 = t3928 + t3930;
  t4028 = -1.*t374*t96*t214;
  t4029 = -1.*t374*t116*t340;
  t4038 = t4028 + t4029;
  t4011 = t374*t116*t96;
  t4015 = -1.*t374*t214*t340;
  t4020 = t4011 + t4015;
  t4022 = t36*t4020*t377;
  t4039 = t4038*t500;
  t4043 = t4022 + t4039;
  t4052 = t36*t4038;
  t4053 = -1.*t4020*t377*t500;
  t4057 = t4052 + t4053;
  t4048 = -1.*t57*t4043;
  t4072 = t493*t4057;
  t4078 = t4048 + t4072;
  t4089 = t493*t4043;
  t4094 = t57*t4057;
  t4101 = t4089 + t4094;
  t4082 = t26*t4078;
  t4103 = t622*t4101;
  t4105 = t4082 + t4103;
  t4117 = t23*t4105;
  t4124 = t622*t4078;
  t4126 = -1.*t26*t4101;
  t4127 = t4124 + t4126;
  t4129 = -1.*t774*t4127;
  t4140 = t4117 + t4129;
  t4172 = -1.*t71*t181;
  t4174 = t3879*t377;
  t4175 = t4172 + t4174;
  t4176 = -1.*t36*t4175;
  t4180 = -1.*t4020*t500;
  t4187 = t4176 + t4180;
  t4192 = t36*t4020;
  t4212 = -1.*t4175*t500;
  t4216 = t4192 + t4212;
  t4189 = t57*t4187;
  t4221 = t493*t4216;
  t4227 = t4189 + t4221;
  t4229 = t493*t4187;
  t4237 = -1.*t57*t4216;
  t4240 = t4229 + t4237;
  t4278 = t36*t4175;
  t4284 = t4020*t500;
  t4285 = t4278 + t4284;
  t4286 = -1.*t57*t4285;
  t4294 = t4286 + t4221;
  t4297 = -1.*t493*t4285;
  t4298 = t4297 + t4237;
  t4296 = -1.*t26*t4294;
  t4304 = t622*t4294;
  t4317 = t493*t4285;
  t4321 = t57*t4216;
  t4326 = t4317 + t4321;
  t4337 = -1.*t26*t4326;
  t4338 = t4304 + t4337;
  t4342 = t23*t4338;
  t4406 = -1.*t116*t96*t181;
  t4413 = t181*t214*t340;
  t4416 = t4406 + t4413;
  t4378 = -1.*t374*t71;
  t4384 = -1.*t96*t181*t214;
  t4385 = -1.*t116*t181*t340;
  t4389 = t4384 + t4385;
  t4397 = t4389*t377;
  t4399 = t4378 + t4397;
  t4400 = t36*t4399;
  t4422 = t4416*t500;
  t4424 = t4400 + t4422;
  t4428 = t36*t4416;
  t4432 = -1.*t4399*t500;
  t4433 = t4428 + t4432;
  t4427 = -1.*t57*t4424;
  t4441 = t493*t4433;
  t4443 = t4427 + t4441;
  t4446 = t493*t4424;
  t4448 = t57*t4433;
  t4454 = t4446 + t4448;
  t605 = t26*t575;
  t692 = t622*t688;
  t699 = t605 + t692;
  t817 = t622*t575;
  t836 = -1.*t26*t688;
  t872 = t817 + t836;
  t1195 = t26*t1190;
  t1289 = t622*t1239;
  t1296 = t1195 + t1289;
  t1320 = t622*t1190;
  t1327 = -1.*t26*t1239;
  t1340 = t1320 + t1327;
  t1529 = t26*t1512;
  t1561 = t622*t1558;
  t1583 = t1529 + t1561;
  t1590 = t622*t1512;
  t1595 = -1.*t26*t1558;
  t1596 = t1590 + t1595;
  t1777 = t26*t1771;
  t1791 = t622*t1790;
  t1812 = t1777 + t1791;
  t1824 = t622*t1771;
  t1826 = -1.*t26*t1790;
  t1836 = t1824 + t1826;
  t2192 = t26*t2188;
  t2223 = t622*t2205;
  t2252 = t2192 + t2223;
  t2266 = t622*t2188;
  t2267 = -1.*t26*t2205;
  t2286 = t2266 + t2267;
  t2414 = -1.*t26*t2409;
  t2475 = t622*t2469;
  t2484 = t2414 + t2475;
  t2509 = t622*t2409;
  t2512 = t26*t2469;
  t2521 = t2509 + t2512;
  t2652 = t622*t2638;
  t2655 = t2597 + t2652;
  t2670 = t26*t2638;
  t2671 = t2667 + t2670;
  t2729 = -1.*t622*t2694;
  t2731 = t2597 + t2729;
  t4589 = t774*t2749;
  t2895 = t26*t2894;
  t2942 = t622*t2937;
  t2972 = t2895 + t2942;
  t2978 = t622*t2894;
  t2982 = -1.*t26*t2937;
  t2984 = t2978 + t2982;
  t3100 = t26*t3090;
  t3105 = t622*t3104;
  t3106 = t3100 + t3105;
  t3115 = t622*t3090;
  t3117 = -1.*t26*t3104;
  t3139 = t3115 + t3117;
  t3256 = t26*t3250;
  t3287 = t622*t3282;
  t3296 = t3256 + t3287;
  t3299 = t622*t3250;
  t3314 = -1.*t26*t3282;
  t3325 = t3299 + t3314;
  t3459 = t26*t3445;
  t3480 = t622*t3475;
  t3485 = t3459 + t3480;
  t3501 = t622*t3445;
  t3505 = -1.*t26*t3475;
  t3510 = t3501 + t3505;
  t3584 = -1.*t26*t3580;
  t3617 = t622*t3615;
  t3618 = t3584 + t3617;
  t3627 = t622*t3580;
  t3631 = t26*t3615;
  t3632 = t3627 + t3631;
  t3703 = t622*t3701;
  t3707 = t3691 + t3703;
  t3719 = t26*t3701;
  t3723 = t3718 + t3719;
  t3757 = -1.*t622*t3756;
  t3759 = t3691 + t3757;
  t3808 = t26*t3683;
  t3812 = t622*t3756;
  t3815 = t3808 + t3812;
  t4698 = t774*t3777;
  t2782 = t774*t2778;
  t2787 = t2782 + t2750;
  t3924 = t26*t3901;
  t3945 = t622*t3937;
  t3951 = t3924 + t3945;
  t3967 = t622*t3901;
  t3972 = -1.*t26*t3937;
  t3982 = t3967 + t3972;
  t4740 = t774*t4105;
  t4742 = t23*t4127;
  t4743 = t4740 + t4742;
  t4228 = -1.*t26*t4227;
  t4243 = t622*t4240;
  t4244 = t4228 + t4243;
  t4254 = t622*t4227;
  t4255 = t26*t4240;
  t4263 = t4254 + t4255;
  t4300 = t622*t4298;
  t4301 = t4296 + t4300;
  t4310 = t26*t4298;
  t4311 = t4304 + t4310;
  t4328 = -1.*t622*t4326;
  t4333 = t4296 + t4328;
  t4350 = t26*t4294;
  t4359 = t622*t4326;
  t4365 = t4350 + t4359;
  t4776 = t774*t4338;
  t4444 = t26*t4443;
  t4455 = t622*t4454;
  t4457 = t4444 + t4455;
  t4466 = t622*t4443;
  t4469 = -1.*t26*t4454;
  t4473 = t4466 + t4469;
  t4972 = -1.*t493;
  t4973 = 1. + t4972;
  t5028 = -1.*t622;
  t5034 = 1. + t5028;
  t5053 = -1.*t774;
  t5055 = 1. + t5053;
  t4489 = t774*t699;
  t4494 = t23*t872;
  t4500 = t4489 + t4494;
  t5114 = -1.*t96;
  t5115 = 1. + t5114;
  t4999 = -1.*t36;
  t5001 = 1. + t4999;
  t5002 = -0.08055*t5001;
  t5003 = -0.01004*t500;
  t5005 = 0. + t5002 + t5003;
  t4979 = -0.08055*t4973;
  t4983 = -0.13004*t57;
  t4990 = 0. + t4979 + t4983;
  t5014 = -0.13004*t4973;
  t5017 = 0.08055*t57;
  t5020 = 0. + t5014 + t5017;
  t5035 = -0.19074*t5034;
  t5039 = 0.03315*t26;
  t5041 = 0. + t5035 + t5039;
  t5047 = -0.03315*t5034;
  t5049 = -0.19074*t26;
  t5050 = 0. + t5047 + t5049;
  t5062 = -0.01315*t5055;
  t5063 = -0.62554*t23;
  t5069 = 0. + t5062 + t5063;
  t5074 = -0.62554*t5055;
  t5076 = 0.01315*t23;
  t5082 = 0. + t5074 + t5076;
  t4502 = t774*t1296;
  t4506 = t23*t1340;
  t4509 = t4502 + t4506;
  t5131 = 0.07996*t340;
  t5148 = -1.*t71;
  t5149 = 1. + t5148;
  t5150 = 0.135*t5149;
  t5153 = 0.08055*t377;
  t5154 = 0. + t5150 + t5153;
  t5177 = -0.01004*t5001;
  t5178 = 0.08055*t500;
  t5179 = 0. + t5177 + t5178;
  t4523 = t774*t1583;
  t4528 = t23*t1596;
  t4532 = t4523 + t4528;
  t5118 = 0.07996*t5115;
  t5120 = -0.135*t340;
  t5122 = 0. + t5118 + t5120;
  t5130 = 0.135*t5115;
  t5134 = 0. + t5130 + t5131;
  t4960 = 0.135*t377;
  t4540 = t774*t1812;
  t4543 = t23*t1836;
  t4548 = t4540 + t4543;
  t5309 = -0.08055*t5149;
  t5311 = 0. + t5309 + t4960;
  t4551 = t774*t2252;
  t4553 = t23*t2286;
  t4554 = t4551 + t4553;
  t4561 = t23*t2484;
  t4564 = t774*t2521;
  t4567 = t4561 + t4564;
  t4576 = t23*t2655;
  t4577 = t774*t2671;
  t4580 = t4576 + t4577;
  t4588 = t23*t2731;
  t4599 = t4588 + t4589;
  t4602 = -1.*t23*t2778;
  t4606 = t4602 + t4589;
  t5585 = -1.*t23*t2749;
  t4932 = 0.135*t71;
  t4936 = -0.08055*t377;
  t4944 = t4932 + t4936;
  t4953 = 0.08055*t71;
  t4962 = t4953 + t4960;
  t4611 = t774*t2972;
  t4613 = t23*t2984;
  t4617 = t4611 + t4613;
  t4621 = t774*t3106;
  t4627 = t23*t3139;
  t4631 = t4621 + t4627;
  t5225 = -0.135*t96;
  t5228 = t5225 + t5131;
  t5231 = 0.07996*t96;
  t5232 = 0.135*t340;
  t5237 = t5231 + t5232;
  t4637 = t774*t3296;
  t4639 = t23*t3325;
  t4640 = t4637 + t4639;
  t4649 = t774*t3485;
  t4653 = t23*t3510;
  t4661 = t4649 + t4653;
  t5434 = -0.01004*t36;
  t5436 = -0.08055*t500;
  t5441 = t5434 + t5436;
  t5448 = 0.08055*t36;
  t5458 = t5448 + t5003;
  t4669 = t23*t3618;
  t4670 = t774*t3632;
  t4671 = t4669 + t4670;
  t5504 = -0.13004*t493;
  t5505 = -0.08055*t57;
  t5509 = t5504 + t5505;
  t5514 = 0.08055*t493;
  t5515 = t5514 + t4983;
  t4680 = t23*t3707;
  t4681 = t774*t3723;
  t4692 = t4680 + t4681;
  t5554 = 0.03315*t622;
  t5558 = t5554 + t5049;
  t5565 = -0.19074*t622;
  t5566 = -0.03315*t26;
  t5567 = t5565 + t5566;
  t4695 = t23*t3759;
  t4699 = t4695 + t4698;
  t5596 = -0.62554*t774;
  t5604 = -0.01315*t23;
  t5605 = t5596 + t5604;
  t5611 = 0.01315*t774;
  t5612 = t5611 + t5063;
  t4708 = -1.*t23*t3815;
  t4709 = t4708 + t4698;
  t5970 = -1.*t23*t3777;
  t4729 = t774*t3951;
  t4731 = t23*t3982;
  t4736 = t4729 + t4731;
  t6163 = 0.1318*t71*t4020;
  t6171 = t4020*t5154;
  t6172 = t4020*t377*t5005;
  t6173 = t4038*t5179;
  t6174 = t4990*t4043;
  t6175 = t5020*t4057;
  t6177 = t5041*t4078;
  t6178 = t5050*t4101;
  t6182 = t5069*t4105;
  t6183 = t5082*t4127;
  t6186 = -1.*t23*t4105;
  t6188 = t774*t4127;
  t6198 = t6186 + t6188;
  t6200 = -0.73604*t6198;
  t6204 = -0.04375*t4743;
  t4753 = t23*t4244;
  t4760 = t774*t4263;
  t4761 = t4753 + t4760;
  t4766 = t23*t4301;
  t4771 = t774*t4311;
  t4772 = t4766 + t4771;
  t4774 = t23*t4333;
  t4777 = t4774 + t4776;
  t4782 = -1.*t23*t4365;
  t4785 = t4782 + t4776;
  t6294 = -1.*t23*t4338;
  t4809 = t774*t4457;
  t4812 = t23*t4473;
  t4814 = t4809 + t4812;
  p_output1[0]=(t2252*t23 - 1.*t2286*t774)*var2[3] + (t1812*t23 - 1.*t1836*t774)*var2[4] + (t1296*t23 - 1.*t1340*t774)*var2[5] + (t1583*t23 - 1.*t1596*t774)*var2[6] + (t23*t699 - 1.*t774*t872)*var2[7] + (t23*t2521 - 1.*t2484*t774)*var2[8] + (t23*t2671 - 1.*t2655*t774)*var2[9] + (t2750 - 1.*t2731*t774)*var2[10] + t2787*var2[11];
  p_output1[1]=(t23*t2778 - 1.*t2749*t774)*var2[3] + (t23*t3485 - 1.*t3510*t774)*var2[4] + (t23*t3106 - 1.*t3139*t774)*var2[5] + (t23*t3296 - 1.*t3325*t774)*var2[6] + (t23*t2972 - 1.*t2984*t774)*var2[7] + (t23*t3632 - 1.*t3618*t774)*var2[8] + (t23*t3723 - 1.*t3707*t774)*var2[9] + (t3787 - 1.*t3759*t774)*var2[10] + (t3787 + t3815*t774)*var2[11];
  p_output1[2]=(t23*t4457 - 1.*t4473*t774)*var2[4] + t4140*var2[5] + t4140*var2[6] + (t23*t3951 - 1.*t3982*t774)*var2[7] + (t23*t4263 - 1.*t4244*t774)*var2[8] + (t23*t4311 - 1.*t4301*t774)*var2[9] + (t4342 - 1.*t4333*t774)*var2[10] + (t4342 + t4365*t774)*var2[11];
  p_output1[3]=0;
  p_output1[4]=t4554*var2[3] + t4548*var2[4] + t4509*var2[5] + t4532*var2[6] + t4500*var2[7] + t4567*var2[8] + t4580*var2[9] + t4599*var2[10] + t4606*var2[11];
  p_output1[5]=t2787*var2[3] + t4661*var2[4] + t4631*var2[5] + t4640*var2[6] + t4617*var2[7] + t4671*var2[8] + t4692*var2[9] + t4699*var2[10] + t4709*var2[11];
  p_output1[6]=t4814*var2[4] + t4743*var2[5] + t4743*var2[6] + t4736*var2[7] + t4761*var2[8] + t4772*var2[9] + t4777*var2[10] + t4785*var2[11];
  p_output1[7]=0;
  p_output1[8]=(t2879 - 1.*t1991*t71)*var2[3] + (-1.*t179*t181*t377 - 1.*t1641*t71)*var2[4] - 1.*t1060*t71*var2[5] - 1.*t1390*t71*var2[6] + t2324*var2[7];
  p_output1[9]=(t179*t374*t377 - 1.*t350*t71)*var2[3] + (-1.*t131*t181*t377 - 1.*t3361*t71)*var2[4] - 1.*t3044*t71*var2[5] - 1.*t3189*t71*var2[6] + t3531*var2[7];
  p_output1[10]=(-1.*t374*t377 - 1.*t4389*t71)*var2[4] - 1.*t4020*t71*var2[5] - 1.*t4020*t71*var2[6] + t4175*var2[7];
  p_output1[11]=0;
  p_output1[12]=var2[0] + (-0.04375*t4554 + t2144*t4990 + t2051*t5005 + t2183*t5020 + t2188*t5041 + t2205*t5050 + t2252*t5069 + t2286*t5082 + t1974*t5122 + t1935*t5134 + t1991*t5154 + t2085*t5179 - 1.*t131*t374*t5311 + 0.1318*(t131*t374*t377 + t1991*t71) - 0.73604*(-1.*t2252*t23 + t2286*t774))*var2[3] + (-0.04375*t4548 + t1718*t4990 + t1647*t5005 + t1761*t5020 + t1771*t5041 + t1790*t5050 + t1812*t5069 + t1836*t5082 + t116*t179*t374*t5122 + t179*t214*t374*t5134 + t1641*t5154 + t1690*t5179 - 1.*t179*t181*t5311 + 0.1318*(t179*t181*t377 + t1641*t71) - 0.73604*(-1.*t1812*t23 + t1836*t774))*var2[4] + (-0.04375*t4509 + t1115*t4990 + t1060*t377*t5005 + t1153*t5020 + t1190*t5041 + t1239*t5050 + t1296*t5069 + t1340*t5082 + t1053*t5122 + t333*t5134 + t1060*t5154 + t1097*t5179 + 0.1318*t1060*t71 - 0.73604*(-1.*t1296*t23 + t1340*t774))*var2[5] + (-0.04375*t4532 + t1438*t4990 + t1390*t377*t5005 + t1487*t5020 + t1512*t5041 + t1558*t5050 + t1583*t5069 + t1596*t5082 + t1390*t5154 + t1416*t5179 + t333*t5228 + t270*t5237 + 0.1318*t1390*t71 - 0.73604*(-1.*t1583*t23 + t1596*t774))*var2[6] + (-0.04375*t4500 + t179*t374*t4944 + t350*t4962 + t36*t426*t4990 + t426*t5005 - 1.*t426*t500*t5020 + t5041*t575 + t5050*t688 + t5069*t699 + 0.1318*(-1.*t350*t377 - 1.*t179*t374*t71) + t5082*t872 - 0.73604*(-1.*t23*t699 + t774*t872))*var2[7] + (-0.04375*t4567 + t2395*t4990 + t2363*t5020 + t2469*t5041 + t2409*t5050 + t2521*t5069 + t2484*t5082 + t2324*t5441 + t1390*t5458 - 0.73604*(-1.*t23*t2521 + t2484*t774))*var2[8] + (-0.04375*t4580 + t2638*t5041 + t2593*t5050 + t2671*t5069 + t2655*t5082 + t2557*t5509 + t2395*t5515 - 0.73604*(-1.*t23*t2671 + t2655*t774))*var2[9] + (-0.04375*t4599 + t2749*t5069 + t2731*t5082 + t2593*t5558 + t2694*t5567 - 0.73604*(t5585 + t2731*t774))*var2[10] + (-0.04375*t4606 + t2778*t5605 + t2749*t5612 - 0.73604*(t5585 - 1.*t2778*t774))*var2[11];
  p_output1[13]=var2[1] + (-0.04375*t2787 + 0.1318*t426 - 0.73604*t4606 + t2557*t4990 + t2324*t5005 + t2395*t5020 + t2593*t5041 + t2694*t5050 + t2778*t5069 + t2749*t5082 + t333*t5122 + t270*t5134 + t350*t5154 + t1390*t5179 + t179*t374*t5311)*var2[3] + (-0.04375*t4661 + t3405*t4990 + t3370*t5005 + t3432*t5020 + t3445*t5041 + t3475*t5050 + t3485*t5069 + t3510*t5082 + t116*t131*t374*t5122 + t131*t214*t374*t5134 + t3361*t5154 + t3390*t5179 - 1.*t131*t181*t5311 + 0.1318*(t131*t181*t377 + t3361*t71) - 0.73604*(-1.*t23*t3485 + t3510*t774))*var2[4] + (-0.04375*t4631 + t3064*t4990 + t3044*t377*t5005 + t3079*t5020 + t3090*t5041 + t3104*t5050 + t3106*t5069 + t3139*t5082 + t1935*t5122 + t2867*t5134 + t3044*t5154 + t3052*t5179 + 0.1318*t3044*t71 - 0.73604*(-1.*t23*t3106 + t3139*t774))*var2[5] + (-0.04375*t4640 + t3225*t4990 + t3189*t377*t5005 + t3234*t5020 + t3250*t5041 + t3282*t5050 + t3296*t5069 + t3325*t5082 + t3189*t5154 + t3205*t5179 + t2867*t5228 + t2845*t5237 + 0.1318*t3189*t71 - 0.73604*(-1.*t23*t3296 + t3325*t774))*var2[6] + (0.1318*(t1892 - 1.*t2873*t377) - 0.04375*t4617 + t131*t374*t4944 + t2873*t4962 + t2888*t36*t4990 + t2888*t5005 - 1.*t2888*t500*t5020 + t2894*t5041 + t2937*t5050 + t2972*t5069 + t2984*t5082 - 0.73604*(-1.*t23*t2972 + t2984*t774))*var2[7] + (-0.04375*t4671 + t3577*t4990 + t3541*t5020 + t3615*t5041 + t3580*t5050 + t3632*t5069 + t3618*t5082 + t3531*t5441 + t3189*t5458 - 0.73604*(-1.*t23*t3632 + t3618*t774))*var2[8] + (-0.04375*t4692 + t3701*t5041 + t3683*t5050 + t3723*t5069 + t3707*t5082 + t3676*t5509 + t3577*t5515 - 0.73604*(-1.*t23*t3723 + t3707*t774))*var2[9] + (-0.04375*t4699 + t3777*t5069 + t3759*t5082 + t3683*t5558 + t3756*t5567 - 0.73604*(t5970 + t3759*t774))*var2[10] + (-0.04375*t4709 + t3815*t5605 + t3777*t5612 - 0.73604*(t5970 - 1.*t3815*t774))*var2[11];
  p_output1[14]=var2[2] + (-0.04375*t4814 + t4424*t4990 + t4399*t5005 + t4433*t5020 + t4443*t5041 + t4454*t5050 + t4457*t5069 + t4473*t5082 - 1.*t116*t181*t5122 - 1.*t181*t214*t5134 + t4389*t5154 + t4416*t5179 - 1.*t374*t5311 + 0.1318*(t374*t377 + t4389*t71) - 0.73604*(-1.*t23*t4457 + t4473*t774))*var2[4] + (-1.*t214*t374*t5122 + t116*t374*t5134 + t6163 + t6171 + t6172 + t6173 + t6174 + t6175 + t6177 + t6178 + t6182 + t6183 + t6200 + t6204)*var2[5] + (t116*t374*t5228 + t214*t374*t5237 + t6163 + t6171 + t6172 + t6173 + t6174 + t6175 + t6177 + t6178 + t6182 + t6183 + t6200 + t6204)*var2[6] + (-0.04375*t4736 - 1.*t181*t4944 + t3879*t4962 + t36*t3888*t4990 + t3888*t5005 - 1.*t3888*t500*t5020 + t3901*t5041 + t3937*t5050 + t3951*t5069 + t3982*t5082 + 0.1318*(-1.*t377*t3879 + t181*t71) - 0.73604*(-1.*t23*t3951 + t3982*t774))*var2[7] + (-0.04375*t4761 + t4216*t4990 + t4187*t5020 + t4240*t5041 + t4227*t5050 + t4263*t5069 + t4244*t5082 + t4175*t5441 + t4020*t5458 - 0.73604*(-1.*t23*t4263 + t4244*t774))*var2[8] + (-0.04375*t4772 + t4298*t5041 + t4294*t5050 + t4311*t5069 + t4301*t5082 + t4285*t5509 + t4216*t5515 - 0.73604*(-1.*t23*t4311 + t4301*t774))*var2[9] + (-0.04375*t4777 + t4338*t5069 + t4333*t5082 + t4294*t5558 + t4326*t5567 - 0.73604*(t6294 + t4333*t774))*var2[10] + (-0.04375*t4785 + t4365*t5605 + t4338*t5612 - 0.73604*(t6294 - 1.*t4365*t774))*var2[11];
  p_output1[15]=0;
}



void dT_LeftTarsus_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
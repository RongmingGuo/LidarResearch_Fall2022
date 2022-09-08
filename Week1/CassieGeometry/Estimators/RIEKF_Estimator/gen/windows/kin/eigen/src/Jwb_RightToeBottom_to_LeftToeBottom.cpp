/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:34:51 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jwb_RightToeBottom_to_LeftToeBottom.h"

#ifdef _MSC_VER
  #define INLINE __forceinline /* use __forceinline (VC++ specific) */
#else
  #define INLINE static inline        /* use standard inline */
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
static void output1(Eigen::Matrix<double,3,14> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  double t380;
  double t432;
  double t477;
  double t411;
  double t435;
  double t438;
  double t356;
  double t478;
  double t497;
  double t499;
  double t567;
  double t471;
  double t519;
  double t549;
  double t316;
  double t570;
  double t587;
  double t589;
  double t651;
  double t561;
  double t604;
  double t628;
  double t258;
  double t683;
  double t691;
  double t697;
  double t91;
  double t251;
  double t862;
  double t866;
  double t894;
  double t860;
  double t900;
  double t912;
  double t921;
  double t925;
  double t915;
  double t927;
  double t950;
  double t995;
  double t1002;
  double t1005;
  double t790;
  double t744;
  double t770;
  double t782;
  double t642;
  double t704;
  double t708;
  double t1038;
  double t1046;
  double t1052;
  double t962;
  double t1013;
  double t1023;
  double t1181;
  double t1365;
  double t1265;
  double t1273;
  double t1425;
  double t1243;
  double t1458;
  double t1473;
  double t1486;
  double t1290;
  double t1436;
  double t1440;
  double t1488;
  double t1241;
  double t1555;
  double t1591;
  double t1601;
  double t1445;
  double t1505;
  double t1538;
  double t1605;
  double t1236;
  double t1664;
  double t1677;
  double t1703;
  double t1553;
  double t1617;
  double t1651;
  double t1708;
  double t1191;
  double t1747;
  double t1756;
  double t1762;
  double t1657;
  double t1709;
  double t1727;
  double t1767;
  double t1890;
  double t1930;
  double t1941;
  double t1953;
  double t1894;
  double t1895;
  double t1904;
  double t1975;
  double t1991;
  double t1992;
  double t1909;
  double t1958;
  double t1961;
  double t2019;
  double t2035;
  double t2052;
  double t1968;
  double t2007;
  double t2009;
  double t2210;
  double t2213;
  double t2220;
  double t2194;
  double t2198;
  double t2203;
  double t2236;
  double t2239;
  double t2248;
  double t2204;
  double t2226;
  double t2228;
  double t2280;
  double t2282;
  double t2286;
  double t2234;
  double t2250;
  double t2271;
  double t2305;
  double t2314;
  double t2315;
  double t2274;
  double t2290;
  double t2296;
  double t1740;
  double t1768;
  double t1784;
  double t1808;
  double t1825;
  double t1866;
  double t2015;
  double t2061;
  double t2089;
  double t2101;
  double t2106;
  double t2147;
  double t2302;
  double t2339;
  double t2352;
  double t2364;
  double t2368;
  double t2391;
  double t2457;
  double t2482;
  double t2506;
  double t2356;
  double t2393;
  double t2398;
  double t2096;
  double t2159;
  double t2166;
  double t2519;
  double t2526;
  double t2573;
  double t1796;
  double t1883;
  double t1887;
  double t2180;
  double t2402;
  double t2409;
  double t2420;
  double t2428;
  double t2438;
  double t2446;
  double t2512;
  double t2589;
  double t2618;
  double t2628;
  double t2632;
  double t2633;
  double t2634;
  double t2647;
  double t2655;
  double t2661;
  double t2783;
  double t2795;
  double t2801;
  double t2818;
  double t2857;
  double t2862;
  double t2812;
  double t2868;
  double t2874;
  double t2887;
  double t2890;
  double t2898;
  double t2884;
  double t2917;
  double t2925;
  double t2930;
  double t2931;
  double t2939;
  double t59;
  double t3137;
  double t3102;
  double t3133;
  double t3149;
  double t3153;
  double t3201;
  double t3231;
  double t3239;
  double t3181;
  double t3243;
  double t3254;
  double t3281;
  double t3299;
  double t3308;
  double t3264;
  double t3314;
  double t3325;
  double t3338;
  double t3352;
  double t3367;
  double t3328;
  double t3370;
  double t3388;
  double t3411;
  double t3420;
  double t3423;
  double t3562;
  double t3582;
  double t3608;
  double t3630;
  double t3641;
  double t3667;
  double t3629;
  double t3683;
  double t3686;
  double t3713;
  double t3735;
  double t3744;
  double t3691;
  double t3752;
  double t3758;
  double t3820;
  double t3881;
  double t3925;
  double t3817;
  double t3951;
  double t3952;
  double t3969;
  double t3973;
  double t3986;
  double t2926;
  double t2986;
  double t3011;
  double t3028;
  double t3040;
  double t3043;
  double t3398;
  double t3429;
  double t3433;
  double t3454;
  double t3468;
  double t3485;
  double t3957;
  double t3988;
  double t3994;
  double t4000;
  double t4052;
  double t4059;
  double t4127;
  double t4182;
  double t4184;
  double t3017;
  double t3045;
  double t3050;
  double t4311;
  double t4327;
  double t4341;
  double t3446;
  double t3497;
  double t3504;
  double t4439;
  double t4454;
  double t4460;
  double t3999;
  double t4061;
  double t4081;
  double t2772;
  double t2774;
  double t2779;
  double t4215;
  double t4262;
  double t4307;
  double t3071;
  double t3072;
  double t3083;
  double t4349;
  double t4357;
  double t4392;
  double t3534;
  double t4468;
  double t4492;
  double t4499;
  double t2650;
  double t2699;
  double t2713;
  double t4573;
  double t4576;
  double t4587;
  double t4639;
  double t4546;
  double t4555;
  double t4562;
  double t4572;
  double t4772;
  double t4775;
  double t4778;
  double t4670;
  double t4682;
  double t4685;
  double t4696;
  double t3062;
  double t3520;
  double t4083;
  double t4111;
  double t4686;
  double t4754;
  double t4779;
  double t4785;
  double t4308;
  double t4418;
  double t4500;
  double t4516;
  double t4812;
  double t4837;
  double t4852;
  double t4853;
  double t4860;
  double t4867;
  double t4870;
  double t4874;
  double t4997;
  double t5002;
  double t5004;
  double t5028;
  double t5325;
  double t5339;
  double t5343;
  double t5369;
  double t5378;
  double t5407;
  double t5356;
  double t5413;
  double t5420;
  double t5439;
  double t5442;
  double t5445;
  double t5435;
  double t5457;
  double t5470;
  double t5498;
  double t5509;
  double t5524;
  double t5123;
  double t5152;
  double t5157;
  double t4804;
  double t4876;
  double t4921;
  double t4924;
  double t4992;
  double t5059;
  double t5067;
  double t5076;
  double t5085;
  double t5091;
  double t5099;
  double t5115;
  double t5161;
  double t5191;
  double t5197;
  double t5259;
  double t5264;
  double t5645;
  double t5670;
  double t5678;
  double t5630;
  double t5689;
  double t5704;
  double t5730;
  double t5733;
  double t5707;
  double t5753;
  double t5759;
  double t5771;
  double t5793;
  double t5795;
  double t1187;
  double t5495;
  double t5538;
  double t5548;
  double t5563;
  double t5569;
  double t5571;
  double t5580;
  double t5592;
  double t5604;
  double t5607;
  double t5611;
  double t5761;
  double t5796;
  double t5807;
  double t5808;
  double t5828;
  double t5844;
  double t5848;
  double t5856;
  double t5862;
  double t5870;
  double t5883;
  double t5621;
  double t5623;
  double t5888;
  double t5906;
  double t5908;
  double t5909;
  double t5922;
  double t6314;
  double t6329;
  double t6345;
  double t6007;
  double t6010;
  double t6366;
  double t6371;
  double t6374;
  double t6025;
  double t6027;
  double t6058;
  double t6073;
  double t6081;
  double t6197;
  double t6217;
  double t6231;
  double t6244;
  double t6248;
  double t6260;
  double t6270;
  double t4523;
  double t4647;
  double t4653;
  double t4654;
  double t4657;
  double t5943;
  double t5953;
  double t5961;
  double t5962;
  double t5963;
  double t6094;
  double t6106;
  double t6134;
  double t6162;
  double t6178;
  double t6490;
  double t6503;
  double t6518;
  double t6564;
  double t6565;
  double t6574;
  t380 = Cos(var1[6]);
  t432 = Sin(var1[6]);
  t477 = Cos(var1[5]);
  t411 = 0.642788*t380;
  t435 = -0.766044*t432;
  t438 = t411 + t435;
  t356 = Sin(var1[5]);
  t478 = 0.766044*t380;
  t497 = 0.642788*t432;
  t499 = t478 + t497;
  t567 = Cos(var1[4]);
  t471 = t356*t438;
  t519 = t477*t499;
  t549 = 0. + t471 + t519;
  t316 = Sin(var1[4]);
  t570 = t477*t438;
  t587 = -1.*t356*t499;
  t589 = 0. + t570 + t587;
  t651 = Sin(var1[3]);
  t561 = -1.*t316*t549;
  t604 = t567*t589;
  t628 = 0. + t561 + t604;
  t258 = Cos(var1[3]);
  t683 = t567*t549;
  t691 = t316*t589;
  t697 = 0. + t683 + t691;
  t91 = Cos(var1[1]);
  t251 = Cos(var1[2]);
  t862 = -0.766044*t380;
  t866 = -0.642788*t432;
  t894 = t862 + t866;
  t860 = -1.*t356*t438;
  t900 = t477*t894;
  t912 = 0. + t860 + t900;
  t921 = t356*t894;
  t925 = 0. + t570 + t921;
  t915 = t316*t912;
  t927 = t567*t925;
  t950 = 0. + t915 + t927;
  t995 = t567*t912;
  t1002 = -1.*t316*t925;
  t1005 = 0. + t995 + t1002;
  t790 = Sin(var1[2]);
  t744 = t651*t628;
  t770 = t258*t697;
  t782 = 0. + t744 + t770;
  t642 = t258*t628;
  t704 = -1.*t651*t697;
  t708 = 0. + t642 + t704;
  t1038 = t258*t950;
  t1046 = t651*t1005;
  t1052 = 0. + t1038 + t1046;
  t962 = -1.*t651*t950;
  t1013 = t258*t1005;
  t1023 = 0. + t962 + t1013;
  t1181 = Sin(var1[8]);
  t1365 = Cos(var1[7]);
  t1265 = Cos(var1[9]);
  t1273 = Sin(var1[7]);
  t1425 = Sin(var1[9]);
  t1243 = Cos(var1[10]);
  t1458 = t1365*t1265;
  t1473 = -1.*t1273*t1181*t1425;
  t1486 = t1458 + t1473;
  t1290 = t1265*t1273*t1181;
  t1436 = t1365*t1425;
  t1440 = t1290 + t1436;
  t1488 = Sin(var1[10]);
  t1241 = Cos(var1[11]);
  t1555 = t1243*t1486;
  t1591 = -1.*t1440*t1488;
  t1601 = t1555 + t1591;
  t1445 = t1243*t1440;
  t1505 = t1486*t1488;
  t1538 = t1445 + t1505;
  t1605 = Sin(var1[11]);
  t1236 = Cos(var1[12]);
  t1664 = t1241*t1601;
  t1677 = -1.*t1538*t1605;
  t1703 = t1664 + t1677;
  t1553 = t1241*t1538;
  t1617 = t1601*t1605;
  t1651 = t1553 + t1617;
  t1708 = Sin(var1[12]);
  t1191 = Cos(var1[13]);
  t1747 = t1236*t1703;
  t1756 = -1.*t1651*t1708;
  t1762 = t1747 + t1756;
  t1657 = t1236*t1651;
  t1709 = t1703*t1708;
  t1727 = t1657 + t1709;
  t1767 = Sin(var1[13]);
  t1890 = Cos(var1[8]);
  t1930 = -1.*t1890*t1243*t1425;
  t1941 = -1.*t1890*t1265*t1488;
  t1953 = t1930 + t1941;
  t1894 = t1890*t1265*t1243;
  t1895 = -1.*t1890*t1425*t1488;
  t1904 = t1894 + t1895;
  t1975 = t1241*t1953;
  t1991 = -1.*t1904*t1605;
  t1992 = t1975 + t1991;
  t1909 = t1241*t1904;
  t1958 = t1953*t1605;
  t1961 = t1909 + t1958;
  t2019 = t1236*t1992;
  t2035 = -1.*t1961*t1708;
  t2052 = t2019 + t2035;
  t1968 = t1236*t1961;
  t2007 = t1992*t1708;
  t2009 = t1968 + t2007;
  t2210 = -1.*t1265*t1273;
  t2213 = -1.*t1365*t1181*t1425;
  t2220 = t2210 + t2213;
  t2194 = t1365*t1265*t1181;
  t2198 = -1.*t1273*t1425;
  t2203 = t2194 + t2198;
  t2236 = t1243*t2220;
  t2239 = -1.*t2203*t1488;
  t2248 = t2236 + t2239;
  t2204 = t1243*t2203;
  t2226 = t2220*t1488;
  t2228 = t2204 + t2226;
  t2280 = t1241*t2248;
  t2282 = -1.*t2228*t1605;
  t2286 = t2280 + t2282;
  t2234 = t1241*t2228;
  t2250 = t2248*t1605;
  t2271 = t2234 + t2250;
  t2305 = t1236*t2286;
  t2314 = -1.*t2271*t1708;
  t2315 = t2305 + t2314;
  t2274 = t1236*t2271;
  t2290 = t2286*t1708;
  t2296 = t2274 + t2290;
  t1740 = t1191*t1727;
  t1768 = t1762*t1767;
  t1784 = t1740 + t1768;
  t1808 = t1191*t1762;
  t1825 = -1.*t1727*t1767;
  t1866 = t1808 + t1825;
  t2015 = t1191*t2009;
  t2061 = t2052*t1767;
  t2089 = t2015 + t2061;
  t2101 = t1191*t2052;
  t2106 = -1.*t2009*t1767;
  t2147 = t2101 + t2106;
  t2302 = t1191*t2296;
  t2339 = t2315*t1767;
  t2352 = t2302 + t2339;
  t2364 = t1191*t2315;
  t2368 = -1.*t2296*t1767;
  t2391 = t2364 + t2368;
  t2457 = 0.642788*t2089;
  t2482 = 0.766044*t2147;
  t2506 = t2457 + t2482;
  t2356 = -0.766044*t2352;
  t2393 = 0.642788*t2391;
  t2398 = t2356 + t2393;
  t2096 = -0.766044*t2089;
  t2159 = 0.642788*t2147;
  t2166 = t2096 + t2159;
  t2519 = 0.642788*t2352;
  t2526 = 0.766044*t2391;
  t2573 = t2519 + t2526;
  t1796 = 0.642788*t1784;
  t1883 = 0.766044*t1866;
  t1887 = t1796 + t1883;
  t2180 = t1365*t1890*t2166;
  t2402 = t1181*t2398;
  t2409 = t2180 + t2402;
  t2420 = -1.*t1887*t2409;
  t2428 = -0.766044*t1784;
  t2438 = 0.642788*t1866;
  t2446 = t2428 + t2438;
  t2512 = t1365*t1890*t2506;
  t2589 = t1181*t2573;
  t2618 = t2512 + t2589;
  t2628 = t2446*t2618;
  t2632 = t2506*t2398;
  t2633 = -1.*t2166*t2573;
  t2634 = t2632 + t2633;
  t2647 = -1.*t1890*t1273*t2634;
  t2655 = 0. + t2420 + t2628 + t2647;
  t2661 = 1/t2655;
  t2783 = -1.*t91*t251*t651;
  t2795 = -1.*t258*t91*t790;
  t2801 = t2783 + t2795;
  t2818 = t258*t91*t251;
  t2857 = -1.*t91*t651*t790;
  t2862 = t2818 + t2857;
  t2812 = t316*t2801;
  t2868 = t567*t2862;
  t2874 = t2812 + t2868;
  t2887 = t567*t2801;
  t2890 = -1.*t316*t2862;
  t2898 = t2887 + t2890;
  t2884 = -1.*t356*t2874;
  t2917 = t477*t2898;
  t2925 = t2884 + t2917;
  t2930 = t477*t2874;
  t2931 = t356*t2898;
  t2939 = t2930 + t2931;
  t59 = Sin(var1[1]);
  t3137 = Sin(var1[0]);
  t3102 = Cos(var1[0]);
  t3133 = t3102*t251*t59;
  t3149 = -1.*t3137*t790;
  t3153 = t3133 + t3149;
  t3201 = -1.*t251*t3137;
  t3231 = -1.*t3102*t59*t790;
  t3239 = t3201 + t3231;
  t3181 = -1.*t651*t3153;
  t3243 = t258*t3239;
  t3254 = t3181 + t3243;
  t3281 = t258*t3153;
  t3299 = t651*t3239;
  t3308 = t3281 + t3299;
  t3264 = t316*t3254;
  t3314 = t567*t3308;
  t3325 = t3264 + t3314;
  t3338 = t567*t3254;
  t3352 = -1.*t316*t3308;
  t3367 = t3338 + t3352;
  t3328 = -1.*t356*t3325;
  t3370 = t477*t3367;
  t3388 = t3328 + t3370;
  t3411 = t477*t3325;
  t3420 = t356*t3367;
  t3423 = t3411 + t3420;
  t3562 = t251*t3137*t59;
  t3582 = t3102*t790;
  t3608 = t3562 + t3582;
  t3630 = t3102*t251;
  t3641 = -1.*t3137*t59*t790;
  t3667 = t3630 + t3641;
  t3629 = -1.*t651*t3608;
  t3683 = t258*t3667;
  t3686 = t3629 + t3683;
  t3713 = t258*t3608;
  t3735 = t651*t3667;
  t3744 = t3713 + t3735;
  t3691 = t316*t3686;
  t3752 = t567*t3744;
  t3758 = t3691 + t3752;
  t3820 = t567*t3686;
  t3881 = -1.*t316*t3744;
  t3925 = t3820 + t3881;
  t3817 = -1.*t356*t3758;
  t3951 = t477*t3925;
  t3952 = t3817 + t3951;
  t3969 = t477*t3758;
  t3973 = t356*t3925;
  t3986 = t3969 + t3973;
  t2926 = t432*t2925;
  t2986 = t380*t2939;
  t3011 = t2926 + t2986;
  t3028 = t380*t2925;
  t3040 = -1.*t432*t2939;
  t3043 = t3028 + t3040;
  t3398 = t432*t3388;
  t3429 = t380*t3423;
  t3433 = t3398 + t3429;
  t3454 = t380*t3388;
  t3468 = -1.*t432*t3423;
  t3485 = t3454 + t3468;
  t3957 = t432*t3952;
  t3988 = t380*t3986;
  t3994 = t3957 + t3988;
  t4000 = t380*t3952;
  t4052 = -1.*t432*t3986;
  t4059 = t4000 + t4052;
  t4127 = -1.*t1890*t1273*t2398;
  t4182 = t1365*t1890*t2446;
  t4184 = 0. + t4127 + t4182;
  t3017 = -0.766044*t3011;
  t3045 = 0.642788*t3043;
  t3050 = t3017 + t3045;
  t4311 = t1890*t1273*t2166;
  t4327 = t1181*t2446;
  t4341 = 0. + t4311 + t4327;
  t3446 = -0.766044*t3433;
  t3497 = 0.642788*t3485;
  t3504 = t3446 + t3497;
  t4439 = -1.*t1365*t1890*t2166;
  t4454 = -1.*t1181*t2398;
  t4460 = 0. + t4439 + t4454;
  t3999 = -0.766044*t3994;
  t4061 = 0.642788*t4059;
  t4081 = t3999 + t4061;
  t2772 = t1890*t1273*t2573;
  t2774 = -1.*t1365*t1890*t1887;
  t2779 = 0. + t2772 + t2774;
  t4215 = 0.642788*t3011;
  t4262 = 0.766044*t3043;
  t4307 = t4215 + t4262;
  t3071 = -1.*t1890*t1273*t2506;
  t3072 = -1.*t1181*t1887;
  t3083 = 0. + t3071 + t3072;
  t4349 = 0.642788*t3433;
  t4357 = 0.766044*t3485;
  t4392 = t4349 + t4357;
  t3534 = 0. + t2512 + t2589;
  t4468 = 0.642788*t3994;
  t4492 = 0.766044*t4059;
  t4499 = t4468 + t4492;
  t2650 = t2420 + t2628 + t2647;
  t2699 = t2650*t2661;
  t2713 = 0. + t2699;
  t4573 = t2779*t2661*t4307;
  t4576 = t3083*t2661*t4392;
  t4587 = t3534*t2661*t4499;
  t4639 = 0. + t4573 + t4576 + t4587;
  t4546 = t4184*t2661*t3050;
  t4555 = t4341*t2661*t3504;
  t4562 = t4460*t2661*t4081;
  t4572 = 0. + t4546 + t4555 + t4562;
  t4772 = t2573*t2446;
  t4775 = -1.*t2398*t1887;
  t4778 = 0. + t4772 + t4775;
  t4670 = -1.*t2506*t2446;
  t4682 = t2166*t1887;
  t4685 = 0. + t4670 + t4682;
  t4696 = 0. + t2632 + t2633;
  t3062 = t2779*t2661*t3050;
  t3520 = t3083*t2661*t3504;
  t4083 = t3534*t2661*t4081;
  t4111 = 0. + t3062 + t3520 + t4083;
  t4686 = -1.*t3102*t91*t4685*t2661;
  t4754 = -1.*t91*t4696*t2661*t3137;
  t4779 = t4778*t2661*t59;
  t4785 = 0. + t4686 + t4754 + t4779;
  t4308 = t4184*t2661*t4307;
  t4418 = t4341*t2661*t4392;
  t4500 = t4460*t2661*t4499;
  t4516 = 0. + t4308 + t4418 + t4500;
  t4812 = -1.*t3102*t91*t4341*t2661;
  t4837 = -1.*t91*t4460*t2661*t3137;
  t4852 = t4184*t2661*t59;
  t4853 = 0. + t4812 + t4837 + t4852;
  t4860 = t4778*t2661*t3050;
  t4867 = t4685*t2661*t3504;
  t4870 = t4696*t2661*t4081;
  t4874 = 0. + t4860 + t4867 + t4870;
  t4997 = t4778*t2661*t4307;
  t5002 = t4685*t2661*t4392;
  t5004 = t4696*t2661*t4499;
  t5028 = 0. + t4997 + t5002 + t5004;
  t5325 = 0.642788*t1191;
  t5339 = -0.766044*t1767;
  t5343 = t5325 + t5339;
  t5369 = -0.766044*t1191;
  t5378 = -0.642788*t1767;
  t5407 = t5369 + t5378;
  t5356 = -1.*t1708*t5343;
  t5413 = t1236*t5407;
  t5420 = 0. + t5356 + t5413;
  t5439 = t1236*t5343;
  t5442 = t1708*t5407;
  t5445 = 0. + t5439 + t5442;
  t5435 = t1605*t5420;
  t5457 = t1241*t5445;
  t5470 = 0. + t5435 + t5457;
  t5498 = t1241*t5420;
  t5509 = -1.*t1605*t5445;
  t5524 = 0. + t5498 + t5509;
  t5123 = -1.*t4874*t4516;
  t5152 = t4572*t5028;
  t5157 = t5123 + t5152;
  t4804 = t4785*t4572;
  t4876 = -1.*t4853*t4874;
  t4921 = t4804 + t4876;
  t4924 = -1.*t4639*t4921;
  t4992 = t4785*t4516;
  t5059 = -1.*t4853*t5028;
  t5067 = t4992 + t5059;
  t5076 = t4111*t5067;
  t5085 = -1.*t3102*t91*t3083*t2661;
  t5091 = -1.*t91*t3534*t2661*t3137;
  t5099 = t2779*t2661*t59;
  t5115 = 0. + t5085 + t5091 + t5099;
  t5161 = t5115*t5157;
  t5191 = t4924 + t5076 + t5161;
  t5197 = t2713*t5191;
  t5259 = 0. + t5197;
  t5264 = 1/t5259;
  t5645 = 0.766044*t1191;
  t5670 = 0.642788*t1767;
  t5678 = t5645 + t5670;
  t5630 = t1708*t5343;
  t5689 = t1236*t5678;
  t5704 = 0. + t5630 + t5689;
  t5730 = -1.*t1708*t5678;
  t5733 = 0. + t5439 + t5730;
  t5707 = -1.*t1605*t5704;
  t5753 = t1241*t5733;
  t5759 = 0. + t5707 + t5753;
  t5771 = t1241*t5704;
  t5793 = t1605*t5733;
  t5795 = 0. + t5771 + t5793;
  t1187 = 0. + t1181;
  t5495 = -1.*t1488*t5470;
  t5538 = t1243*t5524;
  t5548 = 0. + t5495 + t5538;
  t5563 = t1265*t5548;
  t5569 = t1243*t5470;
  t5571 = t1488*t5524;
  t5580 = 0. + t5569 + t5571;
  t5592 = -1.*t1425*t5580;
  t5604 = 0. + t5563 + t5592;
  t5607 = t1890*t5604;
  t5611 = 0. + t5607;
  t5761 = t1488*t5759;
  t5796 = t1243*t5795;
  t5807 = 0. + t5761 + t5796;
  t5808 = -1.*t1425*t5807;
  t5828 = t1243*t5759;
  t5844 = -1.*t1488*t5795;
  t5848 = 0. + t5828 + t5844;
  t5856 = t1265*t5848;
  t5862 = 0. + t5808 + t5856;
  t5870 = t1890*t5862;
  t5883 = 0. + t5870;
  t5621 = t2713*t5157;
  t5623 = 0. + t5621;
  t5888 = -1.*t4874*t4639;
  t5906 = t4111*t5028;
  t5908 = t5888 + t5906;
  t5909 = -1.*t2713*t5908;
  t5922 = 0. + t5909;
  t6314 = t1425*t5548;
  t6329 = t1265*t5580;
  t6345 = 0. + t6314 + t6329;
  t6007 = -1.*t2713*t4921;
  t6010 = 0. + t6007;
  t6366 = t1265*t5807;
  t6371 = t1425*t5848;
  t6374 = 0. + t6366 + t6371;
  t6025 = t4785*t4111;
  t6027 = -1.*t5115*t4874;
  t6058 = t6025 + t6027;
  t6073 = t2713*t6058;
  t6081 = 0. + t6073;
  t6197 = t2713*t5067;
  t6217 = 0. + t6197;
  t6231 = t4785*t4639;
  t6244 = -1.*t5115*t5028;
  t6248 = t6231 + t6244;
  t6260 = -1.*t2713*t6248;
  t6270 = 0. + t6260;
  t4523 = t4111*t4516;
  t4647 = -1.*t4572*t4639;
  t4653 = t4523 + t4647;
  t4654 = t2713*t4653;
  t4657 = 0. + t4654;
  t5943 = -1.*t5115*t4572;
  t5953 = t4853*t4111;
  t5961 = t5943 + t5953;
  t5962 = -1.*t2713*t5961;
  t5963 = 0. + t5962;
  t6094 = -1.*t5115*t4516;
  t6106 = t4853*t4639;
  t6134 = t6094 + t6106;
  t6162 = t2713*t6134;
  t6178 = 0. + t6162;
  t6490 = -1.*t4657*t5264;
  t6503 = 0. + t6490;
  t6518 = -1.*t5963*t5264;
  t6564 = 0. + t6518;
  t6565 = -1.*t6178*t5264;
  t6574 = 0. + t6565;

  p_output1(0)=0. + t59;
  p_output1(1)=0. + (0. + t251*t708 - 1.*t782*t790)*t91;
  p_output1(2)=0. + (0. + t1023*t251 - 1.*t1052*t790)*t91;
  p_output1(3)=0.;
  p_output1(4)=0. + t251*t782 + t708*t790;
  p_output1(5)=0. + t1052*t251 + t1023*t790;
  p_output1(6)=1.;
  p_output1(7)=0.;
  p_output1(8)=0.;
  p_output1(9)=1.;
  p_output1(10)=0.;
  p_output1(11)=0.;
  p_output1(12)=1.;
  p_output1(13)=0.;
  p_output1(14)=0.;
  p_output1(15)=1.;
  p_output1(16)=0.;
  p_output1(17)=0.;
  p_output1(18)=1.;
  p_output1(19)=0.;
  p_output1(20)=0.;
  p_output1(21)=-1.*t1187*t4657*t5264 - 1.*t5264*t5611*t5623 - 1.*t5264*t5883*t5922;
  p_output1(22)=-1.*t1187*t5264*t5963 - 1.*t5264*t5611*t6010 - 1.*t5264*t5883*t6081;
  p_output1(23)=-1.*t1187*t5264*t6178 - 1.*t5264*t5611*t6217 - 1.*t5264*t5883*t6270;
  p_output1(24)=0. - 1.*t5264*t5623*t6345 - 1.*t5264*t5922*t6374;
  p_output1(25)=0. - 1.*t5264*t6010*t6345 - 1.*t5264*t6081*t6374;
  p_output1(26)=0. - 1.*t5264*t6217*t6345 - 1.*t5264*t6270*t6374;
  p_output1(27)=t6503;
  p_output1(28)=t6564;
  p_output1(29)=t6574;
  p_output1(30)=t6503;
  p_output1(31)=t6564;
  p_output1(32)=t6574;
  p_output1(33)=t6503;
  p_output1(34)=t6564;
  p_output1(35)=t6574;
  p_output1(36)=t6503;
  p_output1(37)=t6564;
  p_output1(38)=t6574;
  p_output1(39)=t6503;
  p_output1(40)=t6564;
  p_output1(41)=t6574;
}


       
Eigen::Matrix<double,3,14> Jwb_RightToeBottom_to_LeftToeBottom(const Eigen::Matrix<double,14,1> &var1)
//void Jwb_RightToeBottom_to_LeftToeBottom(Eigen::Matrix<double,3,14> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,14>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}




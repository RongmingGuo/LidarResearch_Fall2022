/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:19:36 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_LeftKneeSpringJoint_src.h"

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
static void output1(double *p_output1,const double *var1)
{
  double t303;
  double t149;
  double t181;
  double t192;
  double t438;
  double t608;
  double t613;
  double t638;
  double t710;
  double t973;
  double t974;
  double t1001;
  double t282;
  double t449;
  double t590;
  double t1324;
  double t1346;
  double t1397;
  double t1428;
  double t1261;
  double t1270;
  double t1272;
  double t1679;
  double t1897;
  double t1910;
  double t1964;
  double t2017;
  double t1878;
  double t1888;
  double t1893;
  double t2123;
  double t2146;
  double t2195;
  double t2272;
  double t2296;
  double t2298;
  double t2317;
  double t2352;
  double t2353;
  double t2356;
  double t2384;
  double t2385;
  double t2395;
  double t2413;
  double t2455;
  double t2520;
  double t2723;
  double t2976;
  double t2997;
  double t3024;
  double t3329;
  double t3477;
  double t3532;
  double t646;
  double t726;
  double t867;
  double t1099;
  double t1113;
  double t1142;
  double t4803;
  double t4842;
  double t4890;
  double t4425;
  double t4558;
  double t4730;
  double t1421;
  double t1437;
  double t1495;
  double t1729;
  double t1731;
  double t1760;
  double t4940;
  double t5014;
  double t5025;
  double t1975;
  double t2052;
  double t2097;
  double t2202;
  double t2212;
  double t2226;
  double t2302;
  double t2318;
  double t2339;
  double t5442;
  double t5447;
  double t5461;
  double t5502;
  double t5517;
  double t5522;
  double t2366;
  double t2372;
  double t2379;
  double t2600;
  double t2895;
  double t2903;
  double t5616;
  double t5668;
  double t5738;
  double t6016;
  double t6036;
  double t6063;
  double t3166;
  double t3211;
  double t3224;
  double t6226;
  double t6277;
  double t6290;
  double t6447;
  double t6506;
  double t6527;
  double t6898;
  double t6915;
  double t6919;
  double t7067;
  double t7094;
  double t7160;
  double t7164;
  double t7203;
  double t7208;
  double t7214;
  double t7224;
  double t7262;
  double t7376;
  double t7390;
  double t7395;
  double t7480;
  double t7492;
  double t7493;
  double t7496;
  double t7500;
  double t7501;
  double t7568;
  double t7571;
  double t7599;
  double t7651;
  double t7654;
  double t7659;
  double t7662;
  double t7671;
  double t7672;
  double t7691;
  double t7710;
  double t7714;
  double t7721;
  double t7723;
  double t7730;
  double t7740;
  double t7747;
  double t7753;
  double t7765;
  double t7767;
  double t7769;
  double t7817;
  double t7818;
  double t7822;
  double t7860;
  double t7862;
  double t7863;
  double t7870;
  double t7874;
  double t7878;
  double t7882;
  double t7883;
  double t7887;
  double t7894;
  double t7895;
  double t7901;
  double t7909;
  double t7911;
  double t7913;
  double t7918;
  double t7923;
  double t7925;
  double t7946;
  double t7948;
  double t7949;
  double t7958;
  double t7965;
  double t7983;
  double t7986;
  double t7992;
  double t8007;
  double t8010;
  double t8018;
  double t8026;
  double t8031;
  double t8032;
  double t8036;
  double t8040;
  double t8041;
  double t8044;
  double t8045;
  double t8048;
  double t8096;
  double t8099;
  double t8101;
  double t8112;
  double t8114;
  double t8115;
  double t8139;
  double t8143;
  double t8160;
  double t8163;
  double t8169;
  double t8173;
  double t8178;
  double t8180;
  double t8182;
  double t8184;
  double t8186;
  double t8191;
  double t8193;
  double t8197;
  double t8237;
  double t8240;
  double t8244;
  double t8264;
  double t8267;
  double t8270;
  double t8274;
  double t8277;
  double t8278;
  double t8284;
  double t8285;
  double t8287;
  double t8294;
  double t8299;
  double t8302;
  double t8312;
  double t8313;
  double t8317;
  double t8359;
  double t8361;
  double t8365;
  double t8366;
  double t8367;
  double t8371;
  double t8382;
  double t8389;
  double t8391;
  double t8396;
  double t8405;
  double t8413;
  double t8414;
  double t8417;
  double t8338;
  double t8344;
  double t8349;
  double t8350;
  double t8353;
  double t8452;
  double t8453;
  double t8454;
  double t8457;
  double t8458;
  double t8472;
  double t8477;
  double t8482;
  double t8486;
  double t8487;
  double t8494;
  double t8495;
  double t8496;
  double t8499;
  double t8500;
  double t8501;
  double t8503;
  double t8504;
  double t8506;
  double t8253;
  double t8254;
  double t8260;
  double t8273;
  double t8279;
  double t8292;
  double t8308;
  double t8319;
  double t8320;
  double t8322;
  double t8323;
  double t8324;
  double t8327;
  double t8328;
  double t8330;
  double t8331;
  double t5261;
  double t5276;
  double t5343;
  double t8577;
  double t8580;
  double t8582;
  double t8585;
  double t8586;
  double t8589;
  double t8552;
  double t8553;
  double t8558;
  double t8562;
  double t8564;
  double t8606;
  double t8609;
  double t8618;
  double t8626;
  double t8627;
  double t8629;
  double t8649;
  double t8650;
  double t8652;
  double t8658;
  double t8660;
  double t8669;
  double t8711;
  double t8712;
  double t8714;
  double t8718;
  double t8722;
  double t8726;
  double t8758;
  double t8761;
  double t8763;
  double t8767;
  double t8771;
  double t8779;
  double t8823;
  double t8824;
  double t8825;
  double t8856;
  double t8857;
  double t8861;
  double t8864;
  double t8865;
  double t8816;
  double t8817;
  double t8818;
  double t8820;
  double t8821;
  double t8902;
  double t8904;
  double t8905;
  double t8917;
  double t8918;
  double t8930;
  double t8932;
  double t8934;
  double t8936;
  double t8947;
  double t8948;
  double t8951;
  double t8955;
  double t8957;
  double t8960;
  double t8993;
  double t8996;
  double t8999;
  double t9023;
  double t9024;
  double t9029;
  double t9033;
  double t9034;
  double t9037;
  double t9040;
  double t9042;
  double t9043;
  double t9046;
  double t9047;
  double t9049;
  double t9094;
  double t9095;
  double t6768;
  double t9077;
  double t9079;
  double t9081;
  double t9088;
  double t9090;
  double t9110;
  double t9111;
  double t9113;
  double t9117;
  double t9118;
  double t9120;
  double t9121;
  double t9132;
  double t9133;
  double t9134;
  double t9139;
  double t9140;
  double t9142;
  double t9143;
  double t9098;
  double t6784;
  double t6792;
  double t9155;
  double t9156;
  double t9158;
  double t9159;
  double t9160;
  double t9123;
  double t9168;
  double t9169;
  double t9170;
  double t9127;
  double t9145;
  double t9180;
  double t9181;
  double t9182;
  double t9149;
  t303 = Cos(var1[3]);
  t149 = Cos(var1[5]);
  t181 = Sin(var1[3]);
  t192 = Sin(var1[4]);
  t438 = Sin(var1[5]);
  t608 = Cos(var1[6]);
  t613 = -1.*t608;
  t638 = 1. + t613;
  t710 = Sin(var1[6]);
  t973 = -1.*t303*t149;
  t974 = -1.*t181*t192*t438;
  t1001 = t973 + t974;
  t282 = -1.*t149*t181*t192;
  t449 = t303*t438;
  t590 = t282 + t449;
  t1324 = Cos(var1[7]);
  t1346 = -1.*t1324;
  t1397 = 1. + t1346;
  t1428 = Sin(var1[7]);
  t1261 = t608*t1001;
  t1270 = t590*t710;
  t1272 = t1261 + t1270;
  t1679 = Cos(var1[4]);
  t1897 = Cos(var1[8]);
  t1910 = -1.*t1897;
  t1964 = 1. + t1910;
  t2017 = Sin(var1[8]);
  t1878 = -1.*t1679*t1324*t181;
  t1888 = t1272*t1428;
  t1893 = t1878 + t1888;
  t2123 = t608*t590;
  t2146 = -1.*t1001*t710;
  t2195 = t2123 + t2146;
  t2272 = Cos(var1[9]);
  t2296 = -1.*t2272;
  t2298 = 1. + t2296;
  t2317 = Sin(var1[9]);
  t2352 = t1897*t1893;
  t2353 = t2195*t2017;
  t2356 = t2352 + t2353;
  t2384 = t1897*t2195;
  t2385 = -1.*t1893*t2017;
  t2395 = t2384 + t2385;
  t2413 = Cos(var1[10]);
  t2455 = -1.*t2413;
  t2520 = 1. + t2455;
  t2723 = Sin(var1[10]);
  t2976 = -1.*t2317*t2356;
  t2997 = t2272*t2395;
  t3024 = t2976 + t2997;
  t3329 = t2272*t2356;
  t3477 = t2317*t2395;
  t3532 = t3329 + t3477;
  t646 = 0.07996*t638;
  t726 = -0.135*t710;
  t867 = 0. + t646 + t726;
  t1099 = 0.135*t638;
  t1113 = 0.07996*t710;
  t1142 = 0. + t1099 + t1113;
  t4803 = -1.*t149*t181;
  t4842 = t303*t192*t438;
  t4890 = t4803 + t4842;
  t4425 = t303*t149*t192;
  t4558 = t181*t438;
  t4730 = t4425 + t4558;
  t1421 = 0.135*t1397;
  t1437 = 0.08055*t1428;
  t1495 = 0. + t1421 + t1437;
  t1729 = -0.08055*t1397;
  t1731 = 0.135*t1428;
  t1760 = 0. + t1729 + t1731;
  t4940 = t608*t4890;
  t5014 = t4730*t710;
  t5025 = t4940 + t5014;
  t1975 = -0.08055*t1964;
  t2052 = -0.01004*t2017;
  t2097 = 0. + t1975 + t2052;
  t2202 = -0.01004*t1964;
  t2212 = 0.08055*t2017;
  t2226 = 0. + t2202 + t2212;
  t2302 = -0.08055*t2298;
  t2318 = -0.13004*t2317;
  t2339 = 0. + t2302 + t2318;
  t5442 = t303*t1679*t1324;
  t5447 = t5025*t1428;
  t5461 = t5442 + t5447;
  t5502 = t608*t4730;
  t5517 = -1.*t4890*t710;
  t5522 = t5502 + t5517;
  t2366 = -0.13004*t2298;
  t2372 = 0.08055*t2317;
  t2379 = 0. + t2366 + t2372;
  t2600 = -0.19074*t2520;
  t2895 = 0.03315*t2723;
  t2903 = 0. + t2600 + t2895;
  t5616 = t1897*t5461;
  t5668 = t5522*t2017;
  t5738 = t5616 + t5668;
  t6016 = t1897*t5522;
  t6036 = -1.*t5461*t2017;
  t6063 = t6016 + t6036;
  t3166 = -0.03315*t2520;
  t3211 = -0.19074*t2723;
  t3224 = 0. + t3166 + t3211;
  t6226 = -1.*t2317*t5738;
  t6277 = t2272*t6063;
  t6290 = t6226 + t6277;
  t6447 = t2272*t5738;
  t6506 = t2317*t6063;
  t6527 = t6447 + t6506;
  t6898 = t303*t1679*t608*t438;
  t6915 = t303*t1679*t149*t710;
  t6919 = t6898 + t6915;
  t7067 = -1.*t303*t1324*t192;
  t7094 = t6919*t1428;
  t7160 = t7067 + t7094;
  t7164 = t303*t1679*t149*t608;
  t7203 = -1.*t303*t1679*t438*t710;
  t7208 = t7164 + t7203;
  t7214 = t1897*t7160;
  t7224 = t7208*t2017;
  t7262 = t7214 + t7224;
  t7376 = t1897*t7208;
  t7390 = -1.*t7160*t2017;
  t7395 = t7376 + t7390;
  t7480 = -1.*t2317*t7262;
  t7492 = t2272*t7395;
  t7493 = t7480 + t7492;
  t7496 = t2272*t7262;
  t7500 = t2317*t7395;
  t7501 = t7496 + t7500;
  t7568 = t1679*t608*t181*t438;
  t7571 = t1679*t149*t181*t710;
  t7599 = t7568 + t7571;
  t7651 = -1.*t1324*t181*t192;
  t7654 = t7599*t1428;
  t7659 = t7651 + t7654;
  t7662 = t1679*t149*t608*t181;
  t7671 = -1.*t1679*t181*t438*t710;
  t7672 = t7662 + t7671;
  t7691 = t1897*t7659;
  t7710 = t7672*t2017;
  t7714 = t7691 + t7710;
  t7721 = t1897*t7672;
  t7723 = -1.*t7659*t2017;
  t7730 = t7721 + t7723;
  t7740 = -1.*t2317*t7714;
  t7747 = t2272*t7730;
  t7753 = t7740 + t7747;
  t7765 = t2272*t7714;
  t7767 = t2317*t7730;
  t7769 = t7765 + t7767;
  t7817 = -1.*t608*t192*t438;
  t7818 = -1.*t149*t192*t710;
  t7822 = t7817 + t7818;
  t7860 = -1.*t1679*t1324;
  t7862 = t7822*t1428;
  t7863 = t7860 + t7862;
  t7870 = -1.*t149*t608*t192;
  t7874 = t192*t438*t710;
  t7878 = t7870 + t7874;
  t7882 = t1897*t7863;
  t7883 = t7878*t2017;
  t7887 = t7882 + t7883;
  t7894 = t1897*t7878;
  t7895 = -1.*t7863*t2017;
  t7901 = t7894 + t7895;
  t7909 = -1.*t2317*t7887;
  t7911 = t2272*t7901;
  t7913 = t7909 + t7911;
  t7918 = t2272*t7887;
  t7923 = t2317*t7901;
  t7925 = t7918 + t7923;
  t7946 = t149*t181;
  t7948 = -1.*t303*t192*t438;
  t7949 = t7946 + t7948;
  t7958 = t7949*t710;
  t7965 = t5502 + t7958;
  t7983 = t608*t7949;
  t7986 = -1.*t4730*t710;
  t7992 = t7983 + t7986;
  t8007 = t1897*t7965*t1428;
  t8010 = t7992*t2017;
  t8018 = t8007 + t8010;
  t8026 = t1897*t7992;
  t8031 = -1.*t7965*t1428*t2017;
  t8032 = t8026 + t8031;
  t8036 = -1.*t2317*t8018;
  t8040 = t2272*t8032;
  t8041 = t8036 + t8040;
  t8044 = t2272*t8018;
  t8045 = t2317*t8032;
  t8048 = t8044 + t8045;
  t8096 = t149*t181*t192;
  t8099 = -1.*t303*t438;
  t8101 = t8096 + t8099;
  t8112 = t608*t8101;
  t8114 = t1001*t710;
  t8115 = t8112 + t8114;
  t8139 = -1.*t8101*t710;
  t8143 = t1261 + t8139;
  t8160 = t1897*t8115*t1428;
  t8163 = t8143*t2017;
  t8169 = t8160 + t8163;
  t8173 = t1897*t8143;
  t8178 = -1.*t8115*t1428*t2017;
  t8180 = t8173 + t8178;
  t8182 = -1.*t2317*t8169;
  t8184 = t2272*t8180;
  t8186 = t8182 + t8184;
  t8191 = t2272*t8169;
  t8193 = t2317*t8180;
  t8197 = t8191 + t8193;
  t8237 = t1679*t149*t608;
  t8240 = -1.*t1679*t438*t710;
  t8244 = t8237 + t8240;
  t8264 = -1.*t1679*t608*t438;
  t8267 = -1.*t1679*t149*t710;
  t8270 = t8264 + t8267;
  t8274 = t1897*t8244*t1428;
  t8277 = t8270*t2017;
  t8278 = t8274 + t8277;
  t8284 = t1897*t8270;
  t8285 = -1.*t8244*t1428*t2017;
  t8287 = t8284 + t8285;
  t8294 = -1.*t2317*t8278;
  t8299 = t2272*t8287;
  t8302 = t8294 + t8299;
  t8312 = t2272*t8278;
  t8313 = t2317*t8287;
  t8317 = t8312 + t8313;
  t8359 = -1.*t608*t4890;
  t8361 = t8359 + t7986;
  t8365 = t1897*t5522*t1428;
  t8366 = t8361*t2017;
  t8367 = t8365 + t8366;
  t8371 = t1897*t8361;
  t8382 = -1.*t5522*t1428*t2017;
  t8389 = t8371 + t8382;
  t8391 = -1.*t2317*t8367;
  t8396 = t2272*t8389;
  t8405 = t8391 + t8396;
  t8413 = t2272*t8367;
  t8414 = t2317*t8389;
  t8417 = t8413 + t8414;
  t8338 = -0.135*t608;
  t8344 = t8338 + t1113;
  t8349 = 0.07996*t608;
  t8350 = 0.135*t710;
  t8353 = t8349 + t8350;
  t8452 = t303*t149;
  t8453 = t181*t192*t438;
  t8454 = t8452 + t8453;
  t8457 = -1.*t8454*t710;
  t8458 = t8112 + t8457;
  t8472 = -1.*t608*t8454;
  t8477 = t8472 + t8139;
  t8482 = t1897*t8458*t1428;
  t8486 = t8477*t2017;
  t8487 = t8482 + t8486;
  t8494 = t1897*t8477;
  t8495 = -1.*t8458*t1428*t2017;
  t8496 = t8494 + t8495;
  t8499 = -1.*t2317*t8487;
  t8500 = t2272*t8496;
  t8501 = t8499 + t8500;
  t8503 = t2272*t8487;
  t8504 = t2317*t8496;
  t8506 = t8503 + t8504;
  t8253 = 0.1305*t1324*t8244;
  t8254 = t8244*t1495;
  t8260 = t8244*t1428*t2097;
  t8273 = t8270*t2226;
  t8279 = t2339*t8278;
  t8292 = t2379*t8287;
  t8308 = t2903*t8302;
  t8319 = t3224*t8317;
  t8320 = t2723*t8302;
  t8322 = t2413*t8317;
  t8323 = t8320 + t8322;
  t8324 = -0.03315*t8323;
  t8327 = t2413*t8302;
  t8328 = -1.*t2723*t8317;
  t8330 = t8327 + t8328;
  t8331 = -0.19074*t8330;
  t5261 = t1324*t5025;
  t5276 = -1.*t303*t1679*t1428;
  t5343 = t5261 + t5276;
  t8577 = -1.*t1897*t2317*t5343;
  t8580 = -1.*t2272*t5343*t2017;
  t8582 = t8577 + t8580;
  t8585 = t2272*t1897*t5343;
  t8586 = -1.*t2317*t5343*t2017;
  t8589 = t8585 + t8586;
  t8552 = 0.135*t1324;
  t8553 = -0.08055*t1428;
  t8558 = t8552 + t8553;
  t8562 = 0.08055*t1324;
  t8564 = t8562 + t1731;
  t8606 = t608*t8454;
  t8609 = t8101*t710;
  t8618 = t8606 + t8609;
  t8626 = t1324*t8618;
  t8627 = -1.*t1679*t181*t1428;
  t8629 = t8626 + t8627;
  t8649 = -1.*t1897*t2317*t8629;
  t8650 = -1.*t2272*t8629*t2017;
  t8652 = t8649 + t8650;
  t8658 = t2272*t1897*t8629;
  t8660 = -1.*t2317*t8629*t2017;
  t8669 = t8658 + t8660;
  t8711 = t1679*t608*t438;
  t8712 = t1679*t149*t710;
  t8714 = t8711 + t8712;
  t8718 = t1324*t8714;
  t8722 = t192*t1428;
  t8726 = t8718 + t8722;
  t8758 = -1.*t1897*t2317*t8726;
  t8761 = -1.*t2272*t8726*t2017;
  t8763 = t8758 + t8761;
  t8767 = t2272*t1897*t8726;
  t8771 = -1.*t2317*t8726*t2017;
  t8779 = t8767 + t8771;
  t8823 = -1.*t1897*t5461;
  t8824 = -1.*t5522*t2017;
  t8825 = t8823 + t8824;
  t8856 = t2317*t8825;
  t8857 = t8856 + t6277;
  t8861 = t2272*t8825;
  t8864 = -1.*t2317*t6063;
  t8865 = t8861 + t8864;
  t8816 = -0.01004*t1897;
  t8817 = -0.08055*t2017;
  t8818 = t8816 + t8817;
  t8820 = 0.08055*t1897;
  t8821 = t8820 + t2052;
  t8902 = t1679*t1324*t181;
  t8904 = t8618*t1428;
  t8905 = t8902 + t8904;
  t8917 = -1.*t1897*t8905;
  t8918 = -1.*t8458*t2017;
  t8930 = t8917 + t8918;
  t8932 = t1897*t8458;
  t8934 = -1.*t8905*t2017;
  t8936 = t8932 + t8934;
  t8947 = t2317*t8930;
  t8948 = t2272*t8936;
  t8951 = t8947 + t8948;
  t8955 = t2272*t8930;
  t8957 = -1.*t2317*t8936;
  t8960 = t8955 + t8957;
  t8993 = -1.*t1324*t192;
  t8996 = t8714*t1428;
  t8999 = t8993 + t8996;
  t9023 = -1.*t1897*t8999;
  t9024 = -1.*t8244*t2017;
  t9029 = t9023 + t9024;
  t9033 = t1897*t8244;
  t9034 = -1.*t8999*t2017;
  t9037 = t9033 + t9034;
  t9040 = t2317*t9029;
  t9042 = t2272*t9037;
  t9043 = t9040 + t9042;
  t9046 = t2272*t9029;
  t9047 = -1.*t2317*t9037;
  t9049 = t9046 + t9047;
  t9094 = -1.*t2272*t5738;
  t9095 = t9094 + t8864;
  t6768 = t2413*t6290;
  t9077 = -0.13004*t2272;
  t9079 = -0.08055*t2317;
  t9081 = t9077 + t9079;
  t9088 = 0.08055*t2272;
  t9090 = t9088 + t2318;
  t9110 = t1897*t8905;
  t9111 = t8458*t2017;
  t9113 = t9110 + t9111;
  t9117 = -1.*t2317*t9113;
  t9118 = t9117 + t8948;
  t9120 = -1.*t2272*t9113;
  t9121 = t9120 + t8957;
  t9132 = t1897*t8999;
  t9133 = t8244*t2017;
  t9134 = t9132 + t9133;
  t9139 = -1.*t2317*t9134;
  t9140 = t9139 + t9042;
  t9142 = -1.*t2272*t9134;
  t9143 = t9142 + t9047;
  t9098 = -1.*t2723*t6290;
  t6784 = -1.*t2723*t6527;
  t6792 = t6768 + t6784;
  t9155 = 0.03315*t2413;
  t9156 = t9155 + t3211;
  t9158 = -0.19074*t2413;
  t9159 = -0.03315*t2723;
  t9160 = t9158 + t9159;
  t9123 = -1.*t2723*t9118;
  t9168 = t2272*t9113;
  t9169 = t2317*t8936;
  t9170 = t9168 + t9169;
  t9127 = t2413*t9118;
  t9145 = -1.*t2723*t9140;
  t9180 = t2272*t9134;
  t9181 = t2317*t9037;
  t9182 = t9180 + t9181;
  t9149 = t2413*t9140;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1001*t1142 + t1272*t1495 - 1.*t1679*t1760*t181 + 0.1305*(t1272*t1324 + t1428*t1679*t181) + t1893*t2097 + t2195*t2226 + t2339*t2356 + t2379*t2395 + t2903*t3024 + t3224*t3532 - 0.03315*(t2723*t3024 + t2413*t3532) - 0.19074*(t2413*t3024 - 1.*t2723*t3532) + t590*t867;
  p_output1[10]=t1679*t1760*t303 + t1142*t4890 + t1495*t5025 + 0.1305*t5343 + t2097*t5461 + t2226*t5522 + t2339*t5738 + t2379*t6063 + t2903*t6290 + t3224*t6527 - 0.03315*(t2723*t6290 + t2413*t6527) - 0.19074*t6792 + t4730*t867;
  p_output1[11]=0;
  p_output1[12]=-1.*t1760*t192*t303 + t1142*t1679*t303*t438 + t1495*t6919 + 0.1305*(t1428*t192*t303 + t1324*t6919) + t2097*t7160 + t2226*t7208 + t2339*t7262 + t2379*t7395 + t2903*t7493 + t3224*t7501 - 0.03315*(t2723*t7493 + t2413*t7501) - 0.19074*(t2413*t7493 - 1.*t2723*t7501) + t149*t1679*t303*t867;
  p_output1[13]=-1.*t1760*t181*t192 + t1142*t1679*t181*t438 + t1495*t7599 + 0.1305*(t1428*t181*t192 + t1324*t7599) + t2097*t7659 + t2226*t7672 + t2339*t7714 + t2379*t7730 + t2903*t7753 + t3224*t7769 - 0.03315*(t2723*t7753 + t2413*t7769) - 0.19074*(t2413*t7753 - 1.*t2723*t7769) + t149*t1679*t181*t867;
  p_output1[14]=-1.*t1679*t1760 - 1.*t1142*t192*t438 + t1495*t7822 + 0.1305*(t1428*t1679 + t1324*t7822) + t2097*t7863 + t2226*t7878 + t2339*t7887 + t2379*t7901 + t2903*t7913 + t3224*t7925 - 0.03315*(t2723*t7913 + t2413*t7925) - 0.19074*(t2413*t7913 - 1.*t2723*t7925) - 1.*t149*t192*t867;
  p_output1[15]=t1142*t4730 + 0.1305*t1324*t7965 + t1495*t7965 + t1428*t2097*t7965 + t2226*t7992 + t2339*t8018 + t2379*t8032 + t2903*t8041 + t3224*t8048 - 0.03315*(t2723*t8041 + t2413*t8048) - 0.19074*(t2413*t8041 - 1.*t2723*t8048) + t7949*t867;
  p_output1[16]=t1142*t8101 + 0.1305*t1324*t8115 + t1495*t8115 + t1428*t2097*t8115 + t2226*t8143 + t2339*t8169 + t2379*t8180 + t2903*t8186 + t3224*t8197 - 0.03315*(t2723*t8186 + t2413*t8197) - 0.19074*(t2413*t8186 - 1.*t2723*t8197) + t1001*t867;
  p_output1[17]=t1142*t149*t1679 + t8253 + t8254 + t8260 + t8273 + t8279 + t8292 + t8308 + t8319 + t8324 + t8331 - 1.*t1679*t438*t867;
  p_output1[18]=0.1305*t1324*t5522 + t1495*t5522 + t1428*t2097*t5522 + t4730*t8344 + t4890*t8353 + t2226*t8361 + t2339*t8367 + t2379*t8389 + t2903*t8405 + t3224*t8417 - 0.03315*(t2723*t8405 + t2413*t8417) - 0.19074*(t2413*t8405 - 1.*t2723*t8417);
  p_output1[19]=t8101*t8344 + t8353*t8454 + 0.1305*t1324*t8458 + t1495*t8458 + t1428*t2097*t8458 + t2226*t8477 + t2339*t8487 + t2379*t8496 + t2903*t8501 + t3224*t8506 - 0.03315*(t2723*t8501 + t2413*t8506) - 0.19074*(t2413*t8501 - 1.*t2723*t8506);
  p_output1[20]=t8253 + t8254 + t8260 + t8273 + t8279 + t8292 + t8308 + t8319 + t8324 + t8331 + t149*t1679*t8344 + t1679*t438*t8353;
  p_output1[21]=0.1305*(-1.*t1324*t1679*t303 - 1.*t1428*t5025) + t2097*t5343 + t1897*t2339*t5343 - 1.*t2017*t2379*t5343 + t1679*t303*t8558 + t5025*t8564 + t2903*t8582 + t3224*t8589 - 0.03315*(t2723*t8582 + t2413*t8589) - 0.19074*(t2413*t8582 - 1.*t2723*t8589);
  p_output1[22]=t1679*t181*t8558 + t8564*t8618 + 0.1305*(t1878 - 1.*t1428*t8618) + t2097*t8629 + t1897*t2339*t8629 - 1.*t2017*t2379*t8629 + t2903*t8652 + t3224*t8669 - 0.03315*(t2723*t8652 + t2413*t8669) - 0.19074*(t2413*t8652 - 1.*t2723*t8669);
  p_output1[23]=-1.*t192*t8558 + t8564*t8714 + 0.1305*(t1324*t192 - 1.*t1428*t8714) + t2097*t8726 + t1897*t2339*t8726 - 1.*t2017*t2379*t8726 + t2903*t8763 + t3224*t8779 - 0.03315*(t2723*t8763 + t2413*t8779) - 0.19074*(t2413*t8763 - 1.*t2723*t8779);
  p_output1[24]=t2339*t6063 + t5461*t8818 + t5522*t8821 + t2379*t8825 + t3224*t8857 + t2903*t8865 - 0.19074*(-1.*t2723*t8857 + t2413*t8865) - 0.03315*(t2413*t8857 + t2723*t8865);
  p_output1[25]=t8458*t8821 + t8818*t8905 + t2379*t8930 + t2339*t8936 + t3224*t8951 + t2903*t8960 - 0.19074*(-1.*t2723*t8951 + t2413*t8960) - 0.03315*(t2413*t8951 + t2723*t8960);
  p_output1[26]=t8244*t8821 + t8818*t8999 + t2379*t9029 + t2339*t9037 + t3224*t9043 + t2903*t9049 - 0.19074*(-1.*t2723*t9043 + t2413*t9049) - 0.03315*(t2413*t9043 + t2723*t9049);
  p_output1[27]=t3224*t6290 + t5738*t9081 + t6063*t9090 + t2903*t9095 - 0.03315*(t6768 + t2723*t9095) - 0.19074*(t2413*t9095 + t9098);
  p_output1[28]=t8936*t9090 + t9081*t9113 + t3224*t9118 + t2903*t9121 - 0.19074*(t2413*t9121 + t9123) - 0.03315*(t2723*t9121 + t9127);
  p_output1[29]=t9037*t9090 + t9081*t9134 + t3224*t9140 + t2903*t9143 - 0.19074*(t2413*t9143 + t9145) - 0.03315*(t2723*t9143 + t9149);
  p_output1[30]=-0.03315*t6792 - 0.19074*(-1.*t2413*t6527 + t9098) + t6290*t9156 + t6527*t9160;
  p_output1[31]=t9118*t9156 + t9160*t9170 - 0.19074*(t9123 - 1.*t2413*t9170) - 0.03315*(t9127 - 1.*t2723*t9170);
  p_output1[32]=t9140*t9156 + t9160*t9182 - 0.19074*(t9145 - 1.*t2413*t9182) - 0.03315*(t9149 - 1.*t2723*t9182);
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
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
}



void Jp_LeftKneeSpringJoint_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
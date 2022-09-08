/*
 * Automatically Generated from Mathematica.
 * Wed 9 Jan 2019 17:20:05 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Ge_cassie.h"

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
static void output1(Eigen::Matrix<double,20,1> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  double t42;
  double t74;
  double t84;
  double t184;
  double t198;
  double t294;
  double t190;
  double t281;
  double t292;
  double t296;
  double t373;
  double t388;
  double t396;
  double t409;
  double t298;
  double t302;
  double t318;
  double t331;
  double t333;
  double t340;
  double t397;
  double t417;
  double t438;
  double t439;
  double t445;
  double t452;
  double t471;
  double t496;
  double t502;
  double t505;
  double t506;
  double t581;
  double t583;
  double t589;
  double t591;
  double t520;
  double t524;
  double t525;
  double t590;
  double t592;
  double t595;
  double t599;
  double t619;
  double t624;
  double t626;
  double t644;
  double t645;
  double t648;
  double t676;
  double t736;
  double t738;
  double t767;
  double t786;
  double t697;
  double t704;
  double t706;
  double t777;
  double t787;
  double t791;
  double t796;
  double t798;
  double t800;
  double t801;
  double t804;
  double t806;
  double t814;
  double t815;
  double t889;
  double t915;
  double t841;
  double t850;
  double t856;
  double t903;
  double t904;
  double t910;
  double t919;
  double t922;
  double t928;
  double t930;
  double t950;
  double t963;
  double t965;
  double t969;
  double t1049;
  double t1056;
  double t1057;
  double t1061;
  double t995;
  double t999;
  double t1003;
  double t1071;
  double t1072;
  double t1074;
  double t1058;
  double t1067;
  double t1070;
  double t1079;
  double t1099;
  double t1122;
  double t1125;
  double t1130;
  double t1131;
  double t1132;
  double t1133;
  double t1186;
  double t1188;
  double t1196;
  double t1204;
  double t1141;
  double t1142;
  double t1146;
  double t174;
  double t1302;
  double t1312;
  double t1305;
  double t1308;
  double t1309;
  double t1326;
  double t1380;
  double t1385;
  double t1386;
  double t1328;
  double t1339;
  double t1344;
  double t1426;
  double t1429;
  double t1434;
  double t1436;
  double t1435;
  double t1459;
  double t1469;
  double t1476;
  double t1486;
  double t1489;
  double t1498;
  double t1500;
  double t1510;
  double t1520;
  double t1522;
  double t1532;
  double t1541;
  double t1544;
  double t1583;
  double t1584;
  double t1588;
  double t1590;
  double t1589;
  double t1596;
  double t1600;
  double t1602;
  double t1616;
  double t1617;
  double t1635;
  double t1656;
  double t1667;
  double t1687;
  double t1690;
  double t1733;
  double t1735;
  double t1740;
  double t1747;
  double t1709;
  double t1712;
  double t1714;
  double t1745;
  double t1753;
  double t1754;
  double t1760;
  double t1767;
  double t1770;
  double t1786;
  double t1795;
  double t1810;
  double t1825;
  double t1828;
  double t1890;
  double t1898;
  double t1836;
  double t1842;
  double t1843;
  double t1893;
  double t1896;
  double t1897;
  double t1910;
  double t1923;
  double t1938;
  double t1940;
  double t1948;
  double t1955;
  double t1956;
  double t1960;
  double t2001;
  double t2004;
  double t2018;
  double t2028;
  double t1976;
  double t1983;
  double t1986;
  double t2035;
  double t2036;
  double t2038;
  double t2020;
  double t2032;
  double t2033;
  double t2042;
  double t2045;
  double t2052;
  double t2054;
  double t2055;
  double t2059;
  double t2061;
  double t2068;
  double t2121;
  double t2124;
  double t2131;
  double t2138;
  double t2075;
  double t2077;
  double t2092;
  double t2224;
  double t2226;
  double t2231;
  double t2240;
  double t2241;
  double t2254;
  double t2256;
  double t2266;
  double t2292;
  double t2312;
  double t2334;
  double t2335;
  double t2336;
  double t2339;
  double t2349;
  double t2355;
  double t2362;
  double t2377;
  double t2378;
  double t2379;
  double t2388;
  double t2393;
  double t2397;
  double t2401;
  double t2413;
  double t2440;
  double t2444;
  double t2463;
  double t2466;
  double t2478;
  double t2513;
  double t2517;
  double t2518;
  double t2522;
  double t2523;
  double t1202;
  double t1205;
  double t1210;
  double t2525;
  double t2532;
  double t2536;
  double t1218;
  double t1222;
  double t1251;
  double t2542;
  double t2545;
  double t2547;
  double t2650;
  double t2653;
  double t2659;
  double t2660;
  double t2662;
  double t2678;
  double t2682;
  double t2688;
  double t2718;
  double t2735;
  double t2736;
  double t2739;
  double t2740;
  double t2746;
  double t2750;
  double t2754;
  double t2755;
  double t2781;
  double t2793;
  double t2797;
  double t2798;
  double t2809;
  double t2822;
  double t2824;
  double t2832;
  double t2857;
  double t2861;
  double t2876;
  double t2882;
  double t2887;
  double t2915;
  double t2916;
  double t2917;
  double t2919;
  double t2938;
  double t2134;
  double t2142;
  double t2144;
  double t2940;
  double t2941;
  double t2949;
  double t2159;
  double t2162;
  double t2165;
  double t2969;
  double t2987;
  double t2991;
  double t2672;
  double t2690;
  double t3049;
  double t2706;
  double t2711;
  double t2719;
  double t2731;
  double t2748;
  double t2758;
  double t2780;
  double t2816;
  double t2833;
  double t2856;
  double t2862;
  double t2864;
  double t2871;
  double t2874;
  double t2890;
  double t2909;
  double t2961;
  double t2992;
  double t3006;
  double t3007;
  double t3010;
  double t3017;
  double t3019;
  double t3027;
  double t3028;
  double t3032;
  double t3037;
  double t3039;
  double t3042;
  double t3111;
  double t3113;
  double t3115;
  double t3096;
  double t3098;
  double t3104;
  double t3106;
  double t3118;
  double t3123;
  double t3124;
  double t3125;
  double t3132;
  double t3135;
  double t3137;
  double t3145;
  double t3146;
  double t3198;
  double t3219;
  double t3230;
  double t3233;
  double t3234;
  double t3235;
  double t3246;
  double t3253;
  double t3266;
  double t3280;
  double t3287;
  double t3309;
  double t3310;
  double t3312;
  double t3333;
  double t3336;
  double t3337;
  double t3343;
  double t3346;
  double t3348;
  double t3350;
  double t3359;
  double t3369;
  double t3370;
  double t3372;
  double t3481;
  double t3484;
  double t3488;
  double t3471;
  double t3473;
  double t3480;
  double t3501;
  double t3502;
  double t3507;
  double t3517;
  double t3521;
  double t3523;
  double t3526;
  double t3529;
  double t3532;
  double t3533;
  double t3550;
  double t3552;
  double t3556;
  double t3560;
  double t3564;
  double t3572;
  double t3574;
  double t3577;
  double t3589;
  double t3592;
  double t3595;
  double t3597;
  double t3598;
  double t3646;
  double t3649;
  double t3651;
  double t3640;
  double t3654;
  double t3657;
  double t3659;
  double t3675;
  double t3690;
  double t3692;
  double t3694;
  double t3769;
  double t3770;
  double t3771;
  double t3757;
  double t3760;
  double t3761;
  double t3772;
  double t3776;
  double t3780;
  double t3781;
  double t3789;
  double t3807;
  double t3811;
  double t3812;
  double t3845;
  double t3850;
  double t3857;
  double t3858;
  double t3876;
  double t3904;
  double t3905;
  double t3907;
  double t3901;
  double t3911;
  double t3916;
  double t3917;
  double t3918;
  double t3922;
  double t3924;
  double t3925;
  double t4033;
  double t4035;
  double t4036;
  double t3879;
  double t4011;
  double t4015;
  double t4017;
  double t4025;
  double t4027;
  double t4029;
  double t4043;
  double t4045;
  double t4046;
  double t4070;
  double t4075;
  double t4069;
  double t4078;
  double t4079;
  double t4080;
  double t4082;
  double t4093;
  double t4098;
  double t4099;
  double t4147;
  double t4149;
  double t4153;
  double t4140;
  double t4142;
  double t4143;
  double t4155;
  double t4159;
  double t4167;
  double t4171;
  double t4176;
  double t4177;
  double t4180;
  double t4182;
  double t4195;
  double t4239;
  double t4241;
  double t4243;
  double t4208;
  double t2250;
  double t2273;
  double t4263;
  double t2281;
  double t2285;
  double t2294;
  double t2313;
  double t2348;
  double t2365;
  double t2374;
  double t2395;
  double t2414;
  double t2430;
  double t2449;
  double t2454;
  double t2457;
  double t2462;
  double t2479;
  double t2503;
  double t2540;
  double t2552;
  double t2565;
  double t2569;
  double t2573;
  double t2590;
  double t2597;
  double t2601;
  double t2607;
  double t2611;
  double t2614;
  double t2615;
  double t2628;
  double t4314;
  double t4315;
  double t4317;
  double t4323;
  double t4326;
  double t4327;
  double t4299;
  double t4302;
  double t4305;
  double t4308;
  double t4312;
  double t4313;
  double t4320;
  double t4336;
  double t4338;
  double t4344;
  double t4331;
  double t4360;
  double t4361;
  double t4364;
  double t4365;
  double t4366;
  double t4368;
  double t4369;
  double t4370;
  double t4387;
  double t4388;
  double t4409;
  double t4415;
  double t4416;
  double t4424;
  double t4425;
  double t4427;
  double t4428;
  double t4430;
  double t4436;
  double t4438;
  double t4439;
  double t4450;
  double t4452;
  double t4453;
  double t4506;
  double t4508;
  double t4509;
  double t4488;
  double t4492;
  double t4495;
  double t4498;
  double t4500;
  double t4503;
  double t4512;
  double t4513;
  double t4514;
  double t4515;
  double t4518;
  double t4519;
  double t4520;
  double t4526;
  double t4528;
  double t4529;
  double t4530;
  double t4533;
  double t4537;
  double t4538;
  double t4539;
  double t4549;
  double t4550;
  double t4553;
  double t4555;
  double t4556;
  double t4579;
  double t4581;
  double t4584;
  double t4576;
  double t4586;
  double t4588;
  double t4591;
  double t4597;
  double t4602;
  double t4606;
  double t4608;
  double t4656;
  double t4659;
  double t4661;
  double t4651;
  double t4652;
  double t4655;
  double t4662;
  double t4663;
  double t4666;
  double t4669;
  double t4672;
  double t4673;
  double t4679;
  double t4680;
  double t4686;
  double t4687;
  double t4688;
  double t4691;
  double t4693;
  double t4725;
  double t4726;
  double t4727;
  double t4722;
  double t4728;
  double t4731;
  double t4732;
  double t4734;
  double t4736;
  double t4737;
  double t4738;
  double t4788;
  double t4789;
  double t4793;
  double t4700;
  double t4768;
  double t4769;
  double t4770;
  double t4776;
  double t4779;
  double t4787;
  double t4799;
  double t4803;
  double t4804;
  double t4835;
  double t4836;
  double t4830;
  double t4840;
  double t4842;
  double t4843;
  double t4851;
  double t4859;
  double t4860;
  double t4862;
  double t4920;
  double t4921;
  double t4924;
  double t4915;
  double t4917;
  double t4919;
  double t4925;
  double t4926;
  double t4927;
  double t4929;
  double t4932;
  double t4936;
  double t4938;
  double t4940;
  double t4952;
  double t4983;
  double t4984;
  double t4985;
  double t4958;
  t42 = Cos(var1[4]);
  t74 = Cos(var1[5]);
  t84 = Sin(var1[4]);
  t184 = Sin(var1[13]);
  t198 = Cos(var1[13]);
  t294 = Sin(var1[5]);
  t190 = -0.135*t74*t184*t84;
  t281 = -1.*t198;
  t292 = 1. + t281;
  t296 = 0.135*t292*t84*t294;
  t373 = Cos(var1[14]);
  t388 = -1.*t373;
  t396 = 1. + t388;
  t409 = Sin(var1[14]);
  t298 = -1.*t74*t184*t84;
  t302 = -1.*t198*t84*t294;
  t318 = t298 + t302;
  t331 = -1.*t198*t74*t84;
  t333 = t184*t84*t294;
  t340 = t331 + t333;
  t397 = -0.049*t396;
  t417 = -0.135*t409;
  t438 = t397 + t417;
  t439 = -1.*t42*t438;
  t445 = -0.135*t396;
  t452 = 0.049*t409;
  t471 = t445 + t452;
  t496 = t471*t318;
  t502 = t42*t409;
  t505 = t373*t318;
  t506 = t502 + t505;
  t581 = Cos(var1[15]);
  t583 = -1.*t581;
  t589 = 1. + t583;
  t591 = Sin(var1[15]);
  t520 = -1.*t373*t42;
  t524 = t409*t318;
  t525 = t520 + t524;
  t590 = -0.09*t589;
  t592 = 0.049*t591;
  t595 = t590 + t592;
  t599 = t595*t340;
  t619 = -0.049*t589;
  t624 = -0.09*t591;
  t626 = t619 + t624;
  t644 = t626*t525;
  t645 = t591*t340;
  t648 = t581*t525;
  t676 = t645 + t648;
  t736 = Cos(var1[16]);
  t738 = -1.*t736;
  t767 = 1. + t738;
  t786 = Sin(var1[16]);
  t697 = t581*t340;
  t704 = -1.*t591*t525;
  t706 = t697 + t704;
  t777 = -0.049*t767;
  t787 = -0.21*t786;
  t791 = t777 + t787;
  t796 = t791*t676;
  t798 = -0.21*t767;
  t800 = 0.049*t786;
  t801 = t798 + t800;
  t804 = t801*t706;
  t806 = -1.*t786*t676;
  t814 = t736*t706;
  t815 = t806 + t814;
  t889 = Cos(var1[17]);
  t915 = Sin(var1[17]);
  t841 = t736*t676;
  t850 = t786*t706;
  t856 = t841 + t850;
  t903 = -1.*t889;
  t904 = 1. + t903;
  t910 = -0.2707*t904;
  t919 = 0.0016*t915;
  t922 = t910 + t919;
  t928 = t922*t815;
  t930 = -1. + t889;
  t950 = 0.0016*t930;
  t963 = -0.2707*t915;
  t965 = t950 + t963;
  t969 = t965*t856;
  t1049 = Cos(var1[18]);
  t1056 = -1.*t1049;
  t1057 = 1. + t1056;
  t1061 = Sin(var1[18]);
  t995 = t889*t815;
  t999 = -1.*t915*t856;
  t1003 = t995 + t999;
  t1071 = t915*t815;
  t1072 = t889*t856;
  t1074 = t1071 + t1072;
  t1058 = 0.0184*t1057;
  t1067 = -0.7055*t1061;
  t1070 = t1058 + t1067;
  t1079 = t1070*t1074;
  t1099 = -0.7055*t1057;
  t1122 = -0.0184*t1061;
  t1125 = t1099 + t1122;
  t1130 = t1125*t1003;
  t1131 = -1.*t1061*t1074;
  t1132 = t1049*t1003;
  t1133 = t1131 + t1132;
  t1186 = Cos(var1[19]);
  t1188 = -1.*t1186;
  t1196 = 1. + t1188;
  t1204 = Sin(var1[19]);
  t1141 = t1049*t1074;
  t1142 = t1061*t1003;
  t1146 = t1141 + t1142;
  t174 = 0.0233*t42;
  t1302 = Cos(var1[6]);
  t1312 = Sin(var1[6]);
  t1305 = -1.*t1302;
  t1308 = 1. + t1305;
  t1309 = -0.135*t1308*t84*t294;
  t1326 = 0.135*t74*t84*t1312;
  t1380 = -1.*t74*t1302*t84;
  t1385 = t84*t294*t1312;
  t1386 = t1380 + t1385;
  t1328 = -1.*t1302*t84*t294;
  t1339 = -1.*t74*t84*t1312;
  t1344 = t1328 + t1339;
  t1426 = Cos(var1[7]);
  t1429 = -1.*t1426;
  t1434 = 1. + t1429;
  t1436 = Sin(var1[7]);
  t1435 = 0.135*t1434;
  t1459 = 0.049*t1436;
  t1469 = t1435 + t1459;
  t1476 = t1344*t1469;
  t1486 = -0.049*t1434;
  t1489 = 0.135*t1436;
  t1498 = t1486 + t1489;
  t1500 = -1.*t42*t1498;
  t1510 = t1426*t1344;
  t1520 = t42*t1436;
  t1522 = t1510 + t1520;
  t1532 = -1.*t42*t1426;
  t1541 = t1344*t1436;
  t1544 = t1532 + t1541;
  t1583 = Cos(var1[8]);
  t1584 = -1.*t1583;
  t1588 = 1. + t1584;
  t1590 = Sin(var1[8]);
  t1589 = -0.049*t1588;
  t1596 = -0.09*t1590;
  t1600 = t1589 + t1596;
  t1602 = t1544*t1600;
  t1616 = -0.09*t1588;
  t1617 = 0.049*t1590;
  t1635 = t1616 + t1617;
  t1656 = t1386*t1635;
  t1667 = t1583*t1544;
  t1687 = t1386*t1590;
  t1690 = t1667 + t1687;
  t1733 = Cos(var1[9]);
  t1735 = -1.*t1733;
  t1740 = 1. + t1735;
  t1747 = Sin(var1[9]);
  t1709 = t1583*t1386;
  t1712 = -1.*t1544*t1590;
  t1714 = t1709 + t1712;
  t1745 = -0.049*t1740;
  t1753 = -0.21*t1747;
  t1754 = t1745 + t1753;
  t1760 = t1754*t1690;
  t1767 = -0.21*t1740;
  t1770 = 0.049*t1747;
  t1786 = t1767 + t1770;
  t1795 = t1786*t1714;
  t1810 = -1.*t1747*t1690;
  t1825 = t1733*t1714;
  t1828 = t1810 + t1825;
  t1890 = Cos(var1[10]);
  t1898 = Sin(var1[10]);
  t1836 = t1733*t1690;
  t1842 = t1747*t1714;
  t1843 = t1836 + t1842;
  t1893 = -1.*t1890;
  t1896 = 1. + t1893;
  t1897 = -0.2707*t1896;
  t1910 = 0.0016*t1898;
  t1923 = t1897 + t1910;
  t1938 = t1923*t1828;
  t1940 = -1. + t1890;
  t1948 = 0.0016*t1940;
  t1955 = -0.2707*t1898;
  t1956 = t1948 + t1955;
  t1960 = t1956*t1843;
  t2001 = Cos(var1[11]);
  t2004 = -1.*t2001;
  t2018 = 1. + t2004;
  t2028 = Sin(var1[11]);
  t1976 = t1890*t1828;
  t1983 = -1.*t1898*t1843;
  t1986 = t1976 + t1983;
  t2035 = t1898*t1828;
  t2036 = t1890*t1843;
  t2038 = t2035 + t2036;
  t2020 = 0.0184*t2018;
  t2032 = -0.7055*t2028;
  t2033 = t2020 + t2032;
  t2042 = t2033*t2038;
  t2045 = -0.7055*t2018;
  t2052 = -0.0184*t2028;
  t2054 = t2045 + t2052;
  t2055 = t2054*t1986;
  t2059 = -1.*t2028*t2038;
  t2061 = t2001*t1986;
  t2068 = t2059 + t2061;
  t2121 = Cos(var1[12]);
  t2124 = -1.*t2121;
  t2131 = 1. + t2124;
  t2138 = Sin(var1[12]);
  t2075 = t2001*t2038;
  t2077 = t2028*t1986;
  t2092 = t2075 + t2077;
  t2224 = -0.135*t292*t42*t74;
  t2226 = -0.135*t42*t184*t294;
  t2231 = -1.*t42*t74*t184;
  t2240 = -1.*t198*t42*t294;
  t2241 = t2231 + t2240;
  t2254 = t198*t42*t74;
  t2256 = -1.*t42*t184*t294;
  t2266 = t2254 + t2256;
  t2292 = t471*t2266;
  t2312 = t595*t2241;
  t2334 = t409*t626*t2266;
  t2335 = t591*t2241;
  t2336 = t581*t409*t2266;
  t2339 = t2335 + t2336;
  t2349 = t581*t2241;
  t2355 = -1.*t409*t591*t2266;
  t2362 = t2349 + t2355;
  t2377 = t791*t2339;
  t2378 = t801*t2362;
  t2379 = -1.*t786*t2339;
  t2388 = t736*t2362;
  t2393 = t2379 + t2388;
  t2397 = t736*t2339;
  t2401 = t786*t2362;
  t2413 = t2397 + t2401;
  t2440 = t922*t2393;
  t2444 = t965*t2413;
  t2463 = t889*t2393;
  t2466 = -1.*t915*t2413;
  t2478 = t2463 + t2466;
  t2513 = t915*t2393;
  t2517 = t889*t2413;
  t2518 = t2513 + t2517;
  t2522 = t1070*t2518;
  t2523 = t1125*t2478;
  t1202 = -1.1135*t1196;
  t1205 = 0.0216*t1204;
  t1210 = t1202 + t1205;
  t2525 = -1.*t1061*t2518;
  t2532 = t1049*t2478;
  t2536 = t2525 + t2532;
  t1218 = -0.0216*t1196;
  t1222 = -1.1135*t1204;
  t1251 = t1218 + t1222;
  t2542 = t1049*t2518;
  t2545 = t1061*t2478;
  t2547 = t2542 + t2545;
  t2650 = 0.135*t42*t74*t1308;
  t2653 = 0.135*t42*t294*t1312;
  t2659 = -1.*t42*t1302*t294;
  t2660 = -1.*t42*t74*t1312;
  t2662 = t2659 + t2660;
  t2678 = t42*t74*t1302;
  t2682 = -1.*t42*t294*t1312;
  t2688 = t2678 + t2682;
  t2718 = t2688*t1469;
  t2735 = t2688*t1436*t1600;
  t2736 = t2662*t1635;
  t2739 = t1583*t2688*t1436;
  t2740 = t2662*t1590;
  t2746 = t2739 + t2740;
  t2750 = t1583*t2662;
  t2754 = -1.*t2688*t1436*t1590;
  t2755 = t2750 + t2754;
  t2781 = t1754*t2746;
  t2793 = t1786*t2755;
  t2797 = -1.*t1747*t2746;
  t2798 = t1733*t2755;
  t2809 = t2797 + t2798;
  t2822 = t1733*t2746;
  t2824 = t1747*t2755;
  t2832 = t2822 + t2824;
  t2857 = t1923*t2809;
  t2861 = t1956*t2832;
  t2876 = t1890*t2809;
  t2882 = -1.*t1898*t2832;
  t2887 = t2876 + t2882;
  t2915 = t1898*t2809;
  t2916 = t1890*t2832;
  t2917 = t2915 + t2916;
  t2919 = t2033*t2917;
  t2938 = t2054*t2887;
  t2134 = -1.1135*t2131;
  t2142 = 0.0216*t2138;
  t2144 = t2134 + t2142;
  t2940 = -1.*t2028*t2917;
  t2941 = t2001*t2887;
  t2949 = t2940 + t2941;
  t2159 = -0.0216*t2131;
  t2162 = -1.1135*t2138;
  t2165 = t2159 + t2162;
  t2969 = t2001*t2917;
  t2987 = t2028*t2887;
  t2991 = t2969 + t2987;
  t2672 = 0.0179*t2662;
  t2690 = 0.1351*t2688;
  t3049 = -0.135*t42*t74*t1302;
  t2706 = -0.0343*t2662;
  t2711 = 0.135*t1426*t2688;
  t2719 = -0.049*t2688*t1436;
  t2731 = 0.1708*t1426*t2688;
  t2748 = -0.0489*t2746;
  t2758 = -0.1498*t2755;
  t2780 = 0.1327*t1426*t2688;
  t2816 = -0.233*t2809;
  t2833 = -0.0169*t2832;
  t2856 = 0.1303*t1426*t2688;
  t2862 = -1.*t1898*t2809;
  t2864 = -1.*t1890*t2832;
  t2871 = t2862 + t2864;
  t2874 = 0.0004*t2871;
  t2890 = -0.4541*t2887;
  t2909 = 0.1318*t1426*t2688;
  t2961 = -0.816*t2949;
  t2992 = -0.0122*t2991;
  t3006 = 0.1306*t1426*t2688;
  t3007 = t2144*t2949;
  t3010 = t2165*t2991;
  t3017 = t2138*t2949;
  t3019 = t2121*t2991;
  t3027 = t3017 + t3019;
  t3028 = 0.0059*t3027;
  t3032 = t2121*t2949;
  t3037 = -1.*t2138*t2991;
  t3039 = t3032 + t3037;
  t3042 = -1.1182*t3039;
  t3111 = t42*t1302*t294;
  t3113 = t42*t74*t1312;
  t3115 = t3111 + t3113;
  t3096 = 0.135*t1426;
  t3098 = -0.049*t1436;
  t3104 = t3096 + t3098;
  t3106 = -1.*t84*t3104;
  t3118 = 0.049*t1426;
  t3123 = t3118 + t1489;
  t3124 = t3115*t3123;
  t3125 = t1426*t3115;
  t3132 = t84*t1436;
  t3135 = t3125 + t3132;
  t3137 = t1426*t84;
  t3145 = -1.*t3115*t1436;
  t3146 = t3137 + t3145;
  t3198 = t3135*t1600;
  t3219 = t1583*t1754*t3135;
  t3230 = -1.*t1786*t3135*t1590;
  t3233 = -1.*t1583*t1747*t3135;
  t3234 = -1.*t1733*t3135*t1590;
  t3235 = t3233 + t3234;
  t3246 = t1733*t1583*t3135;
  t3253 = -1.*t1747*t3135*t1590;
  t3266 = t3246 + t3253;
  t3280 = t1923*t3235;
  t3287 = t1956*t3266;
  t3309 = t1890*t3235;
  t3310 = -1.*t1898*t3266;
  t3312 = t3309 + t3310;
  t3333 = t1898*t3235;
  t3336 = t1890*t3266;
  t3337 = t3333 + t3336;
  t3343 = t2033*t3337;
  t3346 = t2054*t3312;
  t3348 = -1.*t2028*t3337;
  t3350 = t2001*t3312;
  t3359 = t3348 + t3350;
  t3369 = t2001*t3337;
  t3370 = t2028*t3312;
  t3372 = t3369 + t3370;
  t3481 = -1.*t1426*t84;
  t3484 = t3115*t1436;
  t3488 = t3481 + t3484;
  t3471 = 0.049*t1583;
  t3473 = t3471 + t1596;
  t3480 = t2688*t3473;
  t3501 = -0.09*t1583;
  t3502 = -0.049*t1590;
  t3507 = t3501 + t3502;
  t3517 = t3488*t3507;
  t3521 = -1.*t1583*t3488;
  t3523 = -1.*t2688*t1590;
  t3526 = t3521 + t3523;
  t3529 = t1583*t2688;
  t3532 = -1.*t3488*t1590;
  t3533 = t3529 + t3532;
  t3550 = t1786*t3526;
  t3552 = t1754*t3533;
  t3556 = t1747*t3526;
  t3560 = t1733*t3533;
  t3564 = t3556 + t3560;
  t3572 = t1733*t3526;
  t3574 = -1.*t1747*t3533;
  t3577 = t3572 + t3574;
  t3589 = t1956*t3564;
  t3592 = t1923*t3577;
  t3595 = -1.*t1898*t3564;
  t3597 = t1890*t3577;
  t3598 = t3595 + t3597;
  t3646 = t1890*t3564;
  t3649 = t1898*t3577;
  t3651 = t3646 + t3649;
  t3640 = t2054*t3598;
  t3654 = t2033*t3651;
  t3657 = t2028*t3598;
  t3659 = t2001*t3651;
  t3675 = t3657 + t3659;
  t3690 = t2001*t3598;
  t3692 = -1.*t2028*t3651;
  t3694 = t3690 + t3692;
  t3769 = t1583*t3488;
  t3770 = t2688*t1590;
  t3771 = t3769 + t3770;
  t3757 = -0.21*t1733;
  t3760 = -0.049*t1747;
  t3761 = t3757 + t3760;
  t3772 = t3761*t3771;
  t3776 = 0.049*t1733;
  t3780 = t3776 + t1753;
  t3781 = t3780*t3533;
  t3789 = -1.*t1747*t3771;
  t3807 = t3789 + t3560;
  t3811 = -1.*t1733*t3771;
  t3812 = t3811 + t3574;
  t3845 = t1956*t3807;
  t3850 = t1923*t3812;
  t3857 = -1.*t1898*t3807;
  t3858 = t1890*t3812;
  t3876 = t3857 + t3858;
  t3904 = t1890*t3807;
  t3905 = t1898*t3812;
  t3907 = t3904 + t3905;
  t3901 = t2054*t3876;
  t3911 = t2033*t3907;
  t3916 = t2028*t3876;
  t3917 = t2001*t3907;
  t3918 = t3916 + t3917;
  t3922 = t2001*t3876;
  t3924 = -1.*t2028*t3907;
  t3925 = t3922 + t3924;
  t4033 = t1733*t3771;
  t4035 = t1747*t3533;
  t4036 = t4033 + t4035;
  t3879 = -1.*t1890*t3807;
  t4011 = 0.0016*t1890;
  t4015 = t4011 + t1955;
  t4017 = t4015*t3807;
  t4025 = -0.2707*t1890;
  t4027 = -0.0016*t1898;
  t4029 = t4025 + t4027;
  t4043 = t4029*t4036;
  t4045 = -1.*t1890*t4036;
  t4046 = t3857 + t4045;
  t4070 = -1.*t1898*t4036;
  t4075 = t3904 + t4070;
  t4069 = t2054*t4046;
  t4078 = t2033*t4075;
  t4079 = t2028*t4046;
  t4080 = t2001*t4075;
  t4082 = t4079 + t4080;
  t4093 = t2001*t4046;
  t4098 = -1.*t2028*t4075;
  t4099 = t4093 + t4098;
  t4147 = t1898*t3807;
  t4149 = t1890*t4036;
  t4153 = t4147 + t4149;
  t4140 = -0.7055*t2001;
  t4142 = 0.0184*t2028;
  t4143 = t4140 + t4142;
  t4155 = t4143*t4153;
  t4159 = -0.0184*t2001;
  t4167 = t4159 + t2032;
  t4171 = t4167*t4075;
  t4176 = -1.*t2028*t4153;
  t4177 = t4176 + t4080;
  t4180 = -1.*t2001*t4153;
  t4182 = t4180 + t4098;
  t4195 = -1.*t2138*t4177;
  t4239 = t2001*t4153;
  t4241 = t2028*t4075;
  t4243 = t4239 + t4241;
  t4208 = t2121*t4177;
  t2250 = 0.0179*t2241;
  t2273 = -0.1351*t2266;
  t4263 = 0.135*t198*t42*t74;
  t2281 = -0.0343*t2241;
  t2285 = -0.135*t373*t2266;
  t2294 = -0.049*t409*t2266;
  t2313 = -0.1708*t373*t2266;
  t2348 = -0.0489*t2339;
  t2365 = -0.1498*t2362;
  t2374 = -0.1327*t373*t2266;
  t2395 = -0.233*t2393;
  t2414 = -0.0169*t2413;
  t2430 = -0.1303*t373*t2266;
  t2449 = -1.*t915*t2393;
  t2454 = -1.*t889*t2413;
  t2457 = t2449 + t2454;
  t2462 = 0.0004*t2457;
  t2479 = -0.4541*t2478;
  t2503 = -0.1318*t373*t2266;
  t2540 = -0.816*t2536;
  t2552 = -0.0122*t2547;
  t2565 = -0.1306*t373*t2266;
  t2569 = t1210*t2536;
  t2573 = t1251*t2547;
  t2590 = t1204*t2536;
  t2597 = t1186*t2547;
  t2601 = t2590 + t2597;
  t2607 = 0.0059*t2601;
  t2611 = t1186*t2536;
  t2614 = -1.*t1204*t2547;
  t2615 = t2611 + t2614;
  t2628 = -1.1182*t2615;
  t4314 = t42*t74*t184;
  t4315 = t198*t42*t294;
  t4317 = t4314 + t4315;
  t4323 = t409*t84;
  t4326 = t373*t4317;
  t4327 = t4323 + t4326;
  t4299 = -0.135*t373;
  t4302 = -0.049*t409;
  t4305 = t4299 + t4302;
  t4308 = -1.*t4305*t84;
  t4312 = 0.049*t373;
  t4313 = t4312 + t417;
  t4320 = t4313*t4317;
  t4336 = t373*t84;
  t4338 = -1.*t409*t4317;
  t4344 = t4336 + t4338;
  t4331 = t626*t4327;
  t4360 = t581*t791*t4327;
  t4361 = -1.*t591*t801*t4327;
  t4364 = -1.*t736*t591*t4327;
  t4365 = -1.*t581*t786*t4327;
  t4366 = t4364 + t4365;
  t4368 = t581*t736*t4327;
  t4369 = -1.*t591*t786*t4327;
  t4370 = t4368 + t4369;
  t4387 = t922*t4366;
  t4388 = t965*t4370;
  t4409 = t889*t4366;
  t4415 = -1.*t915*t4370;
  t4416 = t4409 + t4415;
  t4424 = t915*t4366;
  t4425 = t889*t4370;
  t4427 = t4424 + t4425;
  t4428 = t1070*t4427;
  t4430 = t1125*t4416;
  t4436 = -1.*t1061*t4427;
  t4438 = t1049*t4416;
  t4439 = t4436 + t4438;
  t4450 = t1049*t4427;
  t4452 = t1061*t4416;
  t4453 = t4450 + t4452;
  t4506 = -1.*t373*t84;
  t4508 = t409*t4317;
  t4509 = t4506 + t4508;
  t4488 = 0.049*t581;
  t4492 = t4488 + t624;
  t4495 = t4492*t2266;
  t4498 = -0.09*t581;
  t4500 = -0.049*t591;
  t4503 = t4498 + t4500;
  t4512 = t4503*t4509;
  t4513 = -1.*t591*t2266;
  t4514 = -1.*t581*t4509;
  t4515 = t4513 + t4514;
  t4518 = t581*t2266;
  t4519 = -1.*t591*t4509;
  t4520 = t4518 + t4519;
  t4526 = t801*t4515;
  t4528 = t791*t4520;
  t4529 = t786*t4515;
  t4530 = t736*t4520;
  t4533 = t4529 + t4530;
  t4537 = t736*t4515;
  t4538 = -1.*t786*t4520;
  t4539 = t4537 + t4538;
  t4549 = t965*t4533;
  t4550 = t922*t4539;
  t4553 = -1.*t915*t4533;
  t4555 = t889*t4539;
  t4556 = t4553 + t4555;
  t4579 = t889*t4533;
  t4581 = t915*t4539;
  t4584 = t4579 + t4581;
  t4576 = t1125*t4556;
  t4586 = t1070*t4584;
  t4588 = t1061*t4556;
  t4591 = t1049*t4584;
  t4597 = t4588 + t4591;
  t4602 = t1049*t4556;
  t4606 = -1.*t1061*t4584;
  t4608 = t4602 + t4606;
  t4656 = t591*t2266;
  t4659 = t581*t4509;
  t4661 = t4656 + t4659;
  t4651 = -0.21*t736;
  t4652 = -0.049*t786;
  t4655 = t4651 + t4652;
  t4662 = t4655*t4661;
  t4663 = 0.049*t736;
  t4666 = t4663 + t787;
  t4669 = t4666*t4520;
  t4672 = -1.*t786*t4661;
  t4673 = t4672 + t4530;
  t4679 = -1.*t736*t4661;
  t4680 = t4679 + t4538;
  t4686 = t965*t4673;
  t4687 = t922*t4680;
  t4688 = -1.*t915*t4673;
  t4691 = t889*t4680;
  t4693 = t4688 + t4691;
  t4725 = t889*t4673;
  t4726 = t915*t4680;
  t4727 = t4725 + t4726;
  t4722 = t1125*t4693;
  t4728 = t1070*t4727;
  t4731 = t1061*t4693;
  t4732 = t1049*t4727;
  t4734 = t4731 + t4732;
  t4736 = t1049*t4693;
  t4737 = -1.*t1061*t4727;
  t4738 = t4736 + t4737;
  t4788 = t736*t4661;
  t4789 = t786*t4520;
  t4793 = t4788 + t4789;
  t4700 = -1.*t889*t4673;
  t4768 = 0.0016*t889;
  t4769 = t4768 + t963;
  t4770 = t4769*t4673;
  t4776 = -0.2707*t889;
  t4779 = -0.0016*t915;
  t4787 = t4776 + t4779;
  t4799 = t4787*t4793;
  t4803 = -1.*t889*t4793;
  t4804 = t4688 + t4803;
  t4835 = -1.*t915*t4793;
  t4836 = t4725 + t4835;
  t4830 = t1125*t4804;
  t4840 = t1070*t4836;
  t4842 = t1061*t4804;
  t4843 = t1049*t4836;
  t4851 = t4842 + t4843;
  t4859 = t1049*t4804;
  t4860 = -1.*t1061*t4836;
  t4862 = t4859 + t4860;
  t4920 = t915*t4673;
  t4921 = t889*t4793;
  t4924 = t4920 + t4921;
  t4915 = -0.7055*t1049;
  t4917 = 0.0184*t1061;
  t4919 = t4915 + t4917;
  t4925 = t4919*t4924;
  t4926 = -0.0184*t1049;
  t4927 = t4926 + t1067;
  t4929 = t4927*t4836;
  t4932 = -1.*t1061*t4924;
  t4936 = t4932 + t4843;
  t4938 = -1.*t1049*t4924;
  t4940 = t4938 + t4860;
  t4952 = -1.*t1204*t4936;
  t4983 = t1049*t4924;
  t4984 = t1061*t4836;
  t4985 = t4983 + t4984;
  t4958 = t1186*t4936;

  p_output1(0)=0;
  p_output1(1)=0;
  p_output1(2)=312.78204;
  p_output1(3)=0;
  p_output1(4)=11.4777*(t1309 + t1326 - 0.0343*t1386 + t1476 + t1500 + 0.135*t1522 - 0.049*t1544) + 54.151199999999996*(t1309 + t1326 + t1476 + t1500 + 0.1708*t1522 + t1602 + t1656 - 0.0489*t1690 - 0.1498*t1714) + 17.854200000000002*(t1309 + t1326 + 0.1351*t1344 + 0.0179*t1386 + t174) + 7.435980000000001*(t1309 + t1326 + t1476 + t1500 + 0.1327*t1522 + t1602 + t1656 + t1760 + t1795 - 0.233*t1828 - 0.0169*t1843) + 5.6603699999999995*(t1309 + t1326 + t1476 + t1500 + 0.1303*t1522 + t1602 + t1656 + t1760 + t1795 + 0.0004*(-1.*t1843*t1890 - 1.*t1828*t1898) + t1938 + t1960 - 0.4541*t1986) + 7.67142*(t1309 + t1326 + t1476 + t1500 + 0.1318*t1522 + t1602 + t1656 + t1760 + t1795 + t1938 + t1960 + t2042 + t2055 - 0.816*t2068 - 0.0122*t2092) + 1.4715*(t1309 + t1326 + t1476 + t1500 + 0.1306*t1522 + t1602 + t1656 + t1760 + t1795 + t1938 + t1960 + t2042 + t2055 + 0.0059*(t2092*t2121 + t2068*t2138) - 1.1182*(t2068*t2121 - 1.*t2092*t2138) + t2068*t2144 + t2092*t2165) + 17.854200000000002*(t174 + t190 + t296 - 0.1351*t318 + 0.0179*t340) + 11.4777*(t190 + t296 - 0.0343*t340 + t439 + t496 - 0.135*t506 - 0.049*t525) + 54.151199999999996*(t190 + t296 + t439 + t496 - 0.1708*t506 + t599 + t644 - 0.0489*t676 - 0.1498*t706) + 101.3373*(-0.0507*t42 - 0.0284*t74*t84) + 7.435980000000001*(t190 + t296 + t439 + t496 - 0.1327*t506 + t599 + t644 + t796 + t804 - 0.233*t815 - 0.0169*t856) + 7.67142*(t1079 + t1130 - 0.816*t1133 - 0.0122*t1146 + t190 + t296 + t439 + t496 - 0.1318*t506 + t599 + t644 + t796 + t804 + t928 + t969) + 1.4715*(t1079 + t1130 + 0.0059*(t1146*t1186 + t1133*t1204) - 1.1182*(t1133*t1186 - 1.*t1146*t1204) + t1133*t1210 + t1146*t1251 + t190 + t296 + t439 + t496 - 0.1306*t506 + t599 + t644 + t796 + t804 + t928 + t969) + 5.6603699999999995*(-0.4541*t1003 + t190 + t296 + t439 + t496 - 0.1303*t506 + t599 + t644 + t796 + t804 + 0.0004*(-1.*t856*t889 - 1.*t815*t915) + t928 + t969);
  p_output1(5)=17.854200000000002*(t2224 + t2226 + t2250 + t2273) + 11.4777*(t2224 + t2226 + t2281 + t2285 + t2292 + t2294) + 54.151199999999996*(t2224 + t2226 + t2292 + t2312 + t2313 + t2334 + t2348 + t2365) + 7.435980000000001*(t2224 + t2226 + t2292 + t2312 + t2334 + t2374 + t2377 + t2378 + t2395 + t2414) + 5.6603699999999995*(t2224 + t2226 + t2292 + t2312 + t2334 + t2377 + t2378 + t2430 + t2440 + t2444 + t2462 + t2479) + 7.67142*(t2224 + t2226 + t2292 + t2312 + t2334 + t2377 + t2378 + t2440 + t2444 + t2503 + t2522 + t2523 + t2540 + t2552) + 1.4715*(t2224 + t2226 + t2292 + t2312 + t2334 + t2377 + t2378 + t2440 + t2444 + t2522 + t2523 + t2565 + t2569 + t2573 + t2607 + t2628) + 17.854200000000002*(t2650 + t2653 + t2672 + t2690) + 11.4777*(t2650 + t2653 + t2706 + t2711 + t2718 + t2719) + 54.151199999999996*(t2650 + t2653 + t2718 + t2731 + t2735 + t2736 + t2748 + t2758) + 7.435980000000001*(t2650 + t2653 + t2718 + t2735 + t2736 + t2780 + t2781 + t2793 + t2816 + t2833) + 5.6603699999999995*(t2650 + t2653 + t2718 + t2735 + t2736 + t2781 + t2793 + t2856 + t2857 + t2861 + t2874 + t2890) + 7.67142*(t2650 + t2653 + t2718 + t2735 + t2736 + t2781 + t2793 + t2857 + t2861 + t2909 + t2919 + t2938 + t2961 + t2992) + 1.4715*(t2650 + t2653 + t2718 + t2735 + t2736 + t2781 + t2793 + t2857 + t2861 + t2919 + t2938 + t3006 + t3007 + t3010 + t3028 + t3042) - 2.87797932*t294*t42;
  p_output1(6)=17.854200000000002*(t2653 + t2672 + t2690 + t3049) + 11.4777*(t2653 + t2706 + t2711 + t2718 + t2719 + t3049) + 54.151199999999996*(t2653 + t2718 + t2731 + t2735 + t2736 + t2748 + t2758 + t3049) + 7.435980000000001*(t2653 + t2718 + t2735 + t2736 + t2780 + t2781 + t2793 + t2816 + t2833 + t3049) + 5.6603699999999995*(t2653 + t2718 + t2735 + t2736 + t2781 + t2793 + t2856 + t2857 + t2861 + t2874 + t2890 + t3049) + 7.67142*(t2653 + t2718 + t2735 + t2736 + t2781 + t2793 + t2857 + t2861 + t2909 + t2919 + t2938 + t2961 + t2992 + t3049) + 1.4715*(t2653 + t2718 + t2735 + t2736 + t2781 + t2793 + t2857 + t2861 + t2919 + t2938 + t3006 + t3007 + t3010 + t3028 + t3042 + t3049);
  p_output1(7)=11.4777*(t3106 + t3124 - 0.049*t3135 + 0.135*t3146) + 54.151199999999996*(t3106 + t3124 - 0.0489*t1583*t3135 + 0.1498*t1590*t3135 + 0.1708*t3146 + t3198) + 7.435980000000001*(t3106 + t3124 + 0.1327*t3146 + t3198 + t3219 + t3230 - 0.233*t3235 - 0.0169*t3266) + 5.6603699999999995*(t3106 + t3124 + 0.1303*t3146 + t3198 + t3219 + t3230 + 0.0004*(-1.*t1898*t3235 - 1.*t1890*t3266) + t3280 + t3287 - 0.4541*t3312) + 7.67142*(t3106 + t3124 + 0.1318*t3146 + t3198 + t3219 + t3230 + t3280 + t3287 + t3343 + t3346 - 0.816*t3359 - 0.0122*t3372) + 1.4715*(t3106 + t3124 + 0.1306*t3146 + t3198 + t3219 + t3230 + t3280 + t3287 + t3343 + t3346 + t2144*t3359 + t2165*t3372 + 0.0059*(t2138*t3359 + t2121*t3372) - 1.1182*(t2121*t3359 - 1.*t2138*t3372));
  p_output1(8)=54.151199999999996*(t3480 + t3517 - 0.1498*t3526 - 0.0489*t3533) + 7.435980000000001*(t3480 + t3517 + t3550 + t3552 - 0.0169*t3564 - 0.233*t3577) + 5.6603699999999995*(t3480 + t3517 + t3550 + t3552 + 0.0004*(-1.*t1890*t3564 - 1.*t1898*t3577) + t3589 + t3592 - 0.4541*t3598) + 7.67142*(t3480 + t3517 + t3550 + t3552 + t3589 + t3592 + t3640 + t3654 - 0.0122*t3675 - 0.816*t3694) + 1.4715*(t3480 + t3517 + t3550 + t3552 + t3589 + t3592 + t3640 + t3654 + t2165*t3675 + t2144*t3694 - 1.1182*(-1.*t2138*t3675 + t2121*t3694) + 0.0059*(t2121*t3675 + t2138*t3694));
  p_output1(9)=7.435980000000001*(t3772 + t3781 - 0.0169*t3807 - 0.233*t3812) + 5.6603699999999995*(t3772 + t3781 + t3845 + t3850 - 0.4541*t3876 + 0.0004*(-1.*t1898*t3812 + t3879)) + 7.67142*(t3772 + t3781 + t3845 + t3850 + t3901 + t3911 - 0.0122*t3918 - 0.816*t3925) + 1.4715*(t3772 + t3781 + t3845 + t3850 + t3901 + t3911 + t2165*t3918 + t2144*t3925 - 1.1182*(-1.*t2138*t3918 + t2121*t3925) + 0.0059*(t2121*t3918 + t2138*t3925));
  p_output1(10)=5.6603699999999995*(t4017 + 0.0004*(t3879 + t1898*t4036) + t4043 - 0.4541*t4046) + 7.67142*(t4017 + t4043 + t4069 + t4078 - 0.0122*t4082 - 0.816*t4099) + 1.4715*(t4017 + t4043 + t4069 + t4078 + t2165*t4082 + t2144*t4099 - 1.1182*(-1.*t2138*t4082 + t2121*t4099) + 0.0059*(t2121*t4082 + t2138*t4099));
  p_output1(11)=7.67142*(t4155 + t4171 - 0.0122*t4177 - 0.816*t4182) + 1.4715*(t4155 + t4171 + t2165*t4177 + t2144*t4182 - 1.1182*(t2121*t4182 + t4195) + 0.0059*(t2138*t4182 + t4208));
  p_output1(12)=1.4715*((0.0216*t2121 + t2162)*t4177 + (-1.1135*t2121 - 0.0216*t2138)*t4243 - 1.1182*(t4195 - 1.*t2121*t4243) + 0.0059*(t4208 - 1.*t2138*t4243));
  p_output1(13)=17.854200000000002*(t2226 + t2250 + t2273 + t4263) + 11.4777*(t2226 + t2281 + t2285 + t2292 + t2294 + t4263) + 54.151199999999996*(t2226 + t2292 + t2312 + t2313 + t2334 + t2348 + t2365 + t4263) + 7.435980000000001*(t2226 + t2292 + t2312 + t2334 + t2374 + t2377 + t2378 + t2395 + t2414 + t4263) + 5.6603699999999995*(t2226 + t2292 + t2312 + t2334 + t2377 + t2378 + t2430 + t2440 + t2444 + t2462 + t2479 + t4263) + 7.67142*(t2226 + t2292 + t2312 + t2334 + t2377 + t2378 + t2440 + t2444 + t2503 + t2522 + t2523 + t2540 + t2552 + t4263) + 1.4715*(t2226 + t2292 + t2312 + t2334 + t2377 + t2378 + t2440 + t2444 + t2522 + t2523 + t2565 + t2569 + t2573 + t2607 + t2628 + t4263);
  p_output1(14)=11.4777*(t4308 + t4320 - 0.049*t4327 - 0.135*t4344) + 7.435980000000001*(t4308 + t4320 + t4331 - 0.1327*t4344 + t4360 + t4361 - 0.233*t4366 - 0.0169*t4370) + 7.67142*(t4308 + t4320 + t4331 - 0.1318*t4344 + t4360 + t4361 + t4387 + t4388 + t4428 + t4430 - 0.816*t4439 - 0.0122*t4453) + 1.4715*(t4308 + t4320 + t4331 - 0.1306*t4344 + t4360 + t4361 + t4387 + t4388 + t4428 + t4430 + t1210*t4439 + t1251*t4453 + 0.0059*(t1204*t4439 + t1186*t4453) - 1.1182*(t1186*t4439 - 1.*t1204*t4453)) + 54.151199999999996*(t4308 + t4320 + t4331 - 0.1708*t4344 - 0.0489*t4327*t581 + 0.1498*t4327*t591) + 5.6603699999999995*(t4308 + t4320 + t4331 - 0.1303*t4344 + t4360 + t4361 + t4387 + t4388 - 0.4541*t4416 + 0.0004*(-1.*t4370*t889 - 1.*t4366*t915));
  p_output1(15)=54.151199999999996*(t4495 + t4512 - 0.1498*t4515 - 0.0489*t4520) + 7.435980000000001*(t4495 + t4512 + t4526 + t4528 - 0.0169*t4533 - 0.233*t4539) + 7.67142*(t4495 + t4512 + t4526 + t4528 + t4549 + t4550 + t4576 + t4586 - 0.0122*t4597 - 0.816*t4608) + 1.4715*(t4495 + t4512 + t4526 + t4528 + t4549 + t4550 + t4576 + t4586 + t1251*t4597 + t1210*t4608 - 1.1182*(-1.*t1204*t4597 + t1186*t4608) + 0.0059*(t1186*t4597 + t1204*t4608)) + 5.6603699999999995*(t4495 + t4512 + t4526 + t4528 + t4549 + t4550 - 0.4541*t4556 + 0.0004*(-1.*t4533*t889 - 1.*t4539*t915));
  p_output1(16)=7.435980000000001*(t4662 + t4669 - 0.0169*t4673 - 0.233*t4680) + 7.67142*(t4662 + t4669 + t4686 + t4687 + t4722 + t4728 - 0.0122*t4734 - 0.816*t4738) + 1.4715*(t4662 + t4669 + t4686 + t4687 + t4722 + t4728 + t1251*t4734 + t1210*t4738 - 1.1182*(-1.*t1204*t4734 + t1186*t4738) + 0.0059*(t1186*t4734 + t1204*t4738)) + 5.6603699999999995*(t4662 + t4669 + t4686 + t4687 - 0.4541*t4693 + 0.0004*(t4700 - 1.*t4680*t915));
  p_output1(17)=7.67142*(t4770 + t4799 + t4830 + t4840 - 0.0122*t4851 - 0.816*t4862) + 1.4715*(t4770 + t4799 + t4830 + t4840 + t1251*t4851 + t1210*t4862 - 1.1182*(-1.*t1204*t4851 + t1186*t4862) + 0.0059*(t1186*t4851 + t1204*t4862)) + 5.6603699999999995*(t4770 + t4799 - 0.4541*t4804 + 0.0004*(t4700 + t4793*t915));
  p_output1(18)=7.67142*(t4925 + t4929 - 0.0122*t4936 - 0.816*t4940) + 1.4715*(t4925 + t4929 + t1251*t4936 + t1210*t4940 - 1.1182*(t1186*t4940 + t4952) + 0.0059*(t1204*t4940 + t4958));
  p_output1(19)=1.4715*((0.0216*t1186 + t1222)*t4936 + (-1.1135*t1186 - 0.0216*t1204)*t4985 - 1.1182*(t4952 - 1.*t1186*t4985) + 0.0059*(t4958 - 1.*t1204*t4985));
}


       
Eigen::Matrix<double,20,1> Ge_cassie(const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,20,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



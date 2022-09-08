/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:33:30 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jwb_LeftToeBottom_to_RightToeBottom.h"

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
  double t164;
  double t441;
  double t372;
  double t414;
  double t463;
  double t492;
  double t431;
  double t465;
  double t486;
  double t320;
  double t495;
  double t510;
  double t529;
  double t606;
  double t488;
  double t533;
  double t551;
  double t305;
  double t625;
  double t630;
  double t631;
  double t661;
  double t590;
  double t637;
  double t656;
  double t253;
  double t663;
  double t690;
  double t707;
  double t772;
  double t657;
  double t753;
  double t758;
  double t234;
  double t776;
  double t784;
  double t812;
  double t986;
  double t988;
  double t989;
  double t1000;
  double t1030;
  double t1040;
  double t1102;
  double t1006;
  double t1105;
  double t1118;
  double t1141;
  double t1145;
  double t1150;
  double t1135;
  double t1159;
  double t1224;
  double t1345;
  double t1349;
  double t1352;
  double t1502;
  double t1527;
  double t1530;
  double t1543;
  double t1545;
  double t1550;
  double t1539;
  double t1570;
  double t1596;
  double t1612;
  double t1616;
  double t1661;
  double t1608;
  double t1664;
  double t1674;
  double t1693;
  double t1720;
  double t1731;
  double t1684;
  double t1760;
  double t1766;
  double t1789;
  double t1792;
  double t1793;
  double t766;
  double t836;
  double t844;
  double t877;
  double t889;
  double t910;
  double t1250;
  double t1372;
  double t1395;
  double t1430;
  double t1452;
  double t1459;
  double t1784;
  double t1795;
  double t1798;
  double t1815;
  double t1829;
  double t1833;
  double t1992;
  double t2030;
  double t2111;
  double t1810;
  double t1835;
  double t1863;
  double t1403;
  double t1480;
  double t1482;
  double t2125;
  double t2185;
  double t2221;
  double t845;
  double t964;
  double t979;
  double t1499;
  double t1882;
  double t1888;
  double t1906;
  double t1911;
  double t1928;
  double t1989;
  double t2124;
  double t2271;
  double t2275;
  double t2331;
  double t2334;
  double t2344;
  double t2357;
  double t2366;
  double t2664;
  double t2610;
  double t2611;
  double t2621;
  double t2668;
  double t2590;
  double t2746;
  double t2755;
  double t2763;
  double t2632;
  double t2701;
  double t2706;
  double t2775;
  double t2588;
  double t2853;
  double t2870;
  double t2890;
  double t2739;
  double t2783;
  double t2790;
  double t2897;
  double t2528;
  double t2952;
  double t2957;
  double t2959;
  double t2802;
  double t2899;
  double t2924;
  double t2979;
  double t2485;
  double t3048;
  double t3073;
  double t3098;
  double t2929;
  double t2996;
  double t3004;
  double t3104;
  double t2401;
  double t2437;
  double t3345;
  double t3409;
  double t3471;
  double t3478;
  double t3372;
  double t3373;
  double t3402;
  double t3567;
  double t3579;
  double t3587;
  double t3403;
  double t3536;
  double t3549;
  double t3615;
  double t3621;
  double t3636;
  double t3558;
  double t3596;
  double t3604;
  double t3856;
  double t3864;
  double t3879;
  double t3832;
  double t3836;
  double t3839;
  double t3930;
  double t3932;
  double t3965;
  double t3846;
  double t3881;
  double t3885;
  double t4060;
  double t4065;
  double t4074;
  double t3925;
  double t4022;
  double t4032;
  double t4231;
  double t4266;
  double t4278;
  double t4036;
  double t4077;
  double t4121;
  double t3017;
  double t3120;
  double t3123;
  double t3211;
  double t3226;
  double t3228;
  double t3606;
  double t3686;
  double t3691;
  double t3731;
  double t3738;
  double t3743;
  double t4161;
  double t4289;
  double t4298;
  double t4335;
  double t4343;
  double t4358;
  double t4564;
  double t4569;
  double t4609;
  double t3280;
  double t3315;
  double t3327;
  double t4668;
  double t4683;
  double t4696;
  double t3787;
  double t3792;
  double t3818;
  double t4848;
  double t4867;
  double t4878;
  double t4414;
  double t4461;
  double t4507;
  double t3209;
  double t3262;
  double t3267;
  double t4620;
  double t3729;
  double t3759;
  double t3784;
  double t4703;
  double t4737;
  double t4762;
  double t4305;
  double t4406;
  double t4412;
  double t4884;
  double t4885;
  double t4898;
  double t2378;
  double t2444;
  double t2463;
  double t5053;
  double t5058;
  double t5066;
  double t5081;
  double t4993;
  double t5020;
  double t5040;
  double t5048;
  double t5179;
  double t5222;
  double t5244;
  double t5247;
  double t5272;
  double t5305;
  double t5310;
  double t4631;
  double t4839;
  double t4899;
  double t4916;
  double t3337;
  double t3827;
  double t4548;
  double t4556;
  double t5211;
  double t5262;
  double t5316;
  double t5330;
  double t5344;
  double t5373;
  double t5381;
  double t5405;
  double t5413;
  double t5416;
  double t5454;
  double t5462;
  double t5538;
  double t5555;
  double t5571;
  double t5578;
  double t5893;
  double t5906;
  double t5911;
  double t5951;
  double t5959;
  double t5964;
  double t5939;
  double t5989;
  double t5994;
  double t6012;
  double t6028;
  double t6055;
  double t6010;
  double t6061;
  double t6111;
  double t6165;
  double t6242;
  double t6245;
  double t5694;
  double t5791;
  double t5796;
  double t5339;
  double t5464;
  double t5484;
  double t5499;
  double t5505;
  double t5579;
  double t5601;
  double t5610;
  double t5644;
  double t5654;
  double t5687;
  double t5688;
  double t5800;
  double t5809;
  double t5832;
  double t5863;
  double t5887;
  double t6518;
  double t6536;
  double t6539;
  double t6453;
  double t6557;
  double t6563;
  double t6578;
  double t6580;
  double t6569;
  double t6604;
  double t6610;
  double t6656;
  double t6658;
  double t6701;
  double t199;
  double t6145;
  double t6270;
  double t6314;
  double t6315;
  double t6328;
  double t6338;
  double t6351;
  double t6397;
  double t6409;
  double t6414;
  double t6420;
  double t6640;
  double t6707;
  double t6710;
  double t6725;
  double t6732;
  double t6740;
  double t6742;
  double t6745;
  double t6768;
  double t6772;
  double t6777;
  double t6427;
  double t6444;
  double t6785;
  double t6789;
  double t6799;
  double t6804;
  double t6810;
  double t7256;
  double t7263;
  double t7279;
  double t6945;
  double t6948;
  double t7316;
  double t7320;
  double t7339;
  double t6954;
  double t6955;
  double t6967;
  double t6968;
  double t7000;
  double t7141;
  double t7145;
  double t7174;
  double t7178;
  double t7180;
  double t7202;
  double t7212;
  double t4930;
  double t5083;
  double t5102;
  double t5122;
  double t5132;
  double t6828;
  double t6848;
  double t6861;
  double t6886;
  double t6929;
  double t7051;
  double t7064;
  double t7073;
  double t7101;
  double t7116;
  double t7421;
  double t7426;
  double t7440;
  double t7447;
  double t7460;
  double t7482;
  double t7490;
  double t7492;
  double t7498;
  double t7504;
  double t7519;
  double t7528;
  double t7503;
  double t7530;
  double t7540;
  double t7547;
  double t7548;
  double t7555;
  double t7544;
  double t7561;
  double t7564;
  double t7582;
  double t7583;
  double t7585;
  double t7642;
  double t7643;
  double t7644;
  double t7638;
  double t7645;
  double t7647;
  double t7660;
  double t7679;
  double t7655;
  double t7681;
  double t7688;
  double t7692;
  double t7693;
  double t7694;
  double t7579;
  double t7591;
  double t7593;
  double t7596;
  double t7600;
  double t7602;
  double t7689;
  double t7697;
  double t7705;
  double t7715;
  double t7717;
  double t7721;
  t164 = Sin(var1[1]);
  t441 = Cos(var1[0]);
  t372 = Cos(var1[2]);
  t414 = Sin(var1[0]);
  t463 = Sin(var1[2]);
  t492 = Cos(var1[3]);
  t431 = t372*t414*t164;
  t465 = t441*t463;
  t486 = t431 + t465;
  t320 = Sin(var1[3]);
  t495 = t441*t372;
  t510 = -1.*t414*t164*t463;
  t529 = t495 + t510;
  t606 = Cos(var1[4]);
  t488 = -1.*t320*t486;
  t533 = t492*t529;
  t551 = t488 + t533;
  t305 = Sin(var1[4]);
  t625 = t492*t486;
  t630 = t320*t529;
  t631 = t625 + t630;
  t661 = Cos(var1[5]);
  t590 = t305*t551;
  t637 = t606*t631;
  t656 = t590 + t637;
  t253 = Sin(var1[5]);
  t663 = t606*t551;
  t690 = -1.*t305*t631;
  t707 = t663 + t690;
  t772 = Cos(var1[6]);
  t657 = -1.*t253*t656;
  t753 = t661*t707;
  t758 = t657 + t753;
  t234 = Sin(var1[6]);
  t776 = t661*t656;
  t784 = t253*t707;
  t812 = t776 + t784;
  t986 = Cos(var1[1]);
  t988 = -1.*t986*t372*t320;
  t989 = -1.*t492*t986*t463;
  t1000 = t988 + t989;
  t1030 = t492*t986*t372;
  t1040 = -1.*t986*t320*t463;
  t1102 = t1030 + t1040;
  t1006 = t305*t1000;
  t1105 = t606*t1102;
  t1118 = t1006 + t1105;
  t1141 = t606*t1000;
  t1145 = -1.*t305*t1102;
  t1150 = t1141 + t1145;
  t1135 = -1.*t253*t1118;
  t1159 = t661*t1150;
  t1224 = t1135 + t1159;
  t1345 = t661*t1118;
  t1349 = t253*t1150;
  t1352 = t1345 + t1349;
  t1502 = t441*t372*t164;
  t1527 = -1.*t414*t463;
  t1530 = t1502 + t1527;
  t1543 = -1.*t372*t414;
  t1545 = -1.*t441*t164*t463;
  t1550 = t1543 + t1545;
  t1539 = -1.*t320*t1530;
  t1570 = t492*t1550;
  t1596 = t1539 + t1570;
  t1612 = t492*t1530;
  t1616 = t320*t1550;
  t1661 = t1612 + t1616;
  t1608 = t305*t1596;
  t1664 = t606*t1661;
  t1674 = t1608 + t1664;
  t1693 = t606*t1596;
  t1720 = -1.*t305*t1661;
  t1731 = t1693 + t1720;
  t1684 = -1.*t253*t1674;
  t1760 = t661*t1731;
  t1766 = t1684 + t1760;
  t1789 = t661*t1674;
  t1792 = t253*t1731;
  t1793 = t1789 + t1792;
  t766 = t234*t758;
  t836 = t772*t812;
  t844 = t766 + t836;
  t877 = t772*t758;
  t889 = -1.*t234*t812;
  t910 = t877 + t889;
  t1250 = t234*t1224;
  t1372 = t772*t1352;
  t1395 = t1250 + t1372;
  t1430 = t772*t1224;
  t1452 = -1.*t234*t1352;
  t1459 = t1430 + t1452;
  t1784 = t234*t1766;
  t1795 = t772*t1793;
  t1798 = t1784 + t1795;
  t1815 = t772*t1766;
  t1829 = -1.*t234*t1793;
  t1833 = t1815 + t1829;
  t1992 = 0.642788*t1395;
  t2030 = 0.766044*t1459;
  t2111 = t1992 + t2030;
  t1810 = -0.766044*t1798;
  t1835 = 0.642788*t1833;
  t1863 = t1810 + t1835;
  t1403 = -0.766044*t1395;
  t1480 = 0.642788*t1459;
  t1482 = t1403 + t1480;
  t2125 = 0.642788*t1798;
  t2185 = 0.766044*t1833;
  t2221 = t2125 + t2185;
  t845 = 0.642788*t844;
  t964 = 0.766044*t910;
  t979 = t845 + t964;
  t1499 = t441*t986*t1482;
  t1882 = t164*t1863;
  t1888 = t1499 + t1882;
  t1906 = -1.*t979*t1888;
  t1911 = -0.766044*t844;
  t1928 = 0.642788*t910;
  t1989 = t1911 + t1928;
  t2124 = t441*t986*t2111;
  t2271 = t164*t2221;
  t2275 = t2124 + t2271;
  t2331 = t1989*t2275;
  t2334 = t2111*t1863;
  t2344 = -1.*t1482*t2221;
  t2357 = t2334 + t2344;
  t2366 = -1.*t986*t414*t2357;
  t2664 = Cos(var1[7]);
  t2610 = Cos(var1[9]);
  t2611 = Sin(var1[7]);
  t2621 = Sin(var1[8]);
  t2668 = Sin(var1[9]);
  t2590 = Cos(var1[10]);
  t2746 = t2664*t2610;
  t2755 = -1.*t2611*t2621*t2668;
  t2763 = t2746 + t2755;
  t2632 = t2610*t2611*t2621;
  t2701 = t2664*t2668;
  t2706 = t2632 + t2701;
  t2775 = Sin(var1[10]);
  t2588 = Cos(var1[11]);
  t2853 = t2590*t2763;
  t2870 = -1.*t2706*t2775;
  t2890 = t2853 + t2870;
  t2739 = t2590*t2706;
  t2783 = t2763*t2775;
  t2790 = t2739 + t2783;
  t2897 = Sin(var1[11]);
  t2528 = Cos(var1[12]);
  t2952 = t2588*t2890;
  t2957 = -1.*t2790*t2897;
  t2959 = t2952 + t2957;
  t2802 = t2588*t2790;
  t2899 = t2890*t2897;
  t2924 = t2802 + t2899;
  t2979 = Sin(var1[12]);
  t2485 = Cos(var1[13]);
  t3048 = t2528*t2959;
  t3073 = -1.*t2924*t2979;
  t3098 = t3048 + t3073;
  t2929 = t2528*t2924;
  t2996 = t2959*t2979;
  t3004 = t2929 + t2996;
  t3104 = Sin(var1[13]);
  t2401 = 0. + t1906 + t2331 + t2366;
  t2437 = 1/t2401;
  t3345 = Cos(var1[8]);
  t3409 = -1.*t3345*t2590*t2668;
  t3471 = -1.*t3345*t2610*t2775;
  t3478 = t3409 + t3471;
  t3372 = t3345*t2610*t2590;
  t3373 = -1.*t3345*t2668*t2775;
  t3402 = t3372 + t3373;
  t3567 = t2588*t3478;
  t3579 = -1.*t3402*t2897;
  t3587 = t3567 + t3579;
  t3403 = t2588*t3402;
  t3536 = t3478*t2897;
  t3549 = t3403 + t3536;
  t3615 = t2528*t3587;
  t3621 = -1.*t3549*t2979;
  t3636 = t3615 + t3621;
  t3558 = t2528*t3549;
  t3596 = t3587*t2979;
  t3604 = t3558 + t3596;
  t3856 = -1.*t2610*t2611;
  t3864 = -1.*t2664*t2621*t2668;
  t3879 = t3856 + t3864;
  t3832 = t2664*t2610*t2621;
  t3836 = -1.*t2611*t2668;
  t3839 = t3832 + t3836;
  t3930 = t2590*t3879;
  t3932 = -1.*t3839*t2775;
  t3965 = t3930 + t3932;
  t3846 = t2590*t3839;
  t3881 = t3879*t2775;
  t3885 = t3846 + t3881;
  t4060 = t2588*t3965;
  t4065 = -1.*t3885*t2897;
  t4074 = t4060 + t4065;
  t3925 = t2588*t3885;
  t4022 = t3965*t2897;
  t4032 = t3925 + t4022;
  t4231 = t2528*t4074;
  t4266 = -1.*t4032*t2979;
  t4278 = t4231 + t4266;
  t4036 = t2528*t4032;
  t4077 = t4074*t2979;
  t4121 = t4036 + t4077;
  t3017 = t2485*t3004;
  t3120 = t3098*t3104;
  t3123 = t3017 + t3120;
  t3211 = t2485*t3098;
  t3226 = -1.*t3004*t3104;
  t3228 = t3211 + t3226;
  t3606 = t2485*t3604;
  t3686 = t3636*t3104;
  t3691 = t3606 + t3686;
  t3731 = t2485*t3636;
  t3738 = -1.*t3604*t3104;
  t3743 = t3731 + t3738;
  t4161 = t2485*t4121;
  t4289 = t4278*t3104;
  t4298 = t4161 + t4289;
  t4335 = t2485*t4278;
  t4343 = -1.*t4121*t3104;
  t4358 = t4335 + t4343;
  t4564 = -0.766044*t3123;
  t4569 = 0.642788*t3228;
  t4609 = t4564 + t4569;
  t3280 = -1.*t441*t986*t1482;
  t3315 = -1.*t164*t1863;
  t3327 = 0. + t3280 + t3315;
  t4668 = -0.766044*t3691;
  t4683 = 0.642788*t3743;
  t4696 = t4668 + t4683;
  t3787 = -1.*t986*t414*t1863;
  t3792 = t441*t986*t1989;
  t3818 = 0. + t3787 + t3792;
  t4848 = -0.766044*t4298;
  t4867 = 0.642788*t4358;
  t4878 = t4848 + t4867;
  t4414 = t986*t414*t1482;
  t4461 = t164*t1989;
  t4507 = 0. + t4414 + t4461;
  t3209 = 0.642788*t3123;
  t3262 = 0.766044*t3228;
  t3267 = t3209 + t3262;
  t4620 = 0. + t2124 + t2271;
  t3729 = 0.642788*t3691;
  t3759 = 0.766044*t3743;
  t3784 = t3729 + t3759;
  t4703 = t986*t414*t2221;
  t4737 = -1.*t441*t986*t979;
  t4762 = 0. + t4703 + t4737;
  t4305 = 0.642788*t4298;
  t4406 = 0.766044*t4358;
  t4412 = t4305 + t4406;
  t4884 = -1.*t986*t414*t2111;
  t4885 = -1.*t164*t979;
  t4898 = 0. + t4884 + t4885;
  t2378 = t1906 + t2331 + t2366;
  t2444 = t2378*t2437;
  t2463 = 0. + t2444;
  t5053 = t3267*t4620*t2437;
  t5058 = t3784*t4762*t2437;
  t5066 = t4412*t4898*t2437;
  t5081 = 0. + t5053 + t5058 + t5066;
  t4993 = t4609*t3327*t2437;
  t5020 = t4696*t3818*t2437;
  t5040 = t4878*t4507*t2437;
  t5048 = 0. + t4993 + t5020 + t5040;
  t5179 = 0. + t2334 + t2344;
  t5222 = -1.*t2111*t1989;
  t5244 = t1482*t979;
  t5247 = 0. + t5222 + t5244;
  t5272 = t2221*t1989;
  t5305 = -1.*t1863*t979;
  t5310 = 0. + t5272 + t5305;
  t4631 = t4609*t4620*t2437;
  t4839 = t4696*t4762*t2437;
  t4899 = t4878*t4898*t2437;
  t4916 = 0. + t4631 + t4839 + t4899;
  t3337 = t3267*t3327*t2437;
  t3827 = t3784*t3818*t2437;
  t4548 = t4412*t4507*t2437;
  t4556 = 0. + t3337 + t3827 + t4548;
  t5211 = -1.*t3345*t2611*t5179*t2437;
  t5262 = -1.*t2664*t3345*t5247*t2437;
  t5316 = t2621*t5310*t2437;
  t5330 = 0. + t5211 + t5262 + t5316;
  t5344 = -1.*t3345*t2611*t3327*t2437;
  t5373 = t2621*t3818*t2437;
  t5381 = -1.*t2664*t3345*t4507*t2437;
  t5405 = 0. + t5344 + t5373 + t5381;
  t5413 = t4609*t5179*t2437;
  t5416 = t4878*t5247*t2437;
  t5454 = t4696*t5310*t2437;
  t5462 = 0. + t5413 + t5416 + t5454;
  t5538 = t3267*t5179*t2437;
  t5555 = t4412*t5247*t2437;
  t5571 = t3784*t5310*t2437;
  t5578 = 0. + t5538 + t5555 + t5571;
  t5893 = 0.642788*t772;
  t5906 = -0.766044*t234;
  t5911 = t5893 + t5906;
  t5951 = -0.766044*t772;
  t5959 = -0.642788*t234;
  t5964 = t5951 + t5959;
  t5939 = -1.*t253*t5911;
  t5989 = t661*t5964;
  t5994 = 0. + t5939 + t5989;
  t6012 = t661*t5911;
  t6028 = t253*t5964;
  t6055 = 0. + t6012 + t6028;
  t6010 = t305*t5994;
  t6061 = t606*t6055;
  t6111 = 0. + t6010 + t6061;
  t6165 = t606*t5994;
  t6242 = -1.*t305*t6055;
  t6245 = 0. + t6165 + t6242;
  t5694 = -1.*t4556*t5462;
  t5791 = t5048*t5578;
  t5796 = t5694 + t5791;
  t5339 = t5048*t5330;
  t5464 = -1.*t5405*t5462;
  t5484 = t5339 + t5464;
  t5499 = -1.*t5081*t5484;
  t5505 = t4556*t5330;
  t5579 = -1.*t5405*t5578;
  t5601 = t5505 + t5579;
  t5610 = t4916*t5601;
  t5644 = -1.*t3345*t2611*t4620*t2437;
  t5654 = t2621*t4762*t2437;
  t5687 = -1.*t2664*t3345*t4898*t2437;
  t5688 = 0. + t5644 + t5654 + t5687;
  t5800 = t5688*t5796;
  t5809 = t5499 + t5610 + t5800;
  t5832 = t2463*t5809;
  t5863 = 0. + t5832;
  t5887 = 1/t5863;
  t6518 = 0.766044*t772;
  t6536 = 0.642788*t234;
  t6539 = t6518 + t6536;
  t6453 = t253*t5911;
  t6557 = t661*t6539;
  t6563 = 0. + t6453 + t6557;
  t6578 = -1.*t253*t6539;
  t6580 = 0. + t6012 + t6578;
  t6569 = -1.*t305*t6563;
  t6604 = t606*t6580;
  t6610 = 0. + t6569 + t6604;
  t6656 = t606*t6563;
  t6658 = t305*t6580;
  t6701 = 0. + t6656 + t6658;
  t199 = 0. + t164;
  t6145 = -1.*t320*t6111;
  t6270 = t492*t6245;
  t6314 = 0. + t6145 + t6270;
  t6315 = t372*t6314;
  t6328 = t492*t6111;
  t6338 = t320*t6245;
  t6351 = 0. + t6328 + t6338;
  t6397 = -1.*t6351*t463;
  t6409 = 0. + t6315 + t6397;
  t6414 = t986*t6409;
  t6420 = 0. + t6414;
  t6640 = t492*t6610;
  t6707 = -1.*t320*t6701;
  t6710 = 0. + t6640 + t6707;
  t6725 = t372*t6710;
  t6732 = t320*t6610;
  t6740 = t492*t6701;
  t6742 = 0. + t6732 + t6740;
  t6745 = -1.*t6742*t463;
  t6768 = 0. + t6725 + t6745;
  t6772 = t986*t6768;
  t6777 = 0. + t6772;
  t6427 = t2463*t5796;
  t6444 = 0. + t6427;
  t6785 = -1.*t5081*t5462;
  t6789 = t4916*t5578;
  t6799 = t6785 + t6789;
  t6804 = -1.*t2463*t6799;
  t6810 = 0. + t6804;
  t7256 = t372*t6351;
  t7263 = t6314*t463;
  t7279 = 0. + t7256 + t7263;
  t6945 = -1.*t2463*t5484;
  t6948 = 0. + t6945;
  t7316 = t372*t6742;
  t7320 = t6710*t463;
  t7339 = 0. + t7316 + t7320;
  t6954 = t4916*t5330;
  t6955 = -1.*t5688*t5462;
  t6967 = t6954 + t6955;
  t6968 = t2463*t6967;
  t7000 = 0. + t6968;
  t7141 = t2463*t5601;
  t7145 = 0. + t7141;
  t7174 = t5081*t5330;
  t7178 = -1.*t5688*t5578;
  t7180 = t7174 + t7178;
  t7202 = -1.*t2463*t7180;
  t7212 = 0. + t7202;
  t4930 = t4556*t4916;
  t5083 = -1.*t5048*t5081;
  t5102 = t4930 + t5083;
  t5122 = t2463*t5102;
  t5132 = 0. + t5122;
  t6828 = -1.*t5048*t5688;
  t6848 = t5405*t4916;
  t6861 = t6828 + t6848;
  t6886 = -1.*t2463*t6861;
  t6929 = 0. + t6886;
  t7051 = -1.*t4556*t5688;
  t7064 = t5405*t5081;
  t7073 = t7051 + t7064;
  t7101 = t2463*t7073;
  t7116 = 0. + t7101;
  t7421 = -1.*t5132*t5887;
  t7426 = 0. + t7421;
  t7440 = -1.*t6929*t5887;
  t7447 = 0. + t7440;
  t7460 = -1.*t7116*t5887;
  t7482 = 0. + t7460;
  t7490 = 0.642788*t2485;
  t7492 = -0.766044*t3104;
  t7498 = t7490 + t7492;
  t7504 = 0.766044*t2485;
  t7519 = 0.642788*t3104;
  t7528 = t7504 + t7519;
  t7503 = t2979*t7498;
  t7530 = t2528*t7528;
  t7540 = 0. + t7503 + t7530;
  t7547 = t2528*t7498;
  t7548 = -1.*t2979*t7528;
  t7555 = 0. + t7547 + t7548;
  t7544 = -1.*t2897*t7540;
  t7561 = t2588*t7555;
  t7564 = 0. + t7544 + t7561;
  t7582 = t2588*t7540;
  t7583 = t2897*t7555;
  t7585 = 0. + t7582 + t7583;
  t7642 = -0.766044*t2485;
  t7643 = -0.642788*t3104;
  t7644 = t7642 + t7643;
  t7638 = -1.*t2979*t7498;
  t7645 = t2528*t7644;
  t7647 = 0. + t7638 + t7645;
  t7660 = t2979*t7644;
  t7679 = 0. + t7547 + t7660;
  t7655 = t2897*t7647;
  t7681 = t2588*t7679;
  t7688 = 0. + t7655 + t7681;
  t7692 = t2588*t7647;
  t7693 = -1.*t2897*t7679;
  t7694 = 0. + t7692 + t7693;
  t7579 = t2775*t7564;
  t7591 = t2590*t7585;
  t7593 = 0. + t7579 + t7591;
  t7596 = t2590*t7564;
  t7600 = -1.*t2775*t7585;
  t7602 = 0. + t7596 + t7600;
  t7689 = -1.*t2775*t7688;
  t7697 = t2590*t7694;
  t7705 = 0. + t7689 + t7697;
  t7715 = t2590*t7688;
  t7717 = t2775*t7694;
  t7721 = 0. + t7715 + t7717;

  p_output1(0)=-1.*t199*t5132*t5887 - 1.*t5887*t6420*t6444 - 1.*t5887*t6777*t6810;
  p_output1(1)=-1.*t199*t5887*t6929 - 1.*t5887*t6420*t6948 - 1.*t5887*t6777*t7000;
  p_output1(2)=-1.*t199*t5887*t7116 - 1.*t5887*t6420*t7145 - 1.*t5887*t6777*t7212;
  p_output1(3)=0. - 1.*t5887*t6444*t7279 - 1.*t5887*t6810*t7339;
  p_output1(4)=0. - 1.*t5887*t6948*t7279 - 1.*t5887*t7000*t7339;
  p_output1(5)=0. - 1.*t5887*t7145*t7279 - 1.*t5887*t7212*t7339;
  p_output1(6)=t7426;
  p_output1(7)=t7447;
  p_output1(8)=t7482;
  p_output1(9)=t7426;
  p_output1(10)=t7447;
  p_output1(11)=t7482;
  p_output1(12)=t7426;
  p_output1(13)=t7447;
  p_output1(14)=t7482;
  p_output1(15)=t7426;
  p_output1(16)=t7447;
  p_output1(17)=t7482;
  p_output1(18)=t7426;
  p_output1(19)=t7447;
  p_output1(20)=t7482;
  p_output1(21)=0. + t2621;
  p_output1(22)=0. + t3345*(0. - 1.*t2668*t7593 + t2610*t7602);
  p_output1(23)=0. + t3345*(0. + t2610*t7705 - 1.*t2668*t7721);
  p_output1(24)=0.;
  p_output1(25)=0. + t2610*t7593 + t2668*t7602;
  p_output1(26)=0. + t2668*t7705 + t2610*t7721;
  p_output1(27)=1.;
  p_output1(28)=0.;
  p_output1(29)=0.;
  p_output1(30)=1.;
  p_output1(31)=0.;
  p_output1(32)=0.;
  p_output1(33)=1.;
  p_output1(34)=0.;
  p_output1(35)=0.;
  p_output1(36)=1.;
  p_output1(37)=0.;
  p_output1(38)=0.;
  p_output1(39)=1.;
  p_output1(40)=0.;
  p_output1(41)=0.;
}


       
Eigen::Matrix<double,3,14> Jwb_LeftToeBottom_to_RightToeBottom(const Eigen::Matrix<double,14,1> &var1)
//void Jwb_LeftToeBottom_to_RightToeBottom(Eigen::Matrix<double,3,14> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,14>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



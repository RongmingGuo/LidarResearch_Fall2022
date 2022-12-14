/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:10:13 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_LeftToeBottom.h"

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
static void output1(Eigen::Matrix<double,3,20> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  double t291;
  double t418;
  double t456;
  double t224;
  double t558;
  double t53;
  double t387;
  double t570;
  double t644;
  double t686;
  double t743;
  double t747;
  double t762;
  double t1061;
  double t1095;
  double t1102;
  double t1161;
  double t949;
  double t969;
  double t1015;
  double t1286;
  double t1651;
  double t1698;
  double t1707;
  double t1758;
  double t1558;
  double t1605;
  double t1614;
  double t1835;
  double t1861;
  double t1872;
  double t1965;
  double t1970;
  double t1982;
  double t2033;
  double t2180;
  double t2199;
  double t2245;
  double t2412;
  double t2415;
  double t2422;
  double t2446;
  double t2463;
  double t2481;
  double t2514;
  double t2626;
  double t2697;
  double t2698;
  double t2821;
  double t2828;
  double t2839;
  double t2852;
  double t2860;
  double t2868;
  double t2890;
  double t2948;
  double t2954;
  double t2956;
  double t3039;
  double t3042;
  double t3067;
  double t3118;
  double t3119;
  double t3176;
  double t3190;
  double t3243;
  double t3248;
  double t3260;
  double t3326;
  double t3376;
  double t3377;
  double t114;
  double t149;
  double t184;
  double t190;
  double t817;
  double t854;
  double t3555;
  double t3560;
  double t3562;
  double t3630;
  double t3635;
  double t3636;
  double t1132;
  double t1191;
  double t1218;
  double t1287;
  double t1396;
  double t1419;
  double t3711;
  double t3732;
  double t3737;
  double t1733;
  double t1761;
  double t1805;
  double t1875;
  double t1882;
  double t1906;
  double t2019;
  double t2035;
  double t2173;
  double t3829;
  double t3852;
  double t3863;
  double t3868;
  double t3922;
  double t3927;
  double t2255;
  double t2341;
  double t2359;
  double t2491;
  double t2578;
  double t2617;
  double t3955;
  double t3972;
  double t3990;
  double t4010;
  double t4022;
  double t4032;
  double t2770;
  double t2781;
  double t2794;
  double t2878;
  double t2907;
  double t2915;
  double t4046;
  double t4055;
  double t4061;
  double t4098;
  double t4151;
  double t4157;
  double t2966;
  double t3016;
  double t3020;
  double t3177;
  double t3218;
  double t3235;
  double t4176;
  double t4181;
  double t4182;
  double t4230;
  double t4258;
  double t4288;
  double t3272;
  double t3289;
  double t3321;
  double t4307;
  double t4318;
  double t4322;
  double t4379;
  double t4387;
  double t4390;
  double t4611;
  double t4661;
  double t4671;
  double t4807;
  double t4831;
  double t4841;
  double t4884;
  double t4932;
  double t4938;
  double t4960;
  double t4967;
  double t4991;
  double t5012;
  double t5038;
  double t5110;
  double t5127;
  double t5133;
  double t5136;
  double t5150;
  double t5157;
  double t5199;
  double t5210;
  double t5212;
  double t5216;
  double t5242;
  double t5255;
  double t5271;
  double t5317;
  double t5320;
  double t5333;
  double t5363;
  double t5367;
  double t5382;
  double t5507;
  double t5518;
  double t5524;
  double t5553;
  double t5559;
  double t5562;
  double t5570;
  double t5571;
  double t5575;
  double t5588;
  double t5599;
  double t5605;
  double t5629;
  double t5636;
  double t5639;
  double t5652;
  double t5655;
  double t5664;
  double t5712;
  double t5719;
  double t5724;
  double t5738;
  double t5767;
  double t5770;
  double t5816;
  double t5820;
  double t5824;
  double t5832;
  double t5853;
  double t5864;
  double t5887;
  double t5888;
  double t5901;
  double t6003;
  double t6051;
  double t6069;
  double t6135;
  double t6136;
  double t6137;
  double t6157;
  double t6182;
  double t6185;
  double t6213;
  double t6219;
  double t6240;
  double t6248;
  double t6280;
  double t6294;
  double t6316;
  double t6320;
  double t6326;
  double t6347;
  double t6358;
  double t6371;
  double t6392;
  double t6396;
  double t6412;
  double t6427;
  double t6431;
  double t6440;
  double t6447;
  double t6453;
  double t6470;
  double t6481;
  double t6487;
  double t6500;
  double t6655;
  double t6662;
  double t6665;
  double t6692;
  double t6702;
  double t6732;
  double t6746;
  double t6760;
  double t6764;
  double t6768;
  double t6769;
  double t6794;
  double t6804;
  double t6813;
  double t6816;
  double t6817;
  double t6819;
  double t6829;
  double t6835;
  double t6839;
  double t6854;
  double t6857;
  double t6859;
  double t6879;
  double t6880;
  double t6882;
  double t6897;
  double t6907;
  double t6910;
  double t6917;
  double t6941;
  double t6955;
  double t7046;
  double t7059;
  double t7065;
  double t7079;
  double t7081;
  double t7095;
  double t7119;
  double t7120;
  double t7143;
  double t7151;
  double t7153;
  double t7167;
  double t7176;
  double t7180;
  double t7184;
  double t7195;
  double t7197;
  double t7200;
  double t7206;
  double t7212;
  double t7220;
  double t7227;
  double t7228;
  double t7242;
  double t7258;
  double t7264;
  double t7272;
  double t7276;
  double t7278;
  double t7291;
  double t7299;
  double t7305;
  double t7355;
  double t7360;
  double t7366;
  double t7385;
  double t7392;
  double t7399;
  double t7404;
  double t7407;
  double t7414;
  double t7431;
  double t7441;
  double t7443;
  double t7456;
  double t7476;
  double t7482;
  double t7500;
  double t7503;
  double t7505;
  double t7539;
  double t7553;
  double t7562;
  double t7572;
  double t7585;
  double t7588;
  double t7606;
  double t7608;
  double t7609;
  double t7623;
  double t7628;
  double t7630;
  double t7730;
  double t7731;
  double t7737;
  double t7739;
  double t7747;
  double t7756;
  double t7760;
  double t7769;
  double t7787;
  double t7791;
  double t7798;
  double t7800;
  double t7806;
  double t7817;
  double t7841;
  double t7847;
  double t7848;
  double t7854;
  double t7868;
  double t7870;
  double t7880;
  double t7891;
  double t7900;
  double t7909;
  double t7911;
  double t7916;
  double t7994;
  double t7995;
  double t8011;
  double t8023;
  double t8036;
  double t8069;
  double t8073;
  double t8087;
  double t8088;
  double t8094;
  double t8115;
  double t8116;
  double t8117;
  double t8121;
  double t8125;
  double t8130;
  double t8137;
  double t8144;
  double t8149;
  double t8163;
  double t8193;
  double t8229;
  double t8251;
  double t8252;
  double t8283;
  double t8306;
  double t8323;
  double t8339;
  double t8378;
  double t8391;
  double t8395;
  double t7373;
  double t7376;
  double t7377;
  double t7402;
  double t7424;
  double t7453;
  double t7487;
  double t7509;
  double t7567;
  double t7595;
  double t7611;
  double t7632;
  double t7634;
  double t7652;
  double t7653;
  double t7656;
  double t7664;
  double t7671;
  double t7672;
  double t7678;
  double t3769;
  double t3771;
  double t3788;
  double t8616;
  double t8617;
  double t8621;
  double t8627;
  double t8631;
  double t8633;
  double t8663;
  double t8674;
  double t8682;
  double t8688;
  double t8693;
  double t8708;
  double t8743;
  double t8744;
  double t8748;
  double t8777;
  double t8783;
  double t8790;
  double t8513;
  double t8516;
  double t8519;
  double t8531;
  double t8539;
  double t8864;
  double t8875;
  double t8879;
  double t8913;
  double t8920;
  double t8929;
  double t9013;
  double t9016;
  double t9021;
  double t9053;
  double t9079;
  double t9081;
  double t9103;
  double t9110;
  double t9112;
  double t9121;
  double t9127;
  double t9130;
  double t9155;
  double t9161;
  double t9162;
  double t9199;
  double t9210;
  double t9212;
  double t9278;
  double t9290;
  double t9305;
  double t9315;
  double t9316;
  double t9325;
  double t9380;
  double t9388;
  double t9402;
  double t9420;
  double t9427;
  double t9432;
  double t9467;
  double t9468;
  double t9474;
  double t9489;
  double t9496;
  double t9497;
  double t9512;
  double t9525;
  double t9529;
  double t9555;
  double t9558;
  double t9567;
  double t9679;
  double t9686;
  double t9687;
  double t9738;
  double t9742;
  double t9766;
  double t9767;
  double t9777;
  double t9802;
  double t9808;
  double t9813;
  double t9824;
  double t9825;
  double t9834;
  double t9847;
  double t9853;
  double t9855;
  double t9861;
  double t9876;
  double t9878;
  double t9647;
  double t9657;
  double t9663;
  double t9664;
  double t9669;
  double t9941;
  double t9951;
  double t9953;
  double t9964;
  double t9979;
  double t9981;
  double t9997;
  double t10016;
  double t10029;
  double t10042;
  double t10043;
  double t10045;
  double t10047;
  double t10058;
  double t10078;
  double t10099;
  double t10123;
  double t10126;
  double t10145;
  double t10149;
  double t10151;
  double t10166;
  double t10171;
  double t10183;
  double t10192;
  double t10195;
  double t10205;
  double t10281;
  double t10283;
  double t10284;
  double t10297;
  double t10298;
  double t10302;
  double t10308;
  double t10317;
  double t10323;
  double t10338;
  double t10352;
  double t10357;
  double t10364;
  double t10368;
  double t10370;
  double t10394;
  double t10395;
  double t10405;
  double t10421;
  double t10423;
  double t10431;
  double t10444;
  double t10453;
  double t10462;
  double t10471;
  double t10478;
  double t10480;
  double t10562;
  double t10569;
  double t10576;
  double t10579;
  double t10584;
  double t10597;
  double t10604;
  double t10614;
  double t10619;
  double t10620;
  double t10628;
  double t10630;
  double t10637;
  double t10526;
  double t10527;
  double t10531;
  double t10541;
  double t10543;
  double t10674;
  double t10677;
  double t10683;
  double t10699;
  double t10706;
  double t10719;
  double t10720;
  double t10728;
  double t10739;
  double t10742;
  double t10747;
  double t10749;
  double t10750;
  double t10757;
  double t10759;
  double t10760;
  double t10773;
  double t10783;
  double t10784;
  double t10825;
  double t10826;
  double t10832;
  double t10841;
  double t10848;
  double t10853;
  double t10854;
  double t10857;
  double t10862;
  double t10865;
  double t10878;
  double t10885;
  double t10894;
  double t10902;
  double t10903;
  double t10907;
  double t10909;
  double t10910;
  double t10911;
  double t10975;
  double t10976;
  double t10984;
  double t10986;
  double t10992;
  double t10993;
  double t10998;
  double t10957;
  double t10960;
  double t10963;
  double t10966;
  double t10967;
  double t11028;
  double t11029;
  double t11030;
  double t11034;
  double t11035;
  double t11039;
  double t11046;
  double t11050;
  double t11052;
  double t11053;
  double t11056;
  double t11058;
  double t11060;
  double t11087;
  double t11092;
  double t11093;
  double t11102;
  double t11103;
  double t11105;
  double t11106;
  double t11108;
  double t11109;
  double t11110;
  double t11113;
  double t11115;
  double t11120;
  double t11161;
  double t11163;
  double t4490;
  double t11148;
  double t11149;
  double t11150;
  double t11152;
  double t11154;
  double t11188;
  double t11189;
  double t11193;
  double t11202;
  double t11203;
  double t11206;
  double t11207;
  double t11229;
  double t11230;
  double t11231;
  double t11234;
  double t11235;
  double t11239;
  double t11241;
  double t11169;
  double t4497;
  double t4512;
  double t11270;
  double t11274;
  double t11278;
  double t11282;
  double t11290;
  double t11211;
  double t11308;
  double t11309;
  double t11310;
  double t11217;
  double t11246;
  double t11320;
  double t11321;
  double t11322;
  double t11255;
  t291 = Cos(var1[5]);
  t418 = Sin(var1[3]);
  t456 = Sin(var1[4]);
  t224 = Cos(var1[3]);
  t558 = Sin(var1[5]);
  t53 = Cos(var1[6]);
  t387 = -1.*t224*t291;
  t570 = -1.*t418*t456*t558;
  t644 = t387 + t570;
  t686 = -1.*t291*t418*t456;
  t743 = t224*t558;
  t747 = t686 + t743;
  t762 = Sin(var1[6]);
  t1061 = Cos(var1[7]);
  t1095 = -1.*t1061;
  t1102 = 1. + t1095;
  t1161 = Sin(var1[7]);
  t949 = t53*t644;
  t969 = t747*t762;
  t1015 = t949 + t969;
  t1286 = Cos(var1[4]);
  t1651 = Cos(var1[8]);
  t1698 = -1.*t1651;
  t1707 = 1. + t1698;
  t1758 = Sin(var1[8]);
  t1558 = -1.*t1286*t1061*t418;
  t1605 = t1015*t1161;
  t1614 = t1558 + t1605;
  t1835 = t53*t747;
  t1861 = -1.*t644*t762;
  t1872 = t1835 + t1861;
  t1965 = Cos(var1[9]);
  t1970 = -1.*t1965;
  t1982 = 1. + t1970;
  t2033 = Sin(var1[9]);
  t2180 = t1651*t1614;
  t2199 = t1872*t1758;
  t2245 = t2180 + t2199;
  t2412 = t1651*t1872;
  t2415 = -1.*t1614*t1758;
  t2422 = t2412 + t2415;
  t2446 = Cos(var1[10]);
  t2463 = -1.*t2446;
  t2481 = 1. + t2463;
  t2514 = Sin(var1[10]);
  t2626 = -1.*t2033*t2245;
  t2697 = t1965*t2422;
  t2698 = t2626 + t2697;
  t2821 = t1965*t2245;
  t2828 = t2033*t2422;
  t2839 = t2821 + t2828;
  t2852 = Cos(var1[11]);
  t2860 = -1.*t2852;
  t2868 = 1. + t2860;
  t2890 = Sin(var1[11]);
  t2948 = t2514*t2698;
  t2954 = t2446*t2839;
  t2956 = t2948 + t2954;
  t3039 = t2446*t2698;
  t3042 = -1.*t2514*t2839;
  t3067 = t3039 + t3042;
  t3118 = Cos(var1[12]);
  t3119 = -1.*t3118;
  t3176 = 1. + t3119;
  t3190 = Sin(var1[12]);
  t3243 = -1.*t2890*t2956;
  t3248 = t2852*t3067;
  t3260 = t3243 + t3248;
  t3326 = t2852*t2956;
  t3376 = t2890*t3067;
  t3377 = t3326 + t3376;
  t114 = -1.*t53;
  t149 = 1. + t114;
  t184 = 0.135*t149;
  t190 = 0. + t184;
  t817 = -0.135*t762;
  t854 = 0. + t817;
  t3555 = -1.*t291*t418;
  t3560 = t224*t456*t558;
  t3562 = t3555 + t3560;
  t3630 = t224*t291*t456;
  t3635 = t418*t558;
  t3636 = t3630 + t3635;
  t1132 = 0.135*t1102;
  t1191 = 0.049*t1161;
  t1218 = 0. + t1132 + t1191;
  t1287 = -0.049*t1102;
  t1396 = 0.135*t1161;
  t1419 = 0. + t1287 + t1396;
  t3711 = t53*t3562;
  t3732 = t3636*t762;
  t3737 = t3711 + t3732;
  t1733 = -0.049*t1707;
  t1761 = -0.09*t1758;
  t1805 = 0. + t1733 + t1761;
  t1875 = -0.09*t1707;
  t1882 = 0.049*t1758;
  t1906 = 0. + t1875 + t1882;
  t2019 = -0.049*t1982;
  t2035 = -0.21*t2033;
  t2173 = 0. + t2019 + t2035;
  t3829 = t224*t1286*t1061;
  t3852 = t3737*t1161;
  t3863 = t3829 + t3852;
  t3868 = t53*t3636;
  t3922 = -1.*t3562*t762;
  t3927 = t3868 + t3922;
  t2255 = -0.21*t1982;
  t2341 = 0.049*t2033;
  t2359 = 0. + t2255 + t2341;
  t2491 = -0.2707*t2481;
  t2578 = 0.0016*t2514;
  t2617 = 0. + t2491 + t2578;
  t3955 = t1651*t3863;
  t3972 = t3927*t1758;
  t3990 = t3955 + t3972;
  t4010 = t1651*t3927;
  t4022 = -1.*t3863*t1758;
  t4032 = t4010 + t4022;
  t2770 = -0.0016*t2481;
  t2781 = -0.2707*t2514;
  t2794 = 0. + t2770 + t2781;
  t2878 = 0.0184*t2868;
  t2907 = -0.7055*t2890;
  t2915 = 0. + t2878 + t2907;
  t4046 = -1.*t2033*t3990;
  t4055 = t1965*t4032;
  t4061 = t4046 + t4055;
  t4098 = t1965*t3990;
  t4151 = t2033*t4032;
  t4157 = t4098 + t4151;
  t2966 = -0.7055*t2868;
  t3016 = -0.0184*t2890;
  t3020 = 0. + t2966 + t3016;
  t3177 = -1.1135*t3176;
  t3218 = 0.0216*t3190;
  t3235 = 0. + t3177 + t3218;
  t4176 = t2514*t4061;
  t4181 = t2446*t4157;
  t4182 = t4176 + t4181;
  t4230 = t2446*t4061;
  t4258 = -1.*t2514*t4157;
  t4288 = t4230 + t4258;
  t3272 = -0.0216*t3176;
  t3289 = -1.1135*t3190;
  t3321 = 0. + t3272 + t3289;
  t4307 = -1.*t2890*t4182;
  t4318 = t2852*t4288;
  t4322 = t4307 + t4318;
  t4379 = t2852*t4182;
  t4387 = t2890*t4288;
  t4390 = t4379 + t4387;
  t4611 = t224*t1286*t53*t558;
  t4661 = t224*t1286*t291*t762;
  t4671 = t4611 + t4661;
  t4807 = -1.*t224*t1061*t456;
  t4831 = t4671*t1161;
  t4841 = t4807 + t4831;
  t4884 = t224*t1286*t291*t53;
  t4932 = -1.*t224*t1286*t558*t762;
  t4938 = t4884 + t4932;
  t4960 = t1651*t4841;
  t4967 = t4938*t1758;
  t4991 = t4960 + t4967;
  t5012 = t1651*t4938;
  t5038 = -1.*t4841*t1758;
  t5110 = t5012 + t5038;
  t5127 = -1.*t2033*t4991;
  t5133 = t1965*t5110;
  t5136 = t5127 + t5133;
  t5150 = t1965*t4991;
  t5157 = t2033*t5110;
  t5199 = t5150 + t5157;
  t5210 = t2514*t5136;
  t5212 = t2446*t5199;
  t5216 = t5210 + t5212;
  t5242 = t2446*t5136;
  t5255 = -1.*t2514*t5199;
  t5271 = t5242 + t5255;
  t5317 = -1.*t2890*t5216;
  t5320 = t2852*t5271;
  t5333 = t5317 + t5320;
  t5363 = t2852*t5216;
  t5367 = t2890*t5271;
  t5382 = t5363 + t5367;
  t5507 = t1286*t53*t418*t558;
  t5518 = t1286*t291*t418*t762;
  t5524 = t5507 + t5518;
  t5553 = -1.*t1061*t418*t456;
  t5559 = t5524*t1161;
  t5562 = t5553 + t5559;
  t5570 = t1286*t291*t53*t418;
  t5571 = -1.*t1286*t418*t558*t762;
  t5575 = t5570 + t5571;
  t5588 = t1651*t5562;
  t5599 = t5575*t1758;
  t5605 = t5588 + t5599;
  t5629 = t1651*t5575;
  t5636 = -1.*t5562*t1758;
  t5639 = t5629 + t5636;
  t5652 = -1.*t2033*t5605;
  t5655 = t1965*t5639;
  t5664 = t5652 + t5655;
  t5712 = t1965*t5605;
  t5719 = t2033*t5639;
  t5724 = t5712 + t5719;
  t5738 = t2514*t5664;
  t5767 = t2446*t5724;
  t5770 = t5738 + t5767;
  t5816 = t2446*t5664;
  t5820 = -1.*t2514*t5724;
  t5824 = t5816 + t5820;
  t5832 = -1.*t2890*t5770;
  t5853 = t2852*t5824;
  t5864 = t5832 + t5853;
  t5887 = t2852*t5770;
  t5888 = t2890*t5824;
  t5901 = t5887 + t5888;
  t6003 = -1.*t53*t456*t558;
  t6051 = -1.*t291*t456*t762;
  t6069 = t6003 + t6051;
  t6135 = -1.*t1286*t1061;
  t6136 = t6069*t1161;
  t6137 = t6135 + t6136;
  t6157 = -1.*t291*t53*t456;
  t6182 = t456*t558*t762;
  t6185 = t6157 + t6182;
  t6213 = t1651*t6137;
  t6219 = t6185*t1758;
  t6240 = t6213 + t6219;
  t6248 = t1651*t6185;
  t6280 = -1.*t6137*t1758;
  t6294 = t6248 + t6280;
  t6316 = -1.*t2033*t6240;
  t6320 = t1965*t6294;
  t6326 = t6316 + t6320;
  t6347 = t1965*t6240;
  t6358 = t2033*t6294;
  t6371 = t6347 + t6358;
  t6392 = t2514*t6326;
  t6396 = t2446*t6371;
  t6412 = t6392 + t6396;
  t6427 = t2446*t6326;
  t6431 = -1.*t2514*t6371;
  t6440 = t6427 + t6431;
  t6447 = -1.*t2890*t6412;
  t6453 = t2852*t6440;
  t6470 = t6447 + t6453;
  t6481 = t2852*t6412;
  t6487 = t2890*t6440;
  t6500 = t6481 + t6487;
  t6655 = t291*t418;
  t6662 = -1.*t224*t456*t558;
  t6665 = t6655 + t6662;
  t6692 = t6665*t762;
  t6702 = t3868 + t6692;
  t6732 = t53*t6665;
  t6746 = -1.*t3636*t762;
  t6760 = t6732 + t6746;
  t6764 = t1651*t6702*t1161;
  t6768 = t6760*t1758;
  t6769 = t6764 + t6768;
  t6794 = t1651*t6760;
  t6804 = -1.*t6702*t1161*t1758;
  t6813 = t6794 + t6804;
  t6816 = -1.*t2033*t6769;
  t6817 = t1965*t6813;
  t6819 = t6816 + t6817;
  t6829 = t1965*t6769;
  t6835 = t2033*t6813;
  t6839 = t6829 + t6835;
  t6854 = t2514*t6819;
  t6857 = t2446*t6839;
  t6859 = t6854 + t6857;
  t6879 = t2446*t6819;
  t6880 = -1.*t2514*t6839;
  t6882 = t6879 + t6880;
  t6897 = -1.*t2890*t6859;
  t6907 = t2852*t6882;
  t6910 = t6897 + t6907;
  t6917 = t2852*t6859;
  t6941 = t2890*t6882;
  t6955 = t6917 + t6941;
  t7046 = t291*t418*t456;
  t7059 = -1.*t224*t558;
  t7065 = t7046 + t7059;
  t7079 = t53*t7065;
  t7081 = t644*t762;
  t7095 = t7079 + t7081;
  t7119 = -1.*t7065*t762;
  t7120 = t949 + t7119;
  t7143 = t1651*t7095*t1161;
  t7151 = t7120*t1758;
  t7153 = t7143 + t7151;
  t7167 = t1651*t7120;
  t7176 = -1.*t7095*t1161*t1758;
  t7180 = t7167 + t7176;
  t7184 = -1.*t2033*t7153;
  t7195 = t1965*t7180;
  t7197 = t7184 + t7195;
  t7200 = t1965*t7153;
  t7206 = t2033*t7180;
  t7212 = t7200 + t7206;
  t7220 = t2514*t7197;
  t7227 = t2446*t7212;
  t7228 = t7220 + t7227;
  t7242 = t2446*t7197;
  t7258 = -1.*t2514*t7212;
  t7264 = t7242 + t7258;
  t7272 = -1.*t2890*t7228;
  t7276 = t2852*t7264;
  t7278 = t7272 + t7276;
  t7291 = t2852*t7228;
  t7299 = t2890*t7264;
  t7305 = t7291 + t7299;
  t7355 = t1286*t291*t53;
  t7360 = -1.*t1286*t558*t762;
  t7366 = t7355 + t7360;
  t7385 = -1.*t1286*t53*t558;
  t7392 = -1.*t1286*t291*t762;
  t7399 = t7385 + t7392;
  t7404 = t1651*t7366*t1161;
  t7407 = t7399*t1758;
  t7414 = t7404 + t7407;
  t7431 = t1651*t7399;
  t7441 = -1.*t7366*t1161*t1758;
  t7443 = t7431 + t7441;
  t7456 = -1.*t2033*t7414;
  t7476 = t1965*t7443;
  t7482 = t7456 + t7476;
  t7500 = t1965*t7414;
  t7503 = t2033*t7443;
  t7505 = t7500 + t7503;
  t7539 = t2514*t7482;
  t7553 = t2446*t7505;
  t7562 = t7539 + t7553;
  t7572 = t2446*t7482;
  t7585 = -1.*t2514*t7505;
  t7588 = t7572 + t7585;
  t7606 = -1.*t2890*t7562;
  t7608 = t2852*t7588;
  t7609 = t7606 + t7608;
  t7623 = t2852*t7562;
  t7628 = t2890*t7588;
  t7630 = t7623 + t7628;
  t7730 = -1.*t53*t3562;
  t7731 = t7730 + t6746;
  t7737 = t1651*t3927*t1161;
  t7739 = t7731*t1758;
  t7747 = t7737 + t7739;
  t7756 = t1651*t7731;
  t7760 = -1.*t3927*t1161*t1758;
  t7769 = t7756 + t7760;
  t7787 = -1.*t2033*t7747;
  t7791 = t1965*t7769;
  t7798 = t7787 + t7791;
  t7800 = t1965*t7747;
  t7806 = t2033*t7769;
  t7817 = t7800 + t7806;
  t7841 = t2514*t7798;
  t7847 = t2446*t7817;
  t7848 = t7841 + t7847;
  t7854 = t2446*t7798;
  t7868 = -1.*t2514*t7817;
  t7870 = t7854 + t7868;
  t7880 = -1.*t2890*t7848;
  t7891 = t2852*t7870;
  t7900 = t7880 + t7891;
  t7909 = t2852*t7848;
  t7911 = t2890*t7870;
  t7916 = t7909 + t7911;
  t7994 = t224*t291;
  t7995 = t418*t456*t558;
  t8011 = t7994 + t7995;
  t8023 = -1.*t8011*t762;
  t8036 = t7079 + t8023;
  t8069 = -1.*t53*t8011;
  t8073 = t8069 + t7119;
  t8087 = t1651*t8036*t1161;
  t8088 = t8073*t1758;
  t8094 = t8087 + t8088;
  t8115 = t1651*t8073;
  t8116 = -1.*t8036*t1161*t1758;
  t8117 = t8115 + t8116;
  t8121 = -1.*t2033*t8094;
  t8125 = t1965*t8117;
  t8130 = t8121 + t8125;
  t8137 = t1965*t8094;
  t8144 = t2033*t8117;
  t8149 = t8137 + t8144;
  t8163 = t2514*t8130;
  t8193 = t2446*t8149;
  t8229 = t8163 + t8193;
  t8251 = t2446*t8130;
  t8252 = -1.*t2514*t8149;
  t8283 = t8251 + t8252;
  t8306 = -1.*t2890*t8229;
  t8323 = t2852*t8283;
  t8339 = t8306 + t8323;
  t8378 = t2852*t8229;
  t8391 = t2890*t8283;
  t8395 = t8378 + t8391;
  t7373 = 0.1305*t1061*t7366;
  t7376 = t7366*t1218;
  t7377 = t7366*t1161*t1805;
  t7402 = t7399*t1906;
  t7424 = t2173*t7414;
  t7453 = t2359*t7443;
  t7487 = t2617*t7482;
  t7509 = t2794*t7505;
  t7567 = t2915*t7562;
  t7595 = t3020*t7588;
  t7611 = t3235*t7609;
  t7632 = t3321*t7630;
  t7634 = t3190*t7609;
  t7652 = t3118*t7630;
  t7653 = t7634 + t7652;
  t7656 = 0.0306*t7653;
  t7664 = t3118*t7609;
  t7671 = -1.*t3190*t7630;
  t7672 = t7664 + t7671;
  t7678 = -1.1312*t7672;
  t3769 = t1061*t3737;
  t3771 = -1.*t224*t1286*t1161;
  t3788 = t3769 + t3771;
  t8616 = -1.*t1651*t2033*t3788;
  t8617 = -1.*t1965*t3788*t1758;
  t8621 = t8616 + t8617;
  t8627 = t1965*t1651*t3788;
  t8631 = -1.*t2033*t3788*t1758;
  t8633 = t8627 + t8631;
  t8663 = t2514*t8621;
  t8674 = t2446*t8633;
  t8682 = t8663 + t8674;
  t8688 = t2446*t8621;
  t8693 = -1.*t2514*t8633;
  t8708 = t8688 + t8693;
  t8743 = -1.*t2890*t8682;
  t8744 = t2852*t8708;
  t8748 = t8743 + t8744;
  t8777 = t2852*t8682;
  t8783 = t2890*t8708;
  t8790 = t8777 + t8783;
  t8513 = 0.135*t1061;
  t8516 = -0.049*t1161;
  t8519 = t8513 + t8516;
  t8531 = 0.049*t1061;
  t8539 = t8531 + t1396;
  t8864 = t53*t8011;
  t8875 = t7065*t762;
  t8879 = t8864 + t8875;
  t8913 = t1061*t8879;
  t8920 = -1.*t1286*t418*t1161;
  t8929 = t8913 + t8920;
  t9013 = -1.*t1651*t2033*t8929;
  t9016 = -1.*t1965*t8929*t1758;
  t9021 = t9013 + t9016;
  t9053 = t1965*t1651*t8929;
  t9079 = -1.*t2033*t8929*t1758;
  t9081 = t9053 + t9079;
  t9103 = t2514*t9021;
  t9110 = t2446*t9081;
  t9112 = t9103 + t9110;
  t9121 = t2446*t9021;
  t9127 = -1.*t2514*t9081;
  t9130 = t9121 + t9127;
  t9155 = -1.*t2890*t9112;
  t9161 = t2852*t9130;
  t9162 = t9155 + t9161;
  t9199 = t2852*t9112;
  t9210 = t2890*t9130;
  t9212 = t9199 + t9210;
  t9278 = t1286*t53*t558;
  t9290 = t1286*t291*t762;
  t9305 = t9278 + t9290;
  t9315 = t1061*t9305;
  t9316 = t456*t1161;
  t9325 = t9315 + t9316;
  t9380 = -1.*t1651*t2033*t9325;
  t9388 = -1.*t1965*t9325*t1758;
  t9402 = t9380 + t9388;
  t9420 = t1965*t1651*t9325;
  t9427 = -1.*t2033*t9325*t1758;
  t9432 = t9420 + t9427;
  t9467 = t2514*t9402;
  t9468 = t2446*t9432;
  t9474 = t9467 + t9468;
  t9489 = t2446*t9402;
  t9496 = -1.*t2514*t9432;
  t9497 = t9489 + t9496;
  t9512 = -1.*t2890*t9474;
  t9525 = t2852*t9497;
  t9529 = t9512 + t9525;
  t9555 = t2852*t9474;
  t9558 = t2890*t9497;
  t9567 = t9555 + t9558;
  t9679 = -1.*t1651*t3863;
  t9686 = -1.*t3927*t1758;
  t9687 = t9679 + t9686;
  t9738 = t2033*t9687;
  t9742 = t9738 + t4055;
  t9766 = t1965*t9687;
  t9767 = -1.*t2033*t4032;
  t9777 = t9766 + t9767;
  t9802 = -1.*t2514*t9742;
  t9808 = t2446*t9777;
  t9813 = t9802 + t9808;
  t9824 = t2446*t9742;
  t9825 = t2514*t9777;
  t9834 = t9824 + t9825;
  t9847 = t2890*t9813;
  t9853 = t2852*t9834;
  t9855 = t9847 + t9853;
  t9861 = t2852*t9813;
  t9876 = -1.*t2890*t9834;
  t9878 = t9861 + t9876;
  t9647 = 0.049*t1651;
  t9657 = t9647 + t1761;
  t9663 = -0.09*t1651;
  t9664 = -0.049*t1758;
  t9669 = t9663 + t9664;
  t9941 = t1286*t1061*t418;
  t9951 = t8879*t1161;
  t9953 = t9941 + t9951;
  t9964 = -1.*t1651*t9953;
  t9979 = -1.*t8036*t1758;
  t9981 = t9964 + t9979;
  t9997 = t1651*t8036;
  t10016 = -1.*t9953*t1758;
  t10029 = t9997 + t10016;
  t10042 = t2033*t9981;
  t10043 = t1965*t10029;
  t10045 = t10042 + t10043;
  t10047 = t1965*t9981;
  t10058 = -1.*t2033*t10029;
  t10078 = t10047 + t10058;
  t10099 = -1.*t2514*t10045;
  t10123 = t2446*t10078;
  t10126 = t10099 + t10123;
  t10145 = t2446*t10045;
  t10149 = t2514*t10078;
  t10151 = t10145 + t10149;
  t10166 = t2890*t10126;
  t10171 = t2852*t10151;
  t10183 = t10166 + t10171;
  t10192 = t2852*t10126;
  t10195 = -1.*t2890*t10151;
  t10205 = t10192 + t10195;
  t10281 = -1.*t1061*t456;
  t10283 = t9305*t1161;
  t10284 = t10281 + t10283;
  t10297 = -1.*t1651*t10284;
  t10298 = -1.*t7366*t1758;
  t10302 = t10297 + t10298;
  t10308 = t1651*t7366;
  t10317 = -1.*t10284*t1758;
  t10323 = t10308 + t10317;
  t10338 = t2033*t10302;
  t10352 = t1965*t10323;
  t10357 = t10338 + t10352;
  t10364 = t1965*t10302;
  t10368 = -1.*t2033*t10323;
  t10370 = t10364 + t10368;
  t10394 = -1.*t2514*t10357;
  t10395 = t2446*t10370;
  t10405 = t10394 + t10395;
  t10421 = t2446*t10357;
  t10423 = t2514*t10370;
  t10431 = t10421 + t10423;
  t10444 = t2890*t10405;
  t10453 = t2852*t10431;
  t10462 = t10444 + t10453;
  t10471 = t2852*t10405;
  t10478 = -1.*t2890*t10431;
  t10480 = t10471 + t10478;
  t10562 = -1.*t1965*t3990;
  t10569 = t10562 + t9767;
  t10576 = -1.*t2514*t4061;
  t10579 = t2446*t10569;
  t10584 = t10576 + t10579;
  t10597 = t2514*t10569;
  t10604 = t4230 + t10597;
  t10614 = t2890*t10584;
  t10619 = t2852*t10604;
  t10620 = t10614 + t10619;
  t10628 = t2852*t10584;
  t10630 = -1.*t2890*t10604;
  t10637 = t10628 + t10630;
  t10526 = -0.21*t1965;
  t10527 = -0.049*t2033;
  t10531 = t10526 + t10527;
  t10541 = 0.049*t1965;
  t10543 = t10541 + t2035;
  t10674 = t1651*t9953;
  t10677 = t8036*t1758;
  t10683 = t10674 + t10677;
  t10699 = -1.*t2033*t10683;
  t10706 = t10699 + t10043;
  t10719 = -1.*t1965*t10683;
  t10720 = t10719 + t10058;
  t10728 = -1.*t2514*t10706;
  t10739 = t2446*t10720;
  t10742 = t10728 + t10739;
  t10747 = t2446*t10706;
  t10749 = t2514*t10720;
  t10750 = t10747 + t10749;
  t10757 = t2890*t10742;
  t10759 = t2852*t10750;
  t10760 = t10757 + t10759;
  t10773 = t2852*t10742;
  t10783 = -1.*t2890*t10750;
  t10784 = t10773 + t10783;
  t10825 = t1651*t10284;
  t10826 = t7366*t1758;
  t10832 = t10825 + t10826;
  t10841 = -1.*t2033*t10832;
  t10848 = t10841 + t10352;
  t10853 = -1.*t1965*t10832;
  t10854 = t10853 + t10368;
  t10857 = -1.*t2514*t10848;
  t10862 = t2446*t10854;
  t10865 = t10857 + t10862;
  t10878 = t2446*t10848;
  t10885 = t2514*t10854;
  t10894 = t10878 + t10885;
  t10902 = t2890*t10865;
  t10903 = t2852*t10894;
  t10907 = t10902 + t10903;
  t10909 = t2852*t10865;
  t10910 = -1.*t2890*t10894;
  t10911 = t10909 + t10910;
  t10975 = -1.*t2446*t4157;
  t10976 = t10576 + t10975;
  t10984 = t2890*t10976;
  t10986 = t10984 + t4318;
  t10992 = t2852*t10976;
  t10993 = -1.*t2890*t4288;
  t10998 = t10992 + t10993;
  t10957 = 0.0016*t2446;
  t10960 = t10957 + t2781;
  t10963 = -0.2707*t2446;
  t10966 = -0.0016*t2514;
  t10967 = t10963 + t10966;
  t11028 = t1965*t10683;
  t11029 = t2033*t10029;
  t11030 = t11028 + t11029;
  t11034 = -1.*t2446*t11030;
  t11035 = t10728 + t11034;
  t11039 = -1.*t2514*t11030;
  t11046 = t10747 + t11039;
  t11050 = t2890*t11035;
  t11052 = t2852*t11046;
  t11053 = t11050 + t11052;
  t11056 = t2852*t11035;
  t11058 = -1.*t2890*t11046;
  t11060 = t11056 + t11058;
  t11087 = t1965*t10832;
  t11092 = t2033*t10323;
  t11093 = t11087 + t11092;
  t11102 = -1.*t2446*t11093;
  t11103 = t10857 + t11102;
  t11105 = -1.*t2514*t11093;
  t11106 = t10878 + t11105;
  t11108 = t2890*t11103;
  t11109 = t2852*t11106;
  t11110 = t11108 + t11109;
  t11113 = t2852*t11103;
  t11115 = -1.*t2890*t11106;
  t11120 = t11113 + t11115;
  t11161 = -1.*t2852*t4182;
  t11163 = t11161 + t10993;
  t4490 = t3118*t4322;
  t11148 = -0.7055*t2852;
  t11149 = 0.0184*t2890;
  t11150 = t11148 + t11149;
  t11152 = -0.0184*t2852;
  t11154 = t11152 + t2907;
  t11188 = t2514*t10706;
  t11189 = t2446*t11030;
  t11193 = t11188 + t11189;
  t11202 = -1.*t2890*t11193;
  t11203 = t11202 + t11052;
  t11206 = -1.*t2852*t11193;
  t11207 = t11206 + t11058;
  t11229 = t2514*t10848;
  t11230 = t2446*t11093;
  t11231 = t11229 + t11230;
  t11234 = -1.*t2890*t11231;
  t11235 = t11234 + t11109;
  t11239 = -1.*t2852*t11231;
  t11241 = t11239 + t11115;
  t11169 = -1.*t3190*t4322;
  t4497 = -1.*t3190*t4390;
  t4512 = t4490 + t4497;
  t11270 = 0.0216*t3118;
  t11274 = t11270 + t3289;
  t11278 = -1.1135*t3118;
  t11282 = -0.0216*t3190;
  t11290 = t11278 + t11282;
  t11211 = -1.*t3190*t11203;
  t11308 = t2852*t11193;
  t11309 = t2890*t11046;
  t11310 = t11308 + t11309;
  t11217 = t3118*t11203;
  t11246 = -1.*t3190*t11235;
  t11320 = t2852*t11231;
  t11321 = t2890*t11106;
  t11322 = t11320 + t11321;
  t11255 = t3118*t11235;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t1015*t1218 + t1614*t1805 + t1872*t1906 + t2173*t2245 + t2359*t2422 + t2617*t2698 + t2794*t2839 + t2915*t2956 + t3020*t3067 + t3235*t3260 + t3321*t3377 + 0.0306*(t3190*t3260 + t3118*t3377) - 1.1312*(t3118*t3260 - 1.*t3190*t3377) - 1.*t1286*t1419*t418 + 0.1305*(t1015*t1061 + t1161*t1286*t418) + t190*t644 + t747*t854;
  p_output1(10)=t1286*t1419*t224 + t190*t3562 + t1218*t3737 + 0.1305*t3788 + t1805*t3863 + t1906*t3927 + t2173*t3990 + t2359*t4032 + t2617*t4061 + t2794*t4157 + t2915*t4182 + t3020*t4288 + t3235*t4322 + t3321*t4390 + 0.0306*(t3190*t4322 + t3118*t4390) - 1.1312*t4512 + t3636*t854;
  p_output1(11)=0;
  p_output1(12)=-1.*t1419*t224*t456 + t1218*t4671 + 0.1305*(t1161*t224*t456 + t1061*t4671) + t1805*t4841 + t1906*t4938 + t2173*t4991 + t2359*t5110 + t2617*t5136 + t2794*t5199 + t2915*t5216 + t3020*t5271 + t3235*t5333 + t3321*t5382 + 0.0306*(t3190*t5333 + t3118*t5382) - 1.1312*(t3118*t5333 - 1.*t3190*t5382) + t1286*t190*t224*t558 + t1286*t224*t291*t854;
  p_output1(13)=-1.*t1419*t418*t456 + t1218*t5524 + 0.1305*(t1161*t418*t456 + t1061*t5524) + t1805*t5562 + t1906*t5575 + t1286*t190*t418*t558 + t2173*t5605 + t2359*t5639 + t2617*t5664 + t2794*t5724 + t2915*t5770 + t3020*t5824 + t3235*t5864 + t3321*t5901 + 0.0306*(t3190*t5864 + t3118*t5901) - 1.1312*(t3118*t5864 - 1.*t3190*t5901) + t1286*t291*t418*t854;
  p_output1(14)=-1.*t1286*t1419 - 1.*t190*t456*t558 + t1218*t6069 + 0.1305*(t1161*t1286 + t1061*t6069) + t1805*t6137 + t1906*t6185 + t2173*t6240 + t2359*t6294 + t2617*t6326 + t2794*t6371 + t2915*t6412 + t3020*t6440 + t3235*t6470 + t3321*t6500 + 0.0306*(t3190*t6470 + t3118*t6500) - 1.1312*(t3118*t6470 - 1.*t3190*t6500) - 1.*t291*t456*t854;
  p_output1(15)=t190*t3636 + 0.1305*t1061*t6702 + t1218*t6702 + t1161*t1805*t6702 + t1906*t6760 + t2173*t6769 + t2359*t6813 + t2617*t6819 + t2794*t6839 + t2915*t6859 + t3020*t6882 + t3235*t6910 + t3321*t6955 + 0.0306*(t3190*t6910 + t3118*t6955) - 1.1312*(t3118*t6910 - 1.*t3190*t6955) + t6665*t854;
  p_output1(16)=t190*t7065 + 0.1305*t1061*t7095 + t1218*t7095 + t1161*t1805*t7095 + t1906*t7120 + t2173*t7153 + t2359*t7180 + t2617*t7197 + t2794*t7212 + t2915*t7228 + t3020*t7264 + t3235*t7278 + t3321*t7305 + 0.0306*(t3190*t7278 + t3118*t7305) - 1.1312*(t3118*t7278 - 1.*t3190*t7305) + t644*t854;
  p_output1(17)=t1286*t190*t291 + t7373 + t7376 + t7377 + t7402 + t7424 + t7453 + t7487 + t7509 + t7567 + t7595 + t7611 + t7632 + t7656 + t7678 - 1.*t1286*t558*t854;
  p_output1(18)=0.1305*t1061*t3927 + t1218*t3927 + t1161*t1805*t3927 - 0.135*t3636*t53 + 0.135*t3562*t762 + t1906*t7731 + t2173*t7747 + t2359*t7769 + t2617*t7798 + t2794*t7817 + t2915*t7848 + t3020*t7870 + t3235*t7900 + t3321*t7916 + 0.0306*(t3190*t7900 + t3118*t7916) - 1.1312*(t3118*t7900 - 1.*t3190*t7916);
  p_output1(19)=-0.135*t53*t7065 + 0.135*t762*t8011 + 0.1305*t1061*t8036 + t1218*t8036 + t1161*t1805*t8036 + t1906*t8073 + t2173*t8094 + t2359*t8117 + t2617*t8130 + t2794*t8149 + t2915*t8229 + t3020*t8283 + t3235*t8339 + t3321*t8395 + 0.0306*(t3190*t8339 + t3118*t8395) - 1.1312*(t3118*t8339 - 1.*t3190*t8395);
  p_output1(20)=-0.135*t1286*t291*t53 + t7373 + t7376 + t7377 + t7402 + t7424 + t7453 + t7487 + t7509 + t7567 + t7595 + t7611 + 0.135*t1286*t558*t762 + t7632 + t7656 + t7678;
  p_output1(21)=0.1305*(-1.*t1061*t1286*t224 - 1.*t1161*t3737) + t1805*t3788 + t1651*t2173*t3788 - 1.*t1758*t2359*t3788 + t1286*t224*t8519 + t3737*t8539 + t2617*t8621 + t2794*t8633 + t2915*t8682 + t3020*t8708 + t3235*t8748 + t3321*t8790 + 0.0306*(t3190*t8748 + t3118*t8790) - 1.1312*(t3118*t8748 - 1.*t3190*t8790);
  p_output1(22)=t1286*t418*t8519 + t8539*t8879 + 0.1305*(t1558 - 1.*t1161*t8879) + t1805*t8929 + t1651*t2173*t8929 - 1.*t1758*t2359*t8929 + t2617*t9021 + t2794*t9081 + t2915*t9112 + t3020*t9130 + t3235*t9162 + t3321*t9212 + 0.0306*(t3190*t9162 + t3118*t9212) - 1.1312*(t3118*t9162 - 1.*t3190*t9212);
  p_output1(23)=-1.*t456*t8519 + t8539*t9305 + 0.1305*(t1061*t456 - 1.*t1161*t9305) + t1805*t9325 + t1651*t2173*t9325 - 1.*t1758*t2359*t9325 + t2617*t9402 + t2794*t9432 + t2915*t9474 + t3020*t9497 + t3235*t9529 + t3321*t9567 + 0.0306*(t3190*t9529 + t3118*t9567) - 1.1312*(t3118*t9529 - 1.*t3190*t9567);
  p_output1(24)=t2173*t4032 + t3927*t9657 + t3863*t9669 + t2359*t9687 + t2794*t9742 + t2617*t9777 + t3020*t9813 + t2915*t9834 + t3321*t9855 + t3235*t9878 - 1.1312*(-1.*t3190*t9855 + t3118*t9878) + 0.0306*(t3118*t9855 + t3190*t9878);
  p_output1(25)=t10029*t2173 + t10078*t2617 + t10045*t2794 + t10151*t2915 + t10126*t3020 - 1.1312*(t10205*t3118 - 1.*t10183*t3190) + 0.0306*(t10183*t3118 + t10205*t3190) + t10205*t3235 + t10183*t3321 + t8036*t9657 + t9669*t9953 + t2359*t9981;
  p_output1(26)=t10323*t2173 + t10302*t2359 + t10370*t2617 + t10357*t2794 + t10431*t2915 + t10405*t3020 - 1.1312*(t10480*t3118 - 1.*t10462*t3190) + 0.0306*(t10462*t3118 + t10480*t3190) + t10480*t3235 + t10462*t3321 + t7366*t9657 + t10284*t9669;
  p_output1(27)=t10569*t2617 + t10604*t2915 + t10584*t3020 - 1.1312*(t10637*t3118 - 1.*t10620*t3190) + 0.0306*(t10620*t3118 + t10637*t3190) + t10637*t3235 + t10620*t3321 + t10531*t3990 + t10543*t4032 + t2794*t4061;
  p_output1(28)=t10029*t10543 + t10531*t10683 + t10720*t2617 + t10706*t2794 + t10750*t2915 + t10742*t3020 - 1.1312*(t10784*t3118 - 1.*t10760*t3190) + 0.0306*(t10760*t3118 + t10784*t3190) + t10784*t3235 + t10760*t3321;
  p_output1(29)=t10323*t10543 + t10531*t10832 + t10854*t2617 + t10848*t2794 + t10894*t2915 + t10865*t3020 - 1.1312*(t10911*t3118 - 1.*t10907*t3190) + 0.0306*(t10907*t3118 + t10911*t3190) + t10911*t3235 + t10907*t3321;
  p_output1(30)=t10976*t3020 - 1.1312*(t10998*t3118 - 1.*t10986*t3190) + 0.0306*(t10986*t3118 + t10998*t3190) + t10998*t3235 + t10986*t3321 + t10960*t4061 + t10967*t4157 + t2915*t4288;
  p_output1(31)=t10706*t10960 + t10967*t11030 + t11046*t2915 + t11035*t3020 - 1.1312*(t11060*t3118 - 1.*t11053*t3190) + 0.0306*(t11053*t3118 + t11060*t3190) + t11060*t3235 + t11053*t3321;
  p_output1(32)=t10848*t10960 + t10967*t11093 + t11106*t2915 + t11103*t3020 - 1.1312*(t11120*t3118 - 1.*t11110*t3190) + 0.0306*(t11110*t3118 + t11120*t3190) + t11120*t3235 + t11110*t3321;
  p_output1(33)=-1.1312*(t11169 + t11163*t3118) + t11163*t3235 + t11150*t4182 + t11154*t4288 + t3321*t4322 + 0.0306*(t11163*t3190 + t4490);
  p_output1(34)=t11046*t11154 + t11150*t11193 - 1.1312*(t11211 + t11207*t3118) + 0.0306*(t11217 + t11207*t3190) + t11207*t3235 + t11203*t3321;
  p_output1(35)=t11106*t11154 + t11150*t11231 - 1.1312*(t11246 + t11241*t3118) + 0.0306*(t11255 + t11241*t3190) + t11241*t3235 + t11235*t3321;
  p_output1(36)=t11274*t4322 + t11290*t4390 - 1.1312*(t11169 - 1.*t3118*t4390) + 0.0306*t4512;
  p_output1(37)=t11203*t11274 + t11290*t11310 - 1.1312*(t11211 - 1.*t11310*t3118) + 0.0306*(t11217 - 1.*t11310*t3190);
  p_output1(38)=t11235*t11274 + t11290*t11322 - 1.1312*(t11246 - 1.*t11322*t3118) + 0.0306*(t11255 - 1.*t11322*t3190);
  p_output1(39)=0;
  p_output1(40)=0;
  p_output1(41)=0;
  p_output1(42)=0;
  p_output1(43)=0;
  p_output1(44)=0;
  p_output1(45)=0;
  p_output1(46)=0;
  p_output1(47)=0;
  p_output1(48)=0;
  p_output1(49)=0;
  p_output1(50)=0;
  p_output1(51)=0;
  p_output1(52)=0;
  p_output1(53)=0;
  p_output1(54)=0;
  p_output1(55)=0;
  p_output1(56)=0;
  p_output1(57)=0;
  p_output1(58)=0;
  p_output1(59)=0;
}


       
Eigen::Matrix<double,3,20> Jp_LeftToeBottom(const Eigen::Matrix<double,20,1> &var1)
//void Jp_LeftToeBottom(Eigen::Matrix<double,3,20> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,20>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}




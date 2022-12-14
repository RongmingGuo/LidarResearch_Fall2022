/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:08:22 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_RightToeFront_src.h"

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
  double t481;
  double t739;
  double t621;
  double t671;
  double t793;
  double t74;
  double t91;
  double t160;
  double t386;
  double t510;
  double t704;
  double t795;
  double t834;
  double t941;
  double t1074;
  double t1077;
  double t1097;
  double t11;
  double t1353;
  double t1360;
  double t1417;
  double t1470;
  double t1503;
  double t1530;
  double t1563;
  double t1670;
  double t1807;
  double t1810;
  double t2255;
  double t2305;
  double t2309;
  double t2326;
  double t2330;
  double t2338;
  double t2375;
  double t2484;
  double t2522;
  double t2532;
  double t2681;
  double t2695;
  double t2729;
  double t2858;
  double t2897;
  double t2905;
  double t2921;
  double t3004;
  double t3020;
  double t3023;
  double t3145;
  double t3157;
  double t3168;
  double t3188;
  double t3195;
  double t3214;
  double t3279;
  double t3335;
  double t3445;
  double t3506;
  double t3599;
  double t3604;
  double t3609;
  double t3632;
  double t3637;
  double t3643;
  double t3689;
  double t3724;
  double t3725;
  double t3779;
  double t3838;
  double t3848;
  double t3871;
  double t375;
  double t416;
  double t437;
  double t521;
  double t607;
  double t1003;
  double t1020;
  double t1025;
  double t1043;
  double t1139;
  double t1298;
  double t1350;
  double t4052;
  double t4166;
  double t4168;
  double t4193;
  double t4215;
  double t4239;
  double t1541;
  double t1588;
  double t1657;
  double t4254;
  double t4271;
  double t4292;
  double t1998;
  double t2022;
  double t2062;
  double t2347;
  double t2394;
  double t2405;
  double t4301;
  double t4320;
  double t4334;
  double t4454;
  double t4476;
  double t4489;
  double t2615;
  double t2629;
  double t2680;
  double t2914;
  double t2922;
  double t2959;
  double t4502;
  double t4518;
  double t4528;
  double t4541;
  double t4548;
  double t4554;
  double t3103;
  double t3121;
  double t3134;
  double t3269;
  double t3290;
  double t3319;
  double t4589;
  double t4618;
  double t4676;
  double t4747;
  double t4758;
  double t4759;
  double t3515;
  double t3556;
  double t3598;
  double t3676;
  double t3700;
  double t3721;
  double t4774;
  double t4785;
  double t4797;
  double t4815;
  double t4831;
  double t4856;
  double t3820;
  double t3822;
  double t3829;
  double t4859;
  double t4869;
  double t4872;
  double t4894;
  double t4918;
  double t4927;
  double t5084;
  double t5090;
  double t5094;
  double t5108;
  double t5113;
  double t5120;
  double t5163;
  double t5165;
  double t5174;
  double t5204;
  double t5217;
  double t5225;
  double t5237;
  double t5250;
  double t5258;
  double t5306;
  double t5326;
  double t5334;
  double t5356;
  double t5366;
  double t5372;
  double t5401;
  double t5404;
  double t5413;
  double t5431;
  double t5432;
  double t5435;
  double t5450;
  double t5452;
  double t5475;
  double t5479;
  double t5486;
  double t5496;
  double t5619;
  double t5636;
  double t5637;
  double t5646;
  double t5651;
  double t5656;
  double t5693;
  double t5701;
  double t5724;
  double t5730;
  double t5732;
  double t5747;
  double t5751;
  double t5765;
  double t5769;
  double t5772;
  double t5781;
  double t5800;
  double t5816;
  double t5819;
  double t5825;
  double t5843;
  double t5849;
  double t5852;
  double t5857;
  double t5858;
  double t5859;
  double t5876;
  double t5877;
  double t5884;
  double t5900;
  double t5903;
  double t5917;
  double t6041;
  double t6048;
  double t6053;
  double t6057;
  double t6059;
  double t6070;
  double t6107;
  double t6121;
  double t6124;
  double t6160;
  double t6169;
  double t6172;
  double t6228;
  double t6233;
  double t6254;
  double t6273;
  double t6282;
  double t6285;
  double t6302;
  double t6303;
  double t6309;
  double t6314;
  double t6318;
  double t6323;
  double t6334;
  double t6339;
  double t6341;
  double t6374;
  double t6390;
  double t6403;
  double t6416;
  double t6420;
  double t6424;
  double t6492;
  double t6495;
  double t6496;
  double t6506;
  double t6508;
  double t6501;
  double t6502;
  double t6504;
  double t6526;
  double t6531;
  double t6532;
  double t6535;
  double t6543;
  double t6552;
  double t6568;
  double t6575;
  double t6581;
  double t6588;
  double t6593;
  double t6595;
  double t6609;
  double t6619;
  double t6626;
  double t6629;
  double t6632;
  double t6638;
  double t6646;
  double t6648;
  double t6660;
  double t6671;
  double t6675;
  double t6681;
  double t6752;
  double t6753;
  double t6754;
  double t6776;
  double t6792;
  double t6793;
  double t6761;
  double t6763;
  double t6811;
  double t6818;
  double t6827;
  double t6836;
  double t6839;
  double t6850;
  double t6873;
  double t6876;
  double t6878;
  double t6885;
  double t6886;
  double t6897;
  double t6904;
  double t6906;
  double t6909;
  double t6916;
  double t6919;
  double t6929;
  double t6955;
  double t6967;
  double t6987;
  double t7003;
  double t7010;
  double t7019;
  double t7122;
  double t7127;
  double t7137;
  double t7092;
  double t7093;
  double t7115;
  double t7153;
  double t7163;
  double t7170;
  double t7184;
  double t7188;
  double t7195;
  double t7198;
  double t7202;
  double t7205;
  double t7212;
  double t7218;
  double t7221;
  double t7228;
  double t7229;
  double t7238;
  double t7246;
  double t7248;
  double t7258;
  double t7265;
  double t7273;
  double t7283;
  double t7304;
  double t7311;
  double t7314;
  double t7379;
  double t7383;
  double t7435;
  double t7443;
  double t7461;
  double t7495;
  double t7505;
  double t7515;
  double t7538;
  double t7550;
  double t7592;
  double t7599;
  double t7601;
  double t7602;
  double t7610;
  double t7617;
  double t7619;
  double t7622;
  double t7638;
  double t7640;
  double t7652;
  double t7665;
  double t7668;
  double t7679;
  double t7685;
  double t7687;
  double t7728;
  double t7733;
  double t7734;
  double t7756;
  double t7759;
  double t7741;
  double t7749;
  double t7778;
  double t7780;
  double t7783;
  double t7788;
  double t7789;
  double t7795;
  double t7800;
  double t7803;
  double t7804;
  double t7806;
  double t7808;
  double t7812;
  double t7818;
  double t7820;
  double t7821;
  double t7829;
  double t7830;
  double t7840;
  double t7855;
  double t7858;
  double t7859;
  double t7863;
  double t7866;
  double t7870;
  double t7118;
  double t7144;
  double t7149;
  double t7150;
  double t7182;
  double t7196;
  double t7209;
  double t7222;
  double t7241;
  double t7259;
  double t7302;
  double t7315;
  double t7316;
  double t7320;
  double t7333;
  double t7340;
  double t7341;
  double t7352;
  double t7358;
  double t7367;
  double t4364;
  double t4395;
  double t4431;
  double t7930;
  double t7934;
  double t7937;
  double t7940;
  double t7941;
  double t7942;
  double t7945;
  double t7946;
  double t7948;
  double t7951;
  double t7952;
  double t7954;
  double t7958;
  double t7959;
  double t7961;
  double t7968;
  double t7971;
  double t7972;
  double t7903;
  double t7906;
  double t7908;
  double t7915;
  double t7916;
  double t8031;
  double t8050;
  double t8058;
  double t8064;
  double t8074;
  double t8075;
  double t8113;
  double t8125;
  double t8126;
  double t8131;
  double t8135;
  double t8140;
  double t8145;
  double t8147;
  double t8154;
  double t8180;
  double t8187;
  double t8201;
  double t8211;
  double t8213;
  double t8215;
  double t8243;
  double t8248;
  double t8252;
  double t8342;
  double t8346;
  double t8349;
  double t8353;
  double t8355;
  double t8356;
  double t8383;
  double t8387;
  double t8391;
  double t8405;
  double t8406;
  double t8419;
  double t8426;
  double t8427;
  double t8438;
  double t8444;
  double t8450;
  double t8451;
  double t8461;
  double t8462;
  double t8464;
  double t8479;
  double t8484;
  double t8485;
  double t8541;
  double t8545;
  double t8547;
  double t8558;
  double t8562;
  double t8572;
  double t8576;
  double t8578;
  double t8582;
  double t8584;
  double t8591;
  double t8608;
  double t8617;
  double t8621;
  double t8668;
  double t8670;
  double t8674;
  double t8686;
  double t8688;
  double t8690;
  double t8508;
  double t8512;
  double t8518;
  double t8524;
  double t8527;
  double t8764;
  double t8769;
  double t8774;
  double t8778;
  double t8780;
  double t8781;
  double t8793;
  double t8795;
  double t8796;
  double t8804;
  double t8806;
  double t8810;
  double t8814;
  double t8817;
  double t8828;
  double t8838;
  double t8848;
  double t8850;
  double t8864;
  double t8869;
  double t8875;
  double t8877;
  double t8880;
  double t8883;
  double t8891;
  double t8914;
  double t8916;
  double t8979;
  double t8985;
  double t8989;
  double t8993;
  double t8994;
  double t8999;
  double t9012;
  double t9013;
  double t9019;
  double t9024;
  double t9031;
  double t9036;
  double t9046;
  double t9051;
  double t9061;
  double t9070;
  double t9071;
  double t9074;
  double t9081;
  double t9089;
  double t9093;
  double t9095;
  double t9103;
  double t9104;
  double t9111;
  double t9118;
  double t9130;
  double t9227;
  double t9229;
  double t9242;
  double t9244;
  double t9245;
  double t9260;
  double t9272;
  double t9278;
  double t9284;
  double t9286;
  double t9288;
  double t9291;
  double t9297;
  double t9194;
  double t9199;
  double t9209;
  double t9211;
  double t9213;
  double t9361;
  double t9370;
  double t9371;
  double t9381;
  double t9387;
  double t9391;
  double t9396;
  double t9404;
  double t9412;
  double t9414;
  double t9420;
  double t9421;
  double t9422;
  double t9425;
  double t9435;
  double t9443;
  double t9458;
  double t9461;
  double t9466;
  double t9517;
  double t9518;
  double t9519;
  double t9530;
  double t9531;
  double t9534;
  double t9535;
  double t9539;
  double t9541;
  double t9542;
  double t9548;
  double t9556;
  double t9558;
  double t9578;
  double t9579;
  double t9584;
  double t9591;
  double t9592;
  double t9595;
  double t9695;
  double t9710;
  double t9726;
  double t9736;
  double t9754;
  double t9764;
  double t9772;
  double t9659;
  double t9660;
  double t9667;
  double t9679;
  double t9685;
  double t9833;
  double t9835;
  double t9851;
  double t9864;
  double t9871;
  double t9882;
  double t9889;
  double t9892;
  double t9894;
  double t9895;
  double t9900;
  double t9902;
  double t9903;
  double t9953;
  double t9954;
  double t9955;
  double t9958;
  double t9962;
  double t9964;
  double t9966;
  double t9983;
  double t9991;
  double t9995;
  double t10006;
  double t10020;
  double t10021;
  double t10121;
  double t10122;
  double t5030;
  double t10070;
  double t10076;
  double t10085;
  double t10098;
  double t10111;
  double t10146;
  double t10147;
  double t10148;
  double t10153;
  double t10156;
  double t10165;
  double t10169;
  double t10234;
  double t10239;
  double t10242;
  double t10276;
  double t10277;
  double t10286;
  double t10288;
  double t10125;
  double t5037;
  double t5044;
  double t10316;
  double t10317;
  double t10325;
  double t10326;
  double t10327;
  double t10179;
  double t10349;
  double t10353;
  double t10356;
  double t10192;
  double t10292;
  double t10411;
  double t10419;
  double t10421;
  double t10302;
  t481 = Sin(var1[3]);
  t739 = Cos(var1[3]);
  t621 = Cos(var1[5]);
  t671 = Sin(var1[4]);
  t793 = Sin(var1[5]);
  t74 = Cos(var1[14]);
  t91 = -1.*t74;
  t160 = 1. + t91;
  t386 = Sin(var1[14]);
  t510 = Sin(var1[13]);
  t704 = -1.*t621*t481*t671;
  t795 = t739*t793;
  t834 = t704 + t795;
  t941 = Cos(var1[13]);
  t1074 = -1.*t739*t621;
  t1077 = -1.*t481*t671*t793;
  t1097 = t1074 + t1077;
  t11 = Cos(var1[4]);
  t1353 = t510*t834;
  t1360 = t941*t1097;
  t1417 = t1353 + t1360;
  t1470 = Cos(var1[15]);
  t1503 = -1.*t1470;
  t1530 = 1. + t1503;
  t1563 = Sin(var1[15]);
  t1670 = t941*t834;
  t1807 = -1.*t510*t1097;
  t1810 = t1670 + t1807;
  t2255 = -1.*t74*t11*t481;
  t2305 = t386*t1417;
  t2309 = t2255 + t2305;
  t2326 = Cos(var1[16]);
  t2330 = -1.*t2326;
  t2338 = 1. + t2330;
  t2375 = Sin(var1[16]);
  t2484 = t1563*t1810;
  t2522 = t1470*t2309;
  t2532 = t2484 + t2522;
  t2681 = t1470*t1810;
  t2695 = -1.*t1563*t2309;
  t2729 = t2681 + t2695;
  t2858 = Cos(var1[17]);
  t2897 = -1.*t2858;
  t2905 = 1. + t2897;
  t2921 = Sin(var1[17]);
  t3004 = -1.*t2375*t2532;
  t3020 = t2326*t2729;
  t3023 = t3004 + t3020;
  t3145 = t2326*t2532;
  t3157 = t2375*t2729;
  t3168 = t3145 + t3157;
  t3188 = Cos(var1[18]);
  t3195 = -1.*t3188;
  t3214 = 1. + t3195;
  t3279 = Sin(var1[18]);
  t3335 = t2921*t3023;
  t3445 = t2858*t3168;
  t3506 = t3335 + t3445;
  t3599 = t2858*t3023;
  t3604 = -1.*t2921*t3168;
  t3609 = t3599 + t3604;
  t3632 = Cos(var1[19]);
  t3637 = -1.*t3632;
  t3643 = 1. + t3637;
  t3689 = Sin(var1[19]);
  t3724 = -1.*t3279*t3506;
  t3725 = t3188*t3609;
  t3779 = t3724 + t3725;
  t3838 = t3188*t3506;
  t3848 = t3279*t3609;
  t3871 = t3838 + t3848;
  t375 = -0.049*t160;
  t416 = -0.135*t386;
  t437 = 0. + t375 + t416;
  t521 = 0.135*t510;
  t607 = 0. + t521;
  t1003 = -1.*t941;
  t1020 = 1. + t1003;
  t1025 = -0.135*t1020;
  t1043 = 0. + t1025;
  t1139 = -0.135*t160;
  t1298 = 0.049*t386;
  t1350 = 0. + t1139 + t1298;
  t4052 = t739*t621*t671;
  t4166 = t481*t793;
  t4168 = t4052 + t4166;
  t4193 = -1.*t621*t481;
  t4215 = t739*t671*t793;
  t4239 = t4193 + t4215;
  t1541 = -0.09*t1530;
  t1588 = 0.049*t1563;
  t1657 = 0. + t1541 + t1588;
  t4254 = t510*t4168;
  t4271 = t941*t4239;
  t4292 = t4254 + t4271;
  t1998 = -0.049*t1530;
  t2022 = -0.09*t1563;
  t2062 = 0. + t1998 + t2022;
  t2347 = -0.049*t2338;
  t2394 = -0.21*t2375;
  t2405 = 0. + t2347 + t2394;
  t4301 = t941*t4168;
  t4320 = -1.*t510*t4239;
  t4334 = t4301 + t4320;
  t4454 = t74*t739*t11;
  t4476 = t386*t4292;
  t4489 = t4454 + t4476;
  t2615 = -0.21*t2338;
  t2629 = 0.049*t2375;
  t2680 = 0. + t2615 + t2629;
  t2914 = -0.2707*t2905;
  t2922 = 0.0016*t2921;
  t2959 = 0. + t2914 + t2922;
  t4502 = t1563*t4334;
  t4518 = t1470*t4489;
  t4528 = t4502 + t4518;
  t4541 = t1470*t4334;
  t4548 = -1.*t1563*t4489;
  t4554 = t4541 + t4548;
  t3103 = -0.0016*t2905;
  t3121 = -0.2707*t2921;
  t3134 = 0. + t3103 + t3121;
  t3269 = 0.0184*t3214;
  t3290 = -0.7055*t3279;
  t3319 = 0. + t3269 + t3290;
  t4589 = -1.*t2375*t4528;
  t4618 = t2326*t4554;
  t4676 = t4589 + t4618;
  t4747 = t2326*t4528;
  t4758 = t2375*t4554;
  t4759 = t4747 + t4758;
  t3515 = -0.7055*t3214;
  t3556 = -0.0184*t3279;
  t3598 = 0. + t3515 + t3556;
  t3676 = -1.1135*t3643;
  t3700 = 0.0216*t3689;
  t3721 = 0. + t3676 + t3700;
  t4774 = t2921*t4676;
  t4785 = t2858*t4759;
  t4797 = t4774 + t4785;
  t4815 = t2858*t4676;
  t4831 = -1.*t2921*t4759;
  t4856 = t4815 + t4831;
  t3820 = -0.0216*t3643;
  t3822 = -1.1135*t3689;
  t3829 = 0. + t3820 + t3822;
  t4859 = -1.*t3279*t4797;
  t4869 = t3188*t4856;
  t4872 = t4859 + t4869;
  t4894 = t3188*t4797;
  t4918 = t3279*t4856;
  t4927 = t4894 + t4918;
  t5084 = t739*t11*t621*t510;
  t5090 = t941*t739*t11*t793;
  t5094 = t5084 + t5090;
  t5108 = t941*t739*t11*t621;
  t5113 = -1.*t739*t11*t510*t793;
  t5120 = t5108 + t5113;
  t5163 = -1.*t74*t739*t671;
  t5165 = t386*t5094;
  t5174 = t5163 + t5165;
  t5204 = t1563*t5120;
  t5217 = t1470*t5174;
  t5225 = t5204 + t5217;
  t5237 = t1470*t5120;
  t5250 = -1.*t1563*t5174;
  t5258 = t5237 + t5250;
  t5306 = -1.*t2375*t5225;
  t5326 = t2326*t5258;
  t5334 = t5306 + t5326;
  t5356 = t2326*t5225;
  t5366 = t2375*t5258;
  t5372 = t5356 + t5366;
  t5401 = t2921*t5334;
  t5404 = t2858*t5372;
  t5413 = t5401 + t5404;
  t5431 = t2858*t5334;
  t5432 = -1.*t2921*t5372;
  t5435 = t5431 + t5432;
  t5450 = -1.*t3279*t5413;
  t5452 = t3188*t5435;
  t5475 = t5450 + t5452;
  t5479 = t3188*t5413;
  t5486 = t3279*t5435;
  t5496 = t5479 + t5486;
  t5619 = t11*t621*t510*t481;
  t5636 = t941*t11*t481*t793;
  t5637 = t5619 + t5636;
  t5646 = t941*t11*t621*t481;
  t5651 = -1.*t11*t510*t481*t793;
  t5656 = t5646 + t5651;
  t5693 = -1.*t74*t481*t671;
  t5701 = t386*t5637;
  t5724 = t5693 + t5701;
  t5730 = t1563*t5656;
  t5732 = t1470*t5724;
  t5747 = t5730 + t5732;
  t5751 = t1470*t5656;
  t5765 = -1.*t1563*t5724;
  t5769 = t5751 + t5765;
  t5772 = -1.*t2375*t5747;
  t5781 = t2326*t5769;
  t5800 = t5772 + t5781;
  t5816 = t2326*t5747;
  t5819 = t2375*t5769;
  t5825 = t5816 + t5819;
  t5843 = t2921*t5800;
  t5849 = t2858*t5825;
  t5852 = t5843 + t5849;
  t5857 = t2858*t5800;
  t5858 = -1.*t2921*t5825;
  t5859 = t5857 + t5858;
  t5876 = -1.*t3279*t5852;
  t5877 = t3188*t5859;
  t5884 = t5876 + t5877;
  t5900 = t3188*t5852;
  t5903 = t3279*t5859;
  t5917 = t5900 + t5903;
  t6041 = -1.*t621*t510*t671;
  t6048 = -1.*t941*t671*t793;
  t6053 = t6041 + t6048;
  t6057 = -1.*t941*t621*t671;
  t6059 = t510*t671*t793;
  t6070 = t6057 + t6059;
  t6107 = -1.*t74*t11;
  t6121 = t386*t6053;
  t6124 = t6107 + t6121;
  t6160 = t1563*t6070;
  t6169 = t1470*t6124;
  t6172 = t6160 + t6169;
  t6228 = t1470*t6070;
  t6233 = -1.*t1563*t6124;
  t6254 = t6228 + t6233;
  t6273 = -1.*t2375*t6172;
  t6282 = t2326*t6254;
  t6285 = t6273 + t6282;
  t6302 = t2326*t6172;
  t6303 = t2375*t6254;
  t6309 = t6302 + t6303;
  t6314 = t2921*t6285;
  t6318 = t2858*t6309;
  t6323 = t6314 + t6318;
  t6334 = t2858*t6285;
  t6339 = -1.*t2921*t6309;
  t6341 = t6334 + t6339;
  t6374 = -1.*t3279*t6323;
  t6390 = t3188*t6341;
  t6403 = t6374 + t6390;
  t6416 = t3188*t6323;
  t6420 = t3279*t6341;
  t6424 = t6416 + t6420;
  t6492 = t621*t481;
  t6495 = -1.*t739*t671*t793;
  t6496 = t6492 + t6495;
  t6506 = t510*t6496;
  t6508 = t4301 + t6506;
  t6501 = -1.*t510*t4168;
  t6502 = t941*t6496;
  t6504 = t6501 + t6502;
  t6526 = t1563*t6504;
  t6531 = t1470*t386*t6508;
  t6532 = t6526 + t6531;
  t6535 = t1470*t6504;
  t6543 = -1.*t386*t1563*t6508;
  t6552 = t6535 + t6543;
  t6568 = -1.*t2375*t6532;
  t6575 = t2326*t6552;
  t6581 = t6568 + t6575;
  t6588 = t2326*t6532;
  t6593 = t2375*t6552;
  t6595 = t6588 + t6593;
  t6609 = t2921*t6581;
  t6619 = t2858*t6595;
  t6626 = t6609 + t6619;
  t6629 = t2858*t6581;
  t6632 = -1.*t2921*t6595;
  t6638 = t6629 + t6632;
  t6646 = -1.*t3279*t6626;
  t6648 = t3188*t6638;
  t6660 = t6646 + t6648;
  t6671 = t3188*t6626;
  t6675 = t3279*t6638;
  t6681 = t6671 + t6675;
  t6752 = t621*t481*t671;
  t6753 = -1.*t739*t793;
  t6754 = t6752 + t6753;
  t6776 = t941*t6754;
  t6792 = t510*t1097;
  t6793 = t6776 + t6792;
  t6761 = -1.*t510*t6754;
  t6763 = t6761 + t1360;
  t6811 = t1563*t6763;
  t6818 = t1470*t386*t6793;
  t6827 = t6811 + t6818;
  t6836 = t1470*t6763;
  t6839 = -1.*t386*t1563*t6793;
  t6850 = t6836 + t6839;
  t6873 = -1.*t2375*t6827;
  t6876 = t2326*t6850;
  t6878 = t6873 + t6876;
  t6885 = t2326*t6827;
  t6886 = t2375*t6850;
  t6897 = t6885 + t6886;
  t6904 = t2921*t6878;
  t6906 = t2858*t6897;
  t6909 = t6904 + t6906;
  t6916 = t2858*t6878;
  t6919 = -1.*t2921*t6897;
  t6929 = t6916 + t6919;
  t6955 = -1.*t3279*t6909;
  t6967 = t3188*t6929;
  t6987 = t6955 + t6967;
  t7003 = t3188*t6909;
  t7010 = t3279*t6929;
  t7019 = t7003 + t7010;
  t7122 = t941*t11*t621;
  t7127 = -1.*t11*t510*t793;
  t7137 = t7122 + t7127;
  t7092 = -1.*t11*t621*t510;
  t7093 = -1.*t941*t11*t793;
  t7115 = t7092 + t7093;
  t7153 = t1563*t7115;
  t7163 = t1470*t386*t7137;
  t7170 = t7153 + t7163;
  t7184 = t1470*t7115;
  t7188 = -1.*t386*t1563*t7137;
  t7195 = t7184 + t7188;
  t7198 = -1.*t2375*t7170;
  t7202 = t2326*t7195;
  t7205 = t7198 + t7202;
  t7212 = t2326*t7170;
  t7218 = t2375*t7195;
  t7221 = t7212 + t7218;
  t7228 = t2921*t7205;
  t7229 = t2858*t7221;
  t7238 = t7228 + t7229;
  t7246 = t2858*t7205;
  t7248 = -1.*t2921*t7221;
  t7258 = t7246 + t7248;
  t7265 = -1.*t3279*t7238;
  t7273 = t3188*t7258;
  t7283 = t7265 + t7273;
  t7304 = t3188*t7238;
  t7311 = t3279*t7258;
  t7314 = t7304 + t7311;
  t7379 = -1.*t941*t4239;
  t7383 = t6501 + t7379;
  t7435 = t1563*t7383;
  t7443 = t1470*t386*t4334;
  t7461 = t7435 + t7443;
  t7495 = t1470*t7383;
  t7505 = -1.*t386*t1563*t4334;
  t7515 = t7495 + t7505;
  t7538 = -1.*t2375*t7461;
  t7550 = t2326*t7515;
  t7592 = t7538 + t7550;
  t7599 = t2326*t7461;
  t7601 = t2375*t7515;
  t7602 = t7599 + t7601;
  t7610 = t2921*t7592;
  t7617 = t2858*t7602;
  t7619 = t7610 + t7617;
  t7622 = t2858*t7592;
  t7638 = -1.*t2921*t7602;
  t7640 = t7622 + t7638;
  t7652 = -1.*t3279*t7619;
  t7665 = t3188*t7640;
  t7668 = t7652 + t7665;
  t7679 = t3188*t7619;
  t7685 = t3279*t7640;
  t7687 = t7679 + t7685;
  t7728 = t739*t621;
  t7733 = t481*t671*t793;
  t7734 = t7728 + t7733;
  t7756 = -1.*t510*t7734;
  t7759 = t6776 + t7756;
  t7741 = -1.*t941*t7734;
  t7749 = t6761 + t7741;
  t7778 = t1563*t7749;
  t7780 = t1470*t386*t7759;
  t7783 = t7778 + t7780;
  t7788 = t1470*t7749;
  t7789 = -1.*t386*t1563*t7759;
  t7795 = t7788 + t7789;
  t7800 = -1.*t2375*t7783;
  t7803 = t2326*t7795;
  t7804 = t7800 + t7803;
  t7806 = t2326*t7783;
  t7808 = t2375*t7795;
  t7812 = t7806 + t7808;
  t7818 = t2921*t7804;
  t7820 = t2858*t7812;
  t7821 = t7818 + t7820;
  t7829 = t2858*t7804;
  t7830 = -1.*t2921*t7812;
  t7840 = t7829 + t7830;
  t7855 = -1.*t3279*t7821;
  t7858 = t3188*t7840;
  t7859 = t7855 + t7858;
  t7863 = t3188*t7821;
  t7866 = t3279*t7840;
  t7870 = t7863 + t7866;
  t7118 = t1657*t7115;
  t7144 = -0.1305*t74*t7137;
  t7149 = t1350*t7137;
  t7150 = t386*t2062*t7137;
  t7182 = t2405*t7170;
  t7196 = t2680*t7195;
  t7209 = t2959*t7205;
  t7222 = t3134*t7221;
  t7241 = t3319*t7238;
  t7259 = t3598*t7258;
  t7302 = t3721*t7283;
  t7315 = t3829*t7314;
  t7316 = t3689*t7283;
  t7320 = t3632*t7314;
  t7333 = t7316 + t7320;
  t7340 = 0.088451*t7333;
  t7341 = t3632*t7283;
  t7352 = -1.*t3689*t7314;
  t7358 = t7341 + t7352;
  t7367 = -1.062256*t7358;
  t4364 = -1.*t739*t11*t386;
  t4395 = t74*t4292;
  t4431 = t4364 + t4395;
  t7930 = -1.*t2326*t1563*t4431;
  t7934 = -1.*t1470*t2375*t4431;
  t7937 = t7930 + t7934;
  t7940 = t1470*t2326*t4431;
  t7941 = -1.*t1563*t2375*t4431;
  t7942 = t7940 + t7941;
  t7945 = t2921*t7937;
  t7946 = t2858*t7942;
  t7948 = t7945 + t7946;
  t7951 = t2858*t7937;
  t7952 = -1.*t2921*t7942;
  t7954 = t7951 + t7952;
  t7958 = -1.*t3279*t7948;
  t7959 = t3188*t7954;
  t7961 = t7958 + t7959;
  t7968 = t3188*t7948;
  t7971 = t3279*t7954;
  t7972 = t7968 + t7971;
  t7903 = -0.135*t74;
  t7906 = -0.049*t386;
  t7908 = t7903 + t7906;
  t7915 = 0.049*t74;
  t7916 = t7915 + t416;
  t8031 = t510*t6754;
  t8050 = t941*t7734;
  t8058 = t8031 + t8050;
  t8064 = -1.*t11*t386*t481;
  t8074 = t74*t8058;
  t8075 = t8064 + t8074;
  t8113 = -1.*t2326*t1563*t8075;
  t8125 = -1.*t1470*t2375*t8075;
  t8126 = t8113 + t8125;
  t8131 = t1470*t2326*t8075;
  t8135 = -1.*t1563*t2375*t8075;
  t8140 = t8131 + t8135;
  t8145 = t2921*t8126;
  t8147 = t2858*t8140;
  t8154 = t8145 + t8147;
  t8180 = t2858*t8126;
  t8187 = -1.*t2921*t8140;
  t8201 = t8180 + t8187;
  t8211 = -1.*t3279*t8154;
  t8213 = t3188*t8201;
  t8215 = t8211 + t8213;
  t8243 = t3188*t8154;
  t8248 = t3279*t8201;
  t8252 = t8243 + t8248;
  t8342 = t11*t621*t510;
  t8346 = t941*t11*t793;
  t8349 = t8342 + t8346;
  t8353 = t386*t671;
  t8355 = t74*t8349;
  t8356 = t8353 + t8355;
  t8383 = -1.*t2326*t1563*t8356;
  t8387 = -1.*t1470*t2375*t8356;
  t8391 = t8383 + t8387;
  t8405 = t1470*t2326*t8356;
  t8406 = -1.*t1563*t2375*t8356;
  t8419 = t8405 + t8406;
  t8426 = t2921*t8391;
  t8427 = t2858*t8419;
  t8438 = t8426 + t8427;
  t8444 = t2858*t8391;
  t8450 = -1.*t2921*t8419;
  t8451 = t8444 + t8450;
  t8461 = -1.*t3279*t8438;
  t8462 = t3188*t8451;
  t8464 = t8461 + t8462;
  t8479 = t3188*t8438;
  t8484 = t3279*t8451;
  t8485 = t8479 + t8484;
  t8541 = -1.*t1563*t4334;
  t8545 = -1.*t1470*t4489;
  t8547 = t8541 + t8545;
  t8558 = t2375*t8547;
  t8562 = t8558 + t4618;
  t8572 = t2326*t8547;
  t8576 = -1.*t2375*t4554;
  t8578 = t8572 + t8576;
  t8582 = -1.*t2921*t8562;
  t8584 = t2858*t8578;
  t8591 = t8582 + t8584;
  t8608 = t2858*t8562;
  t8617 = t2921*t8578;
  t8621 = t8608 + t8617;
  t8668 = t3279*t8591;
  t8670 = t3188*t8621;
  t8674 = t8668 + t8670;
  t8686 = t3188*t8591;
  t8688 = -1.*t3279*t8621;
  t8690 = t8686 + t8688;
  t8508 = 0.049*t1470;
  t8512 = t8508 + t2022;
  t8518 = -0.09*t1470;
  t8524 = -0.049*t1563;
  t8527 = t8518 + t8524;
  t8764 = t74*t11*t481;
  t8769 = t386*t8058;
  t8774 = t8764 + t8769;
  t8778 = -1.*t1563*t7759;
  t8780 = -1.*t1470*t8774;
  t8781 = t8778 + t8780;
  t8793 = t1470*t7759;
  t8795 = -1.*t1563*t8774;
  t8796 = t8793 + t8795;
  t8804 = t2375*t8781;
  t8806 = t2326*t8796;
  t8810 = t8804 + t8806;
  t8814 = t2326*t8781;
  t8817 = -1.*t2375*t8796;
  t8828 = t8814 + t8817;
  t8838 = -1.*t2921*t8810;
  t8848 = t2858*t8828;
  t8850 = t8838 + t8848;
  t8864 = t2858*t8810;
  t8869 = t2921*t8828;
  t8875 = t8864 + t8869;
  t8877 = t3279*t8850;
  t8880 = t3188*t8875;
  t8883 = t8877 + t8880;
  t8891 = t3188*t8850;
  t8914 = -1.*t3279*t8875;
  t8916 = t8891 + t8914;
  t8979 = -1.*t74*t671;
  t8985 = t386*t8349;
  t8989 = t8979 + t8985;
  t8993 = -1.*t1563*t7137;
  t8994 = -1.*t1470*t8989;
  t8999 = t8993 + t8994;
  t9012 = t1470*t7137;
  t9013 = -1.*t1563*t8989;
  t9019 = t9012 + t9013;
  t9024 = t2375*t8999;
  t9031 = t2326*t9019;
  t9036 = t9024 + t9031;
  t9046 = t2326*t8999;
  t9051 = -1.*t2375*t9019;
  t9061 = t9046 + t9051;
  t9070 = -1.*t2921*t9036;
  t9071 = t2858*t9061;
  t9074 = t9070 + t9071;
  t9081 = t2858*t9036;
  t9089 = t2921*t9061;
  t9093 = t9081 + t9089;
  t9095 = t3279*t9074;
  t9103 = t3188*t9093;
  t9104 = t9095 + t9103;
  t9111 = t3188*t9074;
  t9118 = -1.*t3279*t9093;
  t9130 = t9111 + t9118;
  t9227 = -1.*t2326*t4528;
  t9229 = t9227 + t8576;
  t9242 = -1.*t2921*t4676;
  t9244 = t2858*t9229;
  t9245 = t9242 + t9244;
  t9260 = t2921*t9229;
  t9272 = t4815 + t9260;
  t9278 = t3279*t9245;
  t9284 = t3188*t9272;
  t9286 = t9278 + t9284;
  t9288 = t3188*t9245;
  t9291 = -1.*t3279*t9272;
  t9297 = t9288 + t9291;
  t9194 = -0.21*t2326;
  t9199 = -0.049*t2375;
  t9209 = t9194 + t9199;
  t9211 = 0.049*t2326;
  t9213 = t9211 + t2394;
  t9361 = t1563*t7759;
  t9370 = t1470*t8774;
  t9371 = t9361 + t9370;
  t9381 = -1.*t2375*t9371;
  t9387 = t9381 + t8806;
  t9391 = -1.*t2326*t9371;
  t9396 = t9391 + t8817;
  t9404 = -1.*t2921*t9387;
  t9412 = t2858*t9396;
  t9414 = t9404 + t9412;
  t9420 = t2858*t9387;
  t9421 = t2921*t9396;
  t9422 = t9420 + t9421;
  t9425 = t3279*t9414;
  t9435 = t3188*t9422;
  t9443 = t9425 + t9435;
  t9458 = t3188*t9414;
  t9461 = -1.*t3279*t9422;
  t9466 = t9458 + t9461;
  t9517 = t1563*t7137;
  t9518 = t1470*t8989;
  t9519 = t9517 + t9518;
  t9530 = -1.*t2375*t9519;
  t9531 = t9530 + t9031;
  t9534 = -1.*t2326*t9519;
  t9535 = t9534 + t9051;
  t9539 = -1.*t2921*t9531;
  t9541 = t2858*t9535;
  t9542 = t9539 + t9541;
  t9548 = t2858*t9531;
  t9556 = t2921*t9535;
  t9558 = t9548 + t9556;
  t9578 = t3279*t9542;
  t9579 = t3188*t9558;
  t9584 = t9578 + t9579;
  t9591 = t3188*t9542;
  t9592 = -1.*t3279*t9558;
  t9595 = t9591 + t9592;
  t9695 = -1.*t2858*t4759;
  t9710 = t9242 + t9695;
  t9726 = t3279*t9710;
  t9736 = t9726 + t4869;
  t9754 = t3188*t9710;
  t9764 = -1.*t3279*t4856;
  t9772 = t9754 + t9764;
  t9659 = 0.0016*t2858;
  t9660 = t9659 + t3121;
  t9667 = -0.2707*t2858;
  t9679 = -0.0016*t2921;
  t9685 = t9667 + t9679;
  t9833 = t2326*t9371;
  t9835 = t2375*t8796;
  t9851 = t9833 + t9835;
  t9864 = -1.*t2858*t9851;
  t9871 = t9404 + t9864;
  t9882 = -1.*t2921*t9851;
  t9889 = t9420 + t9882;
  t9892 = t3279*t9871;
  t9894 = t3188*t9889;
  t9895 = t9892 + t9894;
  t9900 = t3188*t9871;
  t9902 = -1.*t3279*t9889;
  t9903 = t9900 + t9902;
  t9953 = t2326*t9519;
  t9954 = t2375*t9019;
  t9955 = t9953 + t9954;
  t9958 = -1.*t2858*t9955;
  t9962 = t9539 + t9958;
  t9964 = -1.*t2921*t9955;
  t9966 = t9548 + t9964;
  t9983 = t3279*t9962;
  t9991 = t3188*t9966;
  t9995 = t9983 + t9991;
  t10006 = t3188*t9962;
  t10020 = -1.*t3279*t9966;
  t10021 = t10006 + t10020;
  t10121 = -1.*t3188*t4797;
  t10122 = t10121 + t9764;
  t5030 = t3632*t4872;
  t10070 = -0.7055*t3188;
  t10076 = 0.0184*t3279;
  t10085 = t10070 + t10076;
  t10098 = -0.0184*t3188;
  t10111 = t10098 + t3290;
  t10146 = t2921*t9387;
  t10147 = t2858*t9851;
  t10148 = t10146 + t10147;
  t10153 = -1.*t3279*t10148;
  t10156 = t10153 + t9894;
  t10165 = -1.*t3188*t10148;
  t10169 = t10165 + t9902;
  t10234 = t2921*t9531;
  t10239 = t2858*t9955;
  t10242 = t10234 + t10239;
  t10276 = -1.*t3279*t10242;
  t10277 = t10276 + t9991;
  t10286 = -1.*t3188*t10242;
  t10288 = t10286 + t10020;
  t10125 = -1.*t3689*t4872;
  t5037 = -1.*t3689*t4927;
  t5044 = t5030 + t5037;
  t10316 = 0.0216*t3632;
  t10317 = t10316 + t3822;
  t10325 = -1.1135*t3632;
  t10326 = -0.0216*t3689;
  t10327 = t10325 + t10326;
  t10179 = -1.*t3689*t10156;
  t10349 = t3188*t10148;
  t10353 = t3279*t9889;
  t10356 = t10349 + t10353;
  t10192 = t3632*t10156;
  t10292 = -1.*t3689*t10277;
  t10411 = t3188*t10242;
  t10419 = t3279*t9966;
  t10421 = t10411 + t10419;
  t10302 = t3632*t10277;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1043*t1097 + t1350*t1417 + t1657*t1810 + t2062*t2309 + t2405*t2532 + t2680*t2729 + t2959*t3023 + t3134*t3168 + t3319*t3506 + t3598*t3609 + t3721*t3779 + t3829*t3871 + 0.088451*(t3689*t3779 + t3632*t3871) - 1.062256*(t3632*t3779 - 1.*t3689*t3871) - 1.*t11*t437*t481 - 0.1305*(t11*t386*t481 + t1417*t74) + t607*t834;
  p_output1[10]=t1043*t4239 + t1350*t4292 + t1657*t4334 - 0.1305*t4431 + t2062*t4489 + t2405*t4528 + t2680*t4554 + t2959*t4676 + t3134*t4759 + t3319*t4797 + t3598*t4856 + t3721*t4872 + t3829*t4927 + 0.088451*(t3689*t4872 + t3632*t4927) - 1.062256*t5044 + t4168*t607 + t11*t437*t739;
  p_output1[11]=0;
  p_output1[12]=t1350*t5094 + t1657*t5120 + t2062*t5174 + t2405*t5225 + t2680*t5258 + t2959*t5334 + t3134*t5372 + t3319*t5413 + t3598*t5435 + t3721*t5475 + t3829*t5496 + 0.088451*(t3689*t5475 + t3632*t5496) - 1.062256*(t3632*t5475 - 1.*t3689*t5496) + t11*t607*t621*t739 - 1.*t437*t671*t739 - 0.1305*(t386*t671*t739 + t5094*t74) + t1043*t11*t739*t793;
  p_output1[13]=t1350*t5637 + t1657*t5656 + t2062*t5724 + t2405*t5747 + t2680*t5769 + t2959*t5800 + t3134*t5825 + t3319*t5852 + t3598*t5859 + t3721*t5884 + t3829*t5917 + 0.088451*(t3689*t5884 + t3632*t5917) - 1.062256*(t3632*t5884 - 1.*t3689*t5917) + t11*t481*t607*t621 - 1.*t437*t481*t671 - 0.1305*(t386*t481*t671 + t5637*t74) + t1043*t11*t481*t793;
  p_output1[14]=-1.*t11*t437 + t1350*t6053 + t1657*t6070 + t2062*t6124 + t2405*t6172 + t2680*t6254 + t2959*t6285 + t3134*t6309 + t3319*t6323 + t3598*t6341 + t3721*t6403 + t3829*t6424 + 0.088451*(t3689*t6403 + t3632*t6424) - 1.062256*(t3632*t6403 - 1.*t3689*t6424) - 1.*t607*t621*t671 - 0.1305*(t11*t386 + t6053*t74) - 1.*t1043*t671*t793;
  p_output1[15]=t1043*t4168 + t607*t6496 + t1657*t6504 + t1350*t6508 + t2062*t386*t6508 + t2405*t6532 + t2680*t6552 + t2959*t6581 + t3134*t6595 + t3319*t6626 + t3598*t6638 + t3721*t6660 + t3829*t6681 + 0.088451*(t3689*t6660 + t3632*t6681) - 1.062256*(t3632*t6660 - 1.*t3689*t6681) - 0.1305*t6508*t74;
  p_output1[16]=t1097*t607 + t1043*t6754 + t1657*t6763 + t1350*t6793 + t2062*t386*t6793 + t2405*t6827 + t2680*t6850 + t2959*t6878 + t3134*t6897 + t3319*t6909 + t3598*t6929 + t3721*t6987 + t3829*t7019 + 0.088451*(t3689*t6987 + t3632*t7019) - 1.062256*(t3632*t6987 - 1.*t3689*t7019) - 0.1305*t6793*t74;
  p_output1[17]=t1043*t11*t621 + t7118 + t7144 + t7149 + t7150 + t7182 + t7196 + t7209 + t7222 + t7241 + t7259 + t7302 + t7315 + t7340 + t7367 - 1.*t11*t607*t793;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
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
  p_output1[39]=t1350*t4334 + t2062*t386*t4334 - 0.135*t4239*t510 + t1657*t7383 - 0.1305*t4334*t74 + t2405*t7461 + t2680*t7515 + t2959*t7592 + t3134*t7602 + t3319*t7619 + t3598*t7640 + t3721*t7668 + t3829*t7687 + 0.088451*(t3689*t7668 + t3632*t7687) - 1.062256*(t3632*t7668 - 1.*t3689*t7687) + 0.135*t4168*t941;
  p_output1[40]=-0.135*t510*t7734 + t1657*t7749 + t1350*t7759 + t2062*t386*t7759 - 0.1305*t74*t7759 + t2405*t7783 + t2680*t7795 + t2959*t7804 + t3134*t7812 + t3319*t7821 + t3598*t7840 + t3721*t7859 + t3829*t7870 + 0.088451*(t3689*t7859 + t3632*t7870) - 1.062256*(t3632*t7859 - 1.*t3689*t7870) + 0.135*t6754*t941;
  p_output1[41]=t7118 + t7144 + t7149 + t7150 + t7182 + t7196 + t7209 + t7222 + t7241 + t7259 + t7302 + t7315 + t7340 + t7367 - 0.135*t11*t510*t793 + 0.135*t11*t621*t941;
  p_output1[42]=t2062*t4431 + t1470*t2405*t4431 - 1.*t1563*t2680*t4431 - 0.1305*(-1.*t386*t4292 - 1.*t11*t739*t74) + t11*t739*t7908 + t4292*t7916 + t2959*t7937 + t3134*t7942 + t3319*t7948 + t3598*t7954 + t3721*t7961 + t3829*t7972 + 0.088451*(t3689*t7961 + t3632*t7972) - 1.062256*(t3632*t7961 - 1.*t3689*t7972);
  p_output1[43]=t11*t481*t7908 + t7916*t8058 - 0.1305*(t2255 - 1.*t386*t8058) + t2062*t8075 + t1470*t2405*t8075 - 1.*t1563*t2680*t8075 + t2959*t8126 + t3134*t8140 + t3319*t8154 + t3598*t8201 + t3721*t8215 + t3829*t8252 + 0.088451*(t3689*t8215 + t3632*t8252) - 1.062256*(t3632*t8215 - 1.*t3689*t8252);
  p_output1[44]=-1.*t671*t7908 + t7916*t8349 - 0.1305*(t671*t74 - 1.*t386*t8349) + t2062*t8356 + t1470*t2405*t8356 - 1.*t1563*t2680*t8356 + t2959*t8391 + t3134*t8419 + t3319*t8438 + t3598*t8451 + t3721*t8464 + t3829*t8485 + 0.088451*(t3689*t8464 + t3632*t8485) - 1.062256*(t3632*t8464 - 1.*t3689*t8485);
  p_output1[45]=t2405*t4554 + t4334*t8512 + t4489*t8527 + t2680*t8547 + t3134*t8562 + t2959*t8578 + t3598*t8591 + t3319*t8621 + t3829*t8674 + t3721*t8690 - 1.062256*(-1.*t3689*t8674 + t3632*t8690) + 0.088451*(t3632*t8674 + t3689*t8690);
  p_output1[46]=t7759*t8512 + t8527*t8774 + t2680*t8781 + t2405*t8796 + t3134*t8810 + t2959*t8828 + t3598*t8850 + t3319*t8875 + t3829*t8883 + t3721*t8916 - 1.062256*(-1.*t3689*t8883 + t3632*t8916) + 0.088451*(t3632*t8883 + t3689*t8916);
  p_output1[47]=t7137*t8512 + t8527*t8989 + t2680*t8999 + t2405*t9019 + t3134*t9036 + t2959*t9061 + t3598*t9074 + t3319*t9093 + t3829*t9104 + t3721*t9130 - 1.062256*(-1.*t3689*t9104 + t3632*t9130) + 0.088451*(t3632*t9104 + t3689*t9130);
  p_output1[48]=t3134*t4676 + t4528*t9209 + t4554*t9213 + t2959*t9229 + t3598*t9245 + t3319*t9272 + t3829*t9286 + t3721*t9297 - 1.062256*(-1.*t3689*t9286 + t3632*t9297) + 0.088451*(t3632*t9286 + t3689*t9297);
  p_output1[49]=t8796*t9213 + t9209*t9371 + t3134*t9387 + t2959*t9396 + t3598*t9414 + t3319*t9422 + t3829*t9443 + t3721*t9466 - 1.062256*(-1.*t3689*t9443 + t3632*t9466) + 0.088451*(t3632*t9443 + t3689*t9466);
  p_output1[50]=t9019*t9213 + t9209*t9519 + t3134*t9531 + t2959*t9535 + t3598*t9542 + t3319*t9558 + t3829*t9584 + t3721*t9595 - 1.062256*(-1.*t3689*t9584 + t3632*t9595) + 0.088451*(t3632*t9584 + t3689*t9595);
  p_output1[51]=t3319*t4856 + t4676*t9660 + t4759*t9685 + t3598*t9710 + t3829*t9736 + t3721*t9772 - 1.062256*(-1.*t3689*t9736 + t3632*t9772) + 0.088451*(t3632*t9736 + t3689*t9772);
  p_output1[52]=t9387*t9660 + t9685*t9851 + t3598*t9871 + t3319*t9889 + t3829*t9895 + t3721*t9903 - 1.062256*(-1.*t3689*t9895 + t3632*t9903) + 0.088451*(t3632*t9895 + t3689*t9903);
  p_output1[53]=t10021*t3721 + t9531*t9660 + t9685*t9955 + t3598*t9962 + t3319*t9966 + t3829*t9995 + 0.088451*(t10021*t3689 + t3632*t9995) - 1.062256*(t10021*t3632 - 1.*t3689*t9995);
  p_output1[54]=-1.062256*(t10125 + t10122*t3632) + t10122*t3721 + t10085*t4797 + t10111*t4856 + t3829*t4872 + 0.088451*(t10122*t3689 + t5030);
  p_output1[55]=t10085*t10148 - 1.062256*(t10179 + t10169*t3632) + 0.088451*(t10192 + t10169*t3689) + t10169*t3721 + t10156*t3829 + t10111*t9889;
  p_output1[56]=t10085*t10242 - 1.062256*(t10292 + t10288*t3632) + 0.088451*(t10302 + t10288*t3689) + t10288*t3721 + t10277*t3829 + t10111*t9966;
  p_output1[57]=t10317*t4872 + t10327*t4927 - 1.062256*(t10125 - 1.*t3632*t4927) + 0.088451*t5044;
  p_output1[58]=t10156*t10317 + t10327*t10356 - 1.062256*(t10179 - 1.*t10356*t3632) + 0.088451*(t10192 - 1.*t10356*t3689);
  p_output1[59]=t10277*t10317 + t10327*t10421 - 1.062256*(t10292 - 1.*t10421*t3632) + 0.088451*(t10302 - 1.*t10421*t3689);
}



void Jp_RightToeFront_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}

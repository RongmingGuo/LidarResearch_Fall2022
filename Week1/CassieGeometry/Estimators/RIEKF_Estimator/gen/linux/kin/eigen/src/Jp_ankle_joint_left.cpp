/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:44:19 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_ankle_joint_left.h"

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
  double t348;
  double t448;
  double t512;
  double t268;
  double t522;
  double t59;
  double t362;
  double t675;
  double t683;
  double t831;
  double t845;
  double t853;
  double t922;
  double t1190;
  double t1194;
  double t1266;
  double t1389;
  double t1114;
  double t1126;
  double t1186;
  double t1647;
  double t2026;
  double t2052;
  double t2058;
  double t2098;
  double t1945;
  double t1974;
  double t1975;
  double t2152;
  double t2168;
  double t2218;
  double t2309;
  double t2325;
  double t2339;
  double t2387;
  double t2465;
  double t2466;
  double t2483;
  double t2648;
  double t2697;
  double t2707;
  double t2833;
  double t2838;
  double t2868;
  double t2918;
  double t2958;
  double t2962;
  double t2986;
  double t3138;
  double t3176;
  double t3230;
  double t3236;
  double t3237;
  double t3245;
  double t3270;
  double t3359;
  double t3362;
  double t3389;
  double t3459;
  double t3522;
  double t3551;
  double t135;
  double t168;
  double t169;
  double t217;
  double t937;
  double t959;
  double t3814;
  double t3832;
  double t3849;
  double t3873;
  double t3929;
  double t3932;
  double t1378;
  double t1415;
  double t1467;
  double t1733;
  double t1771;
  double t1779;
  double t3934;
  double t3935;
  double t4082;
  double t2062;
  double t2101;
  double t2107;
  double t2220;
  double t2229;
  double t2231;
  double t2346;
  double t2412;
  double t2462;
  double t4262;
  double t4276;
  double t4279;
  double t4411;
  double t4418;
  double t4426;
  double t2517;
  double t2542;
  double t2630;
  double t2904;
  double t2931;
  double t2952;
  double t4573;
  double t4582;
  double t4597;
  double t4630;
  double t4695;
  double t4767;
  double t3064;
  double t3104;
  double t3132;
  double t3264;
  double t3320;
  double t3347;
  double t4854;
  double t4871;
  double t4881;
  double t4937;
  double t4938;
  double t4947;
  double t3413;
  double t3416;
  double t3428;
  double t4951;
  double t4959;
  double t4969;
  double t5002;
  double t5012;
  double t5024;
  double t5188;
  double t5190;
  double t5195;
  double t5218;
  double t5259;
  double t5270;
  double t5284;
  double t5316;
  double t5326;
  double t5351;
  double t5357;
  double t5358;
  double t5384;
  double t5396;
  double t5397;
  double t5404;
  double t5405;
  double t5412;
  double t5424;
  double t5435;
  double t5437;
  double t5451;
  double t5459;
  double t5465;
  double t5492;
  double t5517;
  double t5524;
  double t5631;
  double t5633;
  double t5644;
  double t5682;
  double t5698;
  double t5703;
  double t5736;
  double t5739;
  double t5744;
  double t5749;
  double t5780;
  double t5791;
  double t5819;
  double t5833;
  double t5834;
  double t5851;
  double t5853;
  double t5856;
  double t5870;
  double t5887;
  double t5893;
  double t5903;
  double t5909;
  double t5911;
  double t5915;
  double t5923;
  double t5927;
  double t6023;
  double t6084;
  double t6095;
  double t6222;
  double t6232;
  double t6330;
  double t6377;
  double t6548;
  double t6584;
  double t6630;
  double t6641;
  double t6647;
  double t6669;
  double t6672;
  double t6709;
  double t6723;
  double t6764;
  double t6787;
  double t6852;
  double t6894;
  double t6895;
  double t6915;
  double t6924;
  double t6933;
  double t6974;
  double t7047;
  double t7048;
  double t7270;
  double t7271;
  double t7276;
  double t7288;
  double t7317;
  double t7336;
  double t7347;
  double t7349;
  double t7352;
  double t7358;
  double t7359;
  double t7369;
  double t7378;
  double t7380;
  double t7383;
  double t7385;
  double t7386;
  double t7397;
  double t7404;
  double t7408;
  double t7412;
  double t7416;
  double t7427;
  double t7436;
  double t7444;
  double t7458;
  double t7535;
  double t7539;
  double t7549;
  double t7565;
  double t7576;
  double t7583;
  double t7610;
  double t7626;
  double t7654;
  double t7659;
  double t7665;
  double t7682;
  double t7694;
  double t7706;
  double t7725;
  double t7726;
  double t7741;
  double t7745;
  double t7750;
  double t7753;
  double t7755;
  double t7759;
  double t7760;
  double t7771;
  double t7774;
  double t7778;
  double t7887;
  double t7900;
  double t7917;
  double t7933;
  double t7940;
  double t7941;
  double t7950;
  double t7951;
  double t7963;
  double t7982;
  double t7985;
  double t7990;
  double t7997;
  double t8011;
  double t8015;
  double t8023;
  double t8026;
  double t8030;
  double t8036;
  double t8041;
  double t8043;
  double t8048;
  double t8057;
  double t8058;
  double t8145;
  double t8154;
  double t8157;
  double t8166;
  double t8175;
  double t8187;
  double t8188;
  double t8195;
  double t8212;
  double t8227;
  double t8232;
  double t8247;
  double t8248;
  double t8254;
  double t8259;
  double t8260;
  double t8269;
  double t8282;
  double t8283;
  double t8287;
  double t8349;
  double t8354;
  double t8355;
  double t8363;
  double t8365;
  double t8389;
  double t8390;
  double t8400;
  double t8401;
  double t8403;
  double t8413;
  double t8414;
  double t8428;
  double t8430;
  double t8437;
  double t8440;
  double t8447;
  double t8453;
  double t8454;
  double t8466;
  double t8472;
  double t8485;
  double t8496;
  double t8503;
  double t8506;
  double t7919;
  double t7922;
  double t7924;
  double t7943;
  double t7964;
  double t7991;
  double t8018;
  double t8033;
  double t8044;
  double t8060;
  double t8061;
  double t8067;
  double t8068;
  double t8069;
  double t8074;
  double t8075;
  double t8077;
  double t8082;
  double t4203;
  double t4242;
  double t4252;
  double t8593;
  double t8594;
  double t8595;
  double t8608;
  double t8612;
  double t8615;
  double t8618;
  double t8621;
  double t8622;
  double t8640;
  double t8641;
  double t8642;
  double t8542;
  double t8547;
  double t8549;
  double t8552;
  double t8553;
  double t8678;
  double t8684;
  double t8686;
  double t8692;
  double t8693;
  double t8696;
  double t8740;
  double t8744;
  double t8747;
  double t8752;
  double t8756;
  double t8757;
  double t8777;
  double t8778;
  double t8781;
  double t8791;
  double t8794;
  double t8800;
  double t8831;
  double t8864;
  double t8875;
  double t8882;
  double t8884;
  double t8904;
  double t8961;
  double t8966;
  double t8968;
  double t8976;
  double t8978;
  double t8979;
  double t8983;
  double t8990;
  double t8992;
  double t9002;
  double t9006;
  double t9010;
  double t9098;
  double t9111;
  double t9117;
  double t9133;
  double t9136;
  double t9142;
  double t9147;
  double t9148;
  double t9156;
  double t9158;
  double t9159;
  double t9163;
  double t9168;
  double t9175;
  double t9071;
  double t9072;
  double t9076;
  double t9077;
  double t9087;
  double t9218;
  double t9219;
  double t9225;
  double t9229;
  double t9232;
  double t9233;
  double t9247;
  double t9252;
  double t9256;
  double t9264;
  double t9266;
  double t9274;
  double t9276;
  double t9278;
  double t9281;
  double t9284;
  double t9285;
  double t9288;
  double t9301;
  double t9302;
  double t9306;
  double t9329;
  double t9330;
  double t9334;
  double t9340;
  double t9348;
  double t9351;
  double t9356;
  double t9357;
  double t9366;
  double t9370;
  double t9375;
  double t9376;
  double t9382;
  double t9385;
  double t9387;
  double t9390;
  double t9391;
  double t9393;
  double t9399;
  double t9408;
  double t9409;
  double t9471;
  double t9472;
  double t9474;
  double t9475;
  double t9484;
  double t9488;
  double t9491;
  double t9447;
  double t9449;
  double t9451;
  double t9461;
  double t9464;
  double t9514;
  double t9515;
  double t9516;
  double t9525;
  double t9526;
  double t9535;
  double t9541;
  double t9546;
  double t9547;
  double t9552;
  double t9556;
  double t9557;
  double t9558;
  double t9585;
  double t9586;
  double t9588;
  double t9595;
  double t9597;
  double t9604;
  double t9609;
  double t9615;
  double t9617;
  double t9621;
  double t9625;
  double t9627;
  double t9629;
  double t9677;
  double t9679;
  double t5052;
  double t9649;
  double t9652;
  double t9657;
  double t9663;
  double t9668;
  double t9728;
  double t9729;
  double t9731;
  double t9735;
  double t9737;
  double t9740;
  double t9747;
  double t9783;
  double t9785;
  double t9786;
  double t9789;
  double t9790;
  double t9795;
  double t9796;
  double t5039;
  double t5066;
  double t9719;
  double t9828;
  double t9832;
  double t9835;
  double t9839;
  double t9842;
  double t9856;
  double t9857;
  double t9865;
  double t9759;
  double t9771;
  double t9889;
  double t9894;
  double t9895;
  double t9809;
  double t9821;
  t348 = Cos(var1[5]);
  t448 = Sin(var1[3]);
  t512 = Sin(var1[4]);
  t268 = Cos(var1[3]);
  t522 = Sin(var1[5]);
  t59 = Cos(var1[6]);
  t362 = -1.*t268*t348;
  t675 = -1.*t448*t512*t522;
  t683 = t362 + t675;
  t831 = -1.*t348*t448*t512;
  t845 = t268*t522;
  t853 = t831 + t845;
  t922 = Sin(var1[6]);
  t1190 = Cos(var1[7]);
  t1194 = -1.*t1190;
  t1266 = 1. + t1194;
  t1389 = Sin(var1[7]);
  t1114 = t59*t683;
  t1126 = t853*t922;
  t1186 = t1114 + t1126;
  t1647 = Cos(var1[4]);
  t2026 = Cos(var1[8]);
  t2052 = -1.*t2026;
  t2058 = 1. + t2052;
  t2098 = Sin(var1[8]);
  t1945 = -1.*t1647*t1190*t448;
  t1974 = t1186*t1389;
  t1975 = t1945 + t1974;
  t2152 = t59*t853;
  t2168 = -1.*t683*t922;
  t2218 = t2152 + t2168;
  t2309 = Cos(var1[9]);
  t2325 = -1.*t2309;
  t2339 = 1. + t2325;
  t2387 = Sin(var1[9]);
  t2465 = t2026*t1975;
  t2466 = t2218*t2098;
  t2483 = t2465 + t2466;
  t2648 = t2026*t2218;
  t2697 = -1.*t1975*t2098;
  t2707 = t2648 + t2697;
  t2833 = Cos(var1[10]);
  t2838 = -1.*t2833;
  t2868 = 1. + t2838;
  t2918 = Sin(var1[10]);
  t2958 = -1.*t2387*t2483;
  t2962 = t2309*t2707;
  t2986 = t2958 + t2962;
  t3138 = t2309*t2483;
  t3176 = t2387*t2707;
  t3230 = t3138 + t3176;
  t3236 = Cos(var1[11]);
  t3237 = -1.*t3236;
  t3245 = 1. + t3237;
  t3270 = Sin(var1[11]);
  t3359 = t2918*t2986;
  t3362 = t2833*t3230;
  t3389 = t3359 + t3362;
  t3459 = t2833*t2986;
  t3522 = -1.*t2918*t3230;
  t3551 = t3459 + t3522;
  t135 = -1.*t59;
  t168 = 1. + t135;
  t169 = 0.135*t168;
  t217 = 0. + t169;
  t937 = -0.135*t922;
  t959 = 0. + t937;
  t3814 = -1.*t348*t448;
  t3832 = t268*t512*t522;
  t3849 = t3814 + t3832;
  t3873 = t268*t348*t512;
  t3929 = t448*t522;
  t3932 = t3873 + t3929;
  t1378 = 0.135*t1266;
  t1415 = 0.049*t1389;
  t1467 = 0. + t1378 + t1415;
  t1733 = -0.049*t1266;
  t1771 = 0.135*t1389;
  t1779 = 0. + t1733 + t1771;
  t3934 = t59*t3849;
  t3935 = t3932*t922;
  t4082 = t3934 + t3935;
  t2062 = -0.049*t2058;
  t2101 = -0.09*t2098;
  t2107 = 0. + t2062 + t2101;
  t2220 = -0.09*t2058;
  t2229 = 0.049*t2098;
  t2231 = 0. + t2220 + t2229;
  t2346 = -0.049*t2339;
  t2412 = -0.21*t2387;
  t2462 = 0. + t2346 + t2412;
  t4262 = t268*t1647*t1190;
  t4276 = t4082*t1389;
  t4279 = t4262 + t4276;
  t4411 = t59*t3932;
  t4418 = -1.*t3849*t922;
  t4426 = t4411 + t4418;
  t2517 = -0.21*t2339;
  t2542 = 0.049*t2387;
  t2630 = 0. + t2517 + t2542;
  t2904 = -0.2707*t2868;
  t2931 = 0.0016*t2918;
  t2952 = 0. + t2904 + t2931;
  t4573 = t2026*t4279;
  t4582 = t4426*t2098;
  t4597 = t4573 + t4582;
  t4630 = t2026*t4426;
  t4695 = -1.*t4279*t2098;
  t4767 = t4630 + t4695;
  t3064 = -0.0016*t2868;
  t3104 = -0.2707*t2918;
  t3132 = 0. + t3064 + t3104;
  t3264 = 0.0184*t3245;
  t3320 = -0.7055*t3270;
  t3347 = 0. + t3264 + t3320;
  t4854 = -1.*t2387*t4597;
  t4871 = t2309*t4767;
  t4881 = t4854 + t4871;
  t4937 = t2309*t4597;
  t4938 = t2387*t4767;
  t4947 = t4937 + t4938;
  t3413 = -0.7055*t3245;
  t3416 = -0.0184*t3270;
  t3428 = 0. + t3413 + t3416;
  t4951 = t2918*t4881;
  t4959 = t2833*t4947;
  t4969 = t4951 + t4959;
  t5002 = t2833*t4881;
  t5012 = -1.*t2918*t4947;
  t5024 = t5002 + t5012;
  t5188 = t268*t1647*t59*t522;
  t5190 = t268*t1647*t348*t922;
  t5195 = t5188 + t5190;
  t5218 = -1.*t268*t1190*t512;
  t5259 = t5195*t1389;
  t5270 = t5218 + t5259;
  t5284 = t268*t1647*t348*t59;
  t5316 = -1.*t268*t1647*t522*t922;
  t5326 = t5284 + t5316;
  t5351 = t2026*t5270;
  t5357 = t5326*t2098;
  t5358 = t5351 + t5357;
  t5384 = t2026*t5326;
  t5396 = -1.*t5270*t2098;
  t5397 = t5384 + t5396;
  t5404 = -1.*t2387*t5358;
  t5405 = t2309*t5397;
  t5412 = t5404 + t5405;
  t5424 = t2309*t5358;
  t5435 = t2387*t5397;
  t5437 = t5424 + t5435;
  t5451 = t2918*t5412;
  t5459 = t2833*t5437;
  t5465 = t5451 + t5459;
  t5492 = t2833*t5412;
  t5517 = -1.*t2918*t5437;
  t5524 = t5492 + t5517;
  t5631 = t1647*t59*t448*t522;
  t5633 = t1647*t348*t448*t922;
  t5644 = t5631 + t5633;
  t5682 = -1.*t1190*t448*t512;
  t5698 = t5644*t1389;
  t5703 = t5682 + t5698;
  t5736 = t1647*t348*t59*t448;
  t5739 = -1.*t1647*t448*t522*t922;
  t5744 = t5736 + t5739;
  t5749 = t2026*t5703;
  t5780 = t5744*t2098;
  t5791 = t5749 + t5780;
  t5819 = t2026*t5744;
  t5833 = -1.*t5703*t2098;
  t5834 = t5819 + t5833;
  t5851 = -1.*t2387*t5791;
  t5853 = t2309*t5834;
  t5856 = t5851 + t5853;
  t5870 = t2309*t5791;
  t5887 = t2387*t5834;
  t5893 = t5870 + t5887;
  t5903 = t2918*t5856;
  t5909 = t2833*t5893;
  t5911 = t5903 + t5909;
  t5915 = t2833*t5856;
  t5923 = -1.*t2918*t5893;
  t5927 = t5915 + t5923;
  t6023 = -1.*t59*t512*t522;
  t6084 = -1.*t348*t512*t922;
  t6095 = t6023 + t6084;
  t6222 = -1.*t1647*t1190;
  t6232 = t6095*t1389;
  t6330 = t6222 + t6232;
  t6377 = -1.*t348*t59*t512;
  t6548 = t512*t522*t922;
  t6584 = t6377 + t6548;
  t6630 = t2026*t6330;
  t6641 = t6584*t2098;
  t6647 = t6630 + t6641;
  t6669 = t2026*t6584;
  t6672 = -1.*t6330*t2098;
  t6709 = t6669 + t6672;
  t6723 = -1.*t2387*t6647;
  t6764 = t2309*t6709;
  t6787 = t6723 + t6764;
  t6852 = t2309*t6647;
  t6894 = t2387*t6709;
  t6895 = t6852 + t6894;
  t6915 = t2918*t6787;
  t6924 = t2833*t6895;
  t6933 = t6915 + t6924;
  t6974 = t2833*t6787;
  t7047 = -1.*t2918*t6895;
  t7048 = t6974 + t7047;
  t7270 = t348*t448;
  t7271 = -1.*t268*t512*t522;
  t7276 = t7270 + t7271;
  t7288 = t7276*t922;
  t7317 = t4411 + t7288;
  t7336 = t59*t7276;
  t7347 = -1.*t3932*t922;
  t7349 = t7336 + t7347;
  t7352 = t2026*t7317*t1389;
  t7358 = t7349*t2098;
  t7359 = t7352 + t7358;
  t7369 = t2026*t7349;
  t7378 = -1.*t7317*t1389*t2098;
  t7380 = t7369 + t7378;
  t7383 = -1.*t2387*t7359;
  t7385 = t2309*t7380;
  t7386 = t7383 + t7385;
  t7397 = t2309*t7359;
  t7404 = t2387*t7380;
  t7408 = t7397 + t7404;
  t7412 = t2918*t7386;
  t7416 = t2833*t7408;
  t7427 = t7412 + t7416;
  t7436 = t2833*t7386;
  t7444 = -1.*t2918*t7408;
  t7458 = t7436 + t7444;
  t7535 = t348*t448*t512;
  t7539 = -1.*t268*t522;
  t7549 = t7535 + t7539;
  t7565 = t59*t7549;
  t7576 = t683*t922;
  t7583 = t7565 + t7576;
  t7610 = -1.*t7549*t922;
  t7626 = t1114 + t7610;
  t7654 = t2026*t7583*t1389;
  t7659 = t7626*t2098;
  t7665 = t7654 + t7659;
  t7682 = t2026*t7626;
  t7694 = -1.*t7583*t1389*t2098;
  t7706 = t7682 + t7694;
  t7725 = -1.*t2387*t7665;
  t7726 = t2309*t7706;
  t7741 = t7725 + t7726;
  t7745 = t2309*t7665;
  t7750 = t2387*t7706;
  t7753 = t7745 + t7750;
  t7755 = t2918*t7741;
  t7759 = t2833*t7753;
  t7760 = t7755 + t7759;
  t7771 = t2833*t7741;
  t7774 = -1.*t2918*t7753;
  t7778 = t7771 + t7774;
  t7887 = t1647*t348*t59;
  t7900 = -1.*t1647*t522*t922;
  t7917 = t7887 + t7900;
  t7933 = -1.*t1647*t59*t522;
  t7940 = -1.*t1647*t348*t922;
  t7941 = t7933 + t7940;
  t7950 = t2026*t7917*t1389;
  t7951 = t7941*t2098;
  t7963 = t7950 + t7951;
  t7982 = t2026*t7941;
  t7985 = -1.*t7917*t1389*t2098;
  t7990 = t7982 + t7985;
  t7997 = -1.*t2387*t7963;
  t8011 = t2309*t7990;
  t8015 = t7997 + t8011;
  t8023 = t2309*t7963;
  t8026 = t2387*t7990;
  t8030 = t8023 + t8026;
  t8036 = t2918*t8015;
  t8041 = t2833*t8030;
  t8043 = t8036 + t8041;
  t8048 = t2833*t8015;
  t8057 = -1.*t2918*t8030;
  t8058 = t8048 + t8057;
  t8145 = -1.*t59*t3849;
  t8154 = t8145 + t7347;
  t8157 = t2026*t4426*t1389;
  t8166 = t8154*t2098;
  t8175 = t8157 + t8166;
  t8187 = t2026*t8154;
  t8188 = -1.*t4426*t1389*t2098;
  t8195 = t8187 + t8188;
  t8212 = -1.*t2387*t8175;
  t8227 = t2309*t8195;
  t8232 = t8212 + t8227;
  t8247 = t2309*t8175;
  t8248 = t2387*t8195;
  t8254 = t8247 + t8248;
  t8259 = t2918*t8232;
  t8260 = t2833*t8254;
  t8269 = t8259 + t8260;
  t8282 = t2833*t8232;
  t8283 = -1.*t2918*t8254;
  t8287 = t8282 + t8283;
  t8349 = t268*t348;
  t8354 = t448*t512*t522;
  t8355 = t8349 + t8354;
  t8363 = -1.*t8355*t922;
  t8365 = t7565 + t8363;
  t8389 = -1.*t59*t8355;
  t8390 = t8389 + t7610;
  t8400 = t2026*t8365*t1389;
  t8401 = t8390*t2098;
  t8403 = t8400 + t8401;
  t8413 = t2026*t8390;
  t8414 = -1.*t8365*t1389*t2098;
  t8428 = t8413 + t8414;
  t8430 = -1.*t2387*t8403;
  t8437 = t2309*t8428;
  t8440 = t8430 + t8437;
  t8447 = t2309*t8403;
  t8453 = t2387*t8428;
  t8454 = t8447 + t8453;
  t8466 = t2918*t8440;
  t8472 = t2833*t8454;
  t8485 = t8466 + t8472;
  t8496 = t2833*t8440;
  t8503 = -1.*t2918*t8454;
  t8506 = t8496 + t8503;
  t7919 = 0.1305*t1190*t7917;
  t7922 = t7917*t1467;
  t7924 = t7917*t1389*t2107;
  t7943 = t7941*t2231;
  t7964 = t2462*t7963;
  t7991 = t2630*t7990;
  t8018 = t2952*t8015;
  t8033 = t3132*t8030;
  t8044 = t3347*t8043;
  t8060 = t3428*t8058;
  t8061 = -1.*t3270*t8043;
  t8067 = t3236*t8058;
  t8068 = t8061 + t8067;
  t8069 = -0.7055*t8068;
  t8074 = t3236*t8043;
  t8075 = t3270*t8058;
  t8077 = t8074 + t8075;
  t8082 = 0.0184*t8077;
  t4203 = t1190*t4082;
  t4242 = -1.*t268*t1647*t1389;
  t4252 = t4203 + t4242;
  t8593 = -1.*t2026*t2387*t4252;
  t8594 = -1.*t2309*t4252*t2098;
  t8595 = t8593 + t8594;
  t8608 = t2309*t2026*t4252;
  t8612 = -1.*t2387*t4252*t2098;
  t8615 = t8608 + t8612;
  t8618 = t2918*t8595;
  t8621 = t2833*t8615;
  t8622 = t8618 + t8621;
  t8640 = t2833*t8595;
  t8641 = -1.*t2918*t8615;
  t8642 = t8640 + t8641;
  t8542 = 0.135*t1190;
  t8547 = -0.049*t1389;
  t8549 = t8542 + t8547;
  t8552 = 0.049*t1190;
  t8553 = t8552 + t1771;
  t8678 = t59*t8355;
  t8684 = t7549*t922;
  t8686 = t8678 + t8684;
  t8692 = t1190*t8686;
  t8693 = -1.*t1647*t448*t1389;
  t8696 = t8692 + t8693;
  t8740 = -1.*t2026*t2387*t8696;
  t8744 = -1.*t2309*t8696*t2098;
  t8747 = t8740 + t8744;
  t8752 = t2309*t2026*t8696;
  t8756 = -1.*t2387*t8696*t2098;
  t8757 = t8752 + t8756;
  t8777 = t2918*t8747;
  t8778 = t2833*t8757;
  t8781 = t8777 + t8778;
  t8791 = t2833*t8747;
  t8794 = -1.*t2918*t8757;
  t8800 = t8791 + t8794;
  t8831 = t1647*t59*t522;
  t8864 = t1647*t348*t922;
  t8875 = t8831 + t8864;
  t8882 = t1190*t8875;
  t8884 = t512*t1389;
  t8904 = t8882 + t8884;
  t8961 = -1.*t2026*t2387*t8904;
  t8966 = -1.*t2309*t8904*t2098;
  t8968 = t8961 + t8966;
  t8976 = t2309*t2026*t8904;
  t8978 = -1.*t2387*t8904*t2098;
  t8979 = t8976 + t8978;
  t8983 = t2918*t8968;
  t8990 = t2833*t8979;
  t8992 = t8983 + t8990;
  t9002 = t2833*t8968;
  t9006 = -1.*t2918*t8979;
  t9010 = t9002 + t9006;
  t9098 = -1.*t2026*t4279;
  t9111 = -1.*t4426*t2098;
  t9117 = t9098 + t9111;
  t9133 = t2387*t9117;
  t9136 = t9133 + t4871;
  t9142 = t2309*t9117;
  t9147 = -1.*t2387*t4767;
  t9148 = t9142 + t9147;
  t9156 = -1.*t2918*t9136;
  t9158 = t2833*t9148;
  t9159 = t9156 + t9158;
  t9163 = t2833*t9136;
  t9168 = t2918*t9148;
  t9175 = t9163 + t9168;
  t9071 = 0.049*t2026;
  t9072 = t9071 + t2101;
  t9076 = -0.09*t2026;
  t9077 = -0.049*t2098;
  t9087 = t9076 + t9077;
  t9218 = t1647*t1190*t448;
  t9219 = t8686*t1389;
  t9225 = t9218 + t9219;
  t9229 = -1.*t2026*t9225;
  t9232 = -1.*t8365*t2098;
  t9233 = t9229 + t9232;
  t9247 = t2026*t8365;
  t9252 = -1.*t9225*t2098;
  t9256 = t9247 + t9252;
  t9264 = t2387*t9233;
  t9266 = t2309*t9256;
  t9274 = t9264 + t9266;
  t9276 = t2309*t9233;
  t9278 = -1.*t2387*t9256;
  t9281 = t9276 + t9278;
  t9284 = -1.*t2918*t9274;
  t9285 = t2833*t9281;
  t9288 = t9284 + t9285;
  t9301 = t2833*t9274;
  t9302 = t2918*t9281;
  t9306 = t9301 + t9302;
  t9329 = -1.*t1190*t512;
  t9330 = t8875*t1389;
  t9334 = t9329 + t9330;
  t9340 = -1.*t2026*t9334;
  t9348 = -1.*t7917*t2098;
  t9351 = t9340 + t9348;
  t9356 = t2026*t7917;
  t9357 = -1.*t9334*t2098;
  t9366 = t9356 + t9357;
  t9370 = t2387*t9351;
  t9375 = t2309*t9366;
  t9376 = t9370 + t9375;
  t9382 = t2309*t9351;
  t9385 = -1.*t2387*t9366;
  t9387 = t9382 + t9385;
  t9390 = -1.*t2918*t9376;
  t9391 = t2833*t9387;
  t9393 = t9390 + t9391;
  t9399 = t2833*t9376;
  t9408 = t2918*t9387;
  t9409 = t9399 + t9408;
  t9471 = -1.*t2309*t4597;
  t9472 = t9471 + t9147;
  t9474 = -1.*t2918*t4881;
  t9475 = t2833*t9472;
  t9484 = t9474 + t9475;
  t9488 = t2918*t9472;
  t9491 = t5002 + t9488;
  t9447 = -0.21*t2309;
  t9449 = -0.049*t2387;
  t9451 = t9447 + t9449;
  t9461 = 0.049*t2309;
  t9464 = t9461 + t2412;
  t9514 = t2026*t9225;
  t9515 = t8365*t2098;
  t9516 = t9514 + t9515;
  t9525 = -1.*t2387*t9516;
  t9526 = t9525 + t9266;
  t9535 = -1.*t2309*t9516;
  t9541 = t9535 + t9278;
  t9546 = -1.*t2918*t9526;
  t9547 = t2833*t9541;
  t9552 = t9546 + t9547;
  t9556 = t2833*t9526;
  t9557 = t2918*t9541;
  t9558 = t9556 + t9557;
  t9585 = t2026*t9334;
  t9586 = t7917*t2098;
  t9588 = t9585 + t9586;
  t9595 = -1.*t2387*t9588;
  t9597 = t9595 + t9375;
  t9604 = -1.*t2309*t9588;
  t9609 = t9604 + t9385;
  t9615 = -1.*t2918*t9597;
  t9617 = t2833*t9609;
  t9621 = t9615 + t9617;
  t9625 = t2833*t9597;
  t9627 = t2918*t9609;
  t9629 = t9625 + t9627;
  t9677 = -1.*t2833*t4947;
  t9679 = t9474 + t9677;
  t5052 = t3236*t5024;
  t9649 = 0.0016*t2833;
  t9652 = t9649 + t3104;
  t9657 = -0.2707*t2833;
  t9663 = -0.0016*t2918;
  t9668 = t9657 + t9663;
  t9728 = t2309*t9516;
  t9729 = t2387*t9256;
  t9731 = t9728 + t9729;
  t9735 = -1.*t2833*t9731;
  t9737 = t9546 + t9735;
  t9740 = -1.*t2918*t9731;
  t9747 = t9556 + t9740;
  t9783 = t2309*t9588;
  t9785 = t2387*t9366;
  t9786 = t9783 + t9785;
  t9789 = -1.*t2833*t9786;
  t9790 = t9615 + t9789;
  t9795 = -1.*t2918*t9786;
  t9796 = t9625 + t9795;
  t5039 = -1.*t3270*t4969;
  t5066 = t5039 + t5052;
  t9719 = -1.*t3270*t5024;
  t9828 = -0.7055*t3236;
  t9832 = 0.0184*t3270;
  t9835 = t9828 + t9832;
  t9839 = -0.0184*t3236;
  t9842 = t9839 + t3320;
  t9856 = t2918*t9526;
  t9857 = t2833*t9731;
  t9865 = t9856 + t9857;
  t9759 = t3236*t9747;
  t9771 = -1.*t3270*t9747;
  t9889 = t2918*t9597;
  t9894 = t2833*t9786;
  t9895 = t9889 + t9894;
  t9809 = t3236*t9796;
  t9821 = -1.*t3270*t9796;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t1186*t1467 + t1975*t2107 + t2218*t2231 + t2462*t2483 + t2630*t2707 + t2952*t2986 + t3132*t3230 + t3347*t3389 + t3428*t3551 - 0.7055*(-1.*t3270*t3389 + t3236*t3551) + 0.0184*(t3236*t3389 + t3270*t3551) - 1.*t1647*t1779*t448 + 0.1305*(t1186*t1190 + t1389*t1647*t448) + t217*t683 + t853*t959;
  p_output1(10)=t1647*t1779*t268 + t217*t3849 + t1467*t4082 + 0.1305*t4252 + t2107*t4279 + t2231*t4426 + t2462*t4597 + t2630*t4767 + t2952*t4881 + t3132*t4947 + t3347*t4969 + t3428*t5024 + 0.0184*(t3236*t4969 + t3270*t5024) - 0.7055*t5066 + t3932*t959;
  p_output1(11)=0;
  p_output1(12)=-1.*t1779*t268*t512 + t1467*t5195 + 0.1305*(t1389*t268*t512 + t1190*t5195) + t1647*t217*t268*t522 + t2107*t5270 + t2231*t5326 + t2462*t5358 + t2630*t5397 + t2952*t5412 + t3132*t5437 + t3347*t5465 + t3428*t5524 - 0.7055*(-1.*t3270*t5465 + t3236*t5524) + 0.0184*(t3236*t5465 + t3270*t5524) + t1647*t268*t348*t959;
  p_output1(13)=-1.*t1779*t448*t512 + t1647*t217*t448*t522 + t1467*t5644 + 0.1305*(t1389*t448*t512 + t1190*t5644) + t2107*t5703 + t2231*t5744 + t2462*t5791 + t2630*t5834 + t2952*t5856 + t3132*t5893 + t3347*t5911 + t3428*t5927 - 0.7055*(-1.*t3270*t5911 + t3236*t5927) + 0.0184*(t3236*t5911 + t3270*t5927) + t1647*t348*t448*t959;
  p_output1(14)=-1.*t1647*t1779 - 1.*t217*t512*t522 + t1467*t6095 + 0.1305*(t1389*t1647 + t1190*t6095) + t2107*t6330 + t2231*t6584 + t2462*t6647 + t2630*t6709 + t2952*t6787 + t3132*t6895 + t3347*t6933 + t3428*t7048 - 0.7055*(-1.*t3270*t6933 + t3236*t7048) + 0.0184*(t3236*t6933 + t3270*t7048) - 1.*t348*t512*t959;
  p_output1(15)=t217*t3932 + 0.1305*t1190*t7317 + t1467*t7317 + t1389*t2107*t7317 + t2231*t7349 + t2462*t7359 + t2630*t7380 + t2952*t7386 + t3132*t7408 + t3347*t7427 + t3428*t7458 - 0.7055*(-1.*t3270*t7427 + t3236*t7458) + 0.0184*(t3236*t7427 + t3270*t7458) + t7276*t959;
  p_output1(16)=t217*t7549 + 0.1305*t1190*t7583 + t1467*t7583 + t1389*t2107*t7583 + t2231*t7626 + t2462*t7665 + t2630*t7706 + t2952*t7741 + t3132*t7753 + t3347*t7760 + t3428*t7778 - 0.7055*(-1.*t3270*t7760 + t3236*t7778) + 0.0184*(t3236*t7760 + t3270*t7778) + t683*t959;
  p_output1(17)=t1647*t217*t348 + t7919 + t7922 + t7924 + t7943 + t7964 + t7991 + t8018 + t8033 + t8044 + t8060 + t8069 + t8082 - 1.*t1647*t522*t959;
  p_output1(18)=0.1305*t1190*t4426 + t1467*t4426 + t1389*t2107*t4426 - 0.135*t3932*t59 + t2231*t8154 + t2462*t8175 + t2630*t8195 + t2952*t8232 + t3132*t8254 + t3347*t8269 + t3428*t8287 - 0.7055*(-1.*t3270*t8269 + t3236*t8287) + 0.0184*(t3236*t8269 + t3270*t8287) + 0.135*t3849*t922;
  p_output1(19)=-0.135*t59*t7549 + 0.1305*t1190*t8365 + t1467*t8365 + t1389*t2107*t8365 + t2231*t8390 + t2462*t8403 + t2630*t8428 + t2952*t8440 + t3132*t8454 + t3347*t8485 + t3428*t8506 - 0.7055*(-1.*t3270*t8485 + t3236*t8506) + 0.0184*(t3236*t8485 + t3270*t8506) + 0.135*t8355*t922;
  p_output1(20)=-0.135*t1647*t348*t59 + t7919 + t7922 + t7924 + t7943 + t7964 + t7991 + t8018 + t8033 + t8044 + t8060 + t8069 + t8082 + 0.135*t1647*t522*t922;
  p_output1(21)=0.1305*(-1.*t1190*t1647*t268 - 1.*t1389*t4082) + t2107*t4252 + t2026*t2462*t4252 - 1.*t2098*t2630*t4252 + t1647*t268*t8549 + t4082*t8553 + t2952*t8595 + t3132*t8615 + t3347*t8622 + t3428*t8642 - 0.7055*(-1.*t3270*t8622 + t3236*t8642) + 0.0184*(t3236*t8622 + t3270*t8642);
  p_output1(22)=t1647*t448*t8549 + t8553*t8686 + 0.1305*(t1945 - 1.*t1389*t8686) + t2107*t8696 + t2026*t2462*t8696 - 1.*t2098*t2630*t8696 + t2952*t8747 + t3132*t8757 + t3347*t8781 + t3428*t8800 - 0.7055*(-1.*t3270*t8781 + t3236*t8800) + 0.0184*(t3236*t8781 + t3270*t8800);
  p_output1(23)=-1.*t512*t8549 + t8553*t8875 + 0.1305*(t1190*t512 - 1.*t1389*t8875) + t2107*t8904 + t2026*t2462*t8904 - 1.*t2098*t2630*t8904 + t2952*t8968 + t3132*t8979 + t3347*t8992 + t3428*t9010 - 0.7055*(-1.*t3270*t8992 + t3236*t9010) + 0.0184*(t3236*t8992 + t3270*t9010);
  p_output1(24)=t2462*t4767 + t4426*t9072 + t4279*t9087 + t2630*t9117 + t3132*t9136 + t2952*t9148 + t3428*t9159 + t3347*t9175 + 0.0184*(t3270*t9159 + t3236*t9175) - 0.7055*(t3236*t9159 - 1.*t3270*t9175);
  p_output1(25)=t8365*t9072 + t9087*t9225 + t2630*t9233 + t2462*t9256 + t3132*t9274 + t2952*t9281 + t3428*t9288 + t3347*t9306 + 0.0184*(t3270*t9288 + t3236*t9306) - 0.7055*(t3236*t9288 - 1.*t3270*t9306);
  p_output1(26)=t7917*t9072 + t9087*t9334 + t2630*t9351 + t2462*t9366 + t3132*t9376 + t2952*t9387 + t3428*t9393 + t3347*t9409 + 0.0184*(t3270*t9393 + t3236*t9409) - 0.7055*(t3236*t9393 - 1.*t3270*t9409);
  p_output1(27)=t3132*t4881 + t4597*t9451 + t4767*t9464 + t2952*t9472 + t3428*t9484 + t3347*t9491 + 0.0184*(t3270*t9484 + t3236*t9491) - 0.7055*(t3236*t9484 - 1.*t3270*t9491);
  p_output1(28)=t9256*t9464 + t9451*t9516 + t3132*t9526 + t2952*t9541 + t3428*t9552 + t3347*t9558 + 0.0184*(t3270*t9552 + t3236*t9558) - 0.7055*(t3236*t9552 - 1.*t3270*t9558);
  p_output1(29)=t9366*t9464 + t9451*t9588 + t3132*t9597 + t2952*t9609 + t3428*t9621 + t3347*t9629 + 0.0184*(t3270*t9621 + t3236*t9629) - 0.7055*(t3236*t9621 - 1.*t3270*t9629);
  p_output1(30)=t3347*t5024 + t4881*t9652 + t4947*t9668 + t3428*t9679 + 0.0184*(t5052 + t3270*t9679) - 0.7055*(t3236*t9679 + t9719);
  p_output1(31)=t9526*t9652 + t9668*t9731 + t3428*t9737 + t3347*t9747 + 0.0184*(t3270*t9737 + t9759) - 0.7055*(t3236*t9737 + t9771);
  p_output1(32)=t9597*t9652 + t9668*t9786 + t3428*t9790 + t3347*t9796 + 0.0184*(t3270*t9790 + t9809) - 0.7055*(t3236*t9790 + t9821);
  p_output1(33)=0.0184*t5066 - 0.7055*(-1.*t3236*t4969 + t9719) + t4969*t9835 + t5024*t9842;
  p_output1(34)=t9747*t9842 + t9835*t9865 - 0.7055*(t9771 - 1.*t3236*t9865) + 0.0184*(t9759 - 1.*t3270*t9865);
  p_output1(35)=t9796*t9842 + t9835*t9895 - 0.7055*(t9821 - 1.*t3236*t9895) + 0.0184*(t9809 - 1.*t3270*t9895);
  p_output1(36)=0;
  p_output1(37)=0;
  p_output1(38)=0;
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


       
Eigen::Matrix<double,3,20> Jp_ankle_joint_left(const Eigen::Matrix<double,20,1> &var1)
//void Jp_ankle_joint_left(Eigen::Matrix<double,3,20> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,20>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}




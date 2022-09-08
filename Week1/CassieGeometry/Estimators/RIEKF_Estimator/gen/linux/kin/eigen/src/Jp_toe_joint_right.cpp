/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:44:37 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_toe_joint_right.h"

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
  double t381;
  double t648;
  double t556;
  double t606;
  double t658;
  double t65;
  double t81;
  double t95;
  double t257;
  double t461;
  double t629;
  double t675;
  double t690;
  double t704;
  double t923;
  double t942;
  double t954;
  double t6;
  double t1135;
  double t1138;
  double t1199;
  double t1301;
  double t1323;
  double t1339;
  double t1404;
  double t1514;
  double t1524;
  double t1539;
  double t2109;
  double t2132;
  double t2205;
  double t2337;
  double t2339;
  double t2347;
  double t2482;
  double t2542;
  double t2674;
  double t2685;
  double t2822;
  double t2951;
  double t2956;
  double t2965;
  double t3044;
  double t3171;
  double t3303;
  double t3404;
  double t3420;
  double t3469;
  double t3605;
  double t3631;
  double t3634;
  double t3693;
  double t3717;
  double t3719;
  double t3886;
  double t3906;
  double t3944;
  double t3976;
  double t4101;
  double t4104;
  double t4117;
  double t4171;
  double t4200;
  double t4219;
  double t4295;
  double t4388;
  double t4397;
  double t4407;
  double t4549;
  double t4569;
  double t4627;
  double t165;
  double t303;
  double t377;
  double t540;
  double t551;
  double t713;
  double t718;
  double t807;
  double t861;
  double t990;
  double t1001;
  double t1027;
  double t4848;
  double t4861;
  double t4917;
  double t4946;
  double t4957;
  double t5077;
  double t1357;
  double t1407;
  double t1417;
  double t5174;
  double t5181;
  double t5210;
  double t2010;
  double t2067;
  double t2095;
  double t2427;
  double t2492;
  double t2498;
  double t5295;
  double t5333;
  double t5369;
  double t5399;
  double t5420;
  double t5421;
  double t2761;
  double t2766;
  double t2768;
  double t3286;
  double t3333;
  double t3350;
  double t5426;
  double t5432;
  double t5433;
  double t5473;
  double t5476;
  double t5505;
  double t3488;
  double t3555;
  double t3573;
  double t3816;
  double t3888;
  double t3893;
  double t5555;
  double t5569;
  double t5581;
  double t5599;
  double t5603;
  double t5642;
  double t4022;
  double t4031;
  double t4091;
  double t4292;
  double t4332;
  double t4383;
  double t5674;
  double t5691;
  double t5692;
  double t5843;
  double t5854;
  double t5915;
  double t4444;
  double t4457;
  double t4501;
  double t5977;
  double t5988;
  double t5996;
  double t6011;
  double t6025;
  double t6037;
  double t6308;
  double t6339;
  double t6374;
  double t6440;
  double t6457;
  double t6458;
  double t6559;
  double t6561;
  double t6609;
  double t6615;
  double t6621;
  double t6628;
  double t6636;
  double t6641;
  double t6692;
  double t6722;
  double t6734;
  double t6749;
  double t6765;
  double t6782;
  double t6788;
  double t6850;
  double t6857;
  double t6876;
  double t6893;
  double t6899;
  double t6900;
  double t6947;
  double t6957;
  double t6967;
  double t6976;
  double t6977;
  double t6989;
  double t7214;
  double t7215;
  double t7228;
  double t7272;
  double t7293;
  double t7301;
  double t7373;
  double t7374;
  double t7381;
  double t7392;
  double t7393;
  double t7405;
  double t7433;
  double t7443;
  double t7460;
  double t7471;
  double t7481;
  double t7498;
  double t7556;
  double t7562;
  double t7566;
  double t7590;
  double t7619;
  double t7648;
  double t7681;
  double t7692;
  double t7695;
  double t7717;
  double t7770;
  double t7773;
  double t7784;
  double t7785;
  double t7805;
  double t7962;
  double t7967;
  double t7970;
  double t7980;
  double t8016;
  double t8024;
  double t8123;
  double t8148;
  double t8171;
  double t8199;
  double t8209;
  double t8223;
  double t8278;
  double t8290;
  double t8315;
  double t8320;
  double t8325;
  double t8326;
  double t8332;
  double t8340;
  double t8342;
  double t8347;
  double t8356;
  double t8360;
  double t8380;
  double t8388;
  double t8395;
  double t8397;
  double t8409;
  double t8429;
  double t8439;
  double t8441;
  double t8445;
  double t8515;
  double t8524;
  double t8532;
  double t8578;
  double t8603;
  double t8543;
  double t8547;
  double t8558;
  double t8623;
  double t8635;
  double t8637;
  double t8662;
  double t8673;
  double t8679;
  double t8689;
  double t8725;
  double t8727;
  double t8735;
  double t8748;
  double t8754;
  double t8771;
  double t8776;
  double t8779;
  double t8802;
  double t8813;
  double t8821;
  double t8832;
  double t8841;
  double t8850;
  double t8862;
  double t8872;
  double t8885;
  double t8945;
  double t8951;
  double t8957;
  double t8971;
  double t8976;
  double t8989;
  double t8962;
  double t8965;
  double t9028;
  double t9033;
  double t9039;
  double t9052;
  double t9059;
  double t9060;
  double t9082;
  double t9103;
  double t9112;
  double t9114;
  double t9122;
  double t9129;
  double t9154;
  double t9184;
  double t9203;
  double t9222;
  double t9233;
  double t9246;
  double t9264;
  double t9274;
  double t9278;
  double t9284;
  double t9287;
  double t9288;
  double t9409;
  double t9410;
  double t9412;
  double t9379;
  double t9388;
  double t9390;
  double t9429;
  double t9440;
  double t9455;
  double t9499;
  double t9502;
  double t9514;
  double t9534;
  double t9554;
  double t9559;
  double t9570;
  double t9586;
  double t9596;
  double t9602;
  double t9605;
  double t9615;
  double t9629;
  double t9631;
  double t9636;
  double t9657;
  double t9671;
  double t9681;
  double t9690;
  double t9692;
  double t9699;
  double t9766;
  double t9772;
  double t9795;
  double t9800;
  double t9810;
  double t9823;
  double t9829;
  double t9835;
  double t9841;
  double t9848;
  double t9855;
  double t9868;
  double t9873;
  double t9882;
  double t9884;
  double t9886;
  double t9888;
  double t9914;
  double t9936;
  double t9943;
  double t9960;
  double t9965;
  double t9972;
  double t9995;
  double t9999;
  double t10013;
  double t10071;
  double t10087;
  double t10094;
  double t10108;
  double t10109;
  double t10099;
  double t10100;
  double t10132;
  double t10145;
  double t10151;
  double t10154;
  double t10158;
  double t10162;
  double t10166;
  double t10170;
  double t10182;
  double t10187;
  double t10191;
  double t10196;
  double t10207;
  double t10208;
  double t10212;
  double t10224;
  double t10225;
  double t10227;
  double t10242;
  double t10243;
  double t10248;
  double t10254;
  double t10262;
  double t10263;
  double t9393;
  double t9416;
  double t9420;
  double t9428;
  double t9494;
  double t9531;
  double t9568;
  double t9597;
  double t9621;
  double t9653;
  double t9682;
  double t9707;
  double t9709;
  double t9715;
  double t9716;
  double t9717;
  double t9727;
  double t9728;
  double t9737;
  double t9748;
  double t5375;
  double t5376;
  double t5386;
  double t10404;
  double t10406;
  double t10416;
  double t10424;
  double t10427;
  double t10432;
  double t10442;
  double t10447;
  double t10451;
  double t10460;
  double t10462;
  double t10463;
  double t10465;
  double t10467;
  double t10468;
  double t10474;
  double t10475;
  double t10477;
  double t10359;
  double t10360;
  double t10365;
  double t10370;
  double t10374;
  double t10521;
  double t10522;
  double t10529;
  double t10534;
  double t10535;
  double t10537;
  double t10558;
  double t10559;
  double t10565;
  double t10571;
  double t10572;
  double t10575;
  double t10581;
  double t10583;
  double t10596;
  double t10598;
  double t10601;
  double t10603;
  double t10608;
  double t10611;
  double t10612;
  double t10617;
  double t10618;
  double t10620;
  double t10661;
  double t10663;
  double t10664;
  double t10666;
  double t10667;
  double t10668;
  double t10677;
  double t10679;
  double t10684;
  double t10688;
  double t10690;
  double t10691;
  double t10694;
  double t10695;
  double t10696;
  double t10699;
  double t10706;
  double t10708;
  double t10716;
  double t10719;
  double t10721;
  double t10726;
  double t10729;
  double t10734;
  double t10767;
  double t10770;
  double t10772;
  double t10777;
  double t10779;
  double t10786;
  double t10787;
  double t10788;
  double t10796;
  double t10797;
  double t10801;
  double t10808;
  double t10809;
  double t10812;
  double t10819;
  double t10820;
  double t10824;
  double t10827;
  double t10828;
  double t10830;
  double t10754;
  double t10756;
  double t10759;
  double t10762;
  double t10763;
  double t10853;
  double t10854;
  double t10855;
  double t10857;
  double t10858;
  double t10859;
  double t10863;
  double t10864;
  double t10867;
  double t10869;
  double t10872;
  double t10873;
  double t10876;
  double t10878;
  double t10880;
  double t10883;
  double t10885;
  double t10886;
  double t10889;
  double t10890;
  double t10891;
  double t10893;
  double t10894;
  double t10895;
  double t10897;
  double t10898;
  double t10899;
  double t10917;
  double t10918;
  double t10919;
  double t10921;
  double t10923;
  double t10924;
  double t10927;
  double t10928;
  double t10932;
  double t10934;
  double t10935;
  double t10936;
  double t10938;
  double t10939;
  double t10940;
  double t10942;
  double t10943;
  double t10944;
  double t10949;
  double t10950;
  double t10951;
  double t10955;
  double t10956;
  double t10958;
  double t10962;
  double t10963;
  double t10965;
  double t10989;
  double t10990;
  double t10994;
  double t10997;
  double t10998;
  double t11002;
  double t11003;
  double t11006;
  double t11007;
  double t11009;
  double t11012;
  double t11013;
  double t11014;
  double t10981;
  double t10982;
  double t10983;
  double t10985;
  double t10986;
  double t11029;
  double t11030;
  double t11031;
  double t11034;
  double t11035;
  double t11037;
  double t11038;
  double t11040;
  double t11041;
  double t11042;
  double t11045;
  double t11046;
  double t11048;
  double t11050;
  double t11051;
  double t11053;
  double t11055;
  double t11057;
  double t11058;
  double t11071;
  double t11072;
  double t11074;
  double t11081;
  double t11082;
  double t11085;
  double t11086;
  double t11088;
  double t11090;
  double t11091;
  double t11094;
  double t11095;
  double t11099;
  double t11102;
  double t11103;
  double t11104;
  double t11106;
  double t11107;
  double t11108;
  double t11133;
  double t11134;
  double t11139;
  double t11140;
  double t11142;
  double t11143;
  double t11144;
  double t11124;
  double t11125;
  double t11127;
  double t11129;
  double t11130;
  double t11157;
  double t11158;
  double t11160;
  double t11162;
  double t11165;
  double t11167;
  double t11168;
  double t11170;
  double t11171;
  double t11172;
  double t11174;
  double t11175;
  double t11176;
  double t11195;
  double t11196;
  double t11197;
  double t11199;
  double t11200;
  double t11202;
  double t11203;
  double t11205;
  double t11206;
  double t11208;
  double t11212;
  double t11215;
  double t11216;
  double t11238;
  double t11239;
  double t6097;
  double t11230;
  double t11231;
  double t11232;
  double t11234;
  double t11235;
  double t11251;
  double t11252;
  double t11253;
  double t11260;
  double t11262;
  double t11265;
  double t11266;
  double t11283;
  double t11284;
  double t11286;
  double t11290;
  double t11291;
  double t11293;
  double t11294;
  double t11242;
  double t6137;
  double t6172;
  double t11305;
  double t11306;
  double t11308;
  double t11310;
  double t11311;
  double t11269;
  double t11319;
  double t11320;
  double t11322;
  double t11273;
  double t11296;
  double t11332;
  double t11333;
  double t11334;
  double t11300;
  t381 = Sin(var1[3]);
  t648 = Cos(var1[3]);
  t556 = Cos(var1[5]);
  t606 = Sin(var1[4]);
  t658 = Sin(var1[5]);
  t65 = Cos(var1[14]);
  t81 = -1.*t65;
  t95 = 1. + t81;
  t257 = Sin(var1[14]);
  t461 = Sin(var1[13]);
  t629 = -1.*t556*t381*t606;
  t675 = t648*t658;
  t690 = t629 + t675;
  t704 = Cos(var1[13]);
  t923 = -1.*t648*t556;
  t942 = -1.*t381*t606*t658;
  t954 = t923 + t942;
  t6 = Cos(var1[4]);
  t1135 = t461*t690;
  t1138 = t704*t954;
  t1199 = t1135 + t1138;
  t1301 = Cos(var1[15]);
  t1323 = -1.*t1301;
  t1339 = 1. + t1323;
  t1404 = Sin(var1[15]);
  t1514 = t704*t690;
  t1524 = -1.*t461*t954;
  t1539 = t1514 + t1524;
  t2109 = -1.*t65*t6*t381;
  t2132 = t257*t1199;
  t2205 = t2109 + t2132;
  t2337 = Cos(var1[16]);
  t2339 = -1.*t2337;
  t2347 = 1. + t2339;
  t2482 = Sin(var1[16]);
  t2542 = t1404*t1539;
  t2674 = t1301*t2205;
  t2685 = t2542 + t2674;
  t2822 = t1301*t1539;
  t2951 = -1.*t1404*t2205;
  t2956 = t2822 + t2951;
  t2965 = Cos(var1[17]);
  t3044 = -1.*t2965;
  t3171 = 1. + t3044;
  t3303 = Sin(var1[17]);
  t3404 = -1.*t2482*t2685;
  t3420 = t2337*t2956;
  t3469 = t3404 + t3420;
  t3605 = t2337*t2685;
  t3631 = t2482*t2956;
  t3634 = t3605 + t3631;
  t3693 = Cos(var1[18]);
  t3717 = -1.*t3693;
  t3719 = 1. + t3717;
  t3886 = Sin(var1[18]);
  t3906 = t3303*t3469;
  t3944 = t2965*t3634;
  t3976 = t3906 + t3944;
  t4101 = t2965*t3469;
  t4104 = -1.*t3303*t3634;
  t4117 = t4101 + t4104;
  t4171 = Cos(var1[19]);
  t4200 = -1.*t4171;
  t4219 = 1. + t4200;
  t4295 = Sin(var1[19]);
  t4388 = -1.*t3886*t3976;
  t4397 = t3693*t4117;
  t4407 = t4388 + t4397;
  t4549 = t3693*t3976;
  t4569 = t3886*t4117;
  t4627 = t4549 + t4569;
  t165 = -0.049*t95;
  t303 = -0.135*t257;
  t377 = 0. + t165 + t303;
  t540 = 0.135*t461;
  t551 = 0. + t540;
  t713 = -1.*t704;
  t718 = 1. + t713;
  t807 = -0.135*t718;
  t861 = 0. + t807;
  t990 = -0.135*t95;
  t1001 = 0.049*t257;
  t1027 = 0. + t990 + t1001;
  t4848 = t648*t556*t606;
  t4861 = t381*t658;
  t4917 = t4848 + t4861;
  t4946 = -1.*t556*t381;
  t4957 = t648*t606*t658;
  t5077 = t4946 + t4957;
  t1357 = -0.09*t1339;
  t1407 = 0.049*t1404;
  t1417 = 0. + t1357 + t1407;
  t5174 = t461*t4917;
  t5181 = t704*t5077;
  t5210 = t5174 + t5181;
  t2010 = -0.049*t1339;
  t2067 = -0.09*t1404;
  t2095 = 0. + t2010 + t2067;
  t2427 = -0.049*t2347;
  t2492 = -0.21*t2482;
  t2498 = 0. + t2427 + t2492;
  t5295 = t704*t4917;
  t5333 = -1.*t461*t5077;
  t5369 = t5295 + t5333;
  t5399 = t65*t648*t6;
  t5420 = t257*t5210;
  t5421 = t5399 + t5420;
  t2761 = -0.21*t2347;
  t2766 = 0.049*t2482;
  t2768 = 0. + t2761 + t2766;
  t3286 = -0.2707*t3171;
  t3333 = 0.0016*t3303;
  t3350 = 0. + t3286 + t3333;
  t5426 = t1404*t5369;
  t5432 = t1301*t5421;
  t5433 = t5426 + t5432;
  t5473 = t1301*t5369;
  t5476 = -1.*t1404*t5421;
  t5505 = t5473 + t5476;
  t3488 = -0.0016*t3171;
  t3555 = -0.2707*t3303;
  t3573 = 0. + t3488 + t3555;
  t3816 = 0.0184*t3719;
  t3888 = -0.7055*t3886;
  t3893 = 0. + t3816 + t3888;
  t5555 = -1.*t2482*t5433;
  t5569 = t2337*t5505;
  t5581 = t5555 + t5569;
  t5599 = t2337*t5433;
  t5603 = t2482*t5505;
  t5642 = t5599 + t5603;
  t4022 = -0.7055*t3719;
  t4031 = -0.0184*t3886;
  t4091 = 0. + t4022 + t4031;
  t4292 = -1.1135*t4219;
  t4332 = 0.0216*t4295;
  t4383 = 0. + t4292 + t4332;
  t5674 = t3303*t5581;
  t5691 = t2965*t5642;
  t5692 = t5674 + t5691;
  t5843 = t2965*t5581;
  t5854 = -1.*t3303*t5642;
  t5915 = t5843 + t5854;
  t4444 = -0.0216*t4219;
  t4457 = -1.1135*t4295;
  t4501 = 0. + t4444 + t4457;
  t5977 = -1.*t3886*t5692;
  t5988 = t3693*t5915;
  t5996 = t5977 + t5988;
  t6011 = t3693*t5692;
  t6025 = t3886*t5915;
  t6037 = t6011 + t6025;
  t6308 = t648*t6*t556*t461;
  t6339 = t704*t648*t6*t658;
  t6374 = t6308 + t6339;
  t6440 = t704*t648*t6*t556;
  t6457 = -1.*t648*t6*t461*t658;
  t6458 = t6440 + t6457;
  t6559 = -1.*t65*t648*t606;
  t6561 = t257*t6374;
  t6609 = t6559 + t6561;
  t6615 = t1404*t6458;
  t6621 = t1301*t6609;
  t6628 = t6615 + t6621;
  t6636 = t1301*t6458;
  t6641 = -1.*t1404*t6609;
  t6692 = t6636 + t6641;
  t6722 = -1.*t2482*t6628;
  t6734 = t2337*t6692;
  t6749 = t6722 + t6734;
  t6765 = t2337*t6628;
  t6782 = t2482*t6692;
  t6788 = t6765 + t6782;
  t6850 = t3303*t6749;
  t6857 = t2965*t6788;
  t6876 = t6850 + t6857;
  t6893 = t2965*t6749;
  t6899 = -1.*t3303*t6788;
  t6900 = t6893 + t6899;
  t6947 = -1.*t3886*t6876;
  t6957 = t3693*t6900;
  t6967 = t6947 + t6957;
  t6976 = t3693*t6876;
  t6977 = t3886*t6900;
  t6989 = t6976 + t6977;
  t7214 = t6*t556*t461*t381;
  t7215 = t704*t6*t381*t658;
  t7228 = t7214 + t7215;
  t7272 = t704*t6*t556*t381;
  t7293 = -1.*t6*t461*t381*t658;
  t7301 = t7272 + t7293;
  t7373 = -1.*t65*t381*t606;
  t7374 = t257*t7228;
  t7381 = t7373 + t7374;
  t7392 = t1404*t7301;
  t7393 = t1301*t7381;
  t7405 = t7392 + t7393;
  t7433 = t1301*t7301;
  t7443 = -1.*t1404*t7381;
  t7460 = t7433 + t7443;
  t7471 = -1.*t2482*t7405;
  t7481 = t2337*t7460;
  t7498 = t7471 + t7481;
  t7556 = t2337*t7405;
  t7562 = t2482*t7460;
  t7566 = t7556 + t7562;
  t7590 = t3303*t7498;
  t7619 = t2965*t7566;
  t7648 = t7590 + t7619;
  t7681 = t2965*t7498;
  t7692 = -1.*t3303*t7566;
  t7695 = t7681 + t7692;
  t7717 = -1.*t3886*t7648;
  t7770 = t3693*t7695;
  t7773 = t7717 + t7770;
  t7784 = t3693*t7648;
  t7785 = t3886*t7695;
  t7805 = t7784 + t7785;
  t7962 = -1.*t556*t461*t606;
  t7967 = -1.*t704*t606*t658;
  t7970 = t7962 + t7967;
  t7980 = -1.*t704*t556*t606;
  t8016 = t461*t606*t658;
  t8024 = t7980 + t8016;
  t8123 = -1.*t65*t6;
  t8148 = t257*t7970;
  t8171 = t8123 + t8148;
  t8199 = t1404*t8024;
  t8209 = t1301*t8171;
  t8223 = t8199 + t8209;
  t8278 = t1301*t8024;
  t8290 = -1.*t1404*t8171;
  t8315 = t8278 + t8290;
  t8320 = -1.*t2482*t8223;
  t8325 = t2337*t8315;
  t8326 = t8320 + t8325;
  t8332 = t2337*t8223;
  t8340 = t2482*t8315;
  t8342 = t8332 + t8340;
  t8347 = t3303*t8326;
  t8356 = t2965*t8342;
  t8360 = t8347 + t8356;
  t8380 = t2965*t8326;
  t8388 = -1.*t3303*t8342;
  t8395 = t8380 + t8388;
  t8397 = -1.*t3886*t8360;
  t8409 = t3693*t8395;
  t8429 = t8397 + t8409;
  t8439 = t3693*t8360;
  t8441 = t3886*t8395;
  t8445 = t8439 + t8441;
  t8515 = t556*t381;
  t8524 = -1.*t648*t606*t658;
  t8532 = t8515 + t8524;
  t8578 = t461*t8532;
  t8603 = t5295 + t8578;
  t8543 = -1.*t461*t4917;
  t8547 = t704*t8532;
  t8558 = t8543 + t8547;
  t8623 = t1404*t8558;
  t8635 = t1301*t257*t8603;
  t8637 = t8623 + t8635;
  t8662 = t1301*t8558;
  t8673 = -1.*t257*t1404*t8603;
  t8679 = t8662 + t8673;
  t8689 = -1.*t2482*t8637;
  t8725 = t2337*t8679;
  t8727 = t8689 + t8725;
  t8735 = t2337*t8637;
  t8748 = t2482*t8679;
  t8754 = t8735 + t8748;
  t8771 = t3303*t8727;
  t8776 = t2965*t8754;
  t8779 = t8771 + t8776;
  t8802 = t2965*t8727;
  t8813 = -1.*t3303*t8754;
  t8821 = t8802 + t8813;
  t8832 = -1.*t3886*t8779;
  t8841 = t3693*t8821;
  t8850 = t8832 + t8841;
  t8862 = t3693*t8779;
  t8872 = t3886*t8821;
  t8885 = t8862 + t8872;
  t8945 = t556*t381*t606;
  t8951 = -1.*t648*t658;
  t8957 = t8945 + t8951;
  t8971 = t704*t8957;
  t8976 = t461*t954;
  t8989 = t8971 + t8976;
  t8962 = -1.*t461*t8957;
  t8965 = t8962 + t1138;
  t9028 = t1404*t8965;
  t9033 = t1301*t257*t8989;
  t9039 = t9028 + t9033;
  t9052 = t1301*t8965;
  t9059 = -1.*t257*t1404*t8989;
  t9060 = t9052 + t9059;
  t9082 = -1.*t2482*t9039;
  t9103 = t2337*t9060;
  t9112 = t9082 + t9103;
  t9114 = t2337*t9039;
  t9122 = t2482*t9060;
  t9129 = t9114 + t9122;
  t9154 = t3303*t9112;
  t9184 = t2965*t9129;
  t9203 = t9154 + t9184;
  t9222 = t2965*t9112;
  t9233 = -1.*t3303*t9129;
  t9246 = t9222 + t9233;
  t9264 = -1.*t3886*t9203;
  t9274 = t3693*t9246;
  t9278 = t9264 + t9274;
  t9284 = t3693*t9203;
  t9287 = t3886*t9246;
  t9288 = t9284 + t9287;
  t9409 = t704*t6*t556;
  t9410 = -1.*t6*t461*t658;
  t9412 = t9409 + t9410;
  t9379 = -1.*t6*t556*t461;
  t9388 = -1.*t704*t6*t658;
  t9390 = t9379 + t9388;
  t9429 = t1404*t9390;
  t9440 = t1301*t257*t9412;
  t9455 = t9429 + t9440;
  t9499 = t1301*t9390;
  t9502 = -1.*t257*t1404*t9412;
  t9514 = t9499 + t9502;
  t9534 = -1.*t2482*t9455;
  t9554 = t2337*t9514;
  t9559 = t9534 + t9554;
  t9570 = t2337*t9455;
  t9586 = t2482*t9514;
  t9596 = t9570 + t9586;
  t9602 = t3303*t9559;
  t9605 = t2965*t9596;
  t9615 = t9602 + t9605;
  t9629 = t2965*t9559;
  t9631 = -1.*t3303*t9596;
  t9636 = t9629 + t9631;
  t9657 = -1.*t3886*t9615;
  t9671 = t3693*t9636;
  t9681 = t9657 + t9671;
  t9690 = t3693*t9615;
  t9692 = t3886*t9636;
  t9699 = t9690 + t9692;
  t9766 = -1.*t704*t5077;
  t9772 = t8543 + t9766;
  t9795 = t1404*t9772;
  t9800 = t1301*t257*t5369;
  t9810 = t9795 + t9800;
  t9823 = t1301*t9772;
  t9829 = -1.*t257*t1404*t5369;
  t9835 = t9823 + t9829;
  t9841 = -1.*t2482*t9810;
  t9848 = t2337*t9835;
  t9855 = t9841 + t9848;
  t9868 = t2337*t9810;
  t9873 = t2482*t9835;
  t9882 = t9868 + t9873;
  t9884 = t3303*t9855;
  t9886 = t2965*t9882;
  t9888 = t9884 + t9886;
  t9914 = t2965*t9855;
  t9936 = -1.*t3303*t9882;
  t9943 = t9914 + t9936;
  t9960 = -1.*t3886*t9888;
  t9965 = t3693*t9943;
  t9972 = t9960 + t9965;
  t9995 = t3693*t9888;
  t9999 = t3886*t9943;
  t10013 = t9995 + t9999;
  t10071 = t648*t556;
  t10087 = t381*t606*t658;
  t10094 = t10071 + t10087;
  t10108 = -1.*t461*t10094;
  t10109 = t8971 + t10108;
  t10099 = -1.*t704*t10094;
  t10100 = t8962 + t10099;
  t10132 = t1404*t10100;
  t10145 = t1301*t257*t10109;
  t10151 = t10132 + t10145;
  t10154 = t1301*t10100;
  t10158 = -1.*t257*t1404*t10109;
  t10162 = t10154 + t10158;
  t10166 = -1.*t2482*t10151;
  t10170 = t2337*t10162;
  t10182 = t10166 + t10170;
  t10187 = t2337*t10151;
  t10191 = t2482*t10162;
  t10196 = t10187 + t10191;
  t10207 = t3303*t10182;
  t10208 = t2965*t10196;
  t10212 = t10207 + t10208;
  t10224 = t2965*t10182;
  t10225 = -1.*t3303*t10196;
  t10227 = t10224 + t10225;
  t10242 = -1.*t3886*t10212;
  t10243 = t3693*t10227;
  t10248 = t10242 + t10243;
  t10254 = t3693*t10212;
  t10262 = t3886*t10227;
  t10263 = t10254 + t10262;
  t9393 = t1417*t9390;
  t9416 = -0.1305*t65*t9412;
  t9420 = t1027*t9412;
  t9428 = t257*t2095*t9412;
  t9494 = t2498*t9455;
  t9531 = t2768*t9514;
  t9568 = t3350*t9559;
  t9597 = t3573*t9596;
  t9621 = t3893*t9615;
  t9653 = t4091*t9636;
  t9682 = t4383*t9681;
  t9707 = t4501*t9699;
  t9709 = t4295*t9681;
  t9715 = t4171*t9699;
  t9716 = t9709 + t9715;
  t9717 = -0.0216*t9716;
  t9727 = t4171*t9681;
  t9728 = -1.*t4295*t9699;
  t9737 = t9727 + t9728;
  t9748 = -1.1135*t9737;
  t5375 = -1.*t648*t6*t257;
  t5376 = t65*t5210;
  t5386 = t5375 + t5376;
  t10404 = -1.*t2337*t1404*t5386;
  t10406 = -1.*t1301*t2482*t5386;
  t10416 = t10404 + t10406;
  t10424 = t1301*t2337*t5386;
  t10427 = -1.*t1404*t2482*t5386;
  t10432 = t10424 + t10427;
  t10442 = t3303*t10416;
  t10447 = t2965*t10432;
  t10451 = t10442 + t10447;
  t10460 = t2965*t10416;
  t10462 = -1.*t3303*t10432;
  t10463 = t10460 + t10462;
  t10465 = -1.*t3886*t10451;
  t10467 = t3693*t10463;
  t10468 = t10465 + t10467;
  t10474 = t3693*t10451;
  t10475 = t3886*t10463;
  t10477 = t10474 + t10475;
  t10359 = -0.135*t65;
  t10360 = -0.049*t257;
  t10365 = t10359 + t10360;
  t10370 = 0.049*t65;
  t10374 = t10370 + t303;
  t10521 = t461*t8957;
  t10522 = t704*t10094;
  t10529 = t10521 + t10522;
  t10534 = -1.*t6*t257*t381;
  t10535 = t65*t10529;
  t10537 = t10534 + t10535;
  t10558 = -1.*t2337*t1404*t10537;
  t10559 = -1.*t1301*t2482*t10537;
  t10565 = t10558 + t10559;
  t10571 = t1301*t2337*t10537;
  t10572 = -1.*t1404*t2482*t10537;
  t10575 = t10571 + t10572;
  t10581 = t3303*t10565;
  t10583 = t2965*t10575;
  t10596 = t10581 + t10583;
  t10598 = t2965*t10565;
  t10601 = -1.*t3303*t10575;
  t10603 = t10598 + t10601;
  t10608 = -1.*t3886*t10596;
  t10611 = t3693*t10603;
  t10612 = t10608 + t10611;
  t10617 = t3693*t10596;
  t10618 = t3886*t10603;
  t10620 = t10617 + t10618;
  t10661 = t6*t556*t461;
  t10663 = t704*t6*t658;
  t10664 = t10661 + t10663;
  t10666 = t257*t606;
  t10667 = t65*t10664;
  t10668 = t10666 + t10667;
  t10677 = -1.*t2337*t1404*t10668;
  t10679 = -1.*t1301*t2482*t10668;
  t10684 = t10677 + t10679;
  t10688 = t1301*t2337*t10668;
  t10690 = -1.*t1404*t2482*t10668;
  t10691 = t10688 + t10690;
  t10694 = t3303*t10684;
  t10695 = t2965*t10691;
  t10696 = t10694 + t10695;
  t10699 = t2965*t10684;
  t10706 = -1.*t3303*t10691;
  t10708 = t10699 + t10706;
  t10716 = -1.*t3886*t10696;
  t10719 = t3693*t10708;
  t10721 = t10716 + t10719;
  t10726 = t3693*t10696;
  t10729 = t3886*t10708;
  t10734 = t10726 + t10729;
  t10767 = -1.*t1404*t5369;
  t10770 = -1.*t1301*t5421;
  t10772 = t10767 + t10770;
  t10777 = t2482*t10772;
  t10779 = t10777 + t5569;
  t10786 = t2337*t10772;
  t10787 = -1.*t2482*t5505;
  t10788 = t10786 + t10787;
  t10796 = -1.*t3303*t10779;
  t10797 = t2965*t10788;
  t10801 = t10796 + t10797;
  t10808 = t2965*t10779;
  t10809 = t3303*t10788;
  t10812 = t10808 + t10809;
  t10819 = t3886*t10801;
  t10820 = t3693*t10812;
  t10824 = t10819 + t10820;
  t10827 = t3693*t10801;
  t10828 = -1.*t3886*t10812;
  t10830 = t10827 + t10828;
  t10754 = 0.049*t1301;
  t10756 = t10754 + t2067;
  t10759 = -0.09*t1301;
  t10762 = -0.049*t1404;
  t10763 = t10759 + t10762;
  t10853 = t65*t6*t381;
  t10854 = t257*t10529;
  t10855 = t10853 + t10854;
  t10857 = -1.*t1404*t10109;
  t10858 = -1.*t1301*t10855;
  t10859 = t10857 + t10858;
  t10863 = t1301*t10109;
  t10864 = -1.*t1404*t10855;
  t10867 = t10863 + t10864;
  t10869 = t2482*t10859;
  t10872 = t2337*t10867;
  t10873 = t10869 + t10872;
  t10876 = t2337*t10859;
  t10878 = -1.*t2482*t10867;
  t10880 = t10876 + t10878;
  t10883 = -1.*t3303*t10873;
  t10885 = t2965*t10880;
  t10886 = t10883 + t10885;
  t10889 = t2965*t10873;
  t10890 = t3303*t10880;
  t10891 = t10889 + t10890;
  t10893 = t3886*t10886;
  t10894 = t3693*t10891;
  t10895 = t10893 + t10894;
  t10897 = t3693*t10886;
  t10898 = -1.*t3886*t10891;
  t10899 = t10897 + t10898;
  t10917 = -1.*t65*t606;
  t10918 = t257*t10664;
  t10919 = t10917 + t10918;
  t10921 = -1.*t1404*t9412;
  t10923 = -1.*t1301*t10919;
  t10924 = t10921 + t10923;
  t10927 = t1301*t9412;
  t10928 = -1.*t1404*t10919;
  t10932 = t10927 + t10928;
  t10934 = t2482*t10924;
  t10935 = t2337*t10932;
  t10936 = t10934 + t10935;
  t10938 = t2337*t10924;
  t10939 = -1.*t2482*t10932;
  t10940 = t10938 + t10939;
  t10942 = -1.*t3303*t10936;
  t10943 = t2965*t10940;
  t10944 = t10942 + t10943;
  t10949 = t2965*t10936;
  t10950 = t3303*t10940;
  t10951 = t10949 + t10950;
  t10955 = t3886*t10944;
  t10956 = t3693*t10951;
  t10958 = t10955 + t10956;
  t10962 = t3693*t10944;
  t10963 = -1.*t3886*t10951;
  t10965 = t10962 + t10963;
  t10989 = -1.*t2337*t5433;
  t10990 = t10989 + t10787;
  t10994 = -1.*t3303*t5581;
  t10997 = t2965*t10990;
  t10998 = t10994 + t10997;
  t11002 = t3303*t10990;
  t11003 = t5843 + t11002;
  t11006 = t3886*t10998;
  t11007 = t3693*t11003;
  t11009 = t11006 + t11007;
  t11012 = t3693*t10998;
  t11013 = -1.*t3886*t11003;
  t11014 = t11012 + t11013;
  t10981 = -0.21*t2337;
  t10982 = -0.049*t2482;
  t10983 = t10981 + t10982;
  t10985 = 0.049*t2337;
  t10986 = t10985 + t2492;
  t11029 = t1404*t10109;
  t11030 = t1301*t10855;
  t11031 = t11029 + t11030;
  t11034 = -1.*t2482*t11031;
  t11035 = t11034 + t10872;
  t11037 = -1.*t2337*t11031;
  t11038 = t11037 + t10878;
  t11040 = -1.*t3303*t11035;
  t11041 = t2965*t11038;
  t11042 = t11040 + t11041;
  t11045 = t2965*t11035;
  t11046 = t3303*t11038;
  t11048 = t11045 + t11046;
  t11050 = t3886*t11042;
  t11051 = t3693*t11048;
  t11053 = t11050 + t11051;
  t11055 = t3693*t11042;
  t11057 = -1.*t3886*t11048;
  t11058 = t11055 + t11057;
  t11071 = t1404*t9412;
  t11072 = t1301*t10919;
  t11074 = t11071 + t11072;
  t11081 = -1.*t2482*t11074;
  t11082 = t11081 + t10935;
  t11085 = -1.*t2337*t11074;
  t11086 = t11085 + t10939;
  t11088 = -1.*t3303*t11082;
  t11090 = t2965*t11086;
  t11091 = t11088 + t11090;
  t11094 = t2965*t11082;
  t11095 = t3303*t11086;
  t11099 = t11094 + t11095;
  t11102 = t3886*t11091;
  t11103 = t3693*t11099;
  t11104 = t11102 + t11103;
  t11106 = t3693*t11091;
  t11107 = -1.*t3886*t11099;
  t11108 = t11106 + t11107;
  t11133 = -1.*t2965*t5642;
  t11134 = t10994 + t11133;
  t11139 = t3886*t11134;
  t11140 = t11139 + t5988;
  t11142 = t3693*t11134;
  t11143 = -1.*t3886*t5915;
  t11144 = t11142 + t11143;
  t11124 = 0.0016*t2965;
  t11125 = t11124 + t3555;
  t11127 = -0.2707*t2965;
  t11129 = -0.0016*t3303;
  t11130 = t11127 + t11129;
  t11157 = t2337*t11031;
  t11158 = t2482*t10867;
  t11160 = t11157 + t11158;
  t11162 = -1.*t2965*t11160;
  t11165 = t11040 + t11162;
  t11167 = -1.*t3303*t11160;
  t11168 = t11045 + t11167;
  t11170 = t3886*t11165;
  t11171 = t3693*t11168;
  t11172 = t11170 + t11171;
  t11174 = t3693*t11165;
  t11175 = -1.*t3886*t11168;
  t11176 = t11174 + t11175;
  t11195 = t2337*t11074;
  t11196 = t2482*t10932;
  t11197 = t11195 + t11196;
  t11199 = -1.*t2965*t11197;
  t11200 = t11088 + t11199;
  t11202 = -1.*t3303*t11197;
  t11203 = t11094 + t11202;
  t11205 = t3886*t11200;
  t11206 = t3693*t11203;
  t11208 = t11205 + t11206;
  t11212 = t3693*t11200;
  t11215 = -1.*t3886*t11203;
  t11216 = t11212 + t11215;
  t11238 = -1.*t3693*t5692;
  t11239 = t11238 + t11143;
  t6097 = t4171*t5996;
  t11230 = -0.7055*t3693;
  t11231 = 0.0184*t3886;
  t11232 = t11230 + t11231;
  t11234 = -0.0184*t3693;
  t11235 = t11234 + t3888;
  t11251 = t3303*t11035;
  t11252 = t2965*t11160;
  t11253 = t11251 + t11252;
  t11260 = -1.*t3886*t11253;
  t11262 = t11260 + t11171;
  t11265 = -1.*t3693*t11253;
  t11266 = t11265 + t11175;
  t11283 = t3303*t11082;
  t11284 = t2965*t11197;
  t11286 = t11283 + t11284;
  t11290 = -1.*t3886*t11286;
  t11291 = t11290 + t11206;
  t11293 = -1.*t3693*t11286;
  t11294 = t11293 + t11215;
  t11242 = -1.*t4295*t5996;
  t6137 = -1.*t4295*t6037;
  t6172 = t6097 + t6137;
  t11305 = 0.0216*t4171;
  t11306 = t11305 + t4457;
  t11308 = -1.1135*t4171;
  t11310 = -0.0216*t4295;
  t11311 = t11308 + t11310;
  t11269 = -1.*t4295*t11262;
  t11319 = t3693*t11253;
  t11320 = t3886*t11168;
  t11322 = t11319 + t11320;
  t11273 = t4171*t11262;
  t11296 = -1.*t4295*t11291;
  t11332 = t3693*t11286;
  t11333 = t3886*t11203;
  t11334 = t11332 + t11333;
  t11300 = t4171*t11291;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t1027*t1199 + t1417*t1539 + t2095*t2205 + t2498*t2685 + t2768*t2956 + t3350*t3469 + t3573*t3634 + t3893*t3976 + t4091*t4117 + t4383*t4407 + t4501*t4627 - 0.0216*(t4295*t4407 + t4171*t4627) - 1.1135*(t4171*t4407 - 1.*t4295*t4627) - 1.*t377*t381*t6 - 0.1305*(t257*t381*t6 + t1199*t65) + t551*t690 + t861*t954;
  p_output1(10)=t1027*t5210 + t1417*t5369 - 0.1305*t5386 + t2095*t5421 + t2498*t5433 + t2768*t5505 + t4917*t551 + t3350*t5581 + t3573*t5642 + t3893*t5692 + t4091*t5915 + t4383*t5996 + t4501*t6037 - 0.0216*(t4295*t5996 + t4171*t6037) - 1.1135*t6172 + t377*t6*t648 + t5077*t861;
  p_output1(11)=0;
  p_output1(12)=t1027*t6374 + t1417*t6458 + t551*t556*t6*t648 - 1.*t377*t606*t648 - 0.1305*(t257*t606*t648 + t6374*t65) + t2095*t6609 + t2498*t6628 + t2768*t6692 + t3350*t6749 + t3573*t6788 + t3893*t6876 + t4091*t6900 + t4383*t6967 + t4501*t6989 - 0.0216*(t4295*t6967 + t4171*t6989) - 1.1135*(t4171*t6967 - 1.*t4295*t6989) + t6*t648*t658*t861;
  p_output1(13)=t381*t551*t556*t6 - 1.*t377*t381*t606 + t1027*t7228 - 0.1305*(t257*t381*t606 + t65*t7228) + t1417*t7301 + t2095*t7381 + t2498*t7405 + t2768*t7460 + t3350*t7498 + t3573*t7566 + t3893*t7648 + t4091*t7695 + t4383*t7773 + t4501*t7805 - 0.0216*(t4295*t7773 + t4171*t7805) - 1.1135*(t4171*t7773 - 1.*t4295*t7805) + t381*t6*t658*t861;
  p_output1(14)=-1.*t377*t6 - 1.*t551*t556*t606 + t1027*t7970 - 0.1305*(t257*t6 + t65*t7970) + t1417*t8024 + t2095*t8171 + t2498*t8223 + t2768*t8315 + t3350*t8326 + t3573*t8342 + t3893*t8360 + t4091*t8395 + t4383*t8429 + t4501*t8445 - 0.0216*(t4295*t8429 + t4171*t8445) - 1.1135*(t4171*t8429 - 1.*t4295*t8445) - 1.*t606*t658*t861;
  p_output1(15)=t551*t8532 + t1417*t8558 + t1027*t8603 + t2095*t257*t8603 - 0.1305*t65*t8603 + t4917*t861 + t2498*t8637 + t2768*t8679 + t3350*t8727 + t3573*t8754 + t3893*t8779 + t4091*t8821 + t4383*t8850 + t4501*t8885 - 0.0216*(t4295*t8850 + t4171*t8885) - 1.1135*(t4171*t8850 - 1.*t4295*t8885);
  p_output1(16)=t861*t8957 + t1417*t8965 + t1027*t8989 + t2095*t257*t8989 - 0.1305*t65*t8989 + t2498*t9039 + t2768*t9060 + t3350*t9112 + t3573*t9129 + t3893*t9203 + t4091*t9246 + t4383*t9278 + t4501*t9288 - 0.0216*(t4295*t9278 + t4171*t9288) - 1.1135*(t4171*t9278 - 1.*t4295*t9288) + t551*t954;
  p_output1(17)=-1.*t551*t6*t658 + t556*t6*t861 + t9393 + t9416 + t9420 + t9428 + t9494 + t9531 + t9568 + t9597 + t9621 + t9653 + t9682 + t9707 + t9717 + t9748;
  p_output1(18)=0;
  p_output1(19)=0;
  p_output1(20)=0;
  p_output1(21)=0;
  p_output1(22)=0;
  p_output1(23)=0;
  p_output1(24)=0;
  p_output1(25)=0;
  p_output1(26)=0;
  p_output1(27)=0;
  p_output1(28)=0;
  p_output1(29)=0;
  p_output1(30)=0;
  p_output1(31)=0;
  p_output1(32)=0;
  p_output1(33)=0;
  p_output1(34)=0;
  p_output1(35)=0;
  p_output1(36)=0;
  p_output1(37)=0;
  p_output1(38)=0;
  p_output1(39)=t10013*t4501 - 0.135*t461*t5077 + t1027*t5369 + t2095*t257*t5369 - 0.1305*t5369*t65 + 0.135*t4917*t704 + t1417*t9772 + t2498*t9810 + t2768*t9835 + t3350*t9855 + t3573*t9882 + t3893*t9888 + t4091*t9943 + t4383*t9972 - 1.1135*(-1.*t10013*t4295 + t4171*t9972) - 0.0216*(t10013*t4171 + t4295*t9972);
  p_output1(40)=t10109*t1027 + t10100*t1417 + t10151*t2498 + t10109*t2095*t257 + t10162*t2768 + t10182*t3350 + t10196*t3573 + t10212*t3893 + t10227*t4091 - 0.0216*(t10263*t4171 + t10248*t4295) - 1.1135*(t10248*t4171 - 1.*t10263*t4295) + t10248*t4383 + t10263*t4501 - 0.135*t10094*t461 - 0.1305*t10109*t65 + 0.135*t704*t8957;
  p_output1(41)=-0.135*t461*t6*t658 + 0.135*t556*t6*t704 + t9393 + t9416 + t9420 + t9428 + t9494 + t9531 + t9568 + t9597 + t9621 + t9653 + t9682 + t9707 + t9717 + t9748;
  p_output1(42)=t10416*t3350 + t10432*t3573 + t10451*t3893 + t10463*t4091 - 0.0216*(t10477*t4171 + t10468*t4295) - 1.1135*(t10468*t4171 - 1.*t10477*t4295) + t10468*t4383 + t10477*t4501 + t10374*t5210 + t2095*t5386 + t1301*t2498*t5386 - 1.*t1404*t2768*t5386 + t10365*t6*t648 - 0.1305*(-1.*t257*t5210 - 1.*t6*t648*t65);
  p_output1(43)=t10374*t10529 + t10537*t2095 + t10537*t1301*t2498 - 0.1305*(t2109 - 1.*t10529*t257) - 1.*t10537*t1404*t2768 + t10565*t3350 + t10575*t3573 + t10596*t3893 + t10603*t4091 - 0.0216*(t10620*t4171 + t10612*t4295) - 1.1135*(t10612*t4171 - 1.*t10620*t4295) + t10612*t4383 + t10620*t4501 + t10365*t381*t6;
  p_output1(44)=t10374*t10664 + t10668*t2095 + t10668*t1301*t2498 - 1.*t10668*t1404*t2768 + t10684*t3350 + t10691*t3573 + t10696*t3893 + t10708*t4091 - 0.0216*(t10734*t4171 + t10721*t4295) - 1.1135*(t10721*t4171 - 1.*t10734*t4295) + t10721*t4383 + t10734*t4501 - 1.*t10365*t606 - 0.1305*(-1.*t10664*t257 + t606*t65);
  p_output1(45)=t10772*t2768 + t10788*t3350 + t10779*t3573 + t10812*t3893 + t10801*t4091 - 1.1135*(t10830*t4171 - 1.*t10824*t4295) - 0.0216*(t10824*t4171 + t10830*t4295) + t10830*t4383 + t10824*t4501 + t10756*t5369 + t10763*t5421 + t2498*t5505;
  p_output1(46)=t10109*t10756 + t10763*t10855 + t10867*t2498 + t10859*t2768 + t10880*t3350 + t10873*t3573 + t10891*t3893 + t10886*t4091 - 1.1135*(t10899*t4171 - 1.*t10895*t4295) - 0.0216*(t10895*t4171 + t10899*t4295) + t10899*t4383 + t10895*t4501;
  p_output1(47)=t10763*t10919 + t10932*t2498 + t10924*t2768 + t10940*t3350 + t10936*t3573 + t10951*t3893 + t10944*t4091 - 1.1135*(t10965*t4171 - 1.*t10958*t4295) - 0.0216*(t10958*t4171 + t10965*t4295) + t10965*t4383 + t10958*t4501 + t10756*t9412;
  p_output1(48)=t10990*t3350 + t11003*t3893 + t10998*t4091 - 1.1135*(t11014*t4171 - 1.*t11009*t4295) - 0.0216*(t11009*t4171 + t11014*t4295) + t11014*t4383 + t11009*t4501 + t10983*t5433 + t10986*t5505 + t3573*t5581;
  p_output1(49)=t10867*t10986 + t10983*t11031 + t11038*t3350 + t11035*t3573 + t11048*t3893 + t11042*t4091 - 1.1135*(t11058*t4171 - 1.*t11053*t4295) - 0.0216*(t11053*t4171 + t11058*t4295) + t11058*t4383 + t11053*t4501;
  p_output1(50)=t10932*t10986 + t10983*t11074 + t11086*t3350 + t11082*t3573 + t11099*t3893 + t11091*t4091 - 1.1135*(t11108*t4171 - 1.*t11104*t4295) - 0.0216*(t11104*t4171 + t11108*t4295) + t11108*t4383 + t11104*t4501;
  p_output1(51)=t11134*t4091 - 1.1135*(t11144*t4171 - 1.*t11140*t4295) - 0.0216*(t11140*t4171 + t11144*t4295) + t11144*t4383 + t11140*t4501 + t11125*t5581 + t11130*t5642 + t3893*t5915;
  p_output1(52)=t11035*t11125 + t11130*t11160 + t11168*t3893 + t11165*t4091 - 1.1135*(t11176*t4171 - 1.*t11172*t4295) - 0.0216*(t11172*t4171 + t11176*t4295) + t11176*t4383 + t11172*t4501;
  p_output1(53)=t11082*t11125 + t11130*t11197 + t11203*t3893 + t11200*t4091 - 1.1135*(t11216*t4171 - 1.*t11208*t4295) - 0.0216*(t11208*t4171 + t11216*t4295) + t11216*t4383 + t11208*t4501;
  p_output1(54)=-1.1135*(t11242 + t11239*t4171) + t11239*t4383 + t11232*t5692 + t11235*t5915 + t4501*t5996 - 0.0216*(t11239*t4295 + t6097);
  p_output1(55)=t11168*t11235 + t11232*t11253 - 1.1135*(t11269 + t11266*t4171) - 0.0216*(t11273 + t11266*t4295) + t11266*t4383 + t11262*t4501;
  p_output1(56)=t11203*t11235 + t11232*t11286 - 1.1135*(t11296 + t11294*t4171) - 0.0216*(t11300 + t11294*t4295) + t11294*t4383 + t11291*t4501;
  p_output1(57)=t11306*t5996 + t11311*t6037 - 1.1135*(t11242 - 1.*t4171*t6037) - 0.0216*t6172;
  p_output1(58)=t11262*t11306 + t11311*t11322 - 1.1135*(t11269 - 1.*t11322*t4171) - 0.0216*(t11273 - 1.*t11322*t4295);
  p_output1(59)=t11291*t11306 + t11311*t11334 - 1.1135*(t11296 - 1.*t11334*t4171) - 0.0216*(t11300 - 1.*t11334*t4295);
}


       
Eigen::Matrix<double,3,20> Jp_toe_joint_right(const Eigen::Matrix<double,20,1> &var1)
//void Jp_toe_joint_right(Eigen::Matrix<double,3,20> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,20>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}




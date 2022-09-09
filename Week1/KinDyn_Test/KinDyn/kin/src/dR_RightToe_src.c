/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:31:02 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dR_RightToe_src.h"

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
  double t68;
  double t74;
  double t84;
  double t158;
  double t63;
  double t207;
  double t276;
  double t117;
  double t222;
  double t243;
  double t59;
  double t288;
  double t289;
  double t302;
  double t327;
  double t369;
  double t378;
  double t384;
  double t402;
  double t453;
  double t712;
  double t273;
  double t465;
  double t633;
  double t57;
  double t716;
  double t858;
  double t872;
  double t994;
  double t707;
  double t879;
  double t916;
  double t54;
  double t1036;
  double t1045;
  double t1091;
  double t1248;
  double t951;
  double t1129;
  double t1138;
  double t47;
  double t1266;
  double t1279;
  double t1285;
  double t35;
  double t2026;
  double t1978;
  double t2080;
  double t2126;
  double t2169;
  double t2194;
  double t2217;
  double t2129;
  double t2321;
  double t2358;
  double t2447;
  double t2457;
  double t2502;
  double t2442;
  double t2657;
  double t2669;
  double t2760;
  double t2795;
  double t3036;
  double t2692;
  double t3057;
  double t3144;
  double t3233;
  double t3390;
  double t3422;
  double t1652;
  double t3145;
  double t3503;
  double t3521;
  double t3560;
  double t3564;
  double t3590;
  double t3918;
  double t3924;
  double t4062;
  double t4075;
  double t4163;
  double t4165;
  double t4186;
  double t4207;
  double t4235;
  double t4255;
  double t4289;
  double t4291;
  double t4297;
  double t4298;
  double t4310;
  double t4293;
  double t4341;
  double t4354;
  double t4521;
  double t4523;
  double t4525;
  double t4926;
  double t4930;
  double t5055;
  double t5076;
  double t4934;
  double t5081;
  double t5084;
  double t5093;
  double t5095;
  double t5161;
  double t5089;
  double t5178;
  double t5194;
  double t5201;
  double t5251;
  double t5266;
  double t5198;
  double t5267;
  double t5268;
  double t5297;
  double t5300;
  double t5321;
  double t5534;
  double t5535;
  double t5538;
  double t5530;
  double t5542;
  double t5568;
  double t5631;
  double t5634;
  double t5636;
  double t5619;
  double t5686;
  double t5687;
  double t5721;
  double t5722;
  double t5723;
  double t5706;
  double t5796;
  double t5805;
  double t5808;
  double t5821;
  double t5822;
  double t5946;
  double t5976;
  double t5988;
  double t5990;
  double t5992;
  double t6009;
  double t6012;
  double t5994;
  double t6013;
  double t6024;
  double t6030;
  double t6032;
  double t6087;
  double t6250;
  double t6291;
  double t6305;
  double t6308;
  double t6310;
  double t6352;
  double t6358;
  double t6360;
  double t6532;
  double t6533;
  double t6536;
  double t6408;
  double t6539;
  double t6543;
  double t6549;
  double t6578;
  double t6582;
  double t6583;
  double t6586;
  double t6588;
  double t6589;
  double t6585;
  double t6590;
  double t6591;
  double t6600;
  double t6602;
  double t6603;
  double t6604;
  double t6605;
  double t6609;
  double t6592;
  double t6614;
  double t6617;
  double t6620;
  double t6625;
  double t6628;
  double t6618;
  double t6631;
  double t6632;
  double t6641;
  double t6642;
  double t6647;
  double t6635;
  double t6649;
  double t6650;
  double t6655;
  double t6658;
  double t6663;
  double t6705;
  double t6713;
  double t6716;
  double t6725;
  double t6727;
  double t6730;
  double t6734;
  double t6735;
  double t6736;
  double t6721;
  double t6742;
  double t6746;
  double t6755;
  double t6759;
  double t6768;
  double t6752;
  double t6769;
  double t6773;
  double t6777;
  double t6781;
  double t6791;
  double t6774;
  double t6797;
  double t6802;
  double t6807;
  double t6837;
  double t6846;
  double t6892;
  double t6894;
  double t6896;
  double t6905;
  double t6907;
  double t6919;
  double t6921;
  double t6922;
  double t6911;
  double t6923;
  double t6927;
  double t6929;
  double t6933;
  double t6938;
  double t6928;
  double t6941;
  double t6945;
  double t6955;
  double t6958;
  double t6966;
  double t6952;
  double t6967;
  double t6969;
  double t6972;
  double t6975;
  double t6976;
  double t7078;
  double t7083;
  double t7089;
  double t7095;
  double t7097;
  double t7101;
  double t7102;
  double t7103;
  double t7104;
  double t7108;
  double t7113;
  double t7117;
  double t7125;
  double t7131;
  double t7144;
  double t7121;
  double t7148;
  double t7155;
  double t7164;
  double t7169;
  double t7170;
  double t7215;
  double t7216;
  double t7222;
  double t7231;
  double t7221;
  double t7234;
  double t7237;
  double t7258;
  double t7259;
  double t7263;
  double t7243;
  double t7265;
  double t7270;
  double t7278;
  double t7279;
  double t7283;
  double t7272;
  double t7293;
  double t7296;
  double t7306;
  double t7312;
  double t7318;
  double t6564;
  double t6565;
  double t6566;
  double t7397;
  double t7402;
  double t7405;
  double t7396;
  double t7407;
  double t7408;
  double t7411;
  double t7421;
  double t7425;
  double t7410;
  double t7428;
  double t7435;
  double t7448;
  double t7460;
  double t7467;
  double t7439;
  double t7468;
  double t7471;
  double t7476;
  double t7489;
  double t7490;
  double t7517;
  double t7518;
  double t7520;
  double t7521;
  double t7526;
  double t7537;
  double t7540;
  double t7531;
  double t7541;
  double t7542;
  double t7550;
  double t7551;
  double t7552;
  double t7567;
  double t7568;
  double t7571;
  double t7574;
  double t7575;
  double t7578;
  double t7579;
  double t7582;
  double t7606;
  double t7609;
  double t7611;
  double t7587;
  double t7613;
  double t7614;
  double t7616;
  double t7664;
  double t7669;
  double t7671;
  double t7674;
  double t7676;
  double t7677;
  double t7679;
  double t7680;
  double t7682;
  double t7690;
  double t7691;
  double t7696;
  double t7689;
  double t7700;
  double t7705;
  double t7716;
  double t7721;
  double t7724;
  double t7785;
  double t7786;
  double t7788;
  double t7795;
  double t7796;
  double t7797;
  double t7791;
  double t7799;
  double t7800;
  double t7808;
  double t7809;
  double t7812;
  double t7804;
  double t7814;
  double t7815;
  double t7821;
  double t7823;
  double t7824;
  double t7820;
  double t7828;
  double t7829;
  double t7834;
  double t7835;
  double t7839;
  double t7832;
  double t7841;
  double t7856;
  double t7863;
  double t7864;
  double t7865;
  double t7868;
  double t7870;
  double t7877;
  double t7885;
  double t7888;
  double t7889;
  double t7884;
  double t7891;
  double t7892;
  double t7902;
  double t7903;
  double t7921;
  double t7895;
  double t7941;
  double t7958;
  double t7975;
  double t7983;
  double t7986;
  double t7973;
  double t7988;
  double t7992;
  double t7998;
  double t8006;
  double t8007;
  double t8047;
  double t8050;
  double t8056;
  double t8058;
  double t8061;
  double t8070;
  double t8071;
  double t8066;
  double t8073;
  double t8082;
  double t8087;
  double t8090;
  double t8097;
  double t8118;
  double t8119;
  double t8120;
  double t8127;
  double t8130;
  double t8135;
  double t8137;
  double t8142;
  double t8173;
  double t8180;
  double t8184;
  double t8151;
  double t8185;
  double t8189;
  double t8193;
  double t8229;
  double t8235;
  double t8238;
  double t8245;
  double t8247;
  double t8248;
  double t8253;
  double t8257;
  double t8266;
  double t8244;
  double t8270;
  double t8275;
  double t8279;
  double t8281;
  double t8284;
  double t8276;
  double t8287;
  double t8288;
  double t8291;
  double t8295;
  double t8296;
  double t8289;
  double t8297;
  double t8298;
  double t8304;
  double t8305;
  double t8306;
  double t1189;
  double t1325;
  double t1461;
  double t1657;
  double t1659;
  double t1675;
  double t3559;
  double t3601;
  double t3617;
  double t3750;
  double t3752;
  double t3754;
  double t4496;
  double t4532;
  double t4686;
  double t4707;
  double t4708;
  double t4775;
  double t5295;
  double t5325;
  double t5417;
  double t5431;
  double t5435;
  double t5438;
  double t5806;
  double t5823;
  double t5824;
  double t5888;
  double t5892;
  double t5896;
  double t6026;
  double t6100;
  double t6101;
  double t6111;
  double t6194;
  double t6196;
  double t6343;
  double t6370;
  double t6393;
  double t6427;
  double t6550;
  double t6551;
  double t8440;
  double t6651;
  double t6664;
  double t6665;
  double t6670;
  double t6678;
  double t6680;
  double t6805;
  double t6849;
  double t6850;
  double t6858;
  double t6861;
  double t6866;
  double t6970;
  double t6985;
  double t6986;
  double t6989;
  double t6991;
  double t6992;
  double t7156;
  double t7175;
  double t7181;
  double t7200;
  double t7201;
  double t7204;
  double t7303;
  double t7324;
  double t7325;
  double t7338;
  double t7343;
  double t7345;
  double t6569;
  double t6571;
  double t7474;
  double t7491;
  double t7496;
  double t7499;
  double t7500;
  double t7503;
  double t7549;
  double t7553;
  double t7554;
  double t7556;
  double t7558;
  double t7560;
  double t7576;
  double t7583;
  double t7586;
  double t7591;
  double t7618;
  double t7620;
  double t8552;
  double t7630;
  double t7632;
  double t7634;
  double t7709;
  double t7735;
  double t7744;
  double t7760;
  double t7767;
  double t7768;
  double t8573;
  double t8577;
  double t8581;
  double t7995;
  double t8012;
  double t8020;
  double t8025;
  double t8028;
  double t8037;
  double t8084;
  double t8100;
  double t8101;
  double t8103;
  double t8104;
  double t8108;
  double t8134;
  double t8144;
  double t8148;
  double t8154;
  double t8194;
  double t8198;
  double t8624;
  double t8206;
  double t8212;
  double t8217;
  double t8301;
  double t8310;
  double t8313;
  double t8317;
  double t8318;
  double t8323;
  t68 = Cos(var1[3]);
  t74 = Cos(var1[4]);
  t84 = Cos(var1[5]);
  t158 = Sin(var1[13]);
  t63 = Cos(var1[13]);
  t207 = Sin(var1[5]);
  t276 = Cos(var1[15]);
  t117 = t63*t68*t74*t84;
  t222 = -1.*t68*t74*t158*t207;
  t243 = t117 + t222;
  t59 = Sin(var1[15]);
  t288 = Cos(var1[14]);
  t289 = Sin(var1[4]);
  t302 = -1.*t288*t68*t289;
  t327 = Sin(var1[14]);
  t369 = t68*t74*t84*t158;
  t378 = t63*t68*t74*t207;
  t384 = t369 + t378;
  t402 = t327*t384;
  t453 = t302 + t402;
  t712 = Cos(var1[16]);
  t273 = t59*t243;
  t465 = t276*t453;
  t633 = t273 + t465;
  t57 = Sin(var1[16]);
  t716 = t276*t243;
  t858 = -1.*t59*t453;
  t872 = t716 + t858;
  t994 = Cos(var1[17]);
  t707 = -1.*t57*t633;
  t879 = t712*t872;
  t916 = t707 + t879;
  t54 = Sin(var1[17]);
  t1036 = t712*t633;
  t1045 = t57*t872;
  t1091 = t1036 + t1045;
  t1248 = Cos(var1[18]);
  t951 = t54*t916;
  t1129 = t994*t1091;
  t1138 = t951 + t1129;
  t47 = Sin(var1[18]);
  t1266 = t994*t916;
  t1279 = -1.*t54*t1091;
  t1285 = t1266 + t1279;
  t35 = Cos(var1[19]);
  t2026 = Sin(var1[3]);
  t1978 = t68*t84*t289;
  t2080 = t2026*t207;
  t2126 = t1978 + t2080;
  t2169 = t84*t2026;
  t2194 = -1.*t68*t289*t207;
  t2217 = t2169 + t2194;
  t2129 = -1.*t158*t2126;
  t2321 = t63*t2217;
  t2358 = t2129 + t2321;
  t2447 = t63*t2126;
  t2457 = t158*t2217;
  t2502 = t2447 + t2457;
  t2442 = t59*t2358;
  t2657 = t276*t327*t2502;
  t2669 = t2442 + t2657;
  t2760 = t276*t2358;
  t2795 = -1.*t327*t59*t2502;
  t3036 = t2760 + t2795;
  t2692 = -1.*t57*t2669;
  t3057 = t712*t3036;
  t3144 = t2692 + t3057;
  t3233 = t712*t2669;
  t3390 = t57*t3036;
  t3422 = t3233 + t3390;
  t1652 = Sin(var1[19]);
  t3145 = t54*t3144;
  t3503 = t994*t3422;
  t3521 = t3145 + t3503;
  t3560 = t994*t3144;
  t3564 = -1.*t54*t3422;
  t3590 = t3560 + t3564;
  t3918 = -1.*t68*t74*t327;
  t3924 = t158*t2126;
  t4062 = -1.*t84*t2026;
  t4075 = t68*t289*t207;
  t4163 = t4062 + t4075;
  t4165 = t63*t4163;
  t4186 = t3924 + t4165;
  t4207 = t288*t4186;
  t4235 = t3918 + t4207;
  t4255 = -1.*t712*t59*t4235;
  t4289 = -1.*t276*t57*t4235;
  t4291 = t4255 + t4289;
  t4297 = t276*t712*t4235;
  t4298 = -1.*t59*t57*t4235;
  t4310 = t4297 + t4298;
  t4293 = t54*t4291;
  t4341 = t994*t4310;
  t4354 = t4293 + t4341;
  t4521 = t994*t4291;
  t4523 = -1.*t54*t4310;
  t4525 = t4521 + t4523;
  t4926 = -1.*t63*t4163;
  t4930 = t2129 + t4926;
  t5055 = -1.*t158*t4163;
  t5076 = t2447 + t5055;
  t4934 = t59*t4930;
  t5081 = t276*t327*t5076;
  t5084 = t4934 + t5081;
  t5093 = t276*t4930;
  t5095 = -1.*t327*t59*t5076;
  t5161 = t5093 + t5095;
  t5089 = -1.*t57*t5084;
  t5178 = t712*t5161;
  t5194 = t5089 + t5178;
  t5201 = t712*t5084;
  t5251 = t57*t5161;
  t5266 = t5201 + t5251;
  t5198 = t54*t5194;
  t5267 = t994*t5266;
  t5268 = t5198 + t5267;
  t5297 = t994*t5194;
  t5300 = -1.*t54*t5266;
  t5321 = t5297 + t5300;
  t5534 = t288*t68*t74;
  t5535 = t327*t4186;
  t5538 = t5534 + t5535;
  t5530 = -1.*t59*t5076;
  t5542 = -1.*t276*t5538;
  t5568 = t5530 + t5542;
  t5631 = t276*t5076;
  t5634 = -1.*t59*t5538;
  t5636 = t5631 + t5634;
  t5619 = t57*t5568;
  t5686 = t712*t5636;
  t5687 = t5619 + t5686;
  t5721 = t712*t5568;
  t5722 = -1.*t57*t5636;
  t5723 = t5721 + t5722;
  t5706 = -1.*t54*t5687;
  t5796 = t994*t5723;
  t5805 = t5706 + t5796;
  t5808 = t994*t5687;
  t5821 = t54*t5723;
  t5822 = t5808 + t5821;
  t5946 = t59*t5076;
  t5976 = t276*t5538;
  t5988 = t5946 + t5976;
  t5990 = -1.*t57*t5988;
  t5992 = t5990 + t5686;
  t6009 = -1.*t712*t5988;
  t6012 = t6009 + t5722;
  t5994 = -1.*t54*t5992;
  t6013 = t994*t6012;
  t6024 = t5994 + t6013;
  t6030 = t994*t5992;
  t6032 = t54*t6012;
  t6087 = t6030 + t6032;
  t6250 = t712*t5988;
  t6291 = t57*t5636;
  t6305 = t6250 + t6291;
  t6308 = -1.*t994*t6305;
  t6310 = t5994 + t6308;
  t6352 = -1.*t54*t6305;
  t6358 = t6030 + t6352;
  t6360 = t1248*t6358;
  t6532 = t54*t5992;
  t6533 = t994*t6305;
  t6536 = t6532 + t6533;
  t6408 = -1.*t47*t6358;
  t6539 = -1.*t47*t6536;
  t6543 = t6539 + t6360;
  t6549 = t1652*t6543;
  t6578 = -1.*t84*t2026*t289;
  t6582 = t68*t207;
  t6583 = t6578 + t6582;
  t6586 = -1.*t68*t84;
  t6588 = -1.*t2026*t289*t207;
  t6589 = t6586 + t6588;
  t6585 = t63*t6583;
  t6590 = -1.*t158*t6589;
  t6591 = t6585 + t6590;
  t6600 = -1.*t288*t74*t2026;
  t6602 = t158*t6583;
  t6603 = t63*t6589;
  t6604 = t6602 + t6603;
  t6605 = t327*t6604;
  t6609 = t6600 + t6605;
  t6592 = t59*t6591;
  t6614 = t276*t6609;
  t6617 = t6592 + t6614;
  t6620 = t276*t6591;
  t6625 = -1.*t59*t6609;
  t6628 = t6620 + t6625;
  t6618 = -1.*t57*t6617;
  t6631 = t712*t6628;
  t6632 = t6618 + t6631;
  t6641 = t712*t6617;
  t6642 = t57*t6628;
  t6647 = t6641 + t6642;
  t6635 = t54*t6632;
  t6649 = t994*t6647;
  t6650 = t6635 + t6649;
  t6655 = t994*t6632;
  t6658 = -1.*t54*t6647;
  t6663 = t6655 + t6658;
  t6705 = t63*t74*t84*t2026;
  t6713 = -1.*t74*t158*t2026*t207;
  t6716 = t6705 + t6713;
  t6725 = -1.*t288*t2026*t289;
  t6727 = t74*t84*t158*t2026;
  t6730 = t63*t74*t2026*t207;
  t6734 = t6727 + t6730;
  t6735 = t327*t6734;
  t6736 = t6725 + t6735;
  t6721 = t59*t6716;
  t6742 = t276*t6736;
  t6746 = t6721 + t6742;
  t6755 = t276*t6716;
  t6759 = -1.*t59*t6736;
  t6768 = t6755 + t6759;
  t6752 = -1.*t57*t6746;
  t6769 = t712*t6768;
  t6773 = t6752 + t6769;
  t6777 = t712*t6746;
  t6781 = t57*t6768;
  t6791 = t6777 + t6781;
  t6774 = t54*t6773;
  t6797 = t994*t6791;
  t6802 = t6774 + t6797;
  t6807 = t994*t6773;
  t6837 = -1.*t54*t6791;
  t6846 = t6807 + t6837;
  t6892 = t84*t2026*t289;
  t6894 = -1.*t68*t207;
  t6896 = t6892 + t6894;
  t6905 = -1.*t158*t6896;
  t6907 = t6905 + t6603;
  t6919 = t63*t6896;
  t6921 = t158*t6589;
  t6922 = t6919 + t6921;
  t6911 = t59*t6907;
  t6923 = t276*t327*t6922;
  t6927 = t6911 + t6923;
  t6929 = t276*t6907;
  t6933 = -1.*t327*t59*t6922;
  t6938 = t6929 + t6933;
  t6928 = -1.*t57*t6927;
  t6941 = t712*t6938;
  t6945 = t6928 + t6941;
  t6955 = t712*t6927;
  t6958 = t57*t6938;
  t6966 = t6955 + t6958;
  t6952 = t54*t6945;
  t6967 = t994*t6966;
  t6969 = t6952 + t6967;
  t6972 = t994*t6945;
  t6975 = -1.*t54*t6966;
  t6976 = t6972 + t6975;
  t7078 = -1.*t74*t327*t2026;
  t7083 = t158*t6896;
  t7089 = t68*t84;
  t7095 = t2026*t289*t207;
  t7097 = t7089 + t7095;
  t7101 = t63*t7097;
  t7102 = t7083 + t7101;
  t7103 = t288*t7102;
  t7104 = t7078 + t7103;
  t7108 = -1.*t712*t59*t7104;
  t7113 = -1.*t276*t57*t7104;
  t7117 = t7108 + t7113;
  t7125 = t276*t712*t7104;
  t7131 = -1.*t59*t57*t7104;
  t7144 = t7125 + t7131;
  t7121 = t54*t7117;
  t7148 = t994*t7144;
  t7155 = t7121 + t7148;
  t7164 = t994*t7117;
  t7169 = -1.*t54*t7144;
  t7170 = t7164 + t7169;
  t7215 = -1.*t63*t7097;
  t7216 = t6905 + t7215;
  t7222 = -1.*t158*t7097;
  t7231 = t6919 + t7222;
  t7221 = t59*t7216;
  t7234 = t276*t327*t7231;
  t7237 = t7221 + t7234;
  t7258 = t276*t7216;
  t7259 = -1.*t327*t59*t7231;
  t7263 = t7258 + t7259;
  t7243 = -1.*t57*t7237;
  t7265 = t712*t7263;
  t7270 = t7243 + t7265;
  t7278 = t712*t7237;
  t7279 = t57*t7263;
  t7283 = t7278 + t7279;
  t7272 = t54*t7270;
  t7293 = t994*t7283;
  t7296 = t7272 + t7293;
  t7306 = t994*t7270;
  t7312 = -1.*t54*t7283;
  t7318 = t7306 + t7312;
  t6564 = t1248*t6536;
  t6565 = t47*t6358;
  t6566 = t6564 + t6565;
  t7397 = t288*t74*t2026;
  t7402 = t327*t7102;
  t7405 = t7397 + t7402;
  t7396 = -1.*t59*t7231;
  t7407 = -1.*t276*t7405;
  t7408 = t7396 + t7407;
  t7411 = t276*t7231;
  t7421 = -1.*t59*t7405;
  t7425 = t7411 + t7421;
  t7410 = t57*t7408;
  t7428 = t712*t7425;
  t7435 = t7410 + t7428;
  t7448 = t712*t7408;
  t7460 = -1.*t57*t7425;
  t7467 = t7448 + t7460;
  t7439 = -1.*t54*t7435;
  t7468 = t994*t7467;
  t7471 = t7439 + t7468;
  t7476 = t994*t7435;
  t7489 = t54*t7467;
  t7490 = t7476 + t7489;
  t7517 = t59*t7231;
  t7518 = t276*t7405;
  t7520 = t7517 + t7518;
  t7521 = -1.*t57*t7520;
  t7526 = t7521 + t7428;
  t7537 = -1.*t712*t7520;
  t7540 = t7537 + t7460;
  t7531 = -1.*t54*t7526;
  t7541 = t994*t7540;
  t7542 = t7531 + t7541;
  t7550 = t994*t7526;
  t7551 = t54*t7540;
  t7552 = t7550 + t7551;
  t7567 = t712*t7520;
  t7568 = t57*t7425;
  t7571 = t7567 + t7568;
  t7574 = -1.*t994*t7571;
  t7575 = t7531 + t7574;
  t7578 = -1.*t54*t7571;
  t7579 = t7550 + t7578;
  t7582 = t1248*t7579;
  t7606 = t54*t7526;
  t7609 = t994*t7571;
  t7611 = t7606 + t7609;
  t7587 = -1.*t47*t7579;
  t7613 = -1.*t47*t7611;
  t7614 = t7613 + t7582;
  t7616 = t1652*t7614;
  t7664 = t327*t289;
  t7669 = t74*t84*t158;
  t7671 = t63*t74*t207;
  t7674 = t7669 + t7671;
  t7676 = t288*t7674;
  t7677 = t7664 + t7676;
  t7679 = -1.*t712*t59*t7677;
  t7680 = -1.*t276*t57*t7677;
  t7682 = t7679 + t7680;
  t7690 = t276*t712*t7677;
  t7691 = -1.*t59*t57*t7677;
  t7696 = t7690 + t7691;
  t7689 = t54*t7682;
  t7700 = t994*t7696;
  t7705 = t7689 + t7700;
  t7716 = t994*t7682;
  t7721 = -1.*t54*t7696;
  t7724 = t7716 + t7721;
  t7785 = -1.*t74*t84*t158;
  t7786 = -1.*t63*t74*t207;
  t7788 = t7785 + t7786;
  t7795 = t63*t74*t84;
  t7796 = -1.*t74*t158*t207;
  t7797 = t7795 + t7796;
  t7791 = t59*t7788;
  t7799 = t276*t327*t7797;
  t7800 = t7791 + t7799;
  t7808 = t276*t7788;
  t7809 = -1.*t327*t59*t7797;
  t7812 = t7808 + t7809;
  t7804 = -1.*t57*t7800;
  t7814 = t712*t7812;
  t7815 = t7804 + t7814;
  t7821 = t712*t7800;
  t7823 = t57*t7812;
  t7824 = t7821 + t7823;
  t7820 = t54*t7815;
  t7828 = t994*t7824;
  t7829 = t7820 + t7828;
  t7834 = t994*t7815;
  t7835 = -1.*t54*t7824;
  t7839 = t7834 + t7835;
  t7832 = -1.*t47*t7829;
  t7841 = t1248*t7839;
  t7856 = t7832 + t7841;
  t7863 = -1.*t35*t7856;
  t7864 = t1248*t7829;
  t7865 = t47*t7839;
  t7868 = t7864 + t7865;
  t7870 = t1652*t7868;
  t7877 = t7863 + t7870;
  t7885 = -1.*t288*t289;
  t7888 = t327*t7674;
  t7889 = t7885 + t7888;
  t7884 = -1.*t59*t7797;
  t7891 = -1.*t276*t7889;
  t7892 = t7884 + t7891;
  t7902 = t276*t7797;
  t7903 = -1.*t59*t7889;
  t7921 = t7902 + t7903;
  t7895 = t57*t7892;
  t7941 = t712*t7921;
  t7958 = t7895 + t7941;
  t7975 = t712*t7892;
  t7983 = -1.*t57*t7921;
  t7986 = t7975 + t7983;
  t7973 = -1.*t54*t7958;
  t7988 = t994*t7986;
  t7992 = t7973 + t7988;
  t7998 = t994*t7958;
  t8006 = t54*t7986;
  t8007 = t7998 + t8006;
  t8047 = t59*t7797;
  t8050 = t276*t7889;
  t8056 = t8047 + t8050;
  t8058 = -1.*t57*t8056;
  t8061 = t8058 + t7941;
  t8070 = -1.*t712*t8056;
  t8071 = t8070 + t7983;
  t8066 = -1.*t54*t8061;
  t8073 = t994*t8071;
  t8082 = t8066 + t8073;
  t8087 = t994*t8061;
  t8090 = t54*t8071;
  t8097 = t8087 + t8090;
  t8118 = t712*t8056;
  t8119 = t57*t7921;
  t8120 = t8118 + t8119;
  t8127 = -1.*t994*t8120;
  t8130 = t8066 + t8127;
  t8135 = -1.*t54*t8120;
  t8137 = t8087 + t8135;
  t8142 = t1248*t8137;
  t8173 = t54*t8061;
  t8180 = t994*t8120;
  t8184 = t8173 + t8180;
  t8151 = -1.*t47*t8137;
  t8185 = -1.*t47*t8184;
  t8189 = t8185 + t8142;
  t8193 = t1652*t8189;
  t8229 = -1.*t63*t84*t289;
  t8235 = t158*t289*t207;
  t8238 = t8229 + t8235;
  t8245 = -1.*t288*t74;
  t8247 = -1.*t84*t158*t289;
  t8248 = -1.*t63*t289*t207;
  t8253 = t8247 + t8248;
  t8257 = t327*t8253;
  t8266 = t8245 + t8257;
  t8244 = t59*t8238;
  t8270 = t276*t8266;
  t8275 = t8244 + t8270;
  t8279 = t276*t8238;
  t8281 = -1.*t59*t8266;
  t8284 = t8279 + t8281;
  t8276 = -1.*t57*t8275;
  t8287 = t712*t8284;
  t8288 = t8276 + t8287;
  t8291 = t712*t8275;
  t8295 = t57*t8284;
  t8296 = t8291 + t8295;
  t8289 = t54*t8288;
  t8297 = t994*t8296;
  t8298 = t8289 + t8297;
  t8304 = t994*t8288;
  t8305 = -1.*t54*t8296;
  t8306 = t8304 + t8305;
  t1189 = -1.*t47*t1138;
  t1325 = t1248*t1285;
  t1461 = t1189 + t1325;
  t1657 = t1248*t1138;
  t1659 = t47*t1285;
  t1675 = t1657 + t1659;
  t3559 = -1.*t47*t3521;
  t3601 = t1248*t3590;
  t3617 = t3559 + t3601;
  t3750 = t1248*t3521;
  t3752 = t47*t3590;
  t3754 = t3750 + t3752;
  t4496 = -1.*t47*t4354;
  t4532 = t1248*t4525;
  t4686 = t4496 + t4532;
  t4707 = t1248*t4354;
  t4708 = t47*t4525;
  t4775 = t4707 + t4708;
  t5295 = -1.*t47*t5268;
  t5325 = t1248*t5321;
  t5417 = t5295 + t5325;
  t5431 = t1248*t5268;
  t5435 = t47*t5321;
  t5438 = t5431 + t5435;
  t5806 = t47*t5805;
  t5823 = t1248*t5822;
  t5824 = t5806 + t5823;
  t5888 = t1248*t5805;
  t5892 = -1.*t47*t5822;
  t5896 = t5888 + t5892;
  t6026 = t47*t6024;
  t6100 = t1248*t6087;
  t6101 = t6026 + t6100;
  t6111 = t1248*t6024;
  t6194 = -1.*t47*t6087;
  t6196 = t6111 + t6194;
  t6343 = t47*t6310;
  t6370 = t6343 + t6360;
  t6393 = t1248*t6310;
  t6427 = t6393 + t6408;
  t6550 = -1.*t1248*t6536;
  t6551 = t6550 + t6408;
  t8440 = t35*t6543;
  t6651 = -1.*t47*t6650;
  t6664 = t1248*t6663;
  t6665 = t6651 + t6664;
  t6670 = t1248*t6650;
  t6678 = t47*t6663;
  t6680 = t6670 + t6678;
  t6805 = -1.*t47*t6802;
  t6849 = t1248*t6846;
  t6850 = t6805 + t6849;
  t6858 = t1248*t6802;
  t6861 = t47*t6846;
  t6866 = t6858 + t6861;
  t6970 = -1.*t47*t6969;
  t6985 = t1248*t6976;
  t6986 = t6970 + t6985;
  t6989 = t1248*t6969;
  t6991 = t47*t6976;
  t6992 = t6989 + t6991;
  t7156 = -1.*t47*t7155;
  t7175 = t1248*t7170;
  t7181 = t7156 + t7175;
  t7200 = t1248*t7155;
  t7201 = t47*t7170;
  t7204 = t7200 + t7201;
  t7303 = -1.*t47*t7296;
  t7324 = t1248*t7318;
  t7325 = t7303 + t7324;
  t7338 = t1248*t7296;
  t7343 = t47*t7318;
  t7345 = t7338 + t7343;
  t6569 = t35*t6566;
  t6571 = t6549 + t6569;
  t7474 = t47*t7471;
  t7491 = t1248*t7490;
  t7496 = t7474 + t7491;
  t7499 = t1248*t7471;
  t7500 = -1.*t47*t7490;
  t7503 = t7499 + t7500;
  t7549 = t47*t7542;
  t7553 = t1248*t7552;
  t7554 = t7549 + t7553;
  t7556 = t1248*t7542;
  t7558 = -1.*t47*t7552;
  t7560 = t7556 + t7558;
  t7576 = t47*t7575;
  t7583 = t7576 + t7582;
  t7586 = t1248*t7575;
  t7591 = t7586 + t7587;
  t7618 = -1.*t1248*t7611;
  t7620 = t7618 + t7587;
  t8552 = t35*t7614;
  t7630 = t1248*t7611;
  t7632 = t47*t7579;
  t7634 = t7630 + t7632;
  t7709 = -1.*t47*t7705;
  t7735 = t1248*t7724;
  t7744 = t7709 + t7735;
  t7760 = t1248*t7705;
  t7767 = t47*t7724;
  t7768 = t7760 + t7767;
  t8573 = t1652*t7856;
  t8577 = t35*t7868;
  t8581 = t8573 + t8577;
  t7995 = t47*t7992;
  t8012 = t1248*t8007;
  t8020 = t7995 + t8012;
  t8025 = t1248*t7992;
  t8028 = -1.*t47*t8007;
  t8037 = t8025 + t8028;
  t8084 = t47*t8082;
  t8100 = t1248*t8097;
  t8101 = t8084 + t8100;
  t8103 = t1248*t8082;
  t8104 = -1.*t47*t8097;
  t8108 = t8103 + t8104;
  t8134 = t47*t8130;
  t8144 = t8134 + t8142;
  t8148 = t1248*t8130;
  t8154 = t8148 + t8151;
  t8194 = -1.*t1248*t8184;
  t8198 = t8194 + t8151;
  t8624 = t35*t8189;
  t8206 = t1248*t8184;
  t8212 = t47*t8137;
  t8217 = t8206 + t8212;
  t8301 = -1.*t47*t8298;
  t8310 = t1248*t8306;
  t8313 = t8301 + t8310;
  t8317 = t1248*t8298;
  t8318 = t47*t8306;
  t8323 = t8317 + t8318;
  p_output1[0]=(-1.*t35*t6665 + t1652*t6680)*var2[3] + (t1652*t1675 - 1.*t1461*t35)*var2[4] + (-1.*t35*t3617 + t1652*t3754)*var2[5] + (-1.*t35*t5417 + t1652*t5438)*var2[13] + (-1.*t35*t4686 + t1652*t4775)*var2[14] + (t1652*t5824 - 1.*t35*t5896)*var2[15] + (t1652*t6101 - 1.*t35*t6196)*var2[16] + (t1652*t6370 - 1.*t35*t6427)*var2[17] + (t6549 - 1.*t35*t6551)*var2[18] + t6571*var2[19];
  p_output1[1]=(-1.*t35*t6543 + t1652*t6566)*var2[3] + (-1.*t35*t6850 + t1652*t6866)*var2[4] + (-1.*t35*t6986 + t1652*t6992)*var2[5] + (-1.*t35*t7325 + t1652*t7345)*var2[13] + (-1.*t35*t7181 + t1652*t7204)*var2[14] + (t1652*t7496 - 1.*t35*t7503)*var2[15] + (t1652*t7554 - 1.*t35*t7560)*var2[16] + (t1652*t7583 - 1.*t35*t7591)*var2[17] + (t7616 - 1.*t35*t7620)*var2[18] + (t7616 + t35*t7634)*var2[19];
  p_output1[2]=(-1.*t35*t8313 + t1652*t8323)*var2[4] + t7877*var2[5] + t7877*var2[13] + (-1.*t35*t7744 + t1652*t7768)*var2[14] + (t1652*t8020 - 1.*t35*t8037)*var2[15] + (t1652*t8101 - 1.*t35*t8108)*var2[16] + (t1652*t8144 - 1.*t35*t8154)*var2[17] + (t8193 - 1.*t35*t8198)*var2[18] + (t8193 + t35*t8217)*var2[19];
  p_output1[3]=(t1652*t6665 + t35*t6680)*var2[3] + (t1461*t1652 + t1675*t35)*var2[4] + (t1652*t3617 + t35*t3754)*var2[5] + (t1652*t5417 + t35*t5438)*var2[13] + (t1652*t4686 + t35*t4775)*var2[14] + (t35*t5824 + t1652*t5896)*var2[15] + (t35*t6101 + t1652*t6196)*var2[16] + (t35*t6370 + t1652*t6427)*var2[17] + (t1652*t6551 + t8440)*var2[18] + (-1.*t1652*t6566 + t8440)*var2[19];
  p_output1[4]=t6571*var2[3] + (t1652*t6850 + t35*t6866)*var2[4] + (t1652*t6986 + t35*t6992)*var2[5] + (t1652*t7325 + t35*t7345)*var2[13] + (t1652*t7181 + t35*t7204)*var2[14] + (t35*t7496 + t1652*t7503)*var2[15] + (t35*t7554 + t1652*t7560)*var2[16] + (t35*t7583 + t1652*t7591)*var2[17] + (t1652*t7620 + t8552)*var2[18] + (-1.*t1652*t7634 + t8552)*var2[19];
  p_output1[5]=(t1652*t8313 + t35*t8323)*var2[4] + t8581*var2[5] + t8581*var2[13] + (t1652*t7744 + t35*t7768)*var2[14] + (t35*t8020 + t1652*t8037)*var2[15] + (t35*t8101 + t1652*t8108)*var2[16] + (t35*t8144 + t1652*t8154)*var2[17] + (t1652*t8198 + t8624)*var2[18] + (-1.*t1652*t8217 + t8624)*var2[19];
  p_output1[6]=(-1.*t288*t6604 + t7078)*var2[3] + (-1.*t288*t384 - 1.*t289*t327*t68)*var2[4] - 1.*t2502*t288*var2[5] - 1.*t288*t5076*var2[13] + t5538*var2[14];
  p_output1[7]=(-1.*t288*t4186 + t327*t68*t74)*var2[3] + (-1.*t2026*t289*t327 - 1.*t288*t6734)*var2[4] - 1.*t288*t6922*var2[5] - 1.*t288*t7231*var2[13] + t7405*var2[14];
  p_output1[8]=(-1.*t327*t74 - 1.*t288*t8253)*var2[4] - 1.*t288*t7797*var2[5] - 1.*t288*t7797*var2[13] + t7889*var2[14];
}



void dR_RightToe_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
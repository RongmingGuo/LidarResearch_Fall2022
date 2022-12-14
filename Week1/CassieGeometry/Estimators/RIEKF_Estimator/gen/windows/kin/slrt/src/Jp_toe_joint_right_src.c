/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:07:54 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_toe_joint_right_src.h"

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
  double t143;
  double t309;
  double t211;
  double t241;
  double t310;
  double t43;
  double t50;
  double t54;
  double t90;
  double t164;
  double t290;
  double t314;
  double t335;
  double t423;
  double t779;
  double t871;
  double t929;
  double t41;
  double t967;
  double t971;
  double t988;
  double t995;
  double t1003;
  double t1025;
  double t1037;
  double t1044;
  double t1045;
  double t1047;
  double t1099;
  double t1100;
  double t1101;
  double t1110;
  double t1114;
  double t1115;
  double t1118;
  double t1123;
  double t1124;
  double t1128;
  double t1138;
  double t1142;
  double t1143;
  double t1153;
  double t1154;
  double t1158;
  double t1160;
  double t1169;
  double t1180;
  double t1181;
  double t1323;
  double t1326;
  double t1372;
  double t1526;
  double t1547;
  double t1553;
  double t1660;
  double t1759;
  double t1801;
  double t1805;
  double t2031;
  double t2055;
  double t2077;
  double t2158;
  double t2173;
  double t2210;
  double t2284;
  double t2471;
  double t2487;
  double t2522;
  double t2666;
  double t2667;
  double t2680;
  double t80;
  double t114;
  double t141;
  double t189;
  double t195;
  double t495;
  double t680;
  double t728;
  double t778;
  double t938;
  double t950;
  double t959;
  double t2982;
  double t3074;
  double t3079;
  double t3093;
  double t3146;
  double t3155;
  double t1035;
  double t1039;
  double t1040;
  double t3165;
  double t3186;
  double t3194;
  double t1087;
  double t1089;
  double t1091;
  double t1116;
  double t1119;
  double t1120;
  double t3252;
  double t3253;
  double t3302;
  double t3458;
  double t3490;
  double t3503;
  double t1132;
  double t1133;
  double t1134;
  double t1159;
  double t1165;
  double t1168;
  double t3523;
  double t3524;
  double t3547;
  double t3619;
  double t3643;
  double t3653;
  double t1259;
  double t1272;
  double t1280;
  double t1594;
  double t1673;
  double t1678;
  double t3672;
  double t3694;
  double t3705;
  double t3718;
  double t3725;
  double t3726;
  double t1975;
  double t1990;
  double t2005;
  double t2268;
  double t2285;
  double t2286;
  double t3742;
  double t3786;
  double t3828;
  double t3873;
  double t3883;
  double t3896;
  double t2553;
  double t2614;
  double t2663;
  double t3920;
  double t3969;
  double t3975;
  double t4024;
  double t4059;
  double t4064;
  double t4377;
  double t4390;
  double t4396;
  double t4426;
  double t4437;
  double t4458;
  double t4697;
  double t4728;
  double t4770;
  double t4826;
  double t4830;
  double t4871;
  double t4930;
  double t4934;
  double t5007;
  double t5066;
  double t5093;
  double t5095;
  double t5240;
  double t5317;
  double t5332;
  double t5440;
  double t5462;
  double t5471;
  double t5568;
  double t5586;
  double t5592;
  double t5648;
  double t5654;
  double t5656;
  double t5676;
  double t5697;
  double t5701;
  double t6780;
  double t6789;
  double t6815;
  double t6861;
  double t6903;
  double t6942;
  double t7146;
  double t7207;
  double t7328;
  double t7623;
  double t7722;
  double t7757;
  double t7998;
  double t8171;
  double t8410;
  double t8859;
  double t9011;
  double t9062;
  double t9071;
  double t9079;
  double t9155;
  double t9189;
  double t9214;
  double t9245;
  double t9263;
  double t9264;
  double t9271;
  double t9282;
  double t9285;
  double t9291;
  double t9301;
  double t9305;
  double t9316;
  double t9422;
  double t9424;
  double t9444;
  double t9446;
  double t9461;
  double t9467;
  double t9514;
  double t9517;
  double t9531;
  double t9563;
  double t9566;
  double t9577;
  double t9581;
  double t9585;
  double t9587;
  double t9596;
  double t9597;
  double t9608;
  double t9618;
  double t9624;
  double t9625;
  double t9630;
  double t9631;
  double t9641;
  double t9655;
  double t9658;
  double t9667;
  double t9671;
  double t9680;
  double t9685;
  double t9695;
  double t9696;
  double t9700;
  double t9730;
  double t9731;
  double t9736;
  double t9755;
  double t9760;
  double t9738;
  double t9740;
  double t9747;
  double t9767;
  double t9769;
  double t9770;
  double t9774;
  double t9775;
  double t9778;
  double t9783;
  double t9794;
  double t9796;
  double t9803;
  double t9806;
  double t9810;
  double t9812;
  double t9824;
  double t9825;
  double t9831;
  double t9832;
  double t9834;
  double t9838;
  double t9841;
  double t9842;
  double t9846;
  double t9848;
  double t9852;
  double t9887;
  double t9895;
  double t9896;
  double t9908;
  double t9912;
  double t9917;
  double t9901;
  double t9903;
  double t9928;
  double t9931;
  double t9935;
  double t9941;
  double t9942;
  double t9945;
  double t9952;
  double t9954;
  double t9959;
  double t9965;
  double t9966;
  double t9969;
  double t9971;
  double t9972;
  double t9973;
  double t9976;
  double t9978;
  double t9982;
  double t9994;
  double t9999;
  double t10000;
  double t10003;
  double t10004;
  double t10005;
  double t10041;
  double t10045;
  double t10047;
  double t10034;
  double t10035;
  double t10038;
  double t10058;
  double t10065;
  double t10067;
  double t10072;
  double t10073;
  double t10074;
  double t10076;
  double t10077;
  double t10078;
  double t10080;
  double t10081;
  double t10082;
  double t10085;
  double t10086;
  double t10090;
  double t10092;
  double t10093;
  double t10095;
  double t10098;
  double t10099;
  double t10101;
  double t10104;
  double t10108;
  double t10109;
  double t10136;
  double t10139;
  double t10145;
  double t10146;
  double t10147;
  double t10149;
  double t10150;
  double t10151;
  double t10153;
  double t10157;
  double t10158;
  double t10161;
  double t10162;
  double t10163;
  double t10166;
  double t10167;
  double t10169;
  double t10172;
  double t10173;
  double t10175;
  double t10178;
  double t10179;
  double t10180;
  double t10182;
  double t10184;
  double t10185;
  double t10202;
  double t10203;
  double t10204;
  double t10209;
  double t10210;
  double t10206;
  double t10207;
  double t10222;
  double t10223;
  double t10226;
  double t10231;
  double t10232;
  double t10234;
  double t10238;
  double t10239;
  double t10242;
  double t10247;
  double t10248;
  double t10250;
  double t10254;
  double t10255;
  double t10256;
  double t10260;
  double t10262;
  double t10263;
  double t10266;
  double t10267;
  double t10268;
  double t10270;
  double t10271;
  double t10272;
  double t10040;
  double t10051;
  double t10054;
  double t10056;
  double t10068;
  double t10075;
  double t10079;
  double t10083;
  double t10091;
  double t10096;
  double t10103;
  double t10113;
  double t10115;
  double t10116;
  double t10117;
  double t10119;
  double t10121;
  double t10122;
  double t10123;
  double t10126;
  double t3362;
  double t3406;
  double t3413;
  double t10309;
  double t10310;
  double t10311;
  double t10313;
  double t10314;
  double t10316;
  double t10319;
  double t10322;
  double t10323;
  double t10325;
  double t10326;
  double t10328;
  double t10331;
  double t10332;
  double t10334;
  double t10336;
  double t10337;
  double t10338;
  double t10291;
  double t10293;
  double t10294;
  double t10298;
  double t10299;
  double t10356;
  double t10357;
  double t10358;
  double t10360;
  double t10361;
  double t10362;
  double t10369;
  double t10370;
  double t10372;
  double t10374;
  double t10375;
  double t10376;
  double t10378;
  double t10379;
  double t10380;
  double t10382;
  double t10385;
  double t10386;
  double t10390;
  double t10391;
  double t10392;
  double t10395;
  double t10397;
  double t10398;
  double t10413;
  double t10414;
  double t10415;
  double t10417;
  double t10418;
  double t10420;
  double t10432;
  double t10433;
  double t10434;
  double t10438;
  double t10439;
  double t10441;
  double t10444;
  double t10445;
  double t10447;
  double t10450;
  double t10451;
  double t10453;
  double t10455;
  double t10456;
  double t10457;
  double t10459;
  double t10460;
  double t10461;
  double t10485;
  double t10486;
  double t10487;
  double t10492;
  double t10493;
  double t10497;
  double t10498;
  double t10499;
  double t10502;
  double t10503;
  double t10504;
  double t10506;
  double t10507;
  double t10508;
  double t10510;
  double t10511;
  double t10512;
  double t10514;
  double t10515;
  double t10516;
  double t10474;
  double t10475;
  double t10477;
  double t10480;
  double t10481;
  double t10533;
  double t10534;
  double t10535;
  double t10538;
  double t10539;
  double t10541;
  double t10545;
  double t10546;
  double t10547;
  double t10549;
  double t10550;
  double t10551;
  double t10553;
  double t10554;
  double t10555;
  double t10557;
  double t10559;
  double t10562;
  double t10564;
  double t10567;
  double t10568;
  double t10571;
  double t10572;
  double t10574;
  double t10577;
  double t10578;
  double t10579;
  double t10595;
  double t10596;
  double t10597;
  double t10599;
  double t10600;
  double t10601;
  double t10605;
  double t10608;
  double t10609;
  double t10613;
  double t10614;
  double t10615;
  double t10618;
  double t10620;
  double t10621;
  double t10624;
  double t10625;
  double t10626;
  double t10629;
  double t10630;
  double t10631;
  double t10634;
  double t10637;
  double t10638;
  double t10640;
  double t10641;
  double t10642;
  double t10664;
  double t10665;
  double t10668;
  double t10669;
  double t10672;
  double t10674;
  double t10675;
  double t10677;
  double t10678;
  double t10679;
  double t10681;
  double t10682;
  double t10683;
  double t10653;
  double t10654;
  double t10656;
  double t10659;
  double t10660;
  double t10700;
  double t10701;
  double t10702;
  double t10708;
  double t10709;
  double t10711;
  double t10712;
  double t10714;
  double t10715;
  double t10716;
  double t10718;
  double t10719;
  double t10721;
  double t10725;
  double t10727;
  double t10728;
  double t10731;
  double t10732;
  double t10733;
  double t10748;
  double t10749;
  double t10750;
  double t10753;
  double t10754;
  double t10756;
  double t10757;
  double t10759;
  double t10760;
  double t10762;
  double t10764;
  double t10765;
  double t10767;
  double t10771;
  double t10772;
  double t10773;
  double t10775;
  double t10776;
  double t10777;
  double t10802;
  double t10803;
  double t10806;
  double t10807;
  double t10809;
  double t10810;
  double t10811;
  double t10792;
  double t10793;
  double t10796;
  double t10799;
  double t10800;
  double t10830;
  double t10831;
  double t10832;
  double t10834;
  double t10835;
  double t10837;
  double t10838;
  double t10840;
  double t10841;
  double t10842;
  double t10844;
  double t10846;
  double t10847;
  double t10863;
  double t10865;
  double t10866;
  double t10869;
  double t10870;
  double t10873;
  double t10874;
  double t10876;
  double t10877;
  double t10879;
  double t10883;
  double t10885;
  double t10886;
  double t10907;
  double t10908;
  double t4203;
  double t10899;
  double t10900;
  double t10901;
  double t10903;
  double t10904;
  double t10919;
  double t10920;
  double t10921;
  double t10925;
  double t10926;
  double t10928;
  double t10929;
  double t10940;
  double t10941;
  double t10942;
  double t10945;
  double t10946;
  double t10948;
  double t10949;
  double t10910;
  double t4206;
  double t4289;
  double t10960;
  double t10961;
  double t10963;
  double t10964;
  double t10965;
  double t10931;
  double t10973;
  double t10974;
  double t10975;
  double t10935;
  double t10951;
  double t10985;
  double t10986;
  double t10987;
  double t10955;
  t143 = Sin(var1[3]);
  t309 = Cos(var1[3]);
  t211 = Cos(var1[5]);
  t241 = Sin(var1[4]);
  t310 = Sin(var1[5]);
  t43 = Cos(var1[14]);
  t50 = -1.*t43;
  t54 = 1. + t50;
  t90 = Sin(var1[14]);
  t164 = Sin(var1[13]);
  t290 = -1.*t211*t143*t241;
  t314 = t309*t310;
  t335 = t290 + t314;
  t423 = Cos(var1[13]);
  t779 = -1.*t309*t211;
  t871 = -1.*t143*t241*t310;
  t929 = t779 + t871;
  t41 = Cos(var1[4]);
  t967 = t164*t335;
  t971 = t423*t929;
  t988 = t967 + t971;
  t995 = Cos(var1[15]);
  t1003 = -1.*t995;
  t1025 = 1. + t1003;
  t1037 = Sin(var1[15]);
  t1044 = t423*t335;
  t1045 = -1.*t164*t929;
  t1047 = t1044 + t1045;
  t1099 = -1.*t43*t41*t143;
  t1100 = t90*t988;
  t1101 = t1099 + t1100;
  t1110 = Cos(var1[16]);
  t1114 = -1.*t1110;
  t1115 = 1. + t1114;
  t1118 = Sin(var1[16]);
  t1123 = t1037*t1047;
  t1124 = t995*t1101;
  t1128 = t1123 + t1124;
  t1138 = t995*t1047;
  t1142 = -1.*t1037*t1101;
  t1143 = t1138 + t1142;
  t1153 = Cos(var1[17]);
  t1154 = -1.*t1153;
  t1158 = 1. + t1154;
  t1160 = Sin(var1[17]);
  t1169 = -1.*t1118*t1128;
  t1180 = t1110*t1143;
  t1181 = t1169 + t1180;
  t1323 = t1110*t1128;
  t1326 = t1118*t1143;
  t1372 = t1323 + t1326;
  t1526 = Cos(var1[18]);
  t1547 = -1.*t1526;
  t1553 = 1. + t1547;
  t1660 = Sin(var1[18]);
  t1759 = t1160*t1181;
  t1801 = t1153*t1372;
  t1805 = t1759 + t1801;
  t2031 = t1153*t1181;
  t2055 = -1.*t1160*t1372;
  t2077 = t2031 + t2055;
  t2158 = Cos(var1[19]);
  t2173 = -1.*t2158;
  t2210 = 1. + t2173;
  t2284 = Sin(var1[19]);
  t2471 = -1.*t1660*t1805;
  t2487 = t1526*t2077;
  t2522 = t2471 + t2487;
  t2666 = t1526*t1805;
  t2667 = t1660*t2077;
  t2680 = t2666 + t2667;
  t80 = -0.049*t54;
  t114 = -0.135*t90;
  t141 = 0. + t80 + t114;
  t189 = 0.135*t164;
  t195 = 0. + t189;
  t495 = -1.*t423;
  t680 = 1. + t495;
  t728 = -0.135*t680;
  t778 = 0. + t728;
  t938 = -0.135*t54;
  t950 = 0.049*t90;
  t959 = 0. + t938 + t950;
  t2982 = t309*t211*t241;
  t3074 = t143*t310;
  t3079 = t2982 + t3074;
  t3093 = -1.*t211*t143;
  t3146 = t309*t241*t310;
  t3155 = t3093 + t3146;
  t1035 = -0.09*t1025;
  t1039 = 0.049*t1037;
  t1040 = 0. + t1035 + t1039;
  t3165 = t164*t3079;
  t3186 = t423*t3155;
  t3194 = t3165 + t3186;
  t1087 = -0.049*t1025;
  t1089 = -0.09*t1037;
  t1091 = 0. + t1087 + t1089;
  t1116 = -0.049*t1115;
  t1119 = -0.21*t1118;
  t1120 = 0. + t1116 + t1119;
  t3252 = t423*t3079;
  t3253 = -1.*t164*t3155;
  t3302 = t3252 + t3253;
  t3458 = t43*t309*t41;
  t3490 = t90*t3194;
  t3503 = t3458 + t3490;
  t1132 = -0.21*t1115;
  t1133 = 0.049*t1118;
  t1134 = 0. + t1132 + t1133;
  t1159 = -0.2707*t1158;
  t1165 = 0.0016*t1160;
  t1168 = 0. + t1159 + t1165;
  t3523 = t1037*t3302;
  t3524 = t995*t3503;
  t3547 = t3523 + t3524;
  t3619 = t995*t3302;
  t3643 = -1.*t1037*t3503;
  t3653 = t3619 + t3643;
  t1259 = -0.0016*t1158;
  t1272 = -0.2707*t1160;
  t1280 = 0. + t1259 + t1272;
  t1594 = 0.0184*t1553;
  t1673 = -0.7055*t1660;
  t1678 = 0. + t1594 + t1673;
  t3672 = -1.*t1118*t3547;
  t3694 = t1110*t3653;
  t3705 = t3672 + t3694;
  t3718 = t1110*t3547;
  t3725 = t1118*t3653;
  t3726 = t3718 + t3725;
  t1975 = -0.7055*t1553;
  t1990 = -0.0184*t1660;
  t2005 = 0. + t1975 + t1990;
  t2268 = -1.1135*t2210;
  t2285 = 0.0216*t2284;
  t2286 = 0. + t2268 + t2285;
  t3742 = t1160*t3705;
  t3786 = t1153*t3726;
  t3828 = t3742 + t3786;
  t3873 = t1153*t3705;
  t3883 = -1.*t1160*t3726;
  t3896 = t3873 + t3883;
  t2553 = -0.0216*t2210;
  t2614 = -1.1135*t2284;
  t2663 = 0. + t2553 + t2614;
  t3920 = -1.*t1660*t3828;
  t3969 = t1526*t3896;
  t3975 = t3920 + t3969;
  t4024 = t1526*t3828;
  t4059 = t1660*t3896;
  t4064 = t4024 + t4059;
  t4377 = t309*t41*t211*t164;
  t4390 = t423*t309*t41*t310;
  t4396 = t4377 + t4390;
  t4426 = t423*t309*t41*t211;
  t4437 = -1.*t309*t41*t164*t310;
  t4458 = t4426 + t4437;
  t4697 = -1.*t43*t309*t241;
  t4728 = t90*t4396;
  t4770 = t4697 + t4728;
  t4826 = t1037*t4458;
  t4830 = t995*t4770;
  t4871 = t4826 + t4830;
  t4930 = t995*t4458;
  t4934 = -1.*t1037*t4770;
  t5007 = t4930 + t4934;
  t5066 = -1.*t1118*t4871;
  t5093 = t1110*t5007;
  t5095 = t5066 + t5093;
  t5240 = t1110*t4871;
  t5317 = t1118*t5007;
  t5332 = t5240 + t5317;
  t5440 = t1160*t5095;
  t5462 = t1153*t5332;
  t5471 = t5440 + t5462;
  t5568 = t1153*t5095;
  t5586 = -1.*t1160*t5332;
  t5592 = t5568 + t5586;
  t5648 = -1.*t1660*t5471;
  t5654 = t1526*t5592;
  t5656 = t5648 + t5654;
  t5676 = t1526*t5471;
  t5697 = t1660*t5592;
  t5701 = t5676 + t5697;
  t6780 = t41*t211*t164*t143;
  t6789 = t423*t41*t143*t310;
  t6815 = t6780 + t6789;
  t6861 = t423*t41*t211*t143;
  t6903 = -1.*t41*t164*t143*t310;
  t6942 = t6861 + t6903;
  t7146 = -1.*t43*t143*t241;
  t7207 = t90*t6815;
  t7328 = t7146 + t7207;
  t7623 = t1037*t6942;
  t7722 = t995*t7328;
  t7757 = t7623 + t7722;
  t7998 = t995*t6942;
  t8171 = -1.*t1037*t7328;
  t8410 = t7998 + t8171;
  t8859 = -1.*t1118*t7757;
  t9011 = t1110*t8410;
  t9062 = t8859 + t9011;
  t9071 = t1110*t7757;
  t9079 = t1118*t8410;
  t9155 = t9071 + t9079;
  t9189 = t1160*t9062;
  t9214 = t1153*t9155;
  t9245 = t9189 + t9214;
  t9263 = t1153*t9062;
  t9264 = -1.*t1160*t9155;
  t9271 = t9263 + t9264;
  t9282 = -1.*t1660*t9245;
  t9285 = t1526*t9271;
  t9291 = t9282 + t9285;
  t9301 = t1526*t9245;
  t9305 = t1660*t9271;
  t9316 = t9301 + t9305;
  t9422 = -1.*t211*t164*t241;
  t9424 = -1.*t423*t241*t310;
  t9444 = t9422 + t9424;
  t9446 = -1.*t423*t211*t241;
  t9461 = t164*t241*t310;
  t9467 = t9446 + t9461;
  t9514 = -1.*t43*t41;
  t9517 = t90*t9444;
  t9531 = t9514 + t9517;
  t9563 = t1037*t9467;
  t9566 = t995*t9531;
  t9577 = t9563 + t9566;
  t9581 = t995*t9467;
  t9585 = -1.*t1037*t9531;
  t9587 = t9581 + t9585;
  t9596 = -1.*t1118*t9577;
  t9597 = t1110*t9587;
  t9608 = t9596 + t9597;
  t9618 = t1110*t9577;
  t9624 = t1118*t9587;
  t9625 = t9618 + t9624;
  t9630 = t1160*t9608;
  t9631 = t1153*t9625;
  t9641 = t9630 + t9631;
  t9655 = t1153*t9608;
  t9658 = -1.*t1160*t9625;
  t9667 = t9655 + t9658;
  t9671 = -1.*t1660*t9641;
  t9680 = t1526*t9667;
  t9685 = t9671 + t9680;
  t9695 = t1526*t9641;
  t9696 = t1660*t9667;
  t9700 = t9695 + t9696;
  t9730 = t211*t143;
  t9731 = -1.*t309*t241*t310;
  t9736 = t9730 + t9731;
  t9755 = t164*t9736;
  t9760 = t3252 + t9755;
  t9738 = -1.*t164*t3079;
  t9740 = t423*t9736;
  t9747 = t9738 + t9740;
  t9767 = t1037*t9747;
  t9769 = t995*t90*t9760;
  t9770 = t9767 + t9769;
  t9774 = t995*t9747;
  t9775 = -1.*t90*t1037*t9760;
  t9778 = t9774 + t9775;
  t9783 = -1.*t1118*t9770;
  t9794 = t1110*t9778;
  t9796 = t9783 + t9794;
  t9803 = t1110*t9770;
  t9806 = t1118*t9778;
  t9810 = t9803 + t9806;
  t9812 = t1160*t9796;
  t9824 = t1153*t9810;
  t9825 = t9812 + t9824;
  t9831 = t1153*t9796;
  t9832 = -1.*t1160*t9810;
  t9834 = t9831 + t9832;
  t9838 = -1.*t1660*t9825;
  t9841 = t1526*t9834;
  t9842 = t9838 + t9841;
  t9846 = t1526*t9825;
  t9848 = t1660*t9834;
  t9852 = t9846 + t9848;
  t9887 = t211*t143*t241;
  t9895 = -1.*t309*t310;
  t9896 = t9887 + t9895;
  t9908 = t423*t9896;
  t9912 = t164*t929;
  t9917 = t9908 + t9912;
  t9901 = -1.*t164*t9896;
  t9903 = t9901 + t971;
  t9928 = t1037*t9903;
  t9931 = t995*t90*t9917;
  t9935 = t9928 + t9931;
  t9941 = t995*t9903;
  t9942 = -1.*t90*t1037*t9917;
  t9945 = t9941 + t9942;
  t9952 = -1.*t1118*t9935;
  t9954 = t1110*t9945;
  t9959 = t9952 + t9954;
  t9965 = t1110*t9935;
  t9966 = t1118*t9945;
  t9969 = t9965 + t9966;
  t9971 = t1160*t9959;
  t9972 = t1153*t9969;
  t9973 = t9971 + t9972;
  t9976 = t1153*t9959;
  t9978 = -1.*t1160*t9969;
  t9982 = t9976 + t9978;
  t9994 = -1.*t1660*t9973;
  t9999 = t1526*t9982;
  t10000 = t9994 + t9999;
  t10003 = t1526*t9973;
  t10004 = t1660*t9982;
  t10005 = t10003 + t10004;
  t10041 = t423*t41*t211;
  t10045 = -1.*t41*t164*t310;
  t10047 = t10041 + t10045;
  t10034 = -1.*t41*t211*t164;
  t10035 = -1.*t423*t41*t310;
  t10038 = t10034 + t10035;
  t10058 = t1037*t10038;
  t10065 = t995*t90*t10047;
  t10067 = t10058 + t10065;
  t10072 = t995*t10038;
  t10073 = -1.*t90*t1037*t10047;
  t10074 = t10072 + t10073;
  t10076 = -1.*t1118*t10067;
  t10077 = t1110*t10074;
  t10078 = t10076 + t10077;
  t10080 = t1110*t10067;
  t10081 = t1118*t10074;
  t10082 = t10080 + t10081;
  t10085 = t1160*t10078;
  t10086 = t1153*t10082;
  t10090 = t10085 + t10086;
  t10092 = t1153*t10078;
  t10093 = -1.*t1160*t10082;
  t10095 = t10092 + t10093;
  t10098 = -1.*t1660*t10090;
  t10099 = t1526*t10095;
  t10101 = t10098 + t10099;
  t10104 = t1526*t10090;
  t10108 = t1660*t10095;
  t10109 = t10104 + t10108;
  t10136 = -1.*t423*t3155;
  t10139 = t9738 + t10136;
  t10145 = t1037*t10139;
  t10146 = t995*t90*t3302;
  t10147 = t10145 + t10146;
  t10149 = t995*t10139;
  t10150 = -1.*t90*t1037*t3302;
  t10151 = t10149 + t10150;
  t10153 = -1.*t1118*t10147;
  t10157 = t1110*t10151;
  t10158 = t10153 + t10157;
  t10161 = t1110*t10147;
  t10162 = t1118*t10151;
  t10163 = t10161 + t10162;
  t10166 = t1160*t10158;
  t10167 = t1153*t10163;
  t10169 = t10166 + t10167;
  t10172 = t1153*t10158;
  t10173 = -1.*t1160*t10163;
  t10175 = t10172 + t10173;
  t10178 = -1.*t1660*t10169;
  t10179 = t1526*t10175;
  t10180 = t10178 + t10179;
  t10182 = t1526*t10169;
  t10184 = t1660*t10175;
  t10185 = t10182 + t10184;
  t10202 = t309*t211;
  t10203 = t143*t241*t310;
  t10204 = t10202 + t10203;
  t10209 = -1.*t164*t10204;
  t10210 = t9908 + t10209;
  t10206 = -1.*t423*t10204;
  t10207 = t9901 + t10206;
  t10222 = t1037*t10207;
  t10223 = t995*t90*t10210;
  t10226 = t10222 + t10223;
  t10231 = t995*t10207;
  t10232 = -1.*t90*t1037*t10210;
  t10234 = t10231 + t10232;
  t10238 = -1.*t1118*t10226;
  t10239 = t1110*t10234;
  t10242 = t10238 + t10239;
  t10247 = t1110*t10226;
  t10248 = t1118*t10234;
  t10250 = t10247 + t10248;
  t10254 = t1160*t10242;
  t10255 = t1153*t10250;
  t10256 = t10254 + t10255;
  t10260 = t1153*t10242;
  t10262 = -1.*t1160*t10250;
  t10263 = t10260 + t10262;
  t10266 = -1.*t1660*t10256;
  t10267 = t1526*t10263;
  t10268 = t10266 + t10267;
  t10270 = t1526*t10256;
  t10271 = t1660*t10263;
  t10272 = t10270 + t10271;
  t10040 = t1040*t10038;
  t10051 = -0.1305*t43*t10047;
  t10054 = t959*t10047;
  t10056 = t90*t1091*t10047;
  t10068 = t1120*t10067;
  t10075 = t1134*t10074;
  t10079 = t1168*t10078;
  t10083 = t1280*t10082;
  t10091 = t1678*t10090;
  t10096 = t2005*t10095;
  t10103 = t2286*t10101;
  t10113 = t2663*t10109;
  t10115 = t2284*t10101;
  t10116 = t2158*t10109;
  t10117 = t10115 + t10116;
  t10119 = -0.0216*t10117;
  t10121 = t2158*t10101;
  t10122 = -1.*t2284*t10109;
  t10123 = t10121 + t10122;
  t10126 = -1.1135*t10123;
  t3362 = -1.*t309*t41*t90;
  t3406 = t43*t3194;
  t3413 = t3362 + t3406;
  t10309 = -1.*t1110*t1037*t3413;
  t10310 = -1.*t995*t1118*t3413;
  t10311 = t10309 + t10310;
  t10313 = t995*t1110*t3413;
  t10314 = -1.*t1037*t1118*t3413;
  t10316 = t10313 + t10314;
  t10319 = t1160*t10311;
  t10322 = t1153*t10316;
  t10323 = t10319 + t10322;
  t10325 = t1153*t10311;
  t10326 = -1.*t1160*t10316;
  t10328 = t10325 + t10326;
  t10331 = -1.*t1660*t10323;
  t10332 = t1526*t10328;
  t10334 = t10331 + t10332;
  t10336 = t1526*t10323;
  t10337 = t1660*t10328;
  t10338 = t10336 + t10337;
  t10291 = -0.135*t43;
  t10293 = -0.049*t90;
  t10294 = t10291 + t10293;
  t10298 = 0.049*t43;
  t10299 = t10298 + t114;
  t10356 = t164*t9896;
  t10357 = t423*t10204;
  t10358 = t10356 + t10357;
  t10360 = -1.*t41*t90*t143;
  t10361 = t43*t10358;
  t10362 = t10360 + t10361;
  t10369 = -1.*t1110*t1037*t10362;
  t10370 = -1.*t995*t1118*t10362;
  t10372 = t10369 + t10370;
  t10374 = t995*t1110*t10362;
  t10375 = -1.*t1037*t1118*t10362;
  t10376 = t10374 + t10375;
  t10378 = t1160*t10372;
  t10379 = t1153*t10376;
  t10380 = t10378 + t10379;
  t10382 = t1153*t10372;
  t10385 = -1.*t1160*t10376;
  t10386 = t10382 + t10385;
  t10390 = -1.*t1660*t10380;
  t10391 = t1526*t10386;
  t10392 = t10390 + t10391;
  t10395 = t1526*t10380;
  t10397 = t1660*t10386;
  t10398 = t10395 + t10397;
  t10413 = t41*t211*t164;
  t10414 = t423*t41*t310;
  t10415 = t10413 + t10414;
  t10417 = t90*t241;
  t10418 = t43*t10415;
  t10420 = t10417 + t10418;
  t10432 = -1.*t1110*t1037*t10420;
  t10433 = -1.*t995*t1118*t10420;
  t10434 = t10432 + t10433;
  t10438 = t995*t1110*t10420;
  t10439 = -1.*t1037*t1118*t10420;
  t10441 = t10438 + t10439;
  t10444 = t1160*t10434;
  t10445 = t1153*t10441;
  t10447 = t10444 + t10445;
  t10450 = t1153*t10434;
  t10451 = -1.*t1160*t10441;
  t10453 = t10450 + t10451;
  t10455 = -1.*t1660*t10447;
  t10456 = t1526*t10453;
  t10457 = t10455 + t10456;
  t10459 = t1526*t10447;
  t10460 = t1660*t10453;
  t10461 = t10459 + t10460;
  t10485 = -1.*t1037*t3302;
  t10486 = -1.*t995*t3503;
  t10487 = t10485 + t10486;
  t10492 = t1118*t10487;
  t10493 = t10492 + t3694;
  t10497 = t1110*t10487;
  t10498 = -1.*t1118*t3653;
  t10499 = t10497 + t10498;
  t10502 = -1.*t1160*t10493;
  t10503 = t1153*t10499;
  t10504 = t10502 + t10503;
  t10506 = t1153*t10493;
  t10507 = t1160*t10499;
  t10508 = t10506 + t10507;
  t10510 = t1660*t10504;
  t10511 = t1526*t10508;
  t10512 = t10510 + t10511;
  t10514 = t1526*t10504;
  t10515 = -1.*t1660*t10508;
  t10516 = t10514 + t10515;
  t10474 = 0.049*t995;
  t10475 = t10474 + t1089;
  t10477 = -0.09*t995;
  t10480 = -0.049*t1037;
  t10481 = t10477 + t10480;
  t10533 = t43*t41*t143;
  t10534 = t90*t10358;
  t10535 = t10533 + t10534;
  t10538 = -1.*t1037*t10210;
  t10539 = -1.*t995*t10535;
  t10541 = t10538 + t10539;
  t10545 = t995*t10210;
  t10546 = -1.*t1037*t10535;
  t10547 = t10545 + t10546;
  t10549 = t1118*t10541;
  t10550 = t1110*t10547;
  t10551 = t10549 + t10550;
  t10553 = t1110*t10541;
  t10554 = -1.*t1118*t10547;
  t10555 = t10553 + t10554;
  t10557 = -1.*t1160*t10551;
  t10559 = t1153*t10555;
  t10562 = t10557 + t10559;
  t10564 = t1153*t10551;
  t10567 = t1160*t10555;
  t10568 = t10564 + t10567;
  t10571 = t1660*t10562;
  t10572 = t1526*t10568;
  t10574 = t10571 + t10572;
  t10577 = t1526*t10562;
  t10578 = -1.*t1660*t10568;
  t10579 = t10577 + t10578;
  t10595 = -1.*t43*t241;
  t10596 = t90*t10415;
  t10597 = t10595 + t10596;
  t10599 = -1.*t1037*t10047;
  t10600 = -1.*t995*t10597;
  t10601 = t10599 + t10600;
  t10605 = t995*t10047;
  t10608 = -1.*t1037*t10597;
  t10609 = t10605 + t10608;
  t10613 = t1118*t10601;
  t10614 = t1110*t10609;
  t10615 = t10613 + t10614;
  t10618 = t1110*t10601;
  t10620 = -1.*t1118*t10609;
  t10621 = t10618 + t10620;
  t10624 = -1.*t1160*t10615;
  t10625 = t1153*t10621;
  t10626 = t10624 + t10625;
  t10629 = t1153*t10615;
  t10630 = t1160*t10621;
  t10631 = t10629 + t10630;
  t10634 = t1660*t10626;
  t10637 = t1526*t10631;
  t10638 = t10634 + t10637;
  t10640 = t1526*t10626;
  t10641 = -1.*t1660*t10631;
  t10642 = t10640 + t10641;
  t10664 = -1.*t1110*t3547;
  t10665 = t10664 + t10498;
  t10668 = -1.*t1160*t3705;
  t10669 = t1153*t10665;
  t10672 = t10668 + t10669;
  t10674 = t1160*t10665;
  t10675 = t3873 + t10674;
  t10677 = t1660*t10672;
  t10678 = t1526*t10675;
  t10679 = t10677 + t10678;
  t10681 = t1526*t10672;
  t10682 = -1.*t1660*t10675;
  t10683 = t10681 + t10682;
  t10653 = -0.21*t1110;
  t10654 = -0.049*t1118;
  t10656 = t10653 + t10654;
  t10659 = 0.049*t1110;
  t10660 = t10659 + t1119;
  t10700 = t1037*t10210;
  t10701 = t995*t10535;
  t10702 = t10700 + t10701;
  t10708 = -1.*t1118*t10702;
  t10709 = t10708 + t10550;
  t10711 = -1.*t1110*t10702;
  t10712 = t10711 + t10554;
  t10714 = -1.*t1160*t10709;
  t10715 = t1153*t10712;
  t10716 = t10714 + t10715;
  t10718 = t1153*t10709;
  t10719 = t1160*t10712;
  t10721 = t10718 + t10719;
  t10725 = t1660*t10716;
  t10727 = t1526*t10721;
  t10728 = t10725 + t10727;
  t10731 = t1526*t10716;
  t10732 = -1.*t1660*t10721;
  t10733 = t10731 + t10732;
  t10748 = t1037*t10047;
  t10749 = t995*t10597;
  t10750 = t10748 + t10749;
  t10753 = -1.*t1118*t10750;
  t10754 = t10753 + t10614;
  t10756 = -1.*t1110*t10750;
  t10757 = t10756 + t10620;
  t10759 = -1.*t1160*t10754;
  t10760 = t1153*t10757;
  t10762 = t10759 + t10760;
  t10764 = t1153*t10754;
  t10765 = t1160*t10757;
  t10767 = t10764 + t10765;
  t10771 = t1660*t10762;
  t10772 = t1526*t10767;
  t10773 = t10771 + t10772;
  t10775 = t1526*t10762;
  t10776 = -1.*t1660*t10767;
  t10777 = t10775 + t10776;
  t10802 = -1.*t1153*t3726;
  t10803 = t10668 + t10802;
  t10806 = t1660*t10803;
  t10807 = t10806 + t3969;
  t10809 = t1526*t10803;
  t10810 = -1.*t1660*t3896;
  t10811 = t10809 + t10810;
  t10792 = 0.0016*t1153;
  t10793 = t10792 + t1272;
  t10796 = -0.2707*t1153;
  t10799 = -0.0016*t1160;
  t10800 = t10796 + t10799;
  t10830 = t1110*t10702;
  t10831 = t1118*t10547;
  t10832 = t10830 + t10831;
  t10834 = -1.*t1153*t10832;
  t10835 = t10714 + t10834;
  t10837 = -1.*t1160*t10832;
  t10838 = t10718 + t10837;
  t10840 = t1660*t10835;
  t10841 = t1526*t10838;
  t10842 = t10840 + t10841;
  t10844 = t1526*t10835;
  t10846 = -1.*t1660*t10838;
  t10847 = t10844 + t10846;
  t10863 = t1110*t10750;
  t10865 = t1118*t10609;
  t10866 = t10863 + t10865;
  t10869 = -1.*t1153*t10866;
  t10870 = t10759 + t10869;
  t10873 = -1.*t1160*t10866;
  t10874 = t10764 + t10873;
  t10876 = t1660*t10870;
  t10877 = t1526*t10874;
  t10879 = t10876 + t10877;
  t10883 = t1526*t10870;
  t10885 = -1.*t1660*t10874;
  t10886 = t10883 + t10885;
  t10907 = -1.*t1526*t3828;
  t10908 = t10907 + t10810;
  t4203 = t2158*t3975;
  t10899 = -0.7055*t1526;
  t10900 = 0.0184*t1660;
  t10901 = t10899 + t10900;
  t10903 = -0.0184*t1526;
  t10904 = t10903 + t1673;
  t10919 = t1160*t10709;
  t10920 = t1153*t10832;
  t10921 = t10919 + t10920;
  t10925 = -1.*t1660*t10921;
  t10926 = t10925 + t10841;
  t10928 = -1.*t1526*t10921;
  t10929 = t10928 + t10846;
  t10940 = t1160*t10754;
  t10941 = t1153*t10866;
  t10942 = t10940 + t10941;
  t10945 = -1.*t1660*t10942;
  t10946 = t10945 + t10877;
  t10948 = -1.*t1526*t10942;
  t10949 = t10948 + t10885;
  t10910 = -1.*t2284*t3975;
  t4206 = -1.*t2284*t4064;
  t4289 = t4203 + t4206;
  t10960 = 0.0216*t2158;
  t10961 = t10960 + t2614;
  t10963 = -1.1135*t2158;
  t10964 = -0.0216*t2284;
  t10965 = t10963 + t10964;
  t10931 = -1.*t2284*t10926;
  t10973 = t1526*t10921;
  t10974 = t1660*t10838;
  t10975 = t10973 + t10974;
  t10935 = t2158*t10926;
  t10951 = -1.*t2284*t10946;
  t10985 = t1526*t10942;
  t10986 = t1660*t10874;
  t10987 = t10985 + t10986;
  t10955 = t2158*t10946;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1040*t1047 + t1091*t1101 + t1120*t1128 + t1134*t1143 + t1168*t1181 + t1280*t1372 + t1678*t1805 + t2005*t2077 + t2286*t2522 + t2663*t2680 - 0.0216*(t2284*t2522 + t2158*t2680) - 1.1135*(t2158*t2522 - 1.*t2284*t2680) + t195*t335 - 1.*t141*t143*t41 + t778*t929 + t959*t988 - 0.1305*(t143*t41*t90 + t43*t988);
  p_output1[10]=t195*t3079 + t1040*t3302 - 0.1305*t3413 + t1091*t3503 + t1120*t3547 + t1134*t3653 + t1168*t3705 + t1280*t3726 + t1678*t3828 + t2005*t3896 + t2286*t3975 + t2663*t4064 - 0.0216*(t2284*t3975 + t2158*t4064) + t141*t309*t41 - 1.1135*t4289 + t3155*t778 + t3194*t959;
  p_output1[11]=0;
  p_output1[12]=-1.*t141*t241*t309 + t195*t211*t309*t41 + t1040*t4458 + t1091*t4770 + t1120*t4871 + t1134*t5007 + t1168*t5095 + t1280*t5332 + t1678*t5471 + t2005*t5592 + t2286*t5656 + t2663*t5701 - 0.0216*(t2284*t5656 + t2158*t5701) - 1.1135*(t2158*t5656 - 1.*t2284*t5701) + t309*t310*t41*t778 - 0.1305*(t43*t4396 + t241*t309*t90) + t4396*t959;
  p_output1[13]=-1.*t141*t143*t241 + t143*t195*t211*t41 + t1040*t6942 + t1091*t7328 + t1120*t7757 + t143*t310*t41*t778 + t1134*t8410 - 0.1305*(t43*t6815 + t143*t241*t90) + t1168*t9062 + t1280*t9155 + t1678*t9245 + t2005*t9271 + t2286*t9291 + t2663*t9316 - 0.0216*(t2284*t9291 + t2158*t9316) - 1.1135*(t2158*t9291 - 1.*t2284*t9316) + t6815*t959;
  p_output1[14]=-1.*t195*t211*t241 - 1.*t141*t41 - 1.*t241*t310*t778 - 0.1305*(t41*t90 + t43*t9444) + t1040*t9467 + t1091*t9531 + t1120*t9577 + t1134*t9587 + t9444*t959 + t1168*t9608 + t1280*t9625 + t1678*t9641 + t2005*t9667 + t2286*t9685 + t2663*t9700 - 0.0216*(t2284*t9685 + t2158*t9700) - 1.1135*(t2158*t9685 - 1.*t2284*t9700);
  p_output1[15]=t3079*t778 + t195*t9736 + t1040*t9747 - 0.1305*t43*t9760 + t1091*t90*t9760 + t959*t9760 + t1120*t9770 + t1134*t9778 + t1168*t9796 + t1280*t9810 + t1678*t9825 + t2005*t9834 + t2286*t9842 + t2663*t9852 - 0.0216*(t2284*t9842 + t2158*t9852) - 1.1135*(t2158*t9842 - 1.*t2284*t9852);
  p_output1[16]=-0.0216*(t10005*t2158 + t10000*t2284) - 1.1135*(t10000*t2158 - 1.*t10005*t2284) + t10000*t2286 + t10005*t2663 + t195*t929 + t778*t9896 + t1040*t9903 - 0.1305*t43*t9917 + t1091*t90*t9917 + t959*t9917 + t1120*t9935 + t1134*t9945 + t1168*t9959 + t1280*t9969 + t1678*t9973 + t2005*t9982;
  p_output1[17]=t10040 + t10051 + t10054 + t10056 + t10068 + t10075 + t10079 + t10083 + t10091 + t10096 + t10103 + t10113 + t10119 + t10126 - 1.*t195*t310*t41 + t211*t41*t778;
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
  p_output1[39]=t10139*t1040 + t10147*t1120 + t10151*t1134 + t10158*t1168 + t10163*t1280 + t10169*t1678 + t10175*t2005 - 0.0216*(t10185*t2158 + t10180*t2284) - 1.1135*(t10180*t2158 - 1.*t10185*t2284) + t10180*t2286 + t10185*t2663 - 0.135*t164*t3155 + 0.135*t3079*t423 - 0.1305*t3302*t43 + t1091*t3302*t90 + t3302*t959;
  p_output1[40]=t10207*t1040 + t10226*t1120 + t10234*t1134 + t10242*t1168 + t10250*t1280 - 0.135*t10204*t164 + t10256*t1678 + t10263*t2005 - 0.0216*(t10272*t2158 + t10268*t2284) - 1.1135*(t10268*t2158 - 1.*t10272*t2284) + t10268*t2286 + t10272*t2663 - 0.1305*t10210*t43 + t10210*t1091*t90 + t10210*t959 + 0.135*t423*t9896;
  p_output1[41]=t10040 + t10051 + t10054 + t10056 + t10068 + t10075 + t10079 + t10083 + t10091 + t10096 + t10103 + t10113 + t10119 + t10126 - 0.135*t164*t310*t41 + 0.135*t211*t41*t423;
  p_output1[42]=t10311*t1168 + t10316*t1280 + t10323*t1678 + t10328*t2005 - 0.0216*(t10338*t2158 + t10334*t2284) - 1.1135*(t10334*t2158 - 1.*t10338*t2284) + t10334*t2286 + t10338*t2663 + t10299*t3194 + t1091*t3413 - 1.*t1037*t1134*t3413 + t10294*t309*t41 - 0.1305*(-1.*t309*t41*t43 - 1.*t3194*t90) + t1120*t3413*t995;
  p_output1[43]=t10299*t10358 + t10362*t1091 - 1.*t10362*t1037*t1134 + t10372*t1168 + t10376*t1280 + t10380*t1678 + t10386*t2005 - 0.0216*(t10398*t2158 + t10392*t2284) - 1.1135*(t10392*t2158 - 1.*t10398*t2284) + t10392*t2286 + t10398*t2663 + t10294*t143*t41 - 0.1305*(t1099 - 1.*t10358*t90) + t10362*t1120*t995;
  p_output1[44]=t10299*t10415 + t10420*t1091 - 1.*t1037*t10420*t1134 + t10434*t1168 + t10441*t1280 + t10447*t1678 + t10453*t2005 - 0.0216*(t10461*t2158 + t10457*t2284) - 1.1135*(t10457*t2158 - 1.*t10461*t2284) + t10457*t2286 - 1.*t10294*t241 + t10461*t2663 - 0.1305*(t241*t43 - 1.*t10415*t90) + t10420*t1120*t995;
  p_output1[45]=t10487*t1134 + t10499*t1168 + t10493*t1280 + t10508*t1678 + t10504*t2005 - 1.1135*(t10516*t2158 - 1.*t10512*t2284) - 0.0216*(t10512*t2158 + t10516*t2284) + t10516*t2286 + t10512*t2663 + t10475*t3302 + t10481*t3503 + t1120*t3653;
  p_output1[46]=t10210*t10475 + t10481*t10535 + t10547*t1120 + t10541*t1134 + t10555*t1168 + t10551*t1280 + t10568*t1678 + t10562*t2005 - 1.1135*(t10579*t2158 - 1.*t10574*t2284) - 0.0216*(t10574*t2158 + t10579*t2284) + t10579*t2286 + t10574*t2663;
  p_output1[47]=t10047*t10475 + t10481*t10597 + t10609*t1120 + t10601*t1134 + t10621*t1168 + t10615*t1280 + t10631*t1678 + t10626*t2005 - 1.1135*(t10642*t2158 - 1.*t10638*t2284) - 0.0216*(t10638*t2158 + t10642*t2284) + t10642*t2286 + t10638*t2663;
  p_output1[48]=t10665*t1168 + t10675*t1678 + t10672*t2005 - 1.1135*(t10683*t2158 - 1.*t10679*t2284) - 0.0216*(t10679*t2158 + t10683*t2284) + t10683*t2286 + t10679*t2663 + t10656*t3547 + t10660*t3653 + t1280*t3705;
  p_output1[49]=t10547*t10660 + t10656*t10702 + t10712*t1168 + t10709*t1280 + t10721*t1678 + t10716*t2005 - 1.1135*(t10733*t2158 - 1.*t10728*t2284) - 0.0216*(t10728*t2158 + t10733*t2284) + t10733*t2286 + t10728*t2663;
  p_output1[50]=t10609*t10660 + t10656*t10750 + t10757*t1168 + t10754*t1280 + t10767*t1678 + t10762*t2005 - 1.1135*(t10777*t2158 - 1.*t10773*t2284) - 0.0216*(t10773*t2158 + t10777*t2284) + t10777*t2286 + t10773*t2663;
  p_output1[51]=t10803*t2005 - 1.1135*(t10811*t2158 - 1.*t10807*t2284) - 0.0216*(t10807*t2158 + t10811*t2284) + t10811*t2286 + t10807*t2663 + t10793*t3705 + t10800*t3726 + t1678*t3896;
  p_output1[52]=t10709*t10793 + t10800*t10832 + t10838*t1678 + t10835*t2005 - 1.1135*(t10847*t2158 - 1.*t10842*t2284) - 0.0216*(t10842*t2158 + t10847*t2284) + t10847*t2286 + t10842*t2663;
  p_output1[53]=t10754*t10793 + t10800*t10866 + t10874*t1678 + t10870*t2005 - 1.1135*(t10886*t2158 - 1.*t10879*t2284) - 0.0216*(t10879*t2158 + t10886*t2284) + t10886*t2286 + t10879*t2663;
  p_output1[54]=-1.1135*(t10910 + t10908*t2158) + t10908*t2286 + t10901*t3828 + t10904*t3896 + t2663*t3975 - 0.0216*(t10908*t2284 + t4203);
  p_output1[55]=t10838*t10904 + t10901*t10921 - 1.1135*(t10931 + t10929*t2158) - 0.0216*(t10935 + t10929*t2284) + t10929*t2286 + t10926*t2663;
  p_output1[56]=t10874*t10904 + t10901*t10942 - 1.1135*(t10951 + t10949*t2158) - 0.0216*(t10955 + t10949*t2284) + t10949*t2286 + t10946*t2663;
  p_output1[57]=t10961*t3975 + t10965*t4064 - 1.1135*(t10910 - 1.*t2158*t4064) - 0.0216*t4289;
  p_output1[58]=t10926*t10961 + t10965*t10975 - 1.1135*(t10931 - 1.*t10975*t2158) - 0.0216*(t10935 - 1.*t10975*t2284);
  p_output1[59]=t10946*t10961 + t10965*t10987 - 1.1135*(t10951 - 1.*t10987*t2158) - 0.0216*(t10955 - 1.*t10987*t2284);
}



void Jp_toe_joint_right_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}

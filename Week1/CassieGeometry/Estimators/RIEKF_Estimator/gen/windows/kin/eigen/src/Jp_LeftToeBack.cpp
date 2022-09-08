/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:10:24 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_LeftToeBack.h"

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
  double t330;
  double t350;
  double t403;
  double t307;
  double t470;
  double t26;
  double t339;
  double t473;
  double t505;
  double t563;
  double t616;
  double t623;
  double t625;
  double t973;
  double t974;
  double t997;
  double t1023;
  double t730;
  double t863;
  double t891;
  double t1213;
  double t1521;
  double t1634;
  double t1637;
  double t1678;
  double t1465;
  double t1468;
  double t1484;
  double t1771;
  double t1785;
  double t1804;
  double t1858;
  double t1892;
  double t1914;
  double t2045;
  double t2100;
  double t2128;
  double t2147;
  double t2275;
  double t2277;
  double t2293;
  double t2368;
  double t2373;
  double t2384;
  double t2424;
  double t2504;
  double t2512;
  double t2513;
  double t2549;
  double t2583;
  double t2588;
  double t2635;
  double t2647;
  double t2657;
  double t2706;
  double t2755;
  double t2791;
  double t2813;
  double t2877;
  double t2889;
  double t2891;
  double t2929;
  double t2945;
  double t2991;
  double t3003;
  double t3079;
  double t3086;
  double t3087;
  double t3133;
  double t3195;
  double t3212;
  double t32;
  double t37;
  double t57;
  double t178;
  double t678;
  double t697;
  double t3386;
  double t3415;
  double t3428;
  double t3438;
  double t3441;
  double t3446;
  double t1008;
  double t1076;
  double t1122;
  double t1226;
  double t1264;
  double t1289;
  double t3454;
  double t3469;
  double t3483;
  double t1643;
  double t1685;
  double t1706;
  double t1812;
  double t1815;
  double t1817;
  double t1962;
  double t2052;
  double t2099;
  double t3637;
  double t3643;
  double t3702;
  double t3735;
  double t3736;
  double t3764;
  double t2195;
  double t2212;
  double t2233;
  double t2423;
  double t2427;
  double t2480;
  double t3774;
  double t3789;
  double t3807;
  double t3820;
  double t3841;
  double t3902;
  double t2529;
  double t2542;
  double t2544;
  double t2670;
  double t2729;
  double t2739;
  double t3909;
  double t3917;
  double t3930;
  double t3941;
  double t3945;
  double t3953;
  double t2848;
  double t2853;
  double t2876;
  double t2998;
  double t3047;
  double t3057;
  double t3967;
  double t3969;
  double t4000;
  double t4014;
  double t4044;
  double t4059;
  double t3096;
  double t3112;
  double t3121;
  double t4080;
  double t4095;
  double t4097;
  double t4109;
  double t4112;
  double t4120;
  double t4220;
  double t4223;
  double t4226;
  double t4304;
  double t4315;
  double t4320;
  double t4326;
  double t4344;
  double t4347;
  double t4384;
  double t4405;
  double t4433;
  double t4459;
  double t4465;
  double t4479;
  double t4484;
  double t4493;
  double t4496;
  double t4530;
  double t4544;
  double t4547;
  double t4552;
  double t4560;
  double t4573;
  double t4581;
  double t4584;
  double t4586;
  double t4591;
  double t4598;
  double t4608;
  double t4628;
  double t4637;
  double t4638;
  double t4751;
  double t4753;
  double t4756;
  double t4816;
  double t4823;
  double t4835;
  double t4851;
  double t4869;
  double t4873;
  double t4876;
  double t4877;
  double t4881;
  double t4891;
  double t4904;
  double t4911;
  double t4917;
  double t4923;
  double t4937;
  double t4960;
  double t4962;
  double t4964;
  double t4967;
  double t4971;
  double t4973;
  double t4985;
  double t4993;
  double t4998;
  double t5006;
  double t5012;
  double t5013;
  double t5022;
  double t5044;
  double t5048;
  double t5174;
  double t5181;
  double t5197;
  double t5243;
  double t5245;
  double t5250;
  double t5270;
  double t5271;
  double t5273;
  double t5299;
  double t5312;
  double t5316;
  double t5351;
  double t5377;
  double t5398;
  double t5421;
  double t5446;
  double t5449;
  double t5500;
  double t5506;
  double t5514;
  double t5547;
  double t5570;
  double t5590;
  double t5634;
  double t5639;
  double t5658;
  double t5663;
  double t5667;
  double t5674;
  double t5683;
  double t5690;
  double t5705;
  double t5863;
  double t5878;
  double t5882;
  double t5902;
  double t5906;
  double t5927;
  double t5930;
  double t5937;
  double t5947;
  double t5953;
  double t5961;
  double t5978;
  double t5992;
  double t5999;
  double t6023;
  double t6024;
  double t6046;
  double t6055;
  double t6068;
  double t6077;
  double t6093;
  double t6095;
  double t6103;
  double t6121;
  double t6123;
  double t6131;
  double t6136;
  double t6141;
  double t6145;
  double t6155;
  double t6161;
  double t6164;
  double t6213;
  double t6215;
  double t6220;
  double t6229;
  double t6231;
  double t6232;
  double t6254;
  double t6259;
  double t6263;
  double t6269;
  double t6274;
  double t6287;
  double t6290;
  double t6293;
  double t6313;
  double t6326;
  double t6327;
  double t6340;
  double t6344;
  double t6347;
  double t6357;
  double t6362;
  double t6363;
  double t6366;
  double t6368;
  double t6369;
  double t6392;
  double t6393;
  double t6398;
  double t6406;
  double t6419;
  double t6420;
  double t6519;
  double t6522;
  double t6526;
  double t6543;
  double t6546;
  double t6547;
  double t6557;
  double t6565;
  double t6567;
  double t6582;
  double t6584;
  double t6596;
  double t6620;
  double t6632;
  double t6641;
  double t6654;
  double t6655;
  double t6676;
  double t6693;
  double t6699;
  double t6718;
  double t6731;
  double t6732;
  double t6738;
  double t6748;
  double t6760;
  double t6794;
  double t6796;
  double t6797;
  double t6807;
  double t6879;
  double t6883;
  double t6890;
  double t6891;
  double t6895;
  double t6907;
  double t6908;
  double t6909;
  double t6917;
  double t6921;
  double t6928;
  double t6938;
  double t6939;
  double t6946;
  double t6954;
  double t6958;
  double t6968;
  double t6972;
  double t6981;
  double t6985;
  double t6992;
  double t6999;
  double t7003;
  double t7020;
  double t7027;
  double t7028;
  double t7106;
  double t7111;
  double t7122;
  double t7143;
  double t7154;
  double t7177;
  double t7192;
  double t7201;
  double t7206;
  double t7207;
  double t7219;
  double t7225;
  double t7230;
  double t7238;
  double t7255;
  double t7273;
  double t7285;
  double t7291;
  double t7296;
  double t7298;
  double t7301;
  double t7307;
  double t7318;
  double t7320;
  double t7324;
  double t7332;
  double t7341;
  double t7354;
  double t7361;
  double t7375;
  double t7388;
  double t6527;
  double t6529;
  double t6539;
  double t6554;
  double t6569;
  double t6598;
  double t6650;
  double t6678;
  double t6726;
  double t6742;
  double t6795;
  double t6810;
  double t6813;
  double t6819;
  double t6821;
  double t6824;
  double t6829;
  double t6831;
  double t6836;
  double t6838;
  double t3495;
  double t3507;
  double t3528;
  double t7588;
  double t7593;
  double t7602;
  double t7608;
  double t7628;
  double t7641;
  double t7660;
  double t7664;
  double t7676;
  double t7699;
  double t7703;
  double t7704;
  double t7750;
  double t7758;
  double t7778;
  double t7796;
  double t7809;
  double t7813;
  double t7472;
  double t7476;
  double t7482;
  double t7501;
  double t7508;
  double t7909;
  double t7910;
  double t7915;
  double t7948;
  double t7951;
  double t7958;
  double t7994;
  double t7995;
  double t7997;
  double t8002;
  double t8007;
  double t8008;
  double t8014;
  double t8028;
  double t8029;
  double t8033;
  double t8053;
  double t8056;
  double t8065;
  double t8067;
  double t8071;
  double t8080;
  double t8088;
  double t8098;
  double t8168;
  double t8172;
  double t8186;
  double t8200;
  double t8203;
  double t8204;
  double t8251;
  double t8255;
  double t8269;
  double t8276;
  double t8283;
  double t8291;
  double t8297;
  double t8307;
  double t8309;
  double t8320;
  double t8322;
  double t8332;
  double t8345;
  double t8353;
  double t8363;
  double t8367;
  double t8372;
  double t8374;
  double t8465;
  double t8467;
  double t8470;
  double t8480;
  double t8485;
  double t8499;
  double t8500;
  double t8505;
  double t8510;
  double t8512;
  double t8513;
  double t8530;
  double t8537;
  double t8539;
  double t8543;
  double t8553;
  double t8555;
  double t8564;
  double t8567;
  double t8573;
  double t8440;
  double t8446;
  double t8450;
  double t8456;
  double t8459;
  double t8644;
  double t8648;
  double t8655;
  double t8670;
  double t8671;
  double t8674;
  double t8688;
  double t8699;
  double t8700;
  double t8713;
  double t8715;
  double t8716;
  double t8723;
  double t8726;
  double t8728;
  double t8732;
  double t8733;
  double t8738;
  double t8746;
  double t8747;
  double t8750;
  double t8760;
  double t8762;
  double t8767;
  double t8777;
  double t8781;
  double t8782;
  double t8852;
  double t8859;
  double t8865;
  double t8887;
  double t8890;
  double t8900;
  double t8904;
  double t8909;
  double t8911;
  double t8917;
  double t8919;
  double t8922;
  double t8934;
  double t8947;
  double t8950;
  double t8955;
  double t8957;
  double t8958;
  double t8965;
  double t8968;
  double t8971;
  double t8977;
  double t8980;
  double t8981;
  double t8988;
  double t8992;
  double t9012;
  double t9140;
  double t9141;
  double t9150;
  double t9157;
  double t9165;
  double t9178;
  double t9186;
  double t9199;
  double t9201;
  double t9204;
  double t9218;
  double t9222;
  double t9223;
  double t9089;
  double t9092;
  double t9103;
  double t9121;
  double t9123;
  double t9258;
  double t9260;
  double t9264;
  double t9277;
  double t9278;
  double t9301;
  double t9306;
  double t9321;
  double t9322;
  double t9341;
  double t9344;
  double t9345;
  double t9349;
  double t9359;
  double t9361;
  double t9367;
  double t9370;
  double t9373;
  double t9385;
  double t9506;
  double t9515;
  double t9518;
  double t9525;
  double t9532;
  double t9540;
  double t9542;
  double t9546;
  double t9551;
  double t9553;
  double t9561;
  double t9563;
  double t9565;
  double t9579;
  double t9580;
  double t9582;
  double t9591;
  double t9606;
  double t9609;
  double t9707;
  double t9710;
  double t9744;
  double t9752;
  double t9770;
  double t9773;
  double t9777;
  double t9661;
  double t9662;
  double t9683;
  double t9688;
  double t9693;
  double t9844;
  double t9847;
  double t9859;
  double t9862;
  double t9871;
  double t9877;
  double t9887;
  double t9894;
  double t9896;
  double t9897;
  double t9910;
  double t9920;
  double t9921;
  double t9958;
  double t9969;
  double t9980;
  double t10002;
  double t10003;
  double t10008;
  double t10018;
  double t10027;
  double t10028;
  double t10035;
  double t10038;
  double t10040;
  double t10042;
  double t10135;
  double t10143;
  double t4162;
  double t10093;
  double t10097;
  double t10103;
  double t10110;
  double t10114;
  double t10211;
  double t10219;
  double t10223;
  double t10255;
  double t10270;
  double t10277;
  double t10283;
  double t10370;
  double t10390;
  double t10400;
  double t10417;
  double t10423;
  double t10435;
  double t10444;
  double t10157;
  double t4165;
  double t4174;
  double t10509;
  double t10510;
  double t10513;
  double t10517;
  double t10526;
  double t10308;
  double t10569;
  double t10572;
  double t10590;
  double t10332;
  double t10459;
  double t10677;
  double t10686;
  double t10687;
  double t10485;
  t330 = Cos(var1[5]);
  t350 = Sin(var1[3]);
  t403 = Sin(var1[4]);
  t307 = Cos(var1[3]);
  t470 = Sin(var1[5]);
  t26 = Cos(var1[6]);
  t339 = -1.*t307*t330;
  t473 = -1.*t350*t403*t470;
  t505 = t339 + t473;
  t563 = -1.*t330*t350*t403;
  t616 = t307*t470;
  t623 = t563 + t616;
  t625 = Sin(var1[6]);
  t973 = Cos(var1[7]);
  t974 = -1.*t973;
  t997 = 1. + t974;
  t1023 = Sin(var1[7]);
  t730 = t26*t505;
  t863 = t623*t625;
  t891 = t730 + t863;
  t1213 = Cos(var1[4]);
  t1521 = Cos(var1[8]);
  t1634 = -1.*t1521;
  t1637 = 1. + t1634;
  t1678 = Sin(var1[8]);
  t1465 = -1.*t1213*t973*t350;
  t1468 = t891*t1023;
  t1484 = t1465 + t1468;
  t1771 = t26*t623;
  t1785 = -1.*t505*t625;
  t1804 = t1771 + t1785;
  t1858 = Cos(var1[9]);
  t1892 = -1.*t1858;
  t1914 = 1. + t1892;
  t2045 = Sin(var1[9]);
  t2100 = t1521*t1484;
  t2128 = t1804*t1678;
  t2147 = t2100 + t2128;
  t2275 = t1521*t1804;
  t2277 = -1.*t1484*t1678;
  t2293 = t2275 + t2277;
  t2368 = Cos(var1[10]);
  t2373 = -1.*t2368;
  t2384 = 1. + t2373;
  t2424 = Sin(var1[10]);
  t2504 = -1.*t2045*t2147;
  t2512 = t1858*t2293;
  t2513 = t2504 + t2512;
  t2549 = t1858*t2147;
  t2583 = t2045*t2293;
  t2588 = t2549 + t2583;
  t2635 = Cos(var1[11]);
  t2647 = -1.*t2635;
  t2657 = 1. + t2647;
  t2706 = Sin(var1[11]);
  t2755 = t2424*t2513;
  t2791 = t2368*t2588;
  t2813 = t2755 + t2791;
  t2877 = t2368*t2513;
  t2889 = -1.*t2424*t2588;
  t2891 = t2877 + t2889;
  t2929 = Cos(var1[12]);
  t2945 = -1.*t2929;
  t2991 = 1. + t2945;
  t3003 = Sin(var1[12]);
  t3079 = -1.*t2706*t2813;
  t3086 = t2635*t2891;
  t3087 = t3079 + t3086;
  t3133 = t2635*t2813;
  t3195 = t2706*t2891;
  t3212 = t3133 + t3195;
  t32 = -1.*t26;
  t37 = 1. + t32;
  t57 = 0.135*t37;
  t178 = 0. + t57;
  t678 = -0.135*t625;
  t697 = 0. + t678;
  t3386 = -1.*t330*t350;
  t3415 = t307*t403*t470;
  t3428 = t3386 + t3415;
  t3438 = t307*t330*t403;
  t3441 = t350*t470;
  t3446 = t3438 + t3441;
  t1008 = 0.135*t997;
  t1076 = 0.049*t1023;
  t1122 = 0. + t1008 + t1076;
  t1226 = -0.049*t997;
  t1264 = 0.135*t1023;
  t1289 = 0. + t1226 + t1264;
  t3454 = t26*t3428;
  t3469 = t3446*t625;
  t3483 = t3454 + t3469;
  t1643 = -0.049*t1637;
  t1685 = -0.09*t1678;
  t1706 = 0. + t1643 + t1685;
  t1812 = -0.09*t1637;
  t1815 = 0.049*t1678;
  t1817 = 0. + t1812 + t1815;
  t1962 = -0.049*t1914;
  t2052 = -0.21*t2045;
  t2099 = 0. + t1962 + t2052;
  t3637 = t307*t1213*t973;
  t3643 = t3483*t1023;
  t3702 = t3637 + t3643;
  t3735 = t26*t3446;
  t3736 = -1.*t3428*t625;
  t3764 = t3735 + t3736;
  t2195 = -0.21*t1914;
  t2212 = 0.049*t2045;
  t2233 = 0. + t2195 + t2212;
  t2423 = -0.2707*t2384;
  t2427 = 0.0016*t2424;
  t2480 = 0. + t2423 + t2427;
  t3774 = t1521*t3702;
  t3789 = t3764*t1678;
  t3807 = t3774 + t3789;
  t3820 = t1521*t3764;
  t3841 = -1.*t3702*t1678;
  t3902 = t3820 + t3841;
  t2529 = -0.0016*t2384;
  t2542 = -0.2707*t2424;
  t2544 = 0. + t2529 + t2542;
  t2670 = 0.0184*t2657;
  t2729 = -0.7055*t2706;
  t2739 = 0. + t2670 + t2729;
  t3909 = -1.*t2045*t3807;
  t3917 = t1858*t3902;
  t3930 = t3909 + t3917;
  t3941 = t1858*t3807;
  t3945 = t2045*t3902;
  t3953 = t3941 + t3945;
  t2848 = -0.7055*t2657;
  t2853 = -0.0184*t2706;
  t2876 = 0. + t2848 + t2853;
  t2998 = -1.1135*t2991;
  t3047 = 0.0216*t3003;
  t3057 = 0. + t2998 + t3047;
  t3967 = t2424*t3930;
  t3969 = t2368*t3953;
  t4000 = t3967 + t3969;
  t4014 = t2368*t3930;
  t4044 = -1.*t2424*t3953;
  t4059 = t4014 + t4044;
  t3096 = -0.0216*t2991;
  t3112 = -1.1135*t3003;
  t3121 = 0. + t3096 + t3112;
  t4080 = -1.*t2706*t4000;
  t4095 = t2635*t4059;
  t4097 = t4080 + t4095;
  t4109 = t2635*t4000;
  t4112 = t2706*t4059;
  t4120 = t4109 + t4112;
  t4220 = t307*t1213*t26*t470;
  t4223 = t307*t1213*t330*t625;
  t4226 = t4220 + t4223;
  t4304 = -1.*t307*t973*t403;
  t4315 = t4226*t1023;
  t4320 = t4304 + t4315;
  t4326 = t307*t1213*t330*t26;
  t4344 = -1.*t307*t1213*t470*t625;
  t4347 = t4326 + t4344;
  t4384 = t1521*t4320;
  t4405 = t4347*t1678;
  t4433 = t4384 + t4405;
  t4459 = t1521*t4347;
  t4465 = -1.*t4320*t1678;
  t4479 = t4459 + t4465;
  t4484 = -1.*t2045*t4433;
  t4493 = t1858*t4479;
  t4496 = t4484 + t4493;
  t4530 = t1858*t4433;
  t4544 = t2045*t4479;
  t4547 = t4530 + t4544;
  t4552 = t2424*t4496;
  t4560 = t2368*t4547;
  t4573 = t4552 + t4560;
  t4581 = t2368*t4496;
  t4584 = -1.*t2424*t4547;
  t4586 = t4581 + t4584;
  t4591 = -1.*t2706*t4573;
  t4598 = t2635*t4586;
  t4608 = t4591 + t4598;
  t4628 = t2635*t4573;
  t4637 = t2706*t4586;
  t4638 = t4628 + t4637;
  t4751 = t1213*t26*t350*t470;
  t4753 = t1213*t330*t350*t625;
  t4756 = t4751 + t4753;
  t4816 = -1.*t973*t350*t403;
  t4823 = t4756*t1023;
  t4835 = t4816 + t4823;
  t4851 = t1213*t330*t26*t350;
  t4869 = -1.*t1213*t350*t470*t625;
  t4873 = t4851 + t4869;
  t4876 = t1521*t4835;
  t4877 = t4873*t1678;
  t4881 = t4876 + t4877;
  t4891 = t1521*t4873;
  t4904 = -1.*t4835*t1678;
  t4911 = t4891 + t4904;
  t4917 = -1.*t2045*t4881;
  t4923 = t1858*t4911;
  t4937 = t4917 + t4923;
  t4960 = t1858*t4881;
  t4962 = t2045*t4911;
  t4964 = t4960 + t4962;
  t4967 = t2424*t4937;
  t4971 = t2368*t4964;
  t4973 = t4967 + t4971;
  t4985 = t2368*t4937;
  t4993 = -1.*t2424*t4964;
  t4998 = t4985 + t4993;
  t5006 = -1.*t2706*t4973;
  t5012 = t2635*t4998;
  t5013 = t5006 + t5012;
  t5022 = t2635*t4973;
  t5044 = t2706*t4998;
  t5048 = t5022 + t5044;
  t5174 = -1.*t26*t403*t470;
  t5181 = -1.*t330*t403*t625;
  t5197 = t5174 + t5181;
  t5243 = -1.*t1213*t973;
  t5245 = t5197*t1023;
  t5250 = t5243 + t5245;
  t5270 = -1.*t330*t26*t403;
  t5271 = t403*t470*t625;
  t5273 = t5270 + t5271;
  t5299 = t1521*t5250;
  t5312 = t5273*t1678;
  t5316 = t5299 + t5312;
  t5351 = t1521*t5273;
  t5377 = -1.*t5250*t1678;
  t5398 = t5351 + t5377;
  t5421 = -1.*t2045*t5316;
  t5446 = t1858*t5398;
  t5449 = t5421 + t5446;
  t5500 = t1858*t5316;
  t5506 = t2045*t5398;
  t5514 = t5500 + t5506;
  t5547 = t2424*t5449;
  t5570 = t2368*t5514;
  t5590 = t5547 + t5570;
  t5634 = t2368*t5449;
  t5639 = -1.*t2424*t5514;
  t5658 = t5634 + t5639;
  t5663 = -1.*t2706*t5590;
  t5667 = t2635*t5658;
  t5674 = t5663 + t5667;
  t5683 = t2635*t5590;
  t5690 = t2706*t5658;
  t5705 = t5683 + t5690;
  t5863 = t330*t350;
  t5878 = -1.*t307*t403*t470;
  t5882 = t5863 + t5878;
  t5902 = t5882*t625;
  t5906 = t3735 + t5902;
  t5927 = t26*t5882;
  t5930 = -1.*t3446*t625;
  t5937 = t5927 + t5930;
  t5947 = t1521*t5906*t1023;
  t5953 = t5937*t1678;
  t5961 = t5947 + t5953;
  t5978 = t1521*t5937;
  t5992 = -1.*t5906*t1023*t1678;
  t5999 = t5978 + t5992;
  t6023 = -1.*t2045*t5961;
  t6024 = t1858*t5999;
  t6046 = t6023 + t6024;
  t6055 = t1858*t5961;
  t6068 = t2045*t5999;
  t6077 = t6055 + t6068;
  t6093 = t2424*t6046;
  t6095 = t2368*t6077;
  t6103 = t6093 + t6095;
  t6121 = t2368*t6046;
  t6123 = -1.*t2424*t6077;
  t6131 = t6121 + t6123;
  t6136 = -1.*t2706*t6103;
  t6141 = t2635*t6131;
  t6145 = t6136 + t6141;
  t6155 = t2635*t6103;
  t6161 = t2706*t6131;
  t6164 = t6155 + t6161;
  t6213 = t330*t350*t403;
  t6215 = -1.*t307*t470;
  t6220 = t6213 + t6215;
  t6229 = t26*t6220;
  t6231 = t505*t625;
  t6232 = t6229 + t6231;
  t6254 = -1.*t6220*t625;
  t6259 = t730 + t6254;
  t6263 = t1521*t6232*t1023;
  t6269 = t6259*t1678;
  t6274 = t6263 + t6269;
  t6287 = t1521*t6259;
  t6290 = -1.*t6232*t1023*t1678;
  t6293 = t6287 + t6290;
  t6313 = -1.*t2045*t6274;
  t6326 = t1858*t6293;
  t6327 = t6313 + t6326;
  t6340 = t1858*t6274;
  t6344 = t2045*t6293;
  t6347 = t6340 + t6344;
  t6357 = t2424*t6327;
  t6362 = t2368*t6347;
  t6363 = t6357 + t6362;
  t6366 = t2368*t6327;
  t6368 = -1.*t2424*t6347;
  t6369 = t6366 + t6368;
  t6392 = -1.*t2706*t6363;
  t6393 = t2635*t6369;
  t6398 = t6392 + t6393;
  t6406 = t2635*t6363;
  t6419 = t2706*t6369;
  t6420 = t6406 + t6419;
  t6519 = t1213*t330*t26;
  t6522 = -1.*t1213*t470*t625;
  t6526 = t6519 + t6522;
  t6543 = -1.*t1213*t26*t470;
  t6546 = -1.*t1213*t330*t625;
  t6547 = t6543 + t6546;
  t6557 = t1521*t6526*t1023;
  t6565 = t6547*t1678;
  t6567 = t6557 + t6565;
  t6582 = t1521*t6547;
  t6584 = -1.*t6526*t1023*t1678;
  t6596 = t6582 + t6584;
  t6620 = -1.*t2045*t6567;
  t6632 = t1858*t6596;
  t6641 = t6620 + t6632;
  t6654 = t1858*t6567;
  t6655 = t2045*t6596;
  t6676 = t6654 + t6655;
  t6693 = t2424*t6641;
  t6699 = t2368*t6676;
  t6718 = t6693 + t6699;
  t6731 = t2368*t6641;
  t6732 = -1.*t2424*t6676;
  t6738 = t6731 + t6732;
  t6748 = -1.*t2706*t6718;
  t6760 = t2635*t6738;
  t6794 = t6748 + t6760;
  t6796 = t2635*t6718;
  t6797 = t2706*t6738;
  t6807 = t6796 + t6797;
  t6879 = -1.*t26*t3428;
  t6883 = t6879 + t5930;
  t6890 = t1521*t3764*t1023;
  t6891 = t6883*t1678;
  t6895 = t6890 + t6891;
  t6907 = t1521*t6883;
  t6908 = -1.*t3764*t1023*t1678;
  t6909 = t6907 + t6908;
  t6917 = -1.*t2045*t6895;
  t6921 = t1858*t6909;
  t6928 = t6917 + t6921;
  t6938 = t1858*t6895;
  t6939 = t2045*t6909;
  t6946 = t6938 + t6939;
  t6954 = t2424*t6928;
  t6958 = t2368*t6946;
  t6968 = t6954 + t6958;
  t6972 = t2368*t6928;
  t6981 = -1.*t2424*t6946;
  t6985 = t6972 + t6981;
  t6992 = -1.*t2706*t6968;
  t6999 = t2635*t6985;
  t7003 = t6992 + t6999;
  t7020 = t2635*t6968;
  t7027 = t2706*t6985;
  t7028 = t7020 + t7027;
  t7106 = t307*t330;
  t7111 = t350*t403*t470;
  t7122 = t7106 + t7111;
  t7143 = -1.*t7122*t625;
  t7154 = t6229 + t7143;
  t7177 = -1.*t26*t7122;
  t7192 = t7177 + t6254;
  t7201 = t1521*t7154*t1023;
  t7206 = t7192*t1678;
  t7207 = t7201 + t7206;
  t7219 = t1521*t7192;
  t7225 = -1.*t7154*t1023*t1678;
  t7230 = t7219 + t7225;
  t7238 = -1.*t2045*t7207;
  t7255 = t1858*t7230;
  t7273 = t7238 + t7255;
  t7285 = t1858*t7207;
  t7291 = t2045*t7230;
  t7296 = t7285 + t7291;
  t7298 = t2424*t7273;
  t7301 = t2368*t7296;
  t7307 = t7298 + t7301;
  t7318 = t2368*t7273;
  t7320 = -1.*t2424*t7296;
  t7324 = t7318 + t7320;
  t7332 = -1.*t2706*t7307;
  t7341 = t2635*t7324;
  t7354 = t7332 + t7341;
  t7361 = t2635*t7307;
  t7375 = t2706*t7324;
  t7388 = t7361 + t7375;
  t6527 = 0.1305*t973*t6526;
  t6529 = t6526*t1122;
  t6539 = t6526*t1023*t1706;
  t6554 = t6547*t1817;
  t6569 = t2099*t6567;
  t6598 = t2233*t6596;
  t6650 = t2480*t6641;
  t6678 = t2544*t6676;
  t6726 = t2739*t6718;
  t6742 = t2876*t6738;
  t6795 = t3057*t6794;
  t6810 = t3121*t6807;
  t6813 = t3003*t6794;
  t6819 = t2929*t6807;
  t6821 = t6813 + t6819;
  t6824 = -0.027251*t6821;
  t6829 = t2929*t6794;
  t6831 = -1.*t3003*t6807;
  t6836 = t6829 + t6831;
  t6838 = -1.200144*t6836;
  t3495 = t973*t3483;
  t3507 = -1.*t307*t1213*t1023;
  t3528 = t3495 + t3507;
  t7588 = -1.*t1521*t2045*t3528;
  t7593 = -1.*t1858*t3528*t1678;
  t7602 = t7588 + t7593;
  t7608 = t1858*t1521*t3528;
  t7628 = -1.*t2045*t3528*t1678;
  t7641 = t7608 + t7628;
  t7660 = t2424*t7602;
  t7664 = t2368*t7641;
  t7676 = t7660 + t7664;
  t7699 = t2368*t7602;
  t7703 = -1.*t2424*t7641;
  t7704 = t7699 + t7703;
  t7750 = -1.*t2706*t7676;
  t7758 = t2635*t7704;
  t7778 = t7750 + t7758;
  t7796 = t2635*t7676;
  t7809 = t2706*t7704;
  t7813 = t7796 + t7809;
  t7472 = 0.135*t973;
  t7476 = -0.049*t1023;
  t7482 = t7472 + t7476;
  t7501 = 0.049*t973;
  t7508 = t7501 + t1264;
  t7909 = t26*t7122;
  t7910 = t6220*t625;
  t7915 = t7909 + t7910;
  t7948 = t973*t7915;
  t7951 = -1.*t1213*t350*t1023;
  t7958 = t7948 + t7951;
  t7994 = -1.*t1521*t2045*t7958;
  t7995 = -1.*t1858*t7958*t1678;
  t7997 = t7994 + t7995;
  t8002 = t1858*t1521*t7958;
  t8007 = -1.*t2045*t7958*t1678;
  t8008 = t8002 + t8007;
  t8014 = t2424*t7997;
  t8028 = t2368*t8008;
  t8029 = t8014 + t8028;
  t8033 = t2368*t7997;
  t8053 = -1.*t2424*t8008;
  t8056 = t8033 + t8053;
  t8065 = -1.*t2706*t8029;
  t8067 = t2635*t8056;
  t8071 = t8065 + t8067;
  t8080 = t2635*t8029;
  t8088 = t2706*t8056;
  t8098 = t8080 + t8088;
  t8168 = t1213*t26*t470;
  t8172 = t1213*t330*t625;
  t8186 = t8168 + t8172;
  t8200 = t973*t8186;
  t8203 = t403*t1023;
  t8204 = t8200 + t8203;
  t8251 = -1.*t1521*t2045*t8204;
  t8255 = -1.*t1858*t8204*t1678;
  t8269 = t8251 + t8255;
  t8276 = t1858*t1521*t8204;
  t8283 = -1.*t2045*t8204*t1678;
  t8291 = t8276 + t8283;
  t8297 = t2424*t8269;
  t8307 = t2368*t8291;
  t8309 = t8297 + t8307;
  t8320 = t2368*t8269;
  t8322 = -1.*t2424*t8291;
  t8332 = t8320 + t8322;
  t8345 = -1.*t2706*t8309;
  t8353 = t2635*t8332;
  t8363 = t8345 + t8353;
  t8367 = t2635*t8309;
  t8372 = t2706*t8332;
  t8374 = t8367 + t8372;
  t8465 = -1.*t1521*t3702;
  t8467 = -1.*t3764*t1678;
  t8470 = t8465 + t8467;
  t8480 = t2045*t8470;
  t8485 = t8480 + t3917;
  t8499 = t1858*t8470;
  t8500 = -1.*t2045*t3902;
  t8505 = t8499 + t8500;
  t8510 = -1.*t2424*t8485;
  t8512 = t2368*t8505;
  t8513 = t8510 + t8512;
  t8530 = t2368*t8485;
  t8537 = t2424*t8505;
  t8539 = t8530 + t8537;
  t8543 = t2706*t8513;
  t8553 = t2635*t8539;
  t8555 = t8543 + t8553;
  t8564 = t2635*t8513;
  t8567 = -1.*t2706*t8539;
  t8573 = t8564 + t8567;
  t8440 = 0.049*t1521;
  t8446 = t8440 + t1685;
  t8450 = -0.09*t1521;
  t8456 = -0.049*t1678;
  t8459 = t8450 + t8456;
  t8644 = t1213*t973*t350;
  t8648 = t7915*t1023;
  t8655 = t8644 + t8648;
  t8670 = -1.*t1521*t8655;
  t8671 = -1.*t7154*t1678;
  t8674 = t8670 + t8671;
  t8688 = t1521*t7154;
  t8699 = -1.*t8655*t1678;
  t8700 = t8688 + t8699;
  t8713 = t2045*t8674;
  t8715 = t1858*t8700;
  t8716 = t8713 + t8715;
  t8723 = t1858*t8674;
  t8726 = -1.*t2045*t8700;
  t8728 = t8723 + t8726;
  t8732 = -1.*t2424*t8716;
  t8733 = t2368*t8728;
  t8738 = t8732 + t8733;
  t8746 = t2368*t8716;
  t8747 = t2424*t8728;
  t8750 = t8746 + t8747;
  t8760 = t2706*t8738;
  t8762 = t2635*t8750;
  t8767 = t8760 + t8762;
  t8777 = t2635*t8738;
  t8781 = -1.*t2706*t8750;
  t8782 = t8777 + t8781;
  t8852 = -1.*t973*t403;
  t8859 = t8186*t1023;
  t8865 = t8852 + t8859;
  t8887 = -1.*t1521*t8865;
  t8890 = -1.*t6526*t1678;
  t8900 = t8887 + t8890;
  t8904 = t1521*t6526;
  t8909 = -1.*t8865*t1678;
  t8911 = t8904 + t8909;
  t8917 = t2045*t8900;
  t8919 = t1858*t8911;
  t8922 = t8917 + t8919;
  t8934 = t1858*t8900;
  t8947 = -1.*t2045*t8911;
  t8950 = t8934 + t8947;
  t8955 = -1.*t2424*t8922;
  t8957 = t2368*t8950;
  t8958 = t8955 + t8957;
  t8965 = t2368*t8922;
  t8968 = t2424*t8950;
  t8971 = t8965 + t8968;
  t8977 = t2706*t8958;
  t8980 = t2635*t8971;
  t8981 = t8977 + t8980;
  t8988 = t2635*t8958;
  t8992 = -1.*t2706*t8971;
  t9012 = t8988 + t8992;
  t9140 = -1.*t1858*t3807;
  t9141 = t9140 + t8500;
  t9150 = -1.*t2424*t3930;
  t9157 = t2368*t9141;
  t9165 = t9150 + t9157;
  t9178 = t2424*t9141;
  t9186 = t4014 + t9178;
  t9199 = t2706*t9165;
  t9201 = t2635*t9186;
  t9204 = t9199 + t9201;
  t9218 = t2635*t9165;
  t9222 = -1.*t2706*t9186;
  t9223 = t9218 + t9222;
  t9089 = -0.21*t1858;
  t9092 = -0.049*t2045;
  t9103 = t9089 + t9092;
  t9121 = 0.049*t1858;
  t9123 = t9121 + t2052;
  t9258 = t1521*t8655;
  t9260 = t7154*t1678;
  t9264 = t9258 + t9260;
  t9277 = -1.*t2045*t9264;
  t9278 = t9277 + t8715;
  t9301 = -1.*t1858*t9264;
  t9306 = t9301 + t8726;
  t9321 = -1.*t2424*t9278;
  t9322 = t2368*t9306;
  t9341 = t9321 + t9322;
  t9344 = t2368*t9278;
  t9345 = t2424*t9306;
  t9349 = t9344 + t9345;
  t9359 = t2706*t9341;
  t9361 = t2635*t9349;
  t9367 = t9359 + t9361;
  t9370 = t2635*t9341;
  t9373 = -1.*t2706*t9349;
  t9385 = t9370 + t9373;
  t9506 = t1521*t8865;
  t9515 = t6526*t1678;
  t9518 = t9506 + t9515;
  t9525 = -1.*t2045*t9518;
  t9532 = t9525 + t8919;
  t9540 = -1.*t1858*t9518;
  t9542 = t9540 + t8947;
  t9546 = -1.*t2424*t9532;
  t9551 = t2368*t9542;
  t9553 = t9546 + t9551;
  t9561 = t2368*t9532;
  t9563 = t2424*t9542;
  t9565 = t9561 + t9563;
  t9579 = t2706*t9553;
  t9580 = t2635*t9565;
  t9582 = t9579 + t9580;
  t9591 = t2635*t9553;
  t9606 = -1.*t2706*t9565;
  t9609 = t9591 + t9606;
  t9707 = -1.*t2368*t3953;
  t9710 = t9150 + t9707;
  t9744 = t2706*t9710;
  t9752 = t9744 + t4095;
  t9770 = t2635*t9710;
  t9773 = -1.*t2706*t4059;
  t9777 = t9770 + t9773;
  t9661 = 0.0016*t2368;
  t9662 = t9661 + t2542;
  t9683 = -0.2707*t2368;
  t9688 = -0.0016*t2424;
  t9693 = t9683 + t9688;
  t9844 = t1858*t9264;
  t9847 = t2045*t8700;
  t9859 = t9844 + t9847;
  t9862 = -1.*t2368*t9859;
  t9871 = t9321 + t9862;
  t9877 = -1.*t2424*t9859;
  t9887 = t9344 + t9877;
  t9894 = t2706*t9871;
  t9896 = t2635*t9887;
  t9897 = t9894 + t9896;
  t9910 = t2635*t9871;
  t9920 = -1.*t2706*t9887;
  t9921 = t9910 + t9920;
  t9958 = t1858*t9518;
  t9969 = t2045*t8911;
  t9980 = t9958 + t9969;
  t10002 = -1.*t2368*t9980;
  t10003 = t9546 + t10002;
  t10008 = -1.*t2424*t9980;
  t10018 = t9561 + t10008;
  t10027 = t2706*t10003;
  t10028 = t2635*t10018;
  t10035 = t10027 + t10028;
  t10038 = t2635*t10003;
  t10040 = -1.*t2706*t10018;
  t10042 = t10038 + t10040;
  t10135 = -1.*t2635*t4000;
  t10143 = t10135 + t9773;
  t4162 = t2929*t4097;
  t10093 = -0.7055*t2635;
  t10097 = 0.0184*t2706;
  t10103 = t10093 + t10097;
  t10110 = -0.0184*t2635;
  t10114 = t10110 + t2729;
  t10211 = t2424*t9278;
  t10219 = t2368*t9859;
  t10223 = t10211 + t10219;
  t10255 = -1.*t2706*t10223;
  t10270 = t10255 + t9896;
  t10277 = -1.*t2635*t10223;
  t10283 = t10277 + t9920;
  t10370 = t2424*t9532;
  t10390 = t2368*t9980;
  t10400 = t10370 + t10390;
  t10417 = -1.*t2706*t10400;
  t10423 = t10417 + t10028;
  t10435 = -1.*t2635*t10400;
  t10444 = t10435 + t10040;
  t10157 = -1.*t3003*t4097;
  t4165 = -1.*t3003*t4120;
  t4174 = t4162 + t4165;
  t10509 = 0.0216*t2929;
  t10510 = t10509 + t3112;
  t10513 = -1.1135*t2929;
  t10517 = -0.0216*t3003;
  t10526 = t10513 + t10517;
  t10308 = -1.*t3003*t10270;
  t10569 = t2635*t10223;
  t10572 = t2706*t9887;
  t10590 = t10569 + t10572;
  t10332 = t2929*t10270;
  t10459 = -1.*t3003*t10423;
  t10677 = t2635*t10400;
  t10686 = t2706*t10018;
  t10687 = t10677 + t10686;
  t10485 = t2929*t10423;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t1484*t1706 + t1804*t1817 + t2099*t2147 + t2233*t2293 + t2480*t2513 + t2544*t2588 + t2739*t2813 + t2876*t2891 + t3057*t3087 + t3121*t3212 - 0.027251*(t3003*t3087 + t2929*t3212) - 1.200144*(t2929*t3087 - 1.*t3003*t3212) - 1.*t1213*t1289*t350 + t178*t505 + t623*t697 + t1122*t891 + 0.1305*(t1023*t1213*t350 + t891*t973);
  p_output1(10)=t1213*t1289*t307 + t178*t3428 + t1122*t3483 + 0.1305*t3528 + t1706*t3702 + t1817*t3764 + t2099*t3807 + t2233*t3902 + t2480*t3930 + t2544*t3953 + t2739*t4000 + t2876*t4059 + t3057*t4097 + t3121*t4120 - 0.027251*(t3003*t4097 + t2929*t4120) - 1.200144*t4174 + t3446*t697;
  p_output1(11)=0;
  p_output1(12)=-1.*t1289*t307*t403 + t1122*t4226 + t1706*t4320 + t1817*t4347 + t2099*t4433 + t2233*t4479 + t2480*t4496 + t2544*t4547 + t2739*t4573 + t2876*t4586 + t3057*t4608 + t3121*t4638 - 0.027251*(t3003*t4608 + t2929*t4638) - 1.200144*(t2929*t4608 - 1.*t3003*t4638) + t1213*t178*t307*t470 + t1213*t307*t330*t697 + 0.1305*(t1023*t307*t403 + t4226*t973);
  p_output1(13)=-1.*t1289*t350*t403 + t1213*t178*t350*t470 + t1122*t4756 + t1706*t4835 + t1817*t4873 + t2099*t4881 + t2233*t4911 + t2480*t4937 + t2544*t4964 + t2739*t4973 + t2876*t4998 + t3057*t5013 + t3121*t5048 - 0.027251*(t3003*t5013 + t2929*t5048) - 1.200144*(t2929*t5013 - 1.*t3003*t5048) + t1213*t330*t350*t697 + 0.1305*(t1023*t350*t403 + t4756*t973);
  p_output1(14)=-1.*t1213*t1289 - 1.*t178*t403*t470 + t1122*t5197 + t1706*t5250 + t1817*t5273 + t2099*t5316 + t2233*t5398 + t2480*t5449 + t2544*t5514 + t2739*t5590 + t2876*t5658 + t3057*t5674 + t3121*t5705 - 0.027251*(t3003*t5674 + t2929*t5705) - 1.200144*(t2929*t5674 - 1.*t3003*t5705) - 1.*t330*t403*t697 + 0.1305*(t1023*t1213 + t5197*t973);
  p_output1(15)=t178*t3446 + t1122*t5906 + t1023*t1706*t5906 + t1817*t5937 + t2099*t5961 + t2233*t5999 + t2480*t6046 + t2544*t6077 + t2739*t6103 + t2876*t6131 + t3057*t6145 + t3121*t6164 - 0.027251*(t3003*t6145 + t2929*t6164) - 1.200144*(t2929*t6145 - 1.*t3003*t6164) + t5882*t697 + 0.1305*t5906*t973;
  p_output1(16)=t178*t6220 + t1122*t6232 + t1023*t1706*t6232 + t1817*t6259 + t2099*t6274 + t2233*t6293 + t2480*t6327 + t2544*t6347 + t2739*t6363 + t2876*t6369 + t3057*t6398 + t3121*t6420 - 0.027251*(t3003*t6398 + t2929*t6420) - 1.200144*(t2929*t6398 - 1.*t3003*t6420) + t505*t697 + 0.1305*t6232*t973;
  p_output1(17)=t1213*t178*t330 + t6527 + t6529 + t6539 + t6554 + t6569 + t6598 + t6650 + t6678 + t6726 + t6742 + t6795 + t6810 + t6824 + t6838 - 1.*t1213*t470*t697;
  p_output1(18)=-0.135*t26*t3446 + t1122*t3764 + t1023*t1706*t3764 + 0.135*t3428*t625 + t1817*t6883 + t2099*t6895 + t2233*t6909 + t2480*t6928 + t2544*t6946 + t2739*t6968 + t2876*t6985 + t3057*t7003 + t3121*t7028 - 0.027251*(t3003*t7003 + t2929*t7028) - 1.200144*(t2929*t7003 - 1.*t3003*t7028) + 0.1305*t3764*t973;
  p_output1(19)=-0.135*t26*t6220 + 0.135*t625*t7122 + t1122*t7154 + t1023*t1706*t7154 + t1817*t7192 + t2099*t7207 + t2233*t7230 + t2480*t7273 + t2544*t7296 + t2739*t7307 + t2876*t7324 + t3057*t7354 + t3121*t7388 - 0.027251*(t3003*t7354 + t2929*t7388) - 1.200144*(t2929*t7354 - 1.*t3003*t7388) + 0.1305*t7154*t973;
  p_output1(20)=-0.135*t1213*t26*t330 + 0.135*t1213*t470*t625 + t6527 + t6529 + t6539 + t6554 + t6569 + t6598 + t6650 + t6678 + t6726 + t6742 + t6795 + t6810 + t6824 + t6838;
  p_output1(21)=t1706*t3528 + t1521*t2099*t3528 - 1.*t1678*t2233*t3528 + t1213*t307*t7482 + t3483*t7508 + t2480*t7602 + t2544*t7641 + t2739*t7676 + t2876*t7704 + t3057*t7778 + t3121*t7813 - 0.027251*(t3003*t7778 + t2929*t7813) - 1.200144*(t2929*t7778 - 1.*t3003*t7813) + 0.1305*(-1.*t1023*t3483 - 1.*t1213*t307*t973);
  p_output1(22)=t1213*t350*t7482 + t7508*t7915 + 0.1305*(t1465 - 1.*t1023*t7915) + t1706*t7958 + t1521*t2099*t7958 - 1.*t1678*t2233*t7958 + t2480*t7997 + t2544*t8008 + t2739*t8029 + t2876*t8056 + t3057*t8071 + t3121*t8098 - 0.027251*(t3003*t8071 + t2929*t8098) - 1.200144*(t2929*t8071 - 1.*t3003*t8098);
  p_output1(23)=-1.*t403*t7482 + t7508*t8186 + t1706*t8204 + t1521*t2099*t8204 - 1.*t1678*t2233*t8204 + t2480*t8269 + t2544*t8291 + t2739*t8309 + t2876*t8332 + t3057*t8363 + t3121*t8374 - 0.027251*(t3003*t8363 + t2929*t8374) - 1.200144*(t2929*t8363 - 1.*t3003*t8374) + 0.1305*(-1.*t1023*t8186 + t403*t973);
  p_output1(24)=t2099*t3902 + t3764*t8446 + t3702*t8459 + t2233*t8470 + t2544*t8485 + t2480*t8505 + t2876*t8513 + t2739*t8539 + t3121*t8555 + t3057*t8573 - 1.200144*(-1.*t3003*t8555 + t2929*t8573) - 0.027251*(t2929*t8555 + t3003*t8573);
  p_output1(25)=t7154*t8446 + t8459*t8655 + t2233*t8674 + t2099*t8700 + t2544*t8716 + t2480*t8728 + t2876*t8738 + t2739*t8750 + t3121*t8767 + t3057*t8782 - 1.200144*(-1.*t3003*t8767 + t2929*t8782) - 0.027251*(t2929*t8767 + t3003*t8782);
  p_output1(26)=t6526*t8446 + t8459*t8865 + t2233*t8900 + t2099*t8911 + t2544*t8922 + t2480*t8950 + t2876*t8958 + t2739*t8971 + t3121*t8981 + t3057*t9012 - 1.200144*(-1.*t3003*t8981 + t2929*t9012) - 0.027251*(t2929*t8981 + t3003*t9012);
  p_output1(27)=t2544*t3930 + t3807*t9103 + t3902*t9123 + t2480*t9141 + t2876*t9165 + t2739*t9186 + t3121*t9204 + t3057*t9223 - 1.200144*(-1.*t3003*t9204 + t2929*t9223) - 0.027251*(t2929*t9204 + t3003*t9223);
  p_output1(28)=t8700*t9123 + t9103*t9264 + t2544*t9278 + t2480*t9306 + t2876*t9341 + t2739*t9349 + t3121*t9367 + t3057*t9385 - 1.200144*(-1.*t3003*t9367 + t2929*t9385) - 0.027251*(t2929*t9367 + t3003*t9385);
  p_output1(29)=t8911*t9123 + t9103*t9518 + t2544*t9532 + t2480*t9542 + t2876*t9553 + t2739*t9565 + t3121*t9582 + t3057*t9609 - 1.200144*(-1.*t3003*t9582 + t2929*t9609) - 0.027251*(t2929*t9582 + t3003*t9609);
  p_output1(30)=t2739*t4059 + t3930*t9662 + t3953*t9693 + t2876*t9710 + t3121*t9752 + t3057*t9777 - 1.200144*(-1.*t3003*t9752 + t2929*t9777) - 0.027251*(t2929*t9752 + t3003*t9777);
  p_output1(31)=t9278*t9662 + t9693*t9859 + t2876*t9871 + t2739*t9887 + t3121*t9897 + t3057*t9921 - 1.200144*(-1.*t3003*t9897 + t2929*t9921) - 0.027251*(t2929*t9897 + t3003*t9921);
  p_output1(32)=t10018*t2739 + t10003*t2876 - 1.200144*(t10042*t2929 - 1.*t10035*t3003) - 0.027251*(t10035*t2929 + t10042*t3003) + t10042*t3057 + t10035*t3121 + t9532*t9662 + t9693*t9980;
  p_output1(33)=-1.200144*(t10157 + t10143*t2929) + t10143*t3057 + t10103*t4000 + t10114*t4059 + t3121*t4097 - 0.027251*(t10143*t3003 + t4162);
  p_output1(34)=t10103*t10223 - 1.200144*(t10308 + t10283*t2929) - 0.027251*(t10332 + t10283*t3003) + t10283*t3057 + t10270*t3121 + t10114*t9887;
  p_output1(35)=t10018*t10114 + t10103*t10400 - 1.200144*(t10459 + t10444*t2929) - 0.027251*(t10485 + t10444*t3003) + t10444*t3057 + t10423*t3121;
  p_output1(36)=t10510*t4097 + t10526*t4120 - 1.200144*(t10157 - 1.*t2929*t4120) - 0.027251*t4174;
  p_output1(37)=t10270*t10510 + t10526*t10590 - 1.200144*(t10308 - 1.*t10590*t2929) - 0.027251*(t10332 - 1.*t10590*t3003);
  p_output1(38)=t10423*t10510 + t10526*t10687 - 1.200144*(t10459 - 1.*t10687*t2929) - 0.027251*(t10485 - 1.*t10687*t3003);
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


       
Eigen::Matrix<double,3,20> Jp_LeftToeBack(const Eigen::Matrix<double,20,1> &var1)
//void Jp_LeftToeBack(Eigen::Matrix<double,3,20> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,20>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}




/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:29:17 GMT-04:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
#include<math.h>
/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
inline double Power(double x, double y) { return pow(x, y); }
inline double Sqrt(double x) { return sqrt(x); }

inline double Abs(double x) { return fabs(x); }

inline double Exp(double x) { return exp(x); }
inline double Log(double x) { return log(x); }

inline double Sin(double x) { return sin(x); }
inline double Cos(double x) { return cos(x); }
inline double Tan(double x) { return tan(x); }

inline double ArcSin(double x) { return asin(x); }
inline double ArcCos(double x) { return acos(x); }
inline double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
inline double ArcTan(double x, double y) { return atan2(y,x); }

inline double Sinh(double x) { return sinh(x); }
inline double Cosh(double x) { return cosh(x); }
inline double Tanh(double x) { return tanh(x); }

const double E	= 2.71828182845904523536029;
const double Pi = 3.14159265358979323846264;
const double Degree = 0.01745329251994329576924;

inline double Sec(double x) { return 1/cos(x); }
inline double Csc(double x) { return 1/sin(x); }

#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t673;
  double t1683;
  double t1383;
  double t1423;
  double t1937;
  double t587;
  double t3231;
  double t2290;
  double t944;
  double t3497;
  double t3553;
  double t1247;
  double t528;
  double t4266;
  double t4330;
  double t3591;
  double t3858;
  double t5088;
  double t5528;
  double t5049;
  double t5548;
  double t5831;
  double t5883;
  double t6399;
  double t6518;
  double t6530;
  double t5141;
  double t5634;
  double t5771;
  double t6611;
  double t6698;
  double t6828;
  double t6835;
  double t6839;
  double t6608;
  double t6760;
  double t6765;
  double t6969;
  double t6972;
  double t6975;
  double t6978;
  double t6986;
  double t7011;
  double t7013;
  double t7028;
  double t7033;
  double t7034;
  double t7001;
  double t7019;
  double t7022;
  double t3241;
  double t3306;
  double t4170;
  double t4393;
  double t4413;
  double t4538;
  double t4551;
  double t4598;
  double t4612;
  double t4654;
  double t4695;
  double t4737;
  double t4862;
  double t4894;
  double t5820;
  double t6590;
  double t6598;
  double t6767;
  double t6852;
  double t6857;
  double t6874;
  double t6878;
  double t6888;
  double t6897;
  double t6903;
  double t6905;
  double t6914;
  double t6919;
  double t6924;
  double t6951;
  double t6996;
  double t7000;
  double t7027;
  double t7050;
  double t7055;
  double t7059;
  double t7064;
  double t7072;
  double t7085;
  double t7087;
  double t7097;
  double t7102;
  double t7111;
  double t7118;
  double t1560;
  double t2024;
  double t2085;
  double t2316;
  double t2686;
  double t2901;
  double t2275;
  double t2938;
  double t3002;
  double t7155;
  double t7157;
  double t7166;
  double t7175;
  double t7176;
  double t7181;
  double t7171;
  double t7183;
  double t7187;
  double t7196;
  double t7207;
  double t7211;
  double t4923;
  double t6945;
  double t7119;
  double t7126;
  double t7135;
  double t7141;
  double t7143;
  double t7144;
  double t7254;
  double t7257;
  double t7259;
  double t7263;
  double t7271;
  double t7272;
  double t7261;
  double t7273;
  double t7274;
  double t7287;
  double t7289;
  double t7290;
  double t7292;
  double t7293;
  double t7296;
  double t7232;
  double t7234;
  double t7235;
  double t7237;
  double t7291;
  double t7297;
  double t7299;
  double t7303;
  double t7308;
  double t7309;
  double t7250;
  double t7278;
  double t7281;
  double t7362;
  double t7363;
  double t7364;
  double t7369;
  double t7372;
  double t7373;
  double t7375;
  double t7376;
  double t7377;
  double t7374;
  double t7378;
  double t7379;
  double t7382;
  double t7383;
  double t7385;
  double t7337;
  double t7338;
  double t7339;
  double t7347;
  double t7348;
  double t7351;
  double t7353;
  double t7354;
  double t7356;
  double t7301;
  double t7310;
  double t7311;
  double t7319;
  double t7321;
  double t7323;
  double t7343;
  double t7352;
  double t7358;
  double t7359;
  double t7437;
  double t7438;
  double t7439;
  double t7444;
  double t7445;
  double t7447;
  double t7451;
  double t7453;
  double t7459;
  double t7448;
  double t7460;
  double t7461;
  double t7464;
  double t7465;
  double t7467;
  double t7402;
  double t7404;
  double t7405;
  double t7406;
  double t7423;
  double t7424;
  double t7425;
  double t7427;
  double t7428;
  double t7429;
  double t7426;
  double t7430;
  double t7431;
  double t7478;
  double t7479;
  double t7480;
  double t7484;
  double t7486;
  double t7487;
  double t7411;
  double t7412;
  double t7414;
  double t7415;
  double t7482;
  double t7488;
  double t7489;
  double t7491;
  double t7493;
  double t7494;
  double t7507;
  double t7508;
  double t7509;
  double t7516;
  double t7520;
  double t7521;
  double t7524;
  double t7525;
  double t7526;
  double t7523;
  double t7527;
  double t7533;
  double t7539;
  double t7540;
  double t7541;
  double t7558;
  double t7559;
  double t7560;
  double t7564;
  double t7566;
  double t7567;
  double t7569;
  double t7572;
  double t7573;
  double t7568;
  double t7574;
  double t7576;
  double t7581;
  double t7582;
  double t7584;
  double t7643;
  double t7646;
  double t7647;
  double t7649;
  double t7650;
  double t7652;
  double t7653;
  double t7654;
  double t7655;
  double t7656;
  double t7657;
  double t7663;
  double t7664;
  double t7665;
  double t7595;
  double t7596;
  double t7599;
  double t7602;
  double t7604;
  double t7605;
  double t7608;
  double t7610;
  double t7612;
  double t7613;
  double t7615;
  double t7616;
  double t7618;
  double t7619;
  double t7621;
  double t7625;
  double t7627;
  double t7628;
  double t7630;
  double t7632;
  double t7636;
  double t7609;
  double t7620;
  double t7637;
  double t7640;
  double t7422;
  double t7432;
  double t7433;
  double t7705;
  double t7706;
  double t7710;
  double t7711;
  double t7713;
  double t7715;
  double t7717;
  double t7720;
  double t7722;
  double t7725;
  double t7678;
  double t7680;
  double t7681;
  double t7684;
  double t7490;
  double t7495;
  double t7496;
  double t7693;
  double t7694;
  double t7698;
  double t7699;
  double t7500;
  double t7501;
  double t7502;
  double t7506;
  double t7510;
  double t7511;
  double t7535;
  double t7543;
  double t7544;
  double t7546;
  double t7550;
  double t7551;
  double t7758;
  double t7761;
  double t7763;
  double t7764;
  double t7765;
  double t7766;
  double t7770;
  double t7773;
  double t7774;
  double t7808;
  double t7804;
  double t7805;
  double t7806;
  double t7836;
  double t7826;
  double t7827;
  double t7832;
  double t7859;
  double t7860;
  double t7863;
  double t7865;
  double t7867;
  double t7869;
  double t7870;
  double t7872;
  double t7785;
  double t7788;
  double t7790;
  double t7791;
  double t7792;
  double t7793;
  double t7794;
  double t7796;
  double t7800;
  double t7807;
  double t7809;
  double t7812;
  double t7814;
  double t7815;
  double t7816;
  double t7817;
  double t7819;
  double t7821;
  double t7833;
  double t7837;
  double t7839;
  double t7840;
  double t7845;
  double t7848;
  double t7851;
  double t7852;
  double t7853;
  double t7801;
  double t7825;
  double t7855;
  double t7856;
  double t7917;
  double t7920;
  double t7921;
  double t7924;
  double t7925;
  double t7927;
  double t7928;
  double t7933;
  double t7881;
  double t7884;
  double t7888;
  double t7892;
  double t7894;
  double t7895;
  double t7903;
  double t7906;
  double t7757;
  double t7768;
  double t7775;
  double t7777;
  double t7778;
  double t7779;
  double t7780;
  double t7782;
  double t7783;
  double t8104;
  double t8106;
  double t8107;
  double t7980;
  double t7981;
  double t7985;
  double t7988;
  double t7991;
  double t7996;
  double t8000;
  double t8001;
  double t8003;
  double t8004;
  double t8007;
  double t8013;
  double t8020;
  double t8028;
  double t8030;
  double t8034;
  double t8036;
  double t8038;
  double t8040;
  double t8041;
  double t8042;
  double t8043;
  double t8045;
  double t8046;
  double t8048;
  double t8049;
  double t8051;
  double t8055;
  double t8059;
  double t8060;
  double t8062;
  double t8064;
  double t8065;
  double t8067;
  double t8071;
  double t8072;
  double t8074;
  double t8075;
  double t8081;
  double t8083;
  double t8086;
  double t8023;
  double t8053;
  double t8088;
  double t8090;
  double t844;
  double t8163;
  double t8166;
  double t8128;
  double t8131;
  double t8133;
  double t8139;
  double t8147;
  double t8148;
  double t8149;
  double t8152;
  double t8204;
  double t8210;
  double t8212;
  double t8229;
  double t8232;
  double t8236;
  double t8240;
  double t8260;
  double t8262;
  double t8263;
  double t8243;
  double t8244;
  double t8245;
  double t8301;
  double t8326;
  double t8327;
  double t8351;
  double t8311;
  double t8312;
  double t8316;
  double t8238;
  double t8239;
  double t8242;
  double t8254;
  double t8265;
  double t8267;
  double t8268;
  double t8276;
  double t8280;
  double t8284;
  double t8285;
  double t8286;
  double t8289;
  double t8294;
  double t8298;
  double t8304;
  double t8305;
  double t8307;
  double t8322;
  double t8357;
  double t8370;
  double t8372;
  double t8373;
  double t8377;
  double t8378;
  double t8386;
  double t8387;
  double t8389;
  double t8393;
  double t8394;
  double t8409;
  double t8410;
  double t8413;
  double t8299;
  double t8395;
  double t8397;
  double t8402;
  double t8403;
  double t8406;
  double t8448;
  double t8450;
  double t8452;
  double t8432;
  double t8436;
  double t8437;
  double t8489;
  double t8490;
  double t8496;
  double t8398;
  double t8407;
  double t8419;
  double t8438;
  double t8445;
  double t8446;
  double t8458;
  double t8477;
  double t8486;
  double t8487;
  double t8488;
  double t8508;
  t673 = Sin(var1[3]);
  t1683 = Cos(var1[3]);
  t1383 = Cos(var1[5]);
  t1423 = Sin(var1[4]);
  t1937 = Sin(var1[5]);
  t587 = Sin(var1[14]);
  t3231 = 0. + t587;
  t2290 = Cos(var1[13]);
  t944 = Cos(var1[14]);
  t3497 = -1.*t944;
  t3553 = 0. + t3497;
  t1247 = Sin(var1[13]);
  t528 = Cos(var1[4]);
  t4266 = t3553*t1247;
  t4330 = 0. + t4266;
  t3591 = t2290*t3553;
  t3858 = 0. + t3591;
  t5088 = Cos(var1[16]);
  t5528 = Sin(var1[15]);
  t5049 = Cos(var1[15]);
  t5548 = Sin(var1[16]);
  t5831 = t5088*t5528;
  t5883 = t5049*t5548;
  t6399 = 0. + t5831 + t5883;
  t6518 = t944*t6399;
  t6530 = 0. + t6518;
  t5141 = -1.*t5049*t5088;
  t5634 = t5528*t5548;
  t5771 = 0. + t5141 + t5634;
  t6611 = t587*t6399;
  t6698 = 0. + t6611;
  t6828 = t2290*t5771;
  t6835 = t1247*t6698;
  t6839 = 0. + t6828 + t6835;
  t6608 = -1.*t1247*t5771;
  t6760 = t2290*t6698;
  t6765 = 0. + t6608 + t6760;
  t6969 = t5049*t5088;
  t6972 = -1.*t5528*t5548;
  t6975 = 0. + t6969 + t6972;
  t6978 = t944*t6975;
  t6986 = 0. + t6978;
  t7011 = t587*t6975;
  t7013 = 0. + t7011;
  t7028 = t2290*t6399;
  t7033 = t1247*t7013;
  t7034 = 0. + t7028 + t7033;
  t7001 = -1.*t1247*t6399;
  t7019 = t2290*t7013;
  t7022 = 0. + t7001 + t7019;
  t3241 = var2[13]*t3231;
  t3306 = var2[5]*t3231;
  t4170 = t3858*t1383;
  t4393 = -1.*t4330*t1937;
  t4413 = 0. + t4170 + t4393;
  t4538 = var2[4]*t4413;
  t4551 = -1.*t3231*t1423;
  t4598 = t1383*t4330;
  t4612 = t3858*t1937;
  t4654 = 0. + t4598 + t4612;
  t4695 = t528*t4654;
  t4737 = 0. + t4551 + t4695;
  t4862 = var2[3]*t4737;
  t4894 = 0. + var2[15] + var2[16] + t3241 + t3306 + t4538 + t4862;
  t5820 = var2[14]*t5771;
  t6590 = var2[13]*t6530;
  t6598 = var2[5]*t6530;
  t6767 = t1383*t6765;
  t6852 = -1.*t6839*t1937;
  t6857 = 0. + t6767 + t6852;
  t6874 = var2[4]*t6857;
  t6878 = -1.*t6530*t1423;
  t6888 = t1383*t6839;
  t6897 = t6765*t1937;
  t6903 = 0. + t6888 + t6897;
  t6905 = t528*t6903;
  t6914 = 0. + t6878 + t6905;
  t6919 = var2[3]*t6914;
  t6924 = 0. + t5820 + t6590 + t6598 + t6874 + t6919;
  t6951 = var2[14]*t6399;
  t6996 = var2[13]*t6986;
  t7000 = var2[5]*t6986;
  t7027 = t1383*t7022;
  t7050 = -1.*t7034*t1937;
  t7055 = 0. + t7027 + t7050;
  t7059 = var2[4]*t7055;
  t7064 = -1.*t6986*t1423;
  t7072 = t1383*t7034;
  t7085 = t7022*t1937;
  t7087 = 0. + t7072 + t7085;
  t7097 = t528*t7087;
  t7102 = 0. + t7064 + t7097;
  t7111 = var2[3]*t7102;
  t7118 = 0. + t6951 + t6996 + t7000 + t7059 + t7111;
  t1560 = -1.*t1383*t673*t1423;
  t2024 = t1683*t1937;
  t2085 = t1560 + t2024;
  t2316 = -1.*t1683*t1383;
  t2686 = -1.*t673*t1423*t1937;
  t2901 = t2316 + t2686;
  t2275 = t1247*t2085;
  t2938 = t2290*t2901;
  t3002 = t2275 + t2938;
  t7155 = t2290*t2085;
  t7157 = -1.*t1247*t2901;
  t7166 = t7155 + t7157;
  t7175 = -1.*t944*t528*t673;
  t7176 = t587*t3002;
  t7181 = t7175 + t7176;
  t7171 = t5528*t7166;
  t7183 = t5049*t7181;
  t7187 = t7171 + t7183;
  t7196 = t5049*t7166;
  t7207 = -1.*t5528*t7181;
  t7211 = t7196 + t7207;
  t4923 = 0.00334*t4894;
  t6945 = -3.e-6*t6924;
  t7119 = -1.e-6*t7118;
  t7126 = t4923 + t6945 + t7119;
  t7135 = -3.e-6*t4894;
  t7141 = 0.00216*t6924;
  t7143 = 0.000956*t7118;
  t7144 = t7135 + t7141 + t7143;
  t7254 = t1683*t1383*t1423;
  t7257 = t673*t1937;
  t7259 = t7254 + t7257;
  t7263 = -1.*t1383*t673;
  t7271 = t1683*t1423*t1937;
  t7272 = t7263 + t7271;
  t7261 = t1247*t7259;
  t7273 = t2290*t7272;
  t7274 = t7261 + t7273;
  t7287 = t2290*t7259;
  t7289 = -1.*t1247*t7272;
  t7290 = t7287 + t7289;
  t7292 = t944*t1683*t528;
  t7293 = t587*t7274;
  t7296 = t7292 + t7293;
  t7232 = -1.e-6*t4894;
  t7234 = 0.000956*t6924;
  t7235 = 0.00144*t7118;
  t7237 = t7232 + t7234 + t7235;
  t7291 = t5528*t7290;
  t7297 = t5049*t7296;
  t7299 = t7291 + t7297;
  t7303 = t5049*t7290;
  t7308 = -1.*t5528*t7296;
  t7309 = t7303 + t7308;
  t7250 = t1683*t528*t587;
  t7278 = -1.*t944*t7274;
  t7281 = t7250 + t7278;
  t7362 = t1683*t528*t1383*t1247;
  t7363 = t2290*t1683*t528*t1937;
  t7364 = t7362 + t7363;
  t7369 = t2290*t1683*t528*t1383;
  t7372 = -1.*t1683*t528*t1247*t1937;
  t7373 = t7369 + t7372;
  t7375 = -1.*t944*t1683*t1423;
  t7376 = t587*t7364;
  t7377 = t7375 + t7376;
  t7374 = t5528*t7373;
  t7378 = t5049*t7377;
  t7379 = t7374 + t7378;
  t7382 = t5049*t7373;
  t7383 = -1.*t5528*t7377;
  t7385 = t7382 + t7383;
  t7337 = -1.*t528*t3231;
  t7338 = -1.*t1423*t4654;
  t7339 = t7337 + t7338;
  t7347 = -1.*t528*t6530;
  t7348 = -1.*t1423*t6903;
  t7351 = t7347 + t7348;
  t7353 = -1.*t528*t6986;
  t7354 = -1.*t1423*t7087;
  t7356 = t7353 + t7354;
  t7301 = t5548*t7299;
  t7310 = -1.*t5088*t7309;
  t7311 = t7301 + t7310;
  t7319 = t5088*t7299;
  t7321 = t5548*t7309;
  t7323 = t7319 + t7321;
  t7343 = 0.00334*var2[3]*t7339;
  t7352 = -3.e-6*var2[3]*t7351;
  t7358 = -1.e-6*var2[3]*t7356;
  t7359 = t7343 + t7352 + t7358;
  t7437 = t528*t1383*t1247*t673;
  t7438 = t2290*t528*t673*t1937;
  t7439 = t7437 + t7438;
  t7444 = t2290*t528*t1383*t673;
  t7445 = -1.*t528*t1247*t673*t1937;
  t7447 = t7444 + t7445;
  t7451 = -1.*t944*t673*t1423;
  t7453 = t587*t7439;
  t7459 = t7451 + t7453;
  t7448 = t5528*t7447;
  t7460 = t5049*t7459;
  t7461 = t7448 + t7460;
  t7464 = t5049*t7447;
  t7465 = -1.*t5528*t7459;
  t7467 = t7464 + t7465;
  t7402 = -3.e-6*var2[3]*t7339;
  t7404 = 0.00216*var2[3]*t7351;
  t7405 = 0.000956*var2[3]*t7356;
  t7406 = t7402 + t7404 + t7405;
  t7423 = t1383*t673*t1423;
  t7424 = -1.*t1683*t1937;
  t7425 = t7423 + t7424;
  t7427 = t1683*t1383;
  t7428 = t673*t1423*t1937;
  t7429 = t7427 + t7428;
  t7426 = t1247*t7425;
  t7430 = t2290*t7429;
  t7431 = t7426 + t7430;
  t7478 = t2290*t7425;
  t7479 = -1.*t1247*t7429;
  t7480 = t7478 + t7479;
  t7484 = t944*t528*t673;
  t7486 = t587*t7431;
  t7487 = t7484 + t7486;
  t7411 = -1.e-6*var2[3]*t7339;
  t7412 = 0.000956*var2[3]*t7351;
  t7414 = 0.00144*var2[3]*t7356;
  t7415 = t7411 + t7412 + t7414;
  t7482 = t5528*t7480;
  t7488 = t5049*t7487;
  t7489 = t7482 + t7488;
  t7491 = t5049*t7480;
  t7493 = -1.*t5528*t7487;
  t7494 = t7491 + t7493;
  t7507 = t528*t1383*t1247;
  t7508 = t2290*t528*t1937;
  t7509 = t7507 + t7508;
  t7516 = t2290*t528*t1383;
  t7520 = -1.*t528*t1247*t1937;
  t7521 = t7516 + t7520;
  t7524 = -1.*t944*t1423;
  t7525 = t587*t7509;
  t7526 = t7524 + t7525;
  t7523 = t5528*t7521;
  t7527 = t5049*t7526;
  t7533 = t7523 + t7527;
  t7539 = t5049*t7521;
  t7540 = -1.*t5528*t7526;
  t7541 = t7539 + t7540;
  t7558 = -1.*t1383*t1247*t1423;
  t7559 = -1.*t2290*t1423*t1937;
  t7560 = t7558 + t7559;
  t7564 = -1.*t2290*t1383*t1423;
  t7566 = t1247*t1423*t1937;
  t7567 = t7564 + t7566;
  t7569 = -1.*t944*t528;
  t7572 = t587*t7560;
  t7573 = t7569 + t7572;
  t7568 = t5528*t7567;
  t7574 = t5049*t7573;
  t7576 = t7568 + t7574;
  t7581 = t5049*t7567;
  t7582 = -1.*t5528*t7573;
  t7584 = t7581 + t7582;
  t7643 = t1383*t673;
  t7646 = -1.*t1683*t1423*t1937;
  t7647 = t7643 + t7646;
  t7649 = t1247*t7647;
  t7650 = t7287 + t7649;
  t7652 = -1.*t1247*t7259;
  t7653 = t2290*t7647;
  t7654 = t7652 + t7653;
  t7655 = t5528*t7654;
  t7656 = t5049*t587*t7650;
  t7657 = t7655 + t7656;
  t7663 = t5049*t7654;
  t7664 = -1.*t587*t5528*t7650;
  t7665 = t7663 + t7664;
  t7595 = -1.*t1383*t4330;
  t7596 = -1.*t3858*t1937;
  t7599 = t7595 + t7596;
  t7602 = var2[4]*t7599;
  t7604 = t4170 + t4393;
  t7605 = var2[3]*t528*t7604;
  t7608 = t7602 + t7605;
  t7610 = -1.*t1383*t6839;
  t7612 = -1.*t6765*t1937;
  t7613 = t7610 + t7612;
  t7615 = var2[4]*t7613;
  t7616 = t6767 + t6852;
  t7618 = var2[3]*t528*t7616;
  t7619 = t7615 + t7618;
  t7621 = -1.*t1383*t7034;
  t7625 = -1.*t7022*t1937;
  t7627 = t7621 + t7625;
  t7628 = var2[4]*t7627;
  t7630 = t7027 + t7050;
  t7632 = var2[3]*t528*t7630;
  t7636 = t7628 + t7632;
  t7609 = 0.00334*t7608;
  t7620 = -3.e-6*t7619;
  t7637 = -1.e-6*t7636;
  t7640 = t7609 + t7620 + t7637;
  t7422 = t528*t587*t673;
  t7432 = -1.*t944*t7431;
  t7433 = t7422 + t7432;
  t7705 = t1247*t2901;
  t7706 = t7478 + t7705;
  t7710 = -1.*t1247*t7425;
  t7711 = t7710 + t2938;
  t7713 = t5528*t7711;
  t7715 = t5049*t587*t7706;
  t7717 = t7713 + t7715;
  t7720 = t5049*t7711;
  t7722 = -1.*t587*t5528*t7706;
  t7725 = t7720 + t7722;
  t7678 = -3.e-6*t7608;
  t7680 = 0.00216*t7619;
  t7681 = 0.000956*t7636;
  t7684 = t7678 + t7680 + t7681;
  t7490 = t5548*t7489;
  t7495 = -1.*t5088*t7494;
  t7496 = t7490 + t7495;
  t7693 = -1.e-6*t7608;
  t7694 = 0.000956*t7619;
  t7698 = 0.00144*t7636;
  t7699 = t7693 + t7694 + t7698;
  t7500 = t5088*t7489;
  t7501 = t5548*t7494;
  t7502 = t7500 + t7501;
  t7506 = -1.*t587*t1423;
  t7510 = -1.*t944*t7509;
  t7511 = t7506 + t7510;
  t7535 = t5548*t7533;
  t7543 = -1.*t5088*t7541;
  t7544 = t7535 + t7543;
  t7546 = t5088*t7533;
  t7550 = t5548*t7541;
  t7551 = t7546 + t7550;
  t7758 = -1.*t528*t1383*t1247;
  t7761 = -1.*t2290*t528*t1937;
  t7763 = t7758 + t7761;
  t7764 = t5528*t7763;
  t7765 = t5049*t587*t7521;
  t7766 = t7764 + t7765;
  t7770 = t5049*t7763;
  t7773 = -1.*t587*t5528*t7521;
  t7774 = t7770 + t7773;
  t7808 = t6608 + t6760;
  t7804 = -1.*t2290*t5771;
  t7805 = -1.*t1247*t6698;
  t7806 = t7804 + t7805;
  t7836 = t7001 + t7019;
  t7826 = -1.*t2290*t6399;
  t7827 = -1.*t1247*t7013;
  t7832 = t7826 + t7827;
  t7859 = -1.*t2290*t7272;
  t7860 = t7652 + t7859;
  t7863 = t5528*t7860;
  t7865 = t5049*t587*t7290;
  t7867 = t7863 + t7865;
  t7869 = t5049*t7860;
  t7870 = -1.*t587*t5528*t7290;
  t7872 = t7869 + t7870;
  t7785 = -1.*t3553*t1383*t1247;
  t7788 = -1.*t2290*t3553*t1937;
  t7790 = t7785 + t7788;
  t7791 = var2[4]*t7790;
  t7792 = t2290*t3553*t1383;
  t7793 = -1.*t3553*t1247*t1937;
  t7794 = t7792 + t7793;
  t7796 = var2[3]*t528*t7794;
  t7800 = t7791 + t7796;
  t7807 = t1383*t7806;
  t7809 = -1.*t7808*t1937;
  t7812 = t7807 + t7809;
  t7814 = var2[4]*t7812;
  t7815 = t1383*t7808;
  t7816 = t7806*t1937;
  t7817 = t7815 + t7816;
  t7819 = var2[3]*t528*t7817;
  t7821 = t7814 + t7819;
  t7833 = t1383*t7832;
  t7837 = -1.*t7836*t1937;
  t7839 = t7833 + t7837;
  t7840 = var2[4]*t7839;
  t7845 = t1383*t7836;
  t7848 = t7832*t1937;
  t7851 = t7845 + t7848;
  t7852 = var2[3]*t528*t7851;
  t7853 = t7840 + t7852;
  t7801 = 0.00334*t7800;
  t7825 = -3.e-6*t7821;
  t7855 = -1.e-6*t7853;
  t7856 = t7801 + t7825 + t7855;
  t7917 = -1.*t2290*t7429;
  t7920 = t7710 + t7917;
  t7921 = t5528*t7920;
  t7924 = t5049*t587*t7480;
  t7925 = t7921 + t7924;
  t7927 = t5049*t7920;
  t7928 = -1.*t587*t5528*t7480;
  t7933 = t7927 + t7928;
  t7881 = -3.e-6*t7800;
  t7884 = 0.00216*t7821;
  t7888 = 0.000956*t7853;
  t7892 = t7881 + t7884 + t7888;
  t7894 = -1.e-6*t7800;
  t7895 = 0.000956*t7821;
  t7903 = 0.00144*t7853;
  t7906 = t7894 + t7895 + t7903;
  t7757 = -1.*t944*t7521*t7126;
  t7768 = t5548*t7766;
  t7775 = -1.*t5088*t7774;
  t7777 = t7768 + t7775;
  t7778 = t7777*t7144;
  t7779 = t5088*t7766;
  t7780 = t5548*t7774;
  t7782 = t7779 + t7780;
  t7783 = t7782*t7237;
  t8104 = -1.*t1683*t528*t587;
  t8106 = t944*t7274;
  t8107 = t8104 + t8106;
  t7980 = var2[13]*t944;
  t7981 = var2[5]*t944;
  t7985 = t2290*t1383*t587;
  t7988 = -1.*t1247*t587*t1937;
  t7991 = t7985 + t7988;
  t7996 = var2[4]*t7991;
  t8000 = t1383*t1247*t587;
  t8001 = t2290*t587*t1937;
  t8003 = t8000 + t8001;
  t8004 = t528*t8003;
  t8007 = t7524 + t8004;
  t8013 = var2[3]*t8007;
  t8020 = t7980 + t7981 + t7996 + t8013;
  t8028 = -1.*var2[13]*t587*t6399;
  t8030 = -1.*var2[5]*t587*t6399;
  t8034 = t2290*t944*t1383*t6399;
  t8036 = -1.*t944*t1247*t6399*t1937;
  t8038 = t8034 + t8036;
  t8040 = var2[4]*t8038;
  t8041 = t587*t6399*t1423;
  t8042 = t944*t1383*t1247*t6399;
  t8043 = t2290*t944*t6399*t1937;
  t8045 = t8042 + t8043;
  t8046 = t528*t8045;
  t8048 = t8041 + t8046;
  t8049 = var2[3]*t8048;
  t8051 = t8028 + t8030 + t8040 + t8049;
  t8055 = -1.*var2[13]*t587*t6975;
  t8059 = -1.*var2[5]*t587*t6975;
  t8060 = t2290*t944*t1383*t6975;
  t8062 = -1.*t944*t1247*t6975*t1937;
  t8064 = t8060 + t8062;
  t8065 = var2[4]*t8064;
  t8067 = t587*t6975*t1423;
  t8071 = t944*t1383*t1247*t6975;
  t8072 = t2290*t944*t6975*t1937;
  t8074 = t8071 + t8072;
  t8075 = t528*t8074;
  t8081 = t8067 + t8075;
  t8083 = var2[3]*t8081;
  t8086 = t8055 + t8059 + t8065 + t8083;
  t8023 = 0.00334*t8020;
  t8053 = -3.e-6*t8051;
  t8088 = -1.e-6*t8086;
  t8090 = t8023 + t8053 + t8088;
  t844 = -1.*t528*t587*t673;
  t8163 = t944*t7431;
  t8166 = t844 + t8163;
  t8128 = -3.e-6*t8020;
  t8131 = 0.00216*t8051;
  t8133 = 0.000956*t8086;
  t8139 = t8128 + t8131 + t8133;
  t8147 = -1.e-6*t8020;
  t8148 = 0.000956*t8051;
  t8149 = 0.00144*t8086;
  t8152 = t8147 + t8148 + t8149;
  t8204 = t587*t1423;
  t8210 = t944*t7509;
  t8212 = t8204 + t8210;
  t8229 = -1.*t5088*t5528;
  t8232 = -1.*t5049*t5548;
  t8236 = t8229 + t8232;
  t8240 = t6969 + t6972;
  t8260 = t1247*t587*t8236;
  t8262 = t2290*t8240;
  t8263 = t8260 + t8262;
  t8243 = t2290*t587*t8236;
  t8244 = -1.*t1247*t8240;
  t8245 = t8243 + t8244;
  t8301 = t5831 + t5883;
  t8326 = t2290*t8301;
  t8327 = t1247*t587*t8240;
  t8351 = t8326 + t8327;
  t8311 = -1.*t1247*t8301;
  t8312 = t2290*t587*t8240;
  t8316 = t8311 + t8312;
  t8238 = var2[13]*t944*t8236;
  t8239 = var2[5]*t944*t8236;
  t8242 = var2[14]*t8240;
  t8254 = t1383*t8245;
  t8265 = -1.*t8263*t1937;
  t8267 = t8254 + t8265;
  t8268 = var2[4]*t8267;
  t8276 = -1.*t944*t8236*t1423;
  t8280 = t1383*t8263;
  t8284 = t8245*t1937;
  t8285 = t8280 + t8284;
  t8286 = t528*t8285;
  t8289 = t8276 + t8286;
  t8294 = var2[3]*t8289;
  t8298 = t8238 + t8239 + t8242 + t8268 + t8294;
  t8304 = var2[14]*t8301;
  t8305 = var2[13]*t944*t8240;
  t8307 = var2[5]*t944*t8240;
  t8322 = t1383*t8316;
  t8357 = -1.*t8351*t1937;
  t8370 = t8322 + t8357;
  t8372 = var2[4]*t8370;
  t8373 = -1.*t944*t8240*t1423;
  t8377 = t1383*t8351;
  t8378 = t8316*t1937;
  t8386 = t8377 + t8378;
  t8387 = t528*t8386;
  t8389 = t8373 + t8387;
  t8393 = var2[3]*t8389;
  t8394 = t8304 + t8305 + t8307 + t8372 + t8393;
  t8409 = -1.*t5528*t7290;
  t8410 = -1.*t5049*t7296;
  t8413 = t8409 + t8410;
  t8299 = -1.e-6*t8298;
  t8395 = -3.e-6*t8394;
  t8397 = t8299 + t8395;
  t8402 = 0.000956*t8298;
  t8403 = 0.00216*t8394;
  t8406 = t8402 + t8403;
  t8448 = -1.*t5528*t7480;
  t8450 = -1.*t5049*t7487;
  t8452 = t8448 + t8450;
  t8432 = 0.00144*t8298;
  t8436 = 0.000956*t8394;
  t8437 = t8432 + t8436;
  t8489 = -1.*t5528*t7521;
  t8490 = -1.*t5049*t7526;
  t8496 = t8489 + t8490;
  t8398 = t7281*t8397;
  t8407 = t8406*t7311;
  t8419 = t5088*t7309;
  t8438 = t8437*t7323;
  t8445 = t7433*t8397;
  t8446 = t8406*t7496;
  t8458 = t5088*t7494;
  t8477 = t8437*t7502;
  t8486 = t7511*t8397;
  t8487 = t7551*t8437;
  t8488 = t7544*t8406;
  t8508 = t5088*t7541;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=t7144*(t5548*t7187 - 1.*t5088*t7211) + (t5088*t7187 + t5548*t7211)*t7237 + t7126*(t844 - 1.*t3002*t944);
  p_output1[10]=t7126*t7281 + t7144*t7311 + t7237*t7323;
  p_output1[11]=0;
  p_output1[12]=t7281*t7359 + t7144*(t5548*t7379 - 1.*t5088*t7385) + t7237*(t5088*t7379 + t5548*t7385) + t7311*t7406 + t7323*t7415 + t7126*(-1.*t1423*t1683*t587 - 1.*t7364*t944);
  p_output1[13]=t7359*t7433 + t7144*(t5548*t7461 - 1.*t5088*t7467) + t7237*(t5088*t7461 + t5548*t7467) + t7406*t7496 + t7415*t7502 + t7126*(-1.*t1423*t587*t673 - 1.*t7439*t944);
  p_output1[14]=t7359*t7511 + t7406*t7544 + t7415*t7551 + t7144*(t5548*t7576 - 1.*t5088*t7584) + t7237*(t5088*t7576 + t5548*t7584) + t7126*(-1.*t528*t587 - 1.*t7560*t944);
  p_output1[15]=t7281*t7640 + t7144*(t5548*t7657 - 1.*t5088*t7665) + t7237*(t5088*t7657 + t5548*t7665) + t7311*t7684 + t7323*t7699 - 1.*t7126*t7650*t944;
  p_output1[16]=t7433*t7640 + t7496*t7684 + t7502*t7699 + t7144*(t5548*t7717 - 1.*t5088*t7725) + t7237*(t5088*t7717 + t5548*t7725) - 1.*t7126*t7706*t944;
  p_output1[17]=t7511*t7640 + t7544*t7684 + t7551*t7699 + t7757 + t7778 + t7783;
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
  p_output1[39]=t7281*t7856 + t7144*(t5548*t7867 - 1.*t5088*t7872) + t7237*(t5088*t7867 + t5548*t7872) + t7311*t7892 + t7323*t7906 - 1.*t7126*t7290*t944;
  p_output1[40]=t7433*t7856 + t7496*t7892 + t7502*t7906 + t7144*(t5548*t7925 - 1.*t5088*t7933) + t7237*(t5088*t7925 + t5548*t7933) - 1.*t7126*t7480*t944;
  p_output1[41]=t7757 + t7778 + t7783 + t7511*t7856 + t7544*t7892 + t7551*t7906;
  p_output1[42]=t7126*t7296 + t7281*t8090 + t7144*(t5088*t5528*t8107 + t5049*t5548*t8107) + t7237*(t5049*t5088*t8107 - 1.*t5528*t5548*t8107) + t7311*t8139 + t7323*t8152;
  p_output1[43]=t7126*t7487 + t7433*t8090 + t7496*t8139 + t7502*t8152 + t7144*(t5088*t5528*t8166 + t5049*t5548*t8166) + t7237*(t5049*t5088*t8166 - 1.*t5528*t5548*t8166);
  p_output1[44]=t7126*t7526 + t7511*t8090 + t7544*t8139 + t7551*t8152 + t7144*(t5088*t5528*t8212 + t5049*t5548*t8212) + t7237*(t5049*t5088*t8212 - 1.*t5528*t5548*t8212);
  p_output1[45]=t8398 + t8407 + t7144*(t7321 - 1.*t5088*t8413) + t7237*(t5548*t8413 + t8419) + t8438;
  p_output1[46]=t8445 + t8446 + t7144*(t7501 - 1.*t5088*t8452) + t7237*(t5548*t8452 + t8458) + t8477;
  p_output1[47]=t8486 + t8487 + t8488 + t7144*(t7550 - 1.*t5088*t8496) + t7237*(t5548*t8496 + t8508);
  p_output1[48]=t7144*t7323 + t8398 + t8407 + t7237*(-1.*t5548*t7299 + t8419) + t8438;
  p_output1[49]=t7144*t7502 + t8445 + t8446 + t7237*(-1.*t5548*t7489 + t8458) + t8477;
  p_output1[50]=t7144*t7551 + t8486 + t8487 + t8488 + t7237*(-1.*t5548*t7533 + t8508);
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



#ifdef MATLAB_MEX_FILE

#include "mex.h"
/*
 * Main function
 */
void mexFunction( int nlhs, mxArray *plhs[],
                  int nrhs, const mxArray *prhs[] )
{
  size_t mrows, ncols;

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 20 && ncols == 1) && 
      !(mrows == 1 && ncols == 20))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 20 && ncols == 1) && 
      !(mrows == 1 && ncols == 20))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 20, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "Jq_AMWorld_RightKnee_mex.hh"

namespace SymExpression
{

void Jq_AMWorld_RightKnee_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
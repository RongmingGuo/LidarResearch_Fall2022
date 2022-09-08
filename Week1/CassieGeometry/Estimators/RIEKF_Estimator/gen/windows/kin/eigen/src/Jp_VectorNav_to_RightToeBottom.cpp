/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:11:45 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_VectorNav_to_RightToeBottom.h"

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
  double t18;
  double t112;
  double t712;
  double t874;
  double t880;
  double t1007;
  double t1052;
  double t1166;
  double t1710;
  double t1814;
  double t1874;
  double t1896;
  double t1573;
  double t1702;
  double t1708;
  double t2169;
  double t2203;
  double t2258;
  double t2422;
  double t2433;
  double t2441;
  double t2462;
  double t2392;
  double t2397;
  double t2419;
  double t2540;
  double t2561;
  double t2570;
  double t2661;
  double t2667;
  double t2668;
  double t2688;
  double t2636;
  double t2642;
  double t2657;
  double t2740;
  double t2743;
  double t2749;
  double t2863;
  double t2866;
  double t2873;
  double t2902;
  double t2822;
  double t2823;
  double t2851;
  double t2957;
  double t2968;
  double t3000;
  double t583;
  double t649;
  double t681;
  double t757;
  double t814;
  double t1037;
  double t1068;
  double t1075;
  double t1187;
  double t1239;
  double t1265;
  double t1894;
  double t1991;
  double t1997;
  double t2267;
  double t2272;
  double t2357;
  double t3121;
  double t3154;
  double t3168;
  double t3191;
  double t3204;
  double t3223;
  double t2452;
  double t2470;
  double t2489;
  double t2576;
  double t2579;
  double t2585;
  double t3247;
  double t3252;
  double t3260;
  double t3293;
  double t3304;
  double t3323;
  double t2672;
  double t2715;
  double t2731;
  double t2763;
  double t2795;
  double t2803;
  double t3328;
  double t3330;
  double t3334;
  double t3364;
  double t3365;
  double t3378;
  double t2900;
  double t2927;
  double t2947;
  double t3001;
  double t3010;
  double t3025;
  double t3403;
  double t3411;
  double t3412;
  double t3422;
  double t3423;
  double t3425;
  double t3565;
  double t3566;
  double t3574;
  double t3585;
  double t3608;
  double t3613;
  double t3630;
  double t3632;
  double t3635;
  double t3640;
  double t3645;
  double t3665;
  double t3667;
  double t3671;
  double t3676;
  double t3728;
  double t3739;
  double t3745;
  double t3968;
  double t3997;
  double t3999;
  double t4006;
  double t4011;
  double t4013;
  double t4024;
  double t4027;
  double t4037;
  double t4065;
  double t4080;
  double t4081;
  double t4102;
  double t4106;
  double t4114;
  double t4120;
  double t4133;
  double t4138;
  double t3897;
  double t3901;
  double t3918;
  double t4249;
  double t4255;
  double t4261;
  double t4285;
  double t4287;
  double t4289;
  double t4301;
  double t4304;
  double t4306;
  double t4308;
  double t4316;
  double t4326;
  double t4354;
  double t4357;
  double t4362;
  double t4384;
  double t4387;
  double t4396;
  double t4543;
  double t4544;
  double t4547;
  double t4575;
  double t4585;
  double t4586;
  double t4595;
  double t4599;
  double t4613;
  double t4623;
  double t4624;
  double t4627;
  double t4677;
  double t4679;
  double t4681;
  double t4646;
  double t4657;
  double t4668;
  double t4515;
  double t4516;
  double t4518;
  double t4817;
  double t4829;
  double t4832;
  double t4848;
  double t4853;
  double t4863;
  double t4869;
  double t4878;
  double t4885;
  double t4906;
  double t4907;
  double t4918;
  double t4922;
  double t4928;
  double t4978;
  double t4985;
  double t4989;
  double t4958;
  double t4963;
  double t4970;
  double t4770;
  double t4774;
  double t5071;
  double t5075;
  double t5076;
  double t5093;
  double t5094;
  double t5109;
  double t5122;
  double t5123;
  double t5138;
  double t5144;
  double t5145;
  double t5156;
  double t5165;
  double t5166;
  double t5192;
  double t5199;
  double t5219;
  double t5172;
  double t5177;
  double t5187;
  double t4567;
  double t4588;
  double t4619;
  double t4633;
  double t4674;
  double t4684;
  double t4700;
  double t4701;
  double t4704;
  double t4706;
  double t4708;
  double t4734;
  double t4742;
  double t4757;
  double t5257;
  double t5268;
  double t5272;
  double t5276;
  double t5279;
  double t5289;
  double t5294;
  double t5302;
  double t5303;
  double t5331;
  double t5335;
  double t5342;
  double t5380;
  double t5381;
  double t5388;
  double t5360;
  double t5363;
  double t5366;
  double t5433;
  double t5439;
  double t5450;
  double t5456;
  double t5471;
  double t5489;
  double t5491;
  double t5497;
  double t5508;
  double t5514;
  double t5525;
  double t5526;
  double t5529;
  double t5572;
  double t5577;
  double t5578;
  double t5552;
  double t5555;
  double t5556;
  double t5622;
  double t5624;
  double t5625;
  double t5652;
  double t5655;
  double t5666;
  double t5677;
  double t5703;
  double t5709;
  double t5713;
  double t5686;
  double t5691;
  double t5693;
  double t5613;
  double t5614;
  double t5626;
  double t5632;
  double t5637;
  double t5774;
  double t5776;
  double t5796;
  double t5803;
  double t5807;
  double t5786;
  double t5789;
  double t5871;
  double t5872;
  double t5877;
  double t5881;
  double t5885;
  double t5899;
  double t5901;
  double t5915;
  double t5916;
  double t5917;
  double t5908;
  double t5910;
  double t5911;
  double t5978;
  double t5991;
  double t5992;
  double t6042;
  double t6044;
  double t6019;
  double t6025;
  double t5970;
  double t5972;
  double t6006;
  double t6007;
  double t6010;
  double t6092;
  double t6096;
  double t3467;
  double t6130;
  double t6132;
  double t6137;
  double t6158;
  double t6159;
  double t6145;
  double t6147;
  double t6188;
  double t6192;
  double t6193;
  double t6057;
  double t6063;
  double t6183;
  double t6184;
  double t6195;
  double t6196;
  double t6198;
  double t6103;
  double t3468;
  double t3477;
  double t6261;
  double t6262;
  double t6263;
  double t6164;
  double t6169;
  t18 = Sin(var1[7]);
  t112 = Cos(var1[8]);
  t712 = Sin(var1[8]);
  t874 = Cos(var1[9]);
  t880 = -1.*t874;
  t1007 = 1. + t880;
  t1052 = Sin(var1[9]);
  t1166 = Cos(var1[7]);
  t1710 = Cos(var1[10]);
  t1814 = -1.*t1710;
  t1874 = 1. + t1814;
  t1896 = Sin(var1[10]);
  t1573 = -1.*t874*t18*t712;
  t1702 = -1.*t1166*t1052;
  t1708 = t1573 + t1702;
  t2169 = -1.*t1166*t874;
  t2203 = t18*t712*t1052;
  t2258 = t2169 + t2203;
  t2422 = Cos(var1[11]);
  t2433 = -1.*t2422;
  t2441 = 1. + t2433;
  t2462 = Sin(var1[11]);
  t2392 = t1710*t1708;
  t2397 = t2258*t1896;
  t2419 = t2392 + t2397;
  t2540 = t1710*t2258;
  t2561 = -1.*t1708*t1896;
  t2570 = t2540 + t2561;
  t2661 = Cos(var1[12]);
  t2667 = -1.*t2661;
  t2668 = 1. + t2667;
  t2688 = Sin(var1[12]);
  t2636 = t2422*t2419;
  t2642 = t2570*t2462;
  t2657 = t2636 + t2642;
  t2740 = t2422*t2570;
  t2743 = -1.*t2419*t2462;
  t2749 = t2740 + t2743;
  t2863 = Cos(var1[13]);
  t2866 = -1.*t2863;
  t2873 = 1. + t2866;
  t2902 = Sin(var1[13]);
  t2822 = t2661*t2657;
  t2823 = t2749*t2688;
  t2851 = t2822 + t2823;
  t2957 = t2661*t2749;
  t2968 = -1.*t2657*t2688;
  t3000 = t2957 + t2968;
  t583 = -1.*t112;
  t649 = 1. + t583;
  t681 = -0.135*t649;
  t757 = 0.049*t712;
  t814 = 0. + t681 + t757;
  t1037 = -0.049*t1007;
  t1068 = -0.09*t1052;
  t1075 = 0. + t1037 + t1068;
  t1187 = -0.09*t1007;
  t1239 = 0.049*t1052;
  t1265 = 0. + t1187 + t1239;
  t1894 = -0.049*t1874;
  t1991 = -0.21*t1896;
  t1997 = 0. + t1894 + t1991;
  t2267 = -0.21*t1874;
  t2272 = 0.049*t1896;
  t2357 = 0. + t2267 + t2272;
  t3121 = t1166*t874*t712;
  t3154 = -1.*t18*t1052;
  t3168 = t3121 + t3154;
  t3191 = -1.*t874*t18;
  t3204 = -1.*t1166*t712*t1052;
  t3223 = t3191 + t3204;
  t2452 = -0.0016*t2441;
  t2470 = -0.2707*t2462;
  t2489 = 0. + t2452 + t2470;
  t2576 = -0.2707*t2441;
  t2579 = 0.0016*t2462;
  t2585 = 0. + t2576 + t2579;
  t3247 = t1710*t3168;
  t3252 = t3223*t1896;
  t3260 = t3247 + t3252;
  t3293 = t1710*t3223;
  t3304 = -1.*t3168*t1896;
  t3323 = t3293 + t3304;
  t2672 = 0.0184*t2668;
  t2715 = -0.7055*t2688;
  t2731 = 0. + t2672 + t2715;
  t2763 = -0.7055*t2668;
  t2795 = -0.0184*t2688;
  t2803 = 0. + t2763 + t2795;
  t3328 = t2422*t3260;
  t3330 = t3323*t2462;
  t3334 = t3328 + t3330;
  t3364 = t2422*t3323;
  t3365 = -1.*t3260*t2462;
  t3378 = t3364 + t3365;
  t2900 = -0.0216*t2873;
  t2927 = -1.1135*t2902;
  t2947 = 0. + t2900 + t2927;
  t3001 = -1.1135*t2873;
  t3010 = 0.0216*t2902;
  t3025 = 0. + t3001 + t3010;
  t3403 = t2661*t3334;
  t3411 = t3378*t2688;
  t3412 = t3403 + t3411;
  t3422 = t2661*t3378;
  t3423 = -1.*t3334*t2688;
  t3425 = t3422 + t3423;
  t3565 = -1.*t874*t1710*t712;
  t3566 = t712*t1052*t1896;
  t3574 = t3565 + t3566;
  t3585 = t1710*t712*t1052;
  t3608 = t874*t712*t1896;
  t3613 = t3585 + t3608;
  t3630 = t2422*t3574;
  t3632 = t3613*t2462;
  t3635 = t3630 + t3632;
  t3640 = t2422*t3613;
  t3645 = -1.*t3574*t2462;
  t3665 = t3640 + t3645;
  t3667 = t2661*t3635;
  t3671 = t3665*t2688;
  t3676 = t3667 + t3671;
  t3728 = t2661*t3665;
  t3739 = -1.*t3635*t2688;
  t3745 = t3728 + t3739;
  t3968 = t1166*t112*t874*t1710;
  t3997 = -1.*t1166*t112*t1052*t1896;
  t3999 = t3968 + t3997;
  t4006 = -1.*t1166*t112*t1710*t1052;
  t4011 = -1.*t1166*t112*t874*t1896;
  t4013 = t4006 + t4011;
  t4024 = t2422*t3999;
  t4027 = t4013*t2462;
  t4037 = t4024 + t4027;
  t4065 = t2422*t4013;
  t4080 = -1.*t3999*t2462;
  t4081 = t4065 + t4080;
  t4102 = t2661*t4037;
  t4106 = t4081*t2688;
  t4114 = t4102 + t4106;
  t4120 = t2661*t4081;
  t4133 = -1.*t4037*t2688;
  t4138 = t4120 + t4133;
  t3897 = 0.049*t112;
  t3901 = -0.135*t712;
  t3918 = t3897 + t3901;
  t4249 = t112*t874*t1710*t18;
  t4255 = -1.*t112*t18*t1052*t1896;
  t4261 = t4249 + t4255;
  t4285 = -1.*t112*t1710*t18*t1052;
  t4287 = -1.*t112*t874*t18*t1896;
  t4289 = t4285 + t4287;
  t4301 = t2422*t4261;
  t4304 = t4289*t2462;
  t4306 = t4301 + t4304;
  t4308 = t2422*t4289;
  t4316 = -1.*t4261*t2462;
  t4326 = t4308 + t4316;
  t4354 = t2661*t4306;
  t4357 = t4326*t2688;
  t4362 = t4354 + t4357;
  t4384 = t2661*t4326;
  t4387 = -1.*t4306*t2688;
  t4396 = t4384 + t4387;
  t4543 = -1.*t112*t1710*t1052;
  t4544 = -1.*t112*t874*t1896;
  t4547 = t4543 + t4544;
  t4575 = -1.*t112*t874*t1710;
  t4585 = t112*t1052*t1896;
  t4586 = t4575 + t4585;
  t4595 = t2422*t4547;
  t4599 = t4586*t2462;
  t4613 = t4595 + t4599;
  t4623 = t2422*t4586;
  t4624 = -1.*t4547*t2462;
  t4627 = t4623 + t4624;
  t4677 = t2661*t4627;
  t4679 = -1.*t4613*t2688;
  t4681 = t4677 + t4679;
  t4646 = t2661*t4613;
  t4657 = t4627*t2688;
  t4668 = t4646 + t4657;
  t4515 = -0.09*t874;
  t4516 = -0.049*t1052;
  t4518 = t4515 + t4516;
  t4817 = -1.*t1166*t874*t712;
  t4829 = t18*t1052;
  t4832 = t4817 + t4829;
  t4848 = t4832*t1896;
  t4853 = t3293 + t4848;
  t4863 = t1710*t4832;
  t4869 = -1.*t3223*t1896;
  t4878 = t4863 + t4869;
  t4885 = t2422*t4853;
  t4906 = t4878*t2462;
  t4907 = t4885 + t4906;
  t4918 = t2422*t4878;
  t4922 = -1.*t4853*t2462;
  t4928 = t4918 + t4922;
  t4978 = t2661*t4928;
  t4985 = -1.*t4907*t2688;
  t4989 = t4978 + t4985;
  t4958 = t2661*t4907;
  t4963 = t4928*t2688;
  t4970 = t4958 + t4963;
  t4770 = 0.049*t874;
  t4774 = t4770 + t1068;
  t5071 = t1166*t874;
  t5075 = -1.*t18*t712*t1052;
  t5076 = t5071 + t5075;
  t5093 = t1710*t5076;
  t5094 = t1708*t1896;
  t5109 = t5093 + t5094;
  t5122 = -1.*t5076*t1896;
  t5123 = t2392 + t5122;
  t5138 = t2422*t5109;
  t5144 = t5123*t2462;
  t5145 = t5138 + t5144;
  t5156 = t2422*t5123;
  t5165 = -1.*t5109*t2462;
  t5166 = t5156 + t5165;
  t5192 = t2661*t5166;
  t5199 = -1.*t5145*t2688;
  t5219 = t5192 + t5199;
  t5172 = t2661*t5145;
  t5177 = t5166*t2688;
  t5187 = t5172 + t5177;
  t4567 = t4547*t2489;
  t4588 = t4586*t2585;
  t4619 = t4613*t2731;
  t4633 = t4627*t2803;
  t4674 = t4668*t2947;
  t4684 = t4681*t3025;
  t4700 = t2863*t4681;
  t4701 = -1.*t4668*t2902;
  t4704 = t4700 + t4701;
  t4706 = -1.1312*t4704;
  t4708 = t2863*t4668;
  t4734 = t4681*t2902;
  t4742 = t4708 + t4734;
  t4757 = 0.0306*t4742;
  t5257 = 0.049*t1710;
  t5268 = t5257 + t1991;
  t5272 = -0.21*t1710;
  t5276 = -0.049*t1896;
  t5279 = t5272 + t5276;
  t5289 = -1.*t1710*t3168;
  t5294 = t5289 + t4869;
  t5302 = t5294*t2462;
  t5303 = t3364 + t5302;
  t5331 = t2422*t5294;
  t5335 = -1.*t3323*t2462;
  t5342 = t5331 + t5335;
  t5380 = t2661*t5342;
  t5381 = -1.*t5303*t2688;
  t5388 = t5380 + t5381;
  t5360 = t2661*t5303;
  t5363 = t5342*t2688;
  t5366 = t5360 + t5363;
  t5433 = t874*t18*t712;
  t5439 = t1166*t1052;
  t5450 = t5433 + t5439;
  t5456 = -1.*t5450*t1896;
  t5471 = t5093 + t5456;
  t5489 = -1.*t1710*t5450;
  t5491 = t5489 + t5122;
  t5497 = t2422*t5471;
  t5508 = t5491*t2462;
  t5514 = t5497 + t5508;
  t5525 = t2422*t5491;
  t5526 = -1.*t5471*t2462;
  t5529 = t5525 + t5526;
  t5572 = t2661*t5529;
  t5577 = -1.*t5514*t2688;
  t5578 = t5572 + t5577;
  t5552 = t2661*t5514;
  t5555 = t5529*t2688;
  t5556 = t5552 + t5555;
  t5622 = t112*t874*t1710;
  t5624 = -1.*t112*t1052*t1896;
  t5625 = t5622 + t5624;
  t5652 = -1.*t5625*t2462;
  t5655 = t4595 + t5652;
  t5666 = -1.*t2422*t5625;
  t5677 = t5666 + t4624;
  t5703 = t2661*t5677;
  t5709 = -1.*t5655*t2688;
  t5713 = t5703 + t5709;
  t5686 = t2661*t5655;
  t5691 = t5677*t2688;
  t5693 = t5686 + t5691;
  t5613 = 0.0016*t2422;
  t5614 = t5613 + t2470;
  t5626 = -0.2707*t2422;
  t5632 = -0.0016*t2462;
  t5637 = t5626 + t5632;
  t5774 = -1.*t2422*t3260;
  t5776 = t5774 + t5335;
  t5796 = t2661*t5776;
  t5803 = -1.*t3378*t2688;
  t5807 = t5796 + t5803;
  t5786 = t5776*t2688;
  t5789 = t3422 + t5786;
  t5871 = t1710*t5450;
  t5872 = t5076*t1896;
  t5877 = t5871 + t5872;
  t5881 = -1.*t5877*t2462;
  t5885 = t5497 + t5881;
  t5899 = -1.*t2422*t5877;
  t5901 = t5899 + t5526;
  t5915 = t2661*t5901;
  t5916 = -1.*t5885*t2688;
  t5917 = t5915 + t5916;
  t5908 = t2661*t5885;
  t5910 = t5901*t2688;
  t5911 = t5908 + t5910;
  t5978 = t2422*t5625;
  t5991 = t4547*t2462;
  t5992 = t5978 + t5991;
  t6042 = -1.*t2661*t5992;
  t6044 = t6042 + t5709;
  t6019 = -1.*t5992*t2688;
  t6025 = t5686 + t6019;
  t5970 = -0.0184*t2661;
  t5972 = t5970 + t2715;
  t6006 = -0.7055*t2661;
  t6007 = 0.0184*t2688;
  t6010 = t6006 + t6007;
  t6092 = -1.*t2661*t3334;
  t6096 = t6092 + t5803;
  t3467 = t2863*t3425;
  t6130 = t2422*t5877;
  t6132 = t5471*t2462;
  t6137 = t6130 + t6132;
  t6158 = -1.*t2661*t6137;
  t6159 = t6158 + t5916;
  t6145 = -1.*t6137*t2688;
  t6147 = t5908 + t6145;
  t6188 = t2661*t5992;
  t6192 = t5655*t2688;
  t6193 = t6188 + t6192;
  t6057 = -1.*t6025*t2902;
  t6063 = t2863*t6025;
  t6183 = 0.0216*t2863;
  t6184 = t6183 + t2927;
  t6195 = -1.1135*t2863;
  t6196 = -0.0216*t2902;
  t6198 = t6195 + t6196;
  t6103 = -1.*t3425*t2902;
  t3468 = -1.*t3412*t2902;
  t3477 = t3467 + t3468;
  t6261 = t2661*t6137;
  t6262 = t5885*t2688;
  t6263 = t6261 + t6262;
  t6164 = -1.*t6147*t2902;
  t6169 = t2863*t6147;

  p_output1(0)=0;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=0;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=0;
  p_output1(9)=0;
  p_output1(10)=0;
  p_output1(11)=0;
  p_output1(12)=0;
  p_output1(13)=0;
  p_output1(14)=0;
  p_output1(15)=0;
  p_output1(16)=0;
  p_output1(17)=0;
  p_output1(18)=0;
  p_output1(19)=0;
  p_output1(20)=0;
  p_output1(21)=0;
  p_output1(22)=-1.*t1166*t1265 - 0.135*t18 + 0.1305*t112*t18 + t1708*t1997 + t2258*t2357 + t2419*t2489 + t2570*t2585 + t2657*t2731 + t2749*t2803 + t2851*t2947 - 1.1312*(-1.*t2851*t2902 + t2863*t3000) + 0.0306*(t2851*t2863 + t2902*t3000) + t3000*t3025 - 1.*t1075*t18*t712 - 1.*t18*t814;
  p_output1(23)=0.135*t1166 - 0.1305*t112*t1166 - 1.*t1265*t18 + t1997*t3168 + t2357*t3223 + t2489*t3260 + t2585*t3323 + t2731*t3334 + t2803*t3378 + t2947*t3412 + t3025*t3425 + 0.0306*(t2863*t3412 + t2902*t3425) - 1.1312*t3477 + t1075*t1166*t712 + t1166*t814;
  p_output1(24)=-0.004500000000000004*t112 + t2489*t3574 + t2585*t3613 + t2731*t3635 + t2803*t3665 + t2947*t3676 + t3025*t3745 - 1.1312*(-1.*t2902*t3676 + t2863*t3745) + 0.0306*(t2863*t3676 + t2902*t3745) - 0.049*t712 - 1.*t1075*t712 + t1052*t2357*t712 - 1.*t1997*t712*t874;
  p_output1(25)=t1075*t112*t1166 - 1.*t1052*t112*t1166*t2357 + t1166*t3918 + t2489*t3999 + t2585*t4013 + t2731*t4037 + t2803*t4081 + t2947*t4114 + t3025*t4138 - 1.1312*(-1.*t2902*t4114 + t2863*t4138) + 0.0306*(t2863*t4114 + t2902*t4138) + 0.1305*t1166*t712 + t112*t1166*t1997*t874;
  p_output1(26)=t1075*t112*t18 - 1.*t1052*t112*t18*t2357 + t18*t3918 + t2489*t4261 + t2585*t4289 + t2731*t4306 + t2803*t4326 + t2947*t4362 + t3025*t4396 - 1.1312*(-1.*t2902*t4362 + t2863*t4396) + 0.0306*(t2863*t4362 + t2902*t4396) + 0.1305*t18*t712 + t112*t18*t1997*t874;
  p_output1(27)=-1.*t1052*t112*t1997 + t112*t4518 + t4567 + t4588 + t4619 + t4633 + t4674 + t4684 + t4706 + t4757 - 1.*t112*t2357*t874;
  p_output1(28)=t1997*t3223 - 1.*t18*t4774 + t2357*t4832 + t2489*t4853 + t2585*t4878 + t2731*t4907 + t2803*t4928 + t2947*t4970 + t3025*t4989 - 1.1312*(-1.*t2902*t4970 + t2863*t4989) + 0.0306*(t2863*t4970 + t2902*t4989) + t1166*t4518*t712;
  p_output1(29)=t1708*t2357 + t1166*t4774 + t1997*t5076 + t2489*t5109 + t2585*t5123 + t2731*t5145 + t2803*t5166 + t2947*t5187 + t3025*t5219 - 1.1312*(-1.*t2902*t5187 + t2863*t5219) + 0.0306*(t2863*t5187 + t2902*t5219) + t18*t4518*t712;
  p_output1(30)=t4567 + t4588 + t4619 + t4633 + t4674 + t4684 + t4706 + t4757 - 1.*t1052*t112*t5268 + t112*t5279*t874;
  p_output1(31)=t2489*t3323 + t3223*t5268 + t3168*t5279 + t2585*t5294 + t2731*t5303 + t2803*t5342 + t2947*t5366 + t3025*t5388 - 1.1312*(-1.*t2902*t5366 + t2863*t5388) + 0.0306*(t2863*t5366 + t2902*t5388);
  p_output1(32)=t5076*t5268 + t5279*t5450 + t2489*t5471 + t2585*t5491 + t2731*t5514 + t2803*t5529 + t2947*t5556 + t3025*t5578 - 1.1312*(-1.*t2902*t5556 + t2863*t5578) + 0.0306*(t2863*t5556 + t2902*t5578);
  p_output1(33)=t4547*t5614 + t5625*t5637 + t2731*t5655 + t2803*t5677 + t2947*t5693 + t3025*t5713 - 1.1312*(-1.*t2902*t5693 + t2863*t5713) + 0.0306*(t2863*t5693 + t2902*t5713);
  p_output1(34)=t2731*t3378 + t3323*t5614 + t3260*t5637 + t2803*t5776 + t2947*t5789 + t3025*t5807 - 1.1312*(-1.*t2902*t5789 + t2863*t5807) + 0.0306*(t2863*t5789 + t2902*t5807);
  p_output1(35)=t5471*t5614 + t5637*t5877 + t2731*t5885 + t2803*t5901 + t2947*t5911 + t3025*t5917 - 1.1312*(-1.*t2902*t5911 + t2863*t5917) + 0.0306*(t2863*t5911 + t2902*t5917);
  p_output1(36)=t5655*t5972 + t5992*t6010 + t2947*t6025 + t3025*t6044 - 1.1312*(t2863*t6044 + t6057) + 0.0306*(t2902*t6044 + t6063);
  p_output1(37)=t2947*t3425 + t3378*t5972 + t3334*t6010 + t3025*t6096 + 0.0306*(t3467 + t2902*t6096) - 1.1312*(t2863*t6096 + t6103);
  p_output1(38)=t5885*t5972 + t6010*t6137 + t2947*t6147 + t3025*t6159 - 1.1312*(t2863*t6159 + t6164) + 0.0306*(t2902*t6159 + t6169);
  p_output1(39)=t6025*t6184 - 1.1312*(t6057 - 1.*t2863*t6193) + 0.0306*(t6063 - 1.*t2902*t6193) + t6193*t6198;
  p_output1(40)=0.0306*t3477 - 1.1312*(-1.*t2863*t3412 + t6103) + t3425*t6184 + t3412*t6198;
  p_output1(41)=t6147*t6184 + t6198*t6263 - 1.1312*(t6164 - 1.*t2863*t6263) + 0.0306*(t6169 - 1.*t2902*t6263);
}


       
Eigen::Matrix<double,3,14> Jp_VectorNav_to_RightToeBottom(const Eigen::Matrix<double,14,1> &var1)
//void Jp_VectorNav_to_RightToeBottom(Eigen::Matrix<double,3,14> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,14>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



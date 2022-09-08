/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:08:58 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_BaseRotY.h"

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
static void output1(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  double t2447;
  double t3128;
  double t1153;
  double t3231;
  t2447 = Cos(var1[4]);
  t3128 = Sin(var1[3]);
  t1153 = Cos(var1[3]);
  t3231 = Sin(var1[4]);

  p_output1(0)=t1153*t2447;
  p_output1(1)=t2447*t3128;
  p_output1(2)=-1.*t3231;
  p_output1(3)=0;
  p_output1(4)=-1.*t3128;
  p_output1(5)=t1153;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=t1153*t3231;
  p_output1(9)=t3128*t3231;
  p_output1(10)=t2447;
  p_output1(11)=0;
  p_output1(12)=var1(0);
  p_output1(13)=var1(1);
  p_output1(14)=var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_BaseRotY(const Eigen::Matrix<double,20,1> &var1)
//void H_BaseRotY(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



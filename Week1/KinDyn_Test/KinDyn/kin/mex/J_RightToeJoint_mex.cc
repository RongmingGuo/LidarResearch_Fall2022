/*
 * Automatically Generated from Mathematica.
 * Mon 25 Jun 2018 14:53:29 GMT-04:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
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


#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1)
{
  double t800;
  double t1819;
  double t1240;
  double t1283;
  double t1972;
  double t21;
  double t244;
  double t247;
  double t666;
  double t953;
  double t1310;
  double t2680;
  double t3638;
  double t3682;
  double t3864;
  double t3867;
  double t3871;
  double t18;
  double t3944;
  double t3992;
  double t4002;
  double t4018;
  double t4043;
  double t4055;
  double t4058;
  double t4083;
  double t4094;
  double t4104;
  double t4166;
  double t4175;
  double t4178;
  double t4205;
  double t4214;
  double t4237;
  double t4246;
  double t4252;
  double t4254;
  double t4255;
  double t4277;
  double t4279;
  double t4283;
  double t4286;
  double t4293;
  double t4294;
  double t4299;
  double t4317;
  double t4321;
  double t4329;
  double t4341;
  double t4347;
  double t4348;
  double t4352;
  double t4356;
  double t4358;
  double t4364;
  double t4372;
  double t4374;
  double t4377;
  double t4392;
  double t4394;
  double t4396;
  double t4404;
  double t4405;
  double t4411;
  double t4418;
  double t4427;
  double t4428;
  double t4434;
  double t4456;
  double t4457;
  double t4460;
  double t419;
  double t703;
  double t755;
  double t1058;
  double t1089;
  double t3752;
  double t3756;
  double t3808;
  double t3858;
  double t3924;
  double t3928;
  double t3935;
  double t4494;
  double t4495;
  double t4497;
  double t4499;
  double t4500;
  double t4503;
  double t4057;
  double t4073;
  double t4075;
  double t4508;
  double t4511;
  double t4512;
  double t4145;
  double t4147;
  double t4149;
  double t4239;
  double t4250;
  double t4251;
  double t4516;
  double t4521;
  double t4522;
  double t4545;
  double t4548;
  double t4551;
  double t4271;
  double t4274;
  double t4276;
  double t4298;
  double t4308;
  double t4312;
  double t4557;
  double t4562;
  double t4563;
  double t4568;
  double t4569;
  double t4570;
  double t4336;
  double t4338;
  double t4339;
  double t4361;
  double t4366;
  double t4369;
  double t4575;
  double t4576;
  double t4577;
  double t4582;
  double t4587;
  double t4589;
  double t4387;
  double t4388;
  double t4389;
  double t4413;
  double t4419;
  double t4421;
  double t4595;
  double t4597;
  double t4599;
  double t4605;
  double t4606;
  double t4608;
  double t4443;
  double t4447;
  double t4449;
  double t4613;
  double t4615;
  double t4617;
  double t4620;
  double t4621;
  double t4622;
  double t4667;
  double t4668;
  double t4671;
  double t4675;
  double t4679;
  double t4681;
  double t4694;
  double t4695;
  double t4697;
  double t4703;
  double t4707;
  double t4708;
  double t4716;
  double t4717;
  double t4719;
  double t4724;
  double t4725;
  double t4727;
  double t4730;
  double t4731;
  double t4736;
  double t4738;
  double t4740;
  double t4741;
  double t4746;
  double t4748;
  double t4749;
  double t4754;
  double t4755;
  double t4759;
  double t4767;
  double t4769;
  double t4770;
  double t4798;
  double t4802;
  double t4804;
  double t4809;
  double t4812;
  double t4815;
  double t4833;
  double t4834;
  double t4838;
  double t4845;
  double t4846;
  double t4850;
  double t4856;
  double t4862;
  double t4866;
  double t4873;
  double t4874;
  double t4877;
  double t4881;
  double t4884;
  double t4886;
  double t4890;
  double t4891;
  double t4894;
  double t4899;
  double t4903;
  double t4904;
  double t4909;
  double t4914;
  double t4915;
  double t4920;
  double t4921;
  double t4924;
  double t4950;
  double t4951;
  double t4952;
  double t4963;
  double t4964;
  double t4966;
  double t4980;
  double t4981;
  double t4985;
  double t4991;
  double t4992;
  double t4996;
  double t5000;
  double t5002;
  double t5005;
  double t5011;
  double t5012;
  double t5014;
  double t5017;
  double t5018;
  double t5022;
  double t5027;
  double t5030;
  double t5034;
  double t5037;
  double t5038;
  double t5040;
  double t5042;
  double t5043;
  double t5044;
  double t5047;
  double t5051;
  double t5054;
  double t5100;
  double t5103;
  double t5112;
  double t5130;
  double t5133;
  double t5118;
  double t5119;
  double t5127;
  double t5144;
  double t5145;
  double t5147;
  double t5150;
  double t5151;
  double t5153;
  double t5158;
  double t5161;
  double t5164;
  double t5167;
  double t5168;
  double t5169;
  double t5173;
  double t5177;
  double t5179;
  double t5184;
  double t5188;
  double t5191;
  double t5195;
  double t5198;
  double t5199;
  double t5204;
  double t5205;
  double t5208;
  double t5225;
  double t5230;
  double t5233;
  double t5248;
  double t5249;
  double t5252;
  double t5241;
  double t5244;
  double t5259;
  double t5260;
  double t5261;
  double t5266;
  double t5267;
  double t5269;
  double t5276;
  double t5277;
  double t5285;
  double t5290;
  double t5292;
  double t5296;
  double t5300;
  double t5302;
  double t5303;
  double t5307;
  double t5309;
  double t5311;
  double t5315;
  double t5316;
  double t5317;
  double t5319;
  double t5321;
  double t5322;
  double t5356;
  double t5359;
  double t5360;
  double t5350;
  double t5351;
  double t5352;
  double t5368;
  double t5370;
  double t5371;
  double t5373;
  double t5374;
  double t5375;
  double t5377;
  double t5378;
  double t5379;
  double t5382;
  double t5383;
  double t5386;
  double t5391;
  double t5392;
  double t5394;
  double t5398;
  double t5399;
  double t5402;
  double t5404;
  double t5407;
  double t5408;
  double t5412;
  double t5415;
  double t5418;
  double t5439;
  double t5440;
  double t5447;
  double t5448;
  double t5451;
  double t5456;
  double t5457;
  double t5458;
  double t5460;
  double t5462;
  double t5466;
  double t5470;
  double t5473;
  double t5474;
  double t5477;
  double t5478;
  double t5480;
  double t5483;
  double t5485;
  double t5486;
  double t5490;
  double t5491;
  double t5493;
  double t5497;
  double t5498;
  double t5499;
  double t5517;
  double t5518;
  double t5519;
  double t5530;
  double t5531;
  double t5525;
  double t5527;
  double t5536;
  double t5537;
  double t5539;
  double t5545;
  double t5549;
  double t5550;
  double t5554;
  double t5555;
  double t5556;
  double t5558;
  double t5559;
  double t5560;
  double t5562;
  double t5563;
  double t5565;
  double t5569;
  double t5570;
  double t5575;
  double t5577;
  double t5579;
  double t5580;
  double t5583;
  double t5586;
  double t5589;
  double t5355;
  double t5364;
  double t5366;
  double t5367;
  double t5372;
  double t5376;
  double t5380;
  double t5387;
  double t5395;
  double t5403;
  double t5409;
  double t5420;
  double t5422;
  double t5424;
  double t5426;
  double t5427;
  double t5430;
  double t5431;
  double t5434;
  double t5435;
  double t4532;
  double t4535;
  double t4536;
  double t5638;
  double t5639;
  double t5641;
  double t5644;
  double t5645;
  double t5646;
  double t5648;
  double t5651;
  double t5652;
  double t5655;
  double t5656;
  double t5659;
  double t5661;
  double t5662;
  double t5663;
  double t5665;
  double t5666;
  double t5667;
  double t5615;
  double t5616;
  double t5618;
  double t5620;
  double t5621;
  double t5681;
  double t5682;
  double t5683;
  double t5686;
  double t5687;
  double t5688;
  double t5698;
  double t5699;
  double t5700;
  double t5702;
  double t5703;
  double t5704;
  double t5707;
  double t5708;
  double t5711;
  double t5714;
  double t5716;
  double t5717;
  double t5719;
  double t5720;
  double t5722;
  double t5724;
  double t5726;
  double t5727;
  double t5741;
  double t5743;
  double t5744;
  double t5749;
  double t5750;
  double t5752;
  double t5762;
  double t5763;
  double t5766;
  double t5768;
  double t5769;
  double t5770;
  double t5772;
  double t5773;
  double t5774;
  double t5776;
  double t5777;
  double t5778;
  double t5780;
  double t5781;
  double t5782;
  double t5785;
  double t5786;
  double t5787;
  double t5810;
  double t5813;
  double t5814;
  double t5818;
  double t5821;
  double t5823;
  double t5824;
  double t5825;
  double t5827;
  double t5828;
  double t5829;
  double t5831;
  double t5832;
  double t5833;
  double t5837;
  double t5838;
  double t5841;
  double t5843;
  double t5845;
  double t5846;
  double t5801;
  double t5802;
  double t5804;
  double t5805;
  double t5807;
  double t5860;
  double t5861;
  double t5862;
  double t5864;
  double t5865;
  double t5866;
  double t5869;
  double t5871;
  double t5872;
  double t5874;
  double t5875;
  double t5876;
  double t5878;
  double t5879;
  double t5881;
  double t5885;
  double t5887;
  double t5888;
  double t5891;
  double t5892;
  double t5894;
  double t5896;
  double t5897;
  double t5898;
  double t5901;
  double t5902;
  double t5905;
  double t5920;
  double t5921;
  double t5922;
  double t5924;
  double t5925;
  double t5926;
  double t5928;
  double t5929;
  double t5930;
  double t5932;
  double t5934;
  double t5935;
  double t5937;
  double t5938;
  double t5939;
  double t5941;
  double t5942;
  double t5943;
  double t5946;
  double t5947;
  double t5948;
  double t5950;
  double t5951;
  double t5952;
  double t5954;
  double t5955;
  double t5956;
  double t5975;
  double t5976;
  double t5978;
  double t5979;
  double t5980;
  double t5982;
  double t5983;
  double t5985;
  double t5986;
  double t5987;
  double t5989;
  double t5990;
  double t5991;
  double t5967;
  double t5968;
  double t5969;
  double t5971;
  double t5972;
  double t6002;
  double t6003;
  double t6004;
  double t6007;
  double t6008;
  double t6010;
  double t6011;
  double t6013;
  double t6014;
  double t6015;
  double t6017;
  double t6018;
  double t6019;
  double t6021;
  double t6022;
  double t6023;
  double t6025;
  double t6026;
  double t6027;
  double t6038;
  double t6039;
  double t6040;
  double t6043;
  double t6044;
  double t6046;
  double t6047;
  double t6049;
  double t6050;
  double t6051;
  double t6053;
  double t6054;
  double t6055;
  double t6057;
  double t6058;
  double t6059;
  double t6061;
  double t6062;
  double t6063;
  double t6081;
  double t6082;
  double t6085;
  double t6086;
  double t6088;
  double t6089;
  double t6090;
  double t6074;
  double t6075;
  double t6077;
  double t6078;
  double t6079;
  double t6102;
  double t6103;
  double t6104;
  double t6106;
  double t6107;
  double t6109;
  double t6110;
  double t6112;
  double t6113;
  double t6114;
  double t6116;
  double t6117;
  double t6118;
  double t6130;
  double t6131;
  double t6132;
  double t6134;
  double t6135;
  double t6137;
  double t6138;
  double t6140;
  double t6141;
  double t6142;
  double t6144;
  double t6145;
  double t6146;
  double t6165;
  double t6166;
  double t4637;
  double t6157;
  double t6158;
  double t6159;
  double t6161;
  double t6162;
  double t6176;
  double t6177;
  double t6178;
  double t6181;
  double t6182;
  double t6184;
  double t6185;
  double t6196;
  double t6197;
  double t6198;
  double t6201;
  double t6202;
  double t6204;
  double t6205;
  double t6168;
  double t4640;
  double t4643;
  double t6216;
  double t6217;
  double t6219;
  double t6220;
  double t6221;
  double t6187;
  double t6229;
  double t6230;
  double t6231;
  double t6191;
  double t6207;
  double t6241;
  double t6242;
  double t6243;
  double t6211;
  t800 = Sin(var1[3]);
  t1819 = Cos(var1[3]);
  t1240 = Cos(var1[5]);
  t1283 = Sin(var1[4]);
  t1972 = Sin(var1[5]);
  t21 = Cos(var1[14]);
  t244 = -1.*t21;
  t247 = 1. + t244;
  t666 = Sin(var1[14]);
  t953 = Sin(var1[13]);
  t1310 = -1.*t1240*t800*t1283;
  t2680 = t1819*t1972;
  t3638 = t1310 + t2680;
  t3682 = Cos(var1[13]);
  t3864 = -1.*t1819*t1240;
  t3867 = -1.*t800*t1283*t1972;
  t3871 = t3864 + t3867;
  t18 = Cos(var1[4]);
  t3944 = t953*t3638;
  t3992 = t3682*t3871;
  t4002 = t3944 + t3992;
  t4018 = Cos(var1[15]);
  t4043 = -1.*t4018;
  t4055 = 1. + t4043;
  t4058 = Sin(var1[15]);
  t4083 = t3682*t3638;
  t4094 = -1.*t953*t3871;
  t4104 = t4083 + t4094;
  t4166 = -1.*t21*t18*t800;
  t4175 = t666*t4002;
  t4178 = t4166 + t4175;
  t4205 = Cos(var1[16]);
  t4214 = -1.*t4205;
  t4237 = 1. + t4214;
  t4246 = Sin(var1[16]);
  t4252 = t4058*t4104;
  t4254 = t4018*t4178;
  t4255 = t4252 + t4254;
  t4277 = t4018*t4104;
  t4279 = -1.*t4058*t4178;
  t4283 = t4277 + t4279;
  t4286 = Cos(var1[17]);
  t4293 = -1.*t4286;
  t4294 = 1. + t4293;
  t4299 = Sin(var1[17]);
  t4317 = -1.*t4246*t4255;
  t4321 = t4205*t4283;
  t4329 = t4317 + t4321;
  t4341 = t4205*t4255;
  t4347 = t4246*t4283;
  t4348 = t4341 + t4347;
  t4352 = Cos(var1[18]);
  t4356 = -1.*t4352;
  t4358 = 1. + t4356;
  t4364 = Sin(var1[18]);
  t4372 = t4299*t4329;
  t4374 = t4286*t4348;
  t4377 = t4372 + t4374;
  t4392 = t4286*t4329;
  t4394 = -1.*t4299*t4348;
  t4396 = t4392 + t4394;
  t4404 = Cos(var1[19]);
  t4405 = -1.*t4404;
  t4411 = 1. + t4405;
  t4418 = Sin(var1[19]);
  t4427 = -1.*t4364*t4377;
  t4428 = t4352*t4396;
  t4434 = t4427 + t4428;
  t4456 = t4352*t4377;
  t4457 = t4364*t4396;
  t4460 = t4456 + t4457;
  t419 = -0.049*t247;
  t703 = -0.135*t666;
  t755 = 0. + t419 + t703;
  t1058 = 0.135*t953;
  t1089 = 0. + t1058;
  t3752 = -1.*t3682;
  t3756 = 1. + t3752;
  t3808 = -0.135*t3756;
  t3858 = 0. + t3808;
  t3924 = -0.135*t247;
  t3928 = 0.049*t666;
  t3935 = 0. + t3924 + t3928;
  t4494 = t1819*t1240*t1283;
  t4495 = t800*t1972;
  t4497 = t4494 + t4495;
  t4499 = -1.*t1240*t800;
  t4500 = t1819*t1283*t1972;
  t4503 = t4499 + t4500;
  t4057 = -0.09*t4055;
  t4073 = 0.049*t4058;
  t4075 = 0. + t4057 + t4073;
  t4508 = t953*t4497;
  t4511 = t3682*t4503;
  t4512 = t4508 + t4511;
  t4145 = -0.049*t4055;
  t4147 = -0.09*t4058;
  t4149 = 0. + t4145 + t4147;
  t4239 = -0.049*t4237;
  t4250 = -0.21*t4246;
  t4251 = 0. + t4239 + t4250;
  t4516 = t3682*t4497;
  t4521 = -1.*t953*t4503;
  t4522 = t4516 + t4521;
  t4545 = t21*t1819*t18;
  t4548 = t666*t4512;
  t4551 = t4545 + t4548;
  t4271 = -0.21*t4237;
  t4274 = 0.049*t4246;
  t4276 = 0. + t4271 + t4274;
  t4298 = -0.2707*t4294;
  t4308 = 0.0016*t4299;
  t4312 = 0. + t4298 + t4308;
  t4557 = t4058*t4522;
  t4562 = t4018*t4551;
  t4563 = t4557 + t4562;
  t4568 = t4018*t4522;
  t4569 = -1.*t4058*t4551;
  t4570 = t4568 + t4569;
  t4336 = -0.0016*t4294;
  t4338 = -0.2707*t4299;
  t4339 = 0. + t4336 + t4338;
  t4361 = 0.0184*t4358;
  t4366 = -0.7055*t4364;
  t4369 = 0. + t4361 + t4366;
  t4575 = -1.*t4246*t4563;
  t4576 = t4205*t4570;
  t4577 = t4575 + t4576;
  t4582 = t4205*t4563;
  t4587 = t4246*t4570;
  t4589 = t4582 + t4587;
  t4387 = -0.7055*t4358;
  t4388 = -0.0184*t4364;
  t4389 = 0. + t4387 + t4388;
  t4413 = -1.1135*t4411;
  t4419 = 0.0216*t4418;
  t4421 = 0. + t4413 + t4419;
  t4595 = t4299*t4577;
  t4597 = t4286*t4589;
  t4599 = t4595 + t4597;
  t4605 = t4286*t4577;
  t4606 = -1.*t4299*t4589;
  t4608 = t4605 + t4606;
  t4443 = -0.0216*t4411;
  t4447 = -1.1135*t4418;
  t4449 = 0. + t4443 + t4447;
  t4613 = -1.*t4364*t4599;
  t4615 = t4352*t4608;
  t4617 = t4613 + t4615;
  t4620 = t4352*t4599;
  t4621 = t4364*t4608;
  t4622 = t4620 + t4621;
  t4667 = t1819*t18*t1240*t953;
  t4668 = t3682*t1819*t18*t1972;
  t4671 = t4667 + t4668;
  t4675 = t3682*t1819*t18*t1240;
  t4679 = -1.*t1819*t18*t953*t1972;
  t4681 = t4675 + t4679;
  t4694 = -1.*t21*t1819*t1283;
  t4695 = t666*t4671;
  t4697 = t4694 + t4695;
  t4703 = t4058*t4681;
  t4707 = t4018*t4697;
  t4708 = t4703 + t4707;
  t4716 = t4018*t4681;
  t4717 = -1.*t4058*t4697;
  t4719 = t4716 + t4717;
  t4724 = -1.*t4246*t4708;
  t4725 = t4205*t4719;
  t4727 = t4724 + t4725;
  t4730 = t4205*t4708;
  t4731 = t4246*t4719;
  t4736 = t4730 + t4731;
  t4738 = t4299*t4727;
  t4740 = t4286*t4736;
  t4741 = t4738 + t4740;
  t4746 = t4286*t4727;
  t4748 = -1.*t4299*t4736;
  t4749 = t4746 + t4748;
  t4754 = -1.*t4364*t4741;
  t4755 = t4352*t4749;
  t4759 = t4754 + t4755;
  t4767 = t4352*t4741;
  t4769 = t4364*t4749;
  t4770 = t4767 + t4769;
  t4798 = t18*t1240*t953*t800;
  t4802 = t3682*t18*t800*t1972;
  t4804 = t4798 + t4802;
  t4809 = t3682*t18*t1240*t800;
  t4812 = -1.*t18*t953*t800*t1972;
  t4815 = t4809 + t4812;
  t4833 = -1.*t21*t800*t1283;
  t4834 = t666*t4804;
  t4838 = t4833 + t4834;
  t4845 = t4058*t4815;
  t4846 = t4018*t4838;
  t4850 = t4845 + t4846;
  t4856 = t4018*t4815;
  t4862 = -1.*t4058*t4838;
  t4866 = t4856 + t4862;
  t4873 = -1.*t4246*t4850;
  t4874 = t4205*t4866;
  t4877 = t4873 + t4874;
  t4881 = t4205*t4850;
  t4884 = t4246*t4866;
  t4886 = t4881 + t4884;
  t4890 = t4299*t4877;
  t4891 = t4286*t4886;
  t4894 = t4890 + t4891;
  t4899 = t4286*t4877;
  t4903 = -1.*t4299*t4886;
  t4904 = t4899 + t4903;
  t4909 = -1.*t4364*t4894;
  t4914 = t4352*t4904;
  t4915 = t4909 + t4914;
  t4920 = t4352*t4894;
  t4921 = t4364*t4904;
  t4924 = t4920 + t4921;
  t4950 = -1.*t1240*t953*t1283;
  t4951 = -1.*t3682*t1283*t1972;
  t4952 = t4950 + t4951;
  t4963 = -1.*t3682*t1240*t1283;
  t4964 = t953*t1283*t1972;
  t4966 = t4963 + t4964;
  t4980 = -1.*t21*t18;
  t4981 = t666*t4952;
  t4985 = t4980 + t4981;
  t4991 = t4058*t4966;
  t4992 = t4018*t4985;
  t4996 = t4991 + t4992;
  t5000 = t4018*t4966;
  t5002 = -1.*t4058*t4985;
  t5005 = t5000 + t5002;
  t5011 = -1.*t4246*t4996;
  t5012 = t4205*t5005;
  t5014 = t5011 + t5012;
  t5017 = t4205*t4996;
  t5018 = t4246*t5005;
  t5022 = t5017 + t5018;
  t5027 = t4299*t5014;
  t5030 = t4286*t5022;
  t5034 = t5027 + t5030;
  t5037 = t4286*t5014;
  t5038 = -1.*t4299*t5022;
  t5040 = t5037 + t5038;
  t5042 = -1.*t4364*t5034;
  t5043 = t4352*t5040;
  t5044 = t5042 + t5043;
  t5047 = t4352*t5034;
  t5051 = t4364*t5040;
  t5054 = t5047 + t5051;
  t5100 = t1240*t800;
  t5103 = -1.*t1819*t1283*t1972;
  t5112 = t5100 + t5103;
  t5130 = t953*t5112;
  t5133 = t4516 + t5130;
  t5118 = -1.*t953*t4497;
  t5119 = t3682*t5112;
  t5127 = t5118 + t5119;
  t5144 = t4058*t5127;
  t5145 = t4018*t666*t5133;
  t5147 = t5144 + t5145;
  t5150 = t4018*t5127;
  t5151 = -1.*t666*t4058*t5133;
  t5153 = t5150 + t5151;
  t5158 = -1.*t4246*t5147;
  t5161 = t4205*t5153;
  t5164 = t5158 + t5161;
  t5167 = t4205*t5147;
  t5168 = t4246*t5153;
  t5169 = t5167 + t5168;
  t5173 = t4299*t5164;
  t5177 = t4286*t5169;
  t5179 = t5173 + t5177;
  t5184 = t4286*t5164;
  t5188 = -1.*t4299*t5169;
  t5191 = t5184 + t5188;
  t5195 = -1.*t4364*t5179;
  t5198 = t4352*t5191;
  t5199 = t5195 + t5198;
  t5204 = t4352*t5179;
  t5205 = t4364*t5191;
  t5208 = t5204 + t5205;
  t5225 = t1240*t800*t1283;
  t5230 = -1.*t1819*t1972;
  t5233 = t5225 + t5230;
  t5248 = t3682*t5233;
  t5249 = t953*t3871;
  t5252 = t5248 + t5249;
  t5241 = -1.*t953*t5233;
  t5244 = t5241 + t3992;
  t5259 = t4058*t5244;
  t5260 = t4018*t666*t5252;
  t5261 = t5259 + t5260;
  t5266 = t4018*t5244;
  t5267 = -1.*t666*t4058*t5252;
  t5269 = t5266 + t5267;
  t5276 = -1.*t4246*t5261;
  t5277 = t4205*t5269;
  t5285 = t5276 + t5277;
  t5290 = t4205*t5261;
  t5292 = t4246*t5269;
  t5296 = t5290 + t5292;
  t5300 = t4299*t5285;
  t5302 = t4286*t5296;
  t5303 = t5300 + t5302;
  t5307 = t4286*t5285;
  t5309 = -1.*t4299*t5296;
  t5311 = t5307 + t5309;
  t5315 = -1.*t4364*t5303;
  t5316 = t4352*t5311;
  t5317 = t5315 + t5316;
  t5319 = t4352*t5303;
  t5321 = t4364*t5311;
  t5322 = t5319 + t5321;
  t5356 = t3682*t18*t1240;
  t5359 = -1.*t18*t953*t1972;
  t5360 = t5356 + t5359;
  t5350 = -1.*t18*t1240*t953;
  t5351 = -1.*t3682*t18*t1972;
  t5352 = t5350 + t5351;
  t5368 = t4058*t5352;
  t5370 = t4018*t666*t5360;
  t5371 = t5368 + t5370;
  t5373 = t4018*t5352;
  t5374 = -1.*t666*t4058*t5360;
  t5375 = t5373 + t5374;
  t5377 = -1.*t4246*t5371;
  t5378 = t4205*t5375;
  t5379 = t5377 + t5378;
  t5382 = t4205*t5371;
  t5383 = t4246*t5375;
  t5386 = t5382 + t5383;
  t5391 = t4299*t5379;
  t5392 = t4286*t5386;
  t5394 = t5391 + t5392;
  t5398 = t4286*t5379;
  t5399 = -1.*t4299*t5386;
  t5402 = t5398 + t5399;
  t5404 = -1.*t4364*t5394;
  t5407 = t4352*t5402;
  t5408 = t5404 + t5407;
  t5412 = t4352*t5394;
  t5415 = t4364*t5402;
  t5418 = t5412 + t5415;
  t5439 = -1.*t3682*t4503;
  t5440 = t5118 + t5439;
  t5447 = t4058*t5440;
  t5448 = t4018*t666*t4522;
  t5451 = t5447 + t5448;
  t5456 = t4018*t5440;
  t5457 = -1.*t666*t4058*t4522;
  t5458 = t5456 + t5457;
  t5460 = -1.*t4246*t5451;
  t5462 = t4205*t5458;
  t5466 = t5460 + t5462;
  t5470 = t4205*t5451;
  t5473 = t4246*t5458;
  t5474 = t5470 + t5473;
  t5477 = t4299*t5466;
  t5478 = t4286*t5474;
  t5480 = t5477 + t5478;
  t5483 = t4286*t5466;
  t5485 = -1.*t4299*t5474;
  t5486 = t5483 + t5485;
  t5490 = -1.*t4364*t5480;
  t5491 = t4352*t5486;
  t5493 = t5490 + t5491;
  t5497 = t4352*t5480;
  t5498 = t4364*t5486;
  t5499 = t5497 + t5498;
  t5517 = t1819*t1240;
  t5518 = t800*t1283*t1972;
  t5519 = t5517 + t5518;
  t5530 = -1.*t953*t5519;
  t5531 = t5248 + t5530;
  t5525 = -1.*t3682*t5519;
  t5527 = t5241 + t5525;
  t5536 = t4058*t5527;
  t5537 = t4018*t666*t5531;
  t5539 = t5536 + t5537;
  t5545 = t4018*t5527;
  t5549 = -1.*t666*t4058*t5531;
  t5550 = t5545 + t5549;
  t5554 = -1.*t4246*t5539;
  t5555 = t4205*t5550;
  t5556 = t5554 + t5555;
  t5558 = t4205*t5539;
  t5559 = t4246*t5550;
  t5560 = t5558 + t5559;
  t5562 = t4299*t5556;
  t5563 = t4286*t5560;
  t5565 = t5562 + t5563;
  t5569 = t4286*t5556;
  t5570 = -1.*t4299*t5560;
  t5575 = t5569 + t5570;
  t5577 = -1.*t4364*t5565;
  t5579 = t4352*t5575;
  t5580 = t5577 + t5579;
  t5583 = t4352*t5565;
  t5586 = t4364*t5575;
  t5589 = t5583 + t5586;
  t5355 = t4075*t5352;
  t5364 = -0.1305*t21*t5360;
  t5366 = t3935*t5360;
  t5367 = t666*t4149*t5360;
  t5372 = t4251*t5371;
  t5376 = t4276*t5375;
  t5380 = t4312*t5379;
  t5387 = t4339*t5386;
  t5395 = t4369*t5394;
  t5403 = t4389*t5402;
  t5409 = t4421*t5408;
  t5420 = t4449*t5418;
  t5422 = t4418*t5408;
  t5424 = t4404*t5418;
  t5426 = t5422 + t5424;
  t5427 = -0.0216*t5426;
  t5430 = t4404*t5408;
  t5431 = -1.*t4418*t5418;
  t5434 = t5430 + t5431;
  t5435 = -1.1135*t5434;
  t4532 = -1.*t1819*t18*t666;
  t4535 = t21*t4512;
  t4536 = t4532 + t4535;
  t5638 = -1.*t4205*t4058*t4536;
  t5639 = -1.*t4018*t4246*t4536;
  t5641 = t5638 + t5639;
  t5644 = t4018*t4205*t4536;
  t5645 = -1.*t4058*t4246*t4536;
  t5646 = t5644 + t5645;
  t5648 = t4299*t5641;
  t5651 = t4286*t5646;
  t5652 = t5648 + t5651;
  t5655 = t4286*t5641;
  t5656 = -1.*t4299*t5646;
  t5659 = t5655 + t5656;
  t5661 = -1.*t4364*t5652;
  t5662 = t4352*t5659;
  t5663 = t5661 + t5662;
  t5665 = t4352*t5652;
  t5666 = t4364*t5659;
  t5667 = t5665 + t5666;
  t5615 = -0.135*t21;
  t5616 = -0.049*t666;
  t5618 = t5615 + t5616;
  t5620 = 0.049*t21;
  t5621 = t5620 + t703;
  t5681 = t953*t5233;
  t5682 = t3682*t5519;
  t5683 = t5681 + t5682;
  t5686 = -1.*t18*t666*t800;
  t5687 = t21*t5683;
  t5688 = t5686 + t5687;
  t5698 = -1.*t4205*t4058*t5688;
  t5699 = -1.*t4018*t4246*t5688;
  t5700 = t5698 + t5699;
  t5702 = t4018*t4205*t5688;
  t5703 = -1.*t4058*t4246*t5688;
  t5704 = t5702 + t5703;
  t5707 = t4299*t5700;
  t5708 = t4286*t5704;
  t5711 = t5707 + t5708;
  t5714 = t4286*t5700;
  t5716 = -1.*t4299*t5704;
  t5717 = t5714 + t5716;
  t5719 = -1.*t4364*t5711;
  t5720 = t4352*t5717;
  t5722 = t5719 + t5720;
  t5724 = t4352*t5711;
  t5726 = t4364*t5717;
  t5727 = t5724 + t5726;
  t5741 = t18*t1240*t953;
  t5743 = t3682*t18*t1972;
  t5744 = t5741 + t5743;
  t5749 = t666*t1283;
  t5750 = t21*t5744;
  t5752 = t5749 + t5750;
  t5762 = -1.*t4205*t4058*t5752;
  t5763 = -1.*t4018*t4246*t5752;
  t5766 = t5762 + t5763;
  t5768 = t4018*t4205*t5752;
  t5769 = -1.*t4058*t4246*t5752;
  t5770 = t5768 + t5769;
  t5772 = t4299*t5766;
  t5773 = t4286*t5770;
  t5774 = t5772 + t5773;
  t5776 = t4286*t5766;
  t5777 = -1.*t4299*t5770;
  t5778 = t5776 + t5777;
  t5780 = -1.*t4364*t5774;
  t5781 = t4352*t5778;
  t5782 = t5780 + t5781;
  t5785 = t4352*t5774;
  t5786 = t4364*t5778;
  t5787 = t5785 + t5786;
  t5810 = -1.*t4058*t4522;
  t5813 = -1.*t4018*t4551;
  t5814 = t5810 + t5813;
  t5818 = t4246*t5814;
  t5821 = t5818 + t4576;
  t5823 = t4205*t5814;
  t5824 = -1.*t4246*t4570;
  t5825 = t5823 + t5824;
  t5827 = -1.*t4299*t5821;
  t5828 = t4286*t5825;
  t5829 = t5827 + t5828;
  t5831 = t4286*t5821;
  t5832 = t4299*t5825;
  t5833 = t5831 + t5832;
  t5837 = t4364*t5829;
  t5838 = t4352*t5833;
  t5841 = t5837 + t5838;
  t5843 = t4352*t5829;
  t5845 = -1.*t4364*t5833;
  t5846 = t5843 + t5845;
  t5801 = 0.049*t4018;
  t5802 = t5801 + t4147;
  t5804 = -0.09*t4018;
  t5805 = -0.049*t4058;
  t5807 = t5804 + t5805;
  t5860 = t21*t18*t800;
  t5861 = t666*t5683;
  t5862 = t5860 + t5861;
  t5864 = -1.*t4058*t5531;
  t5865 = -1.*t4018*t5862;
  t5866 = t5864 + t5865;
  t5869 = t4018*t5531;
  t5871 = -1.*t4058*t5862;
  t5872 = t5869 + t5871;
  t5874 = t4246*t5866;
  t5875 = t4205*t5872;
  t5876 = t5874 + t5875;
  t5878 = t4205*t5866;
  t5879 = -1.*t4246*t5872;
  t5881 = t5878 + t5879;
  t5885 = -1.*t4299*t5876;
  t5887 = t4286*t5881;
  t5888 = t5885 + t5887;
  t5891 = t4286*t5876;
  t5892 = t4299*t5881;
  t5894 = t5891 + t5892;
  t5896 = t4364*t5888;
  t5897 = t4352*t5894;
  t5898 = t5896 + t5897;
  t5901 = t4352*t5888;
  t5902 = -1.*t4364*t5894;
  t5905 = t5901 + t5902;
  t5920 = -1.*t21*t1283;
  t5921 = t666*t5744;
  t5922 = t5920 + t5921;
  t5924 = -1.*t4058*t5360;
  t5925 = -1.*t4018*t5922;
  t5926 = t5924 + t5925;
  t5928 = t4018*t5360;
  t5929 = -1.*t4058*t5922;
  t5930 = t5928 + t5929;
  t5932 = t4246*t5926;
  t5934 = t4205*t5930;
  t5935 = t5932 + t5934;
  t5937 = t4205*t5926;
  t5938 = -1.*t4246*t5930;
  t5939 = t5937 + t5938;
  t5941 = -1.*t4299*t5935;
  t5942 = t4286*t5939;
  t5943 = t5941 + t5942;
  t5946 = t4286*t5935;
  t5947 = t4299*t5939;
  t5948 = t5946 + t5947;
  t5950 = t4364*t5943;
  t5951 = t4352*t5948;
  t5952 = t5950 + t5951;
  t5954 = t4352*t5943;
  t5955 = -1.*t4364*t5948;
  t5956 = t5954 + t5955;
  t5975 = -1.*t4205*t4563;
  t5976 = t5975 + t5824;
  t5978 = -1.*t4299*t4577;
  t5979 = t4286*t5976;
  t5980 = t5978 + t5979;
  t5982 = t4299*t5976;
  t5983 = t4605 + t5982;
  t5985 = t4364*t5980;
  t5986 = t4352*t5983;
  t5987 = t5985 + t5986;
  t5989 = t4352*t5980;
  t5990 = -1.*t4364*t5983;
  t5991 = t5989 + t5990;
  t5967 = -0.21*t4205;
  t5968 = -0.049*t4246;
  t5969 = t5967 + t5968;
  t5971 = 0.049*t4205;
  t5972 = t5971 + t4250;
  t6002 = t4058*t5531;
  t6003 = t4018*t5862;
  t6004 = t6002 + t6003;
  t6007 = -1.*t4246*t6004;
  t6008 = t6007 + t5875;
  t6010 = -1.*t4205*t6004;
  t6011 = t6010 + t5879;
  t6013 = -1.*t4299*t6008;
  t6014 = t4286*t6011;
  t6015 = t6013 + t6014;
  t6017 = t4286*t6008;
  t6018 = t4299*t6011;
  t6019 = t6017 + t6018;
  t6021 = t4364*t6015;
  t6022 = t4352*t6019;
  t6023 = t6021 + t6022;
  t6025 = t4352*t6015;
  t6026 = -1.*t4364*t6019;
  t6027 = t6025 + t6026;
  t6038 = t4058*t5360;
  t6039 = t4018*t5922;
  t6040 = t6038 + t6039;
  t6043 = -1.*t4246*t6040;
  t6044 = t6043 + t5934;
  t6046 = -1.*t4205*t6040;
  t6047 = t6046 + t5938;
  t6049 = -1.*t4299*t6044;
  t6050 = t4286*t6047;
  t6051 = t6049 + t6050;
  t6053 = t4286*t6044;
  t6054 = t4299*t6047;
  t6055 = t6053 + t6054;
  t6057 = t4364*t6051;
  t6058 = t4352*t6055;
  t6059 = t6057 + t6058;
  t6061 = t4352*t6051;
  t6062 = -1.*t4364*t6055;
  t6063 = t6061 + t6062;
  t6081 = -1.*t4286*t4589;
  t6082 = t5978 + t6081;
  t6085 = t4364*t6082;
  t6086 = t6085 + t4615;
  t6088 = t4352*t6082;
  t6089 = -1.*t4364*t4608;
  t6090 = t6088 + t6089;
  t6074 = 0.0016*t4286;
  t6075 = t6074 + t4338;
  t6077 = -0.2707*t4286;
  t6078 = -0.0016*t4299;
  t6079 = t6077 + t6078;
  t6102 = t4205*t6004;
  t6103 = t4246*t5872;
  t6104 = t6102 + t6103;
  t6106 = -1.*t4286*t6104;
  t6107 = t6013 + t6106;
  t6109 = -1.*t4299*t6104;
  t6110 = t6017 + t6109;
  t6112 = t4364*t6107;
  t6113 = t4352*t6110;
  t6114 = t6112 + t6113;
  t6116 = t4352*t6107;
  t6117 = -1.*t4364*t6110;
  t6118 = t6116 + t6117;
  t6130 = t4205*t6040;
  t6131 = t4246*t5930;
  t6132 = t6130 + t6131;
  t6134 = -1.*t4286*t6132;
  t6135 = t6049 + t6134;
  t6137 = -1.*t4299*t6132;
  t6138 = t6053 + t6137;
  t6140 = t4364*t6135;
  t6141 = t4352*t6138;
  t6142 = t6140 + t6141;
  t6144 = t4352*t6135;
  t6145 = -1.*t4364*t6138;
  t6146 = t6144 + t6145;
  t6165 = -1.*t4352*t4599;
  t6166 = t6165 + t6089;
  t4637 = t4404*t4617;
  t6157 = -0.7055*t4352;
  t6158 = 0.0184*t4364;
  t6159 = t6157 + t6158;
  t6161 = -0.0184*t4352;
  t6162 = t6161 + t4366;
  t6176 = t4299*t6008;
  t6177 = t4286*t6104;
  t6178 = t6176 + t6177;
  t6181 = -1.*t4364*t6178;
  t6182 = t6181 + t6113;
  t6184 = -1.*t4352*t6178;
  t6185 = t6184 + t6117;
  t6196 = t4299*t6044;
  t6197 = t4286*t6132;
  t6198 = t6196 + t6197;
  t6201 = -1.*t4364*t6198;
  t6202 = t6201 + t6141;
  t6204 = -1.*t4352*t6198;
  t6205 = t6204 + t6145;
  t6168 = -1.*t4418*t4617;
  t4640 = -1.*t4418*t4622;
  t4643 = t4637 + t4640;
  t6216 = 0.0216*t4404;
  t6217 = t6216 + t4447;
  t6219 = -1.1135*t4404;
  t6220 = -0.0216*t4418;
  t6221 = t6219 + t6220;
  t6187 = -1.*t4418*t6182;
  t6229 = t4352*t6178;
  t6230 = t4364*t6110;
  t6231 = t6229 + t6230;
  t6191 = t4404*t6182;
  t6207 = -1.*t4418*t6202;
  t6241 = t4352*t6198;
  t6242 = t4364*t6138;
  t6243 = t6241 + t6242;
  t6211 = t4404*t6202;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1089*t3638 + t3858*t3871 + t3935*t4002 + t4075*t4104 + t4149*t4178 + t4251*t4255 + t4276*t4283 + t4312*t4329 + t4339*t4348 + t4369*t4377 + t4389*t4396 + t4421*t4434 + t4449*t4460 - 0.0216*(t4418*t4434 + t4404*t4460) - 1.1135*(t4404*t4434 - 1.*t4418*t4460) - 1.*t18*t755*t800 - 0.1305*(t21*t4002 + t18*t666*t800);
  p_output1[10]=t1089*t4497 + t3858*t4503 + t3935*t4512 + t4075*t4522 - 0.1305*t4536 + t4149*t4551 + t4251*t4563 + t4276*t4570 + t4312*t4577 + t4339*t4589 + t4369*t4599 + t4389*t4608 + t4421*t4617 + t4449*t4622 - 0.0216*(t4418*t4617 + t4404*t4622) - 1.1135*t4643 + t18*t1819*t755;
  p_output1[11]=0;
  p_output1[12]=t1089*t1240*t18*t1819 + t18*t1819*t1972*t3858 + t3935*t4671 + t4075*t4681 + t4149*t4697 + t4251*t4708 + t4276*t4719 + t4312*t4727 + t4339*t4736 + t4369*t4741 + t4389*t4749 + t4421*t4759 + t4449*t4770 - 0.0216*(t4418*t4759 + t4404*t4770) - 1.1135*(t4404*t4759 - 1.*t4418*t4770) - 0.1305*(t21*t4671 + t1283*t1819*t666) - 1.*t1283*t1819*t755;
  p_output1[13]=t3935*t4804 + t4075*t4815 + t4149*t4838 + t4251*t4850 + t4276*t4866 + t4312*t4877 + t4339*t4886 + t4369*t4894 + t4389*t4904 + t4421*t4915 + t4449*t4924 - 0.0216*(t4418*t4915 + t4404*t4924) - 1.1135*(t4404*t4915 - 1.*t4418*t4924) + t1089*t1240*t18*t800 + t18*t1972*t3858*t800 - 1.*t1283*t755*t800 - 0.1305*(t21*t4804 + t1283*t666*t800);
  p_output1[14]=-1.*t1089*t1240*t1283 - 1.*t1283*t1972*t3858 + t3935*t4952 + t4075*t4966 + t4149*t4985 + t4251*t4996 + t4276*t5005 + t4312*t5014 + t4339*t5022 + t4369*t5034 + t4389*t5040 + t4421*t5044 + t4449*t5054 - 0.0216*(t4418*t5044 + t4404*t5054) - 1.1135*(t4404*t5044 - 1.*t4418*t5054) - 0.1305*(t21*t4952 + t18*t666) - 1.*t18*t755;
  p_output1[15]=t3858*t4497 + t1089*t5112 + t4075*t5127 - 0.1305*t21*t5133 + t3935*t5133 + t4251*t5147 + t4276*t5153 + t4312*t5164 + t4339*t5169 + t4369*t5179 + t4389*t5191 + t4421*t5199 + t4449*t5208 - 0.0216*(t4418*t5199 + t4404*t5208) - 1.1135*(t4404*t5199 - 1.*t4418*t5208) + t4149*t5133*t666;
  p_output1[16]=t1089*t3871 + t3858*t5233 + t4075*t5244 - 0.1305*t21*t5252 + t3935*t5252 + t4251*t5261 + t4276*t5269 + t4312*t5285 + t4339*t5296 + t4369*t5303 + t4389*t5311 + t4421*t5317 + t4449*t5322 - 0.0216*(t4418*t5317 + t4404*t5322) - 1.1135*(t4404*t5317 - 1.*t4418*t5322) + t4149*t5252*t666;
  p_output1[17]=-1.*t1089*t18*t1972 + t1240*t18*t3858 + t5355 + t5364 + t5366 + t5367 + t5372 + t5376 + t5380 + t5387 + t5395 + t5403 + t5409 + t5420 + t5427 + t5435;
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
  p_output1[39]=0.135*t3682*t4497 - 0.1305*t21*t4522 + t3935*t4522 + t4075*t5440 + t4251*t5451 + t4276*t5458 + t4312*t5466 + t4339*t5474 + t4369*t5480 + t4389*t5486 + t4421*t5493 + t4449*t5499 - 0.0216*(t4418*t5493 + t4404*t5499) - 1.1135*(t4404*t5493 - 1.*t4418*t5499) + t4149*t4522*t666 - 0.135*t4503*t953;
  p_output1[40]=0.135*t3682*t5233 + t4075*t5527 - 0.1305*t21*t5531 + t3935*t5531 + t4251*t5539 + t4276*t5550 + t4312*t5556 + t4339*t5560 + t4369*t5565 + t4389*t5575 + t4421*t5580 + t4449*t5589 - 0.0216*(t4418*t5580 + t4404*t5589) - 1.1135*(t4404*t5580 - 1.*t4418*t5589) + t4149*t5531*t666 - 0.135*t5519*t953;
  p_output1[41]=0.135*t1240*t18*t3682 + t5355 + t5364 + t5366 + t5367 + t5372 + t5376 + t5380 + t5387 + t5395 + t5403 + t5409 + t5420 + t5427 + t5435 - 0.135*t18*t1972*t953;
  p_output1[42]=t4149*t4536 + t4018*t4251*t4536 - 1.*t4058*t4276*t4536 + t18*t1819*t5618 + t4512*t5621 + t4312*t5641 + t4339*t5646 + t4369*t5652 + t4389*t5659 + t4421*t5663 + t4449*t5667 - 0.0216*(t4418*t5663 + t4404*t5667) - 1.1135*(t4404*t5663 - 1.*t4418*t5667) - 0.1305*(-1.*t18*t1819*t21 - 1.*t4512*t666);
  p_output1[43]=t5621*t5683 + t4149*t5688 + t4018*t4251*t5688 - 1.*t4058*t4276*t5688 + t4312*t5700 + t4339*t5704 + t4369*t5711 + t4389*t5717 + t4421*t5722 + t4449*t5727 - 0.0216*(t4418*t5722 + t4404*t5727) - 1.1135*(t4404*t5722 - 1.*t4418*t5727) - 0.1305*(t4166 - 1.*t5683*t666) + t18*t5618*t800;
  p_output1[44]=-1.*t1283*t5618 + t5621*t5744 + t4149*t5752 + t4018*t4251*t5752 - 1.*t4058*t4276*t5752 + t4312*t5766 + t4339*t5770 + t4369*t5774 + t4389*t5778 + t4421*t5782 + t4449*t5787 - 0.0216*(t4418*t5782 + t4404*t5787) - 1.1135*(t4404*t5782 - 1.*t4418*t5787) - 0.1305*(t1283*t21 - 1.*t5744*t666);
  p_output1[45]=t4251*t4570 + t4522*t5802 + t4551*t5807 + t4276*t5814 + t4339*t5821 + t4312*t5825 + t4389*t5829 + t4369*t5833 + t4449*t5841 + t4421*t5846 - 1.1135*(-1.*t4418*t5841 + t4404*t5846) - 0.0216*(t4404*t5841 + t4418*t5846);
  p_output1[46]=t5531*t5802 + t5807*t5862 + t4276*t5866 + t4251*t5872 + t4339*t5876 + t4312*t5881 + t4389*t5888 + t4369*t5894 + t4449*t5898 + t4421*t5905 - 1.1135*(-1.*t4418*t5898 + t4404*t5905) - 0.0216*(t4404*t5898 + t4418*t5905);
  p_output1[47]=t5360*t5802 + t5807*t5922 + t4276*t5926 + t4251*t5930 + t4339*t5935 + t4312*t5939 + t4389*t5943 + t4369*t5948 + t4449*t5952 + t4421*t5956 - 1.1135*(-1.*t4418*t5952 + t4404*t5956) - 0.0216*(t4404*t5952 + t4418*t5956);
  p_output1[48]=t4339*t4577 + t4563*t5969 + t4570*t5972 + t4312*t5976 + t4389*t5980 + t4369*t5983 + t4449*t5987 + t4421*t5991 - 1.1135*(-1.*t4418*t5987 + t4404*t5991) - 0.0216*(t4404*t5987 + t4418*t5991);
  p_output1[49]=t5872*t5972 + t5969*t6004 + t4339*t6008 + t4312*t6011 + t4389*t6015 + t4369*t6019 + t4449*t6023 + t4421*t6027 - 1.1135*(-1.*t4418*t6023 + t4404*t6027) - 0.0216*(t4404*t6023 + t4418*t6027);
  p_output1[50]=t5930*t5972 + t5969*t6040 + t4339*t6044 + t4312*t6047 + t4389*t6051 + t4369*t6055 + t4449*t6059 + t4421*t6063 - 1.1135*(-1.*t4418*t6059 + t4404*t6063) - 0.0216*(t4404*t6059 + t4418*t6063);
  p_output1[51]=t4369*t4608 + t4577*t6075 + t4589*t6079 + t4389*t6082 + t4449*t6086 + t4421*t6090 - 1.1135*(-1.*t4418*t6086 + t4404*t6090) - 0.0216*(t4404*t6086 + t4418*t6090);
  p_output1[52]=t6008*t6075 + t6079*t6104 + t4389*t6107 + t4369*t6110 + t4449*t6114 + t4421*t6118 - 1.1135*(-1.*t4418*t6114 + t4404*t6118) - 0.0216*(t4404*t6114 + t4418*t6118);
  p_output1[53]=t6044*t6075 + t6079*t6132 + t4389*t6135 + t4369*t6138 + t4449*t6142 + t4421*t6146 - 1.1135*(-1.*t4418*t6142 + t4404*t6146) - 0.0216*(t4404*t6142 + t4418*t6146);
  p_output1[54]=t4449*t4617 + t4599*t6159 + t4608*t6162 + t4421*t6166 - 0.0216*(t4637 + t4418*t6166) - 1.1135*(t4404*t6166 + t6168);
  p_output1[55]=t6110*t6162 + t6159*t6178 + t4449*t6182 + t4421*t6185 - 1.1135*(t4404*t6185 + t6187) - 0.0216*(t4418*t6185 + t6191);
  p_output1[56]=t6138*t6162 + t6159*t6198 + t4449*t6202 + t4421*t6205 - 1.1135*(t4404*t6205 + t6207) - 0.0216*(t4418*t6205 + t6211);
  p_output1[57]=-0.0216*t4643 - 1.1135*(-1.*t4404*t4622 + t6168) + t4617*t6217 + t4622*t6221;
  p_output1[58]=t6182*t6217 + t6221*t6231 - 1.1135*(t6187 - 1.*t4404*t6231) - 0.0216*(t6191 - 1.*t4418*t6231);
  p_output1[59]=t6202*t6217 + t6221*t6243 - 1.1135*(t6207 - 1.*t4404*t6243) - 0.0216*(t6211 - 1.*t4418*t6243);
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

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 20, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_RightToeJoint_mex.hh"

namespace SymExpression
{

void J_RightToeJoint_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

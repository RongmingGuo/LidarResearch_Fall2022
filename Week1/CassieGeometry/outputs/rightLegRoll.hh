/*
 * Automatically Generated from Mathematica.
 * Tue 2 Feb 2021 13:46:57 GMT-08:00
 */

#ifndef RIGHTLEGROLL_HH
#define RIGHTLEGROLL_HH

#ifdef MATLAB_MEX_FILE
namespace SymFunction
{
  void rightLegRoll_raw(double *p_output1, const double *var1);
}

#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{
  void rightLegRoll_raw(double *p_output1, const double *var1);

  inline void rightLegRoll(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 22, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 1, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    rightLegRoll_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // RIGHTLEGROLL_HH
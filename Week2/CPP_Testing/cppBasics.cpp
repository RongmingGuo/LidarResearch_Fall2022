// In This Script we will explore the basic functionalities of C++ and get a simple 
// program running

// Package (Library) Inclusion
// "Download the library for OS"
#include <iostream>
#include <math.h>
#include <eigen-3.4.0>

// Namespaces
// It is standard in C++ to use the "NameSpace::function()" format to refer to a function in a package
// By including "using namespace Namespace",  you can shortcut the above mentioned process by directly 
// refer to the function -- "function()";
using namespace std;
using namespace Eigen;

// Main Function
int main(int argc, char** argv) {
    std::cout << "Hello World" << std::endl;

    // Eigen Library
    // 1) MatrixXd -- A very dynamic and versatile data structure.
    // Do not use if your matrix size is fixed.
    Eigen::MatrixXd m1(2, 3);
    m1 << 1, 2, 3, 4, 5, 6; //auto-filling from top to bottom, left to right
    std::cout << "\n m1 = \n" << m1 << std::endl;
    return 1;
}

// What does "Build and Run" mean in c++?
// Build is the complete process of converting source code into an executable.
// 1) 
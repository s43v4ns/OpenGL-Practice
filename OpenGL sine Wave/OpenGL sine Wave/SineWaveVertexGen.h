#pragma once
//Defines the constant PI
#define PI 3.14159265

//Basic includes
//Input output library
#include <iostream>
//Input output manipulator 
#include <iomanip>
//Vector libarary
#include <vector>
//Math library header 
#include "math.h"

//Function to return vector of 2D coords with enough coords to create a curve
std::vector<float> sineCurveGeneration();
//Procedure to display the contents of a vector in the console
void vectorDisplay(std::vector<float> input_vector);



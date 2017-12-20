#ifndef ASS1_MY_MATH
#define ASS1_MY_MATH


#include "myStructLib.h"

#define __PI 3.14159265358979323846
#define earthRadiusKm 6371.0


// Function convert deg to radian
inline double deg2rad(double);

// Function return distance form 2 point with longitude and latitude
double distanceEarth(double, double, double, double);

// Function compare id of 2 DataInf_t : return true if they equal and false otherwise
bool compareId(DataInf_t, DataInf_t);

#endif
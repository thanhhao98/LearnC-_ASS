#ifndef ASS1_MY_MATH
#define ASS1_MY_MATH

#include "myStructLib.h"
#include <cmath>

#define __PI 3.14159265358979323846
#define earthRadiusKm 6371.0


// Function convert deg to radian
inline double deg2rad(double deg) {
    return (deg * __PI / 180);
}

// Function return distance form 2 point with longitude and latitude
double distanceEarth(double lat1d, double lon1d, double lat2d, double lon2d) {
    double lat1r, lon1r, lat2r, lon2r, u, v;
    lat1r = deg2rad(lat1d);
    lon1r = deg2rad(lon1d);
    lat2r = deg2rad(lat2d);
    lon2r = deg2rad(lon2d);
    u = sin((lat2r - lat1r)/2);
    v = sin((lon2r - lon1r)/2);
    return 2.0 * earthRadiusKm * asin(sqrt(u * u + cos(lat1r) * cos(lat2r) * v * v));
}

// Function compare id of 2 DataInf_t : return true if they equal and false otherwise
bool compareId(DataInf_t a, DataInf_t b){
    return !strcmp(a.id, b.id);
}



#endif
#include <stdio.h>
#include <math.h>

int main(){

    double A = sqrt(9);     // square root (number)
    double B = pow(2, 4);   // exponents (base, exponent)
    int C = round(3.14);    // rounding (number)
    int D = ceil(3.14);     // ceiling rounds up (number)
    int E = floor(3.14);    // floor rounds doun (number)
    double F = fabs(-100);  // absolute (number)
    double G = log(3);      // logarithm (number)
    double H = sin(45);     // trigonometry sin (number in degrees)
    double I = cos(45);     // trigonometry cosine (number in degrees)
    double J = tan(45);     // trigonometry tangent (number in degrees)

    printf("\n%lf", J);

    return 0;
}
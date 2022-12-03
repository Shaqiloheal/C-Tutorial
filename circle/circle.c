#include <stdio.h>

int main(){

    const double PI = 3.14159;
    double radius;
    double circumference;
    double area;

    printf("\nEnter the radius of a circle: ");
    scanf("%lf", &radius);

    circumference = 2 * PI * radius;
    area = PI * radius * radius;

    printf("\ncircumference of circle with radius %lf is: %lf", radius, circumference);
    printf("\narea of circle of radius %lf is: %lf", radius, area);
    printf("\n");

    return 0;
}
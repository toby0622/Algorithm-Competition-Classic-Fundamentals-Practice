#include <stdio.h>
#include <math.h>

int main(void)
{
    const double pi = acos(-1.0);

    double radius = 0;
    double height = 0;
    double solution1;
    double solution2;
    double solution;

    scanf("%lf %lf", &radius, &height);

    solution1 = pi * radius * radius;
    solution2 = 2 * pi * radius * height;
    solution = solution1 * 2 + solution2;

    printf("Area = %.3f\n", solution);

    return 0;
}
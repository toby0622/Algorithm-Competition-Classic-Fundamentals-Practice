#include <stdio.h>

int main(void)
{
    printf("%.1f\n", 8.0 / 5.0);
    printf("%.2f\n", 8.0 / 5.0);
    printf("%f\n", 8.0 / 5.0);
    printf("%.1f\n", 8 / 5);
    printf("%d\n", 8.0 / 5.0);

    return 0;
}

// use %d for integer
// use %f for real number (or floating point)

// integer / integer = integer
// float / float = float
// same conclusion for addition, difference, and multiplication
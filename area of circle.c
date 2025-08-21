#include <stdio.h>

int main()
{
    float R,A;
    printf("Enter the Radius of Circle = ");
    scanf("%f",&R);
    A = 3.142857 * R * R;
    printf("The Area of a Circle = %.2f\n", A);
    return 0;
}

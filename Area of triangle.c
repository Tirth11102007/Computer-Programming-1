#include <stdio.h>

int main()
{
    float H ,L ,A;
    printf("Enter the Triangle Height = ");
    scanf("%f",&H);
    printf("Enter the Triangle Length = ");
    scanf("%f",&L);
    A = H * L * 0.5;
    printf("The Area of a Triangle = %.2f\n", A);
    return 0;
}

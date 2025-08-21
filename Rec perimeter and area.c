#include <stdio.h>

int main()
{
    float L, B, P, A;
    printf("Enter the Rectengle Length = ");
    scanf("%f",&L);
    printf("Enter the Rectengle Breath = ");
    scanf("%f",&B);
    P = 2 * (L+B);
    printf("The perimeter of a Rectengle = %.2f\n", P);
    A = L*B;
    printf("the area of Rectengle = %.2f\n", A);
    return 0;
}

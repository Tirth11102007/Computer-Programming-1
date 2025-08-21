#include <stdio.h>

int main()
{
    float Sqrside, Sqrperimeter, Sqrarea;
    printf("Enter the Square Side = ");
    scanf("%f",&Sqrside);
    Sqrperimeter = 4 * Sqrside;
    printf("The perimeter of a Square = %.2f\n", Sqrperimeter);
    Sqrarea = (Sqrside * Sqrside);
    printf("the area of Square = %.2f\n", Sqrarea);
    return 0;
}

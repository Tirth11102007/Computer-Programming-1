#include <stdio.h>

int main()
{
    float p, rate, time, si;
    printf("Enter principal amount : ");
    scanf("%f", & p);
    printf("Enter rate of interest : ");
    scanf("%f", & rate);
    printf("Enter time period in  year : ");
    scanf("%f", & time);
    si = (p * time * rate) / 100;
    printf("\nSimple Interest = %2f", si);
    return 0;
}

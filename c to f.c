#include <stdio.h>

int main(int argc, char * argv[])
{
int C;
double F;
printf("Enter the Temprature in Celcius:");
scanf("%d",&C);
F = ((double)C * 1.8 ) + 32;
printf("%dCelcius is equal to %.2fFahrenheit.\n",C,F);
return 0;
}

#include <stdio.h>

int main(int argc, char * argv[])
{
int F;
double C;
printf("Enter the Temprature in Fahrenheit:");
scanf("%d",&F);
C = 0.5555 * (F-32);
printf("%dFahrenheit is equal to %.2fCelcuis.\n",F,C);
return 0;
}

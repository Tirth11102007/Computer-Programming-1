#include <stdio.h>

int main(int argc, char * argv[])
{
int Dollar;
double Pounds;
printf("Enter the amount in Dollar:");
scanf("%d",&Dollar);
Pounds = (double)Dollar * 0.685714;
printf("%d Dollar is equal to %.2fPounds.\n",Dollar,Pounds);
return 0;
}

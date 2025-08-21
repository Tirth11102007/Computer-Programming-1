#include <stdio.h>

int main(int argc, char * argv[])
{
int Rupees;
double Dollar;
printf("Enter the amount in Rupees:");
scanf("%d",&Rupees);
Dollar = (double)Rupees / 48;
printf("%dRupees is equal to %.2fDollar.\n",Rupees,Dollar);
return 0;
}

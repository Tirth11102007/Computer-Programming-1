#include <stdio.h>

int main(int argc, char * argv[])
{
int Dollar;
int Rupees;
printf("Enter the amount in Dollar:");
scanf("%d",&Dollar);
Rupees = Dollar * 48;
printf("%d Dollar is equal to %dRupees.\n",Dollar,Rupees);
return 0;
}

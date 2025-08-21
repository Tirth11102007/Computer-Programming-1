#include <stdio.h>

int main(int argc, char * argv[])
{
int Grams;
double Kilograms;
printf("Enter the Weight in Grams:");
scanf("%d",&Grams);
Kilograms = (double)Grams / 1000;
printf("%d Grams is equal to %.2fkilograms.\n",Grams,Kilograms);
return 0;
}

#include <stdio.h>

int main(int argc, char * argv[])
{
int Kilograms;
int Grams;
printf("Enter the Weight in Kilograms:");
scanf("%d",&Kilograms);
Grams = Kilograms * 1000;
printf("%d Kilograms is equal to %dGrams.\n",Kilograms,Grams);
return 0;
}

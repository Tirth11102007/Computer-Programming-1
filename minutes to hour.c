#include <stdio.h>

int main(int argc, char * argv[])
{
int Minutes;
double Hours;
printf("Enter the number of Minutes:");
scanf("%d",&Minutes);
Hours = (double)Minutes / 60.0;
printf("%d Minutes is equal to %.2f Hours.\n",Minutes,Hours);
return 0;
}

#include <stdio.h>

int main(int argc, char * argv[])
{
int Hours;
int Minutes;
printf("Enter the number of Hours:");
scanf("%d",&Hours);
Minutes = Hours * 60;
printf("%d Hours is equal to %d Minutes.\n",Hours,Minutes);
return 0;
}

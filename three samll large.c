#include<stdio.h>
int main()
{
int num1,num2,num3;
printf("Enter the Three numbers:");
scanf("%d %d %d",&num1,&num2,&num3);
if (num1>=num2 && num1>=num3)
printf("largest = %d\n", num1);
else if (num2>=num1 && num2>=num3)
printf("smallest = %d\n", num2);
else
printf("largest = %d\n" , num3);
if (num1<=num2 && num1<=num3)
{printf("smallest = %d\n" , num1);}
else if(num2<=num1 && num2<=num3)
printf("smallest = %d\n", num2);
else
printf("smallest = %d\n" , num3);
return 0;
}

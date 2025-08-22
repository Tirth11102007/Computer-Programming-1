#include<stdio.h>
int main()
{
int num1,num2;
printf("Enter the numbers:");
scanf("%d %d",&num1,&num2);
if (num1>num2){
printf("largest = %d\n", num1);
printf("smallest = %d\n", num2);
} else{
printf("largest = %d\n" , num2);
printf("smallest = %d\n", num1);
}
return 0;
}

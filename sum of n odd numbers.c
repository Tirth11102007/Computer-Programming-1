#include<stdio.h>
int main(){
int s=0,i,n;
printf("Enter the number of odd number for sum =");
scanf("%d", &n);
for(i=1;i<=n;i++){
int oddNumber = 2*i-1;
printf("%d", oddNumber);
s = s + oddNumber;}
printf("\n the Sum of %d even no is=%d \n",n,s);
return 0;
}

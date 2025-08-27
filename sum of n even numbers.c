#include<stdio.h>
int main(){
int s=0,i,n;
printf("Enter the number of even number for sum =");
scanf("%d", &n);
for(i=1;i<=n;i++){
int evenNumber = 2 * i;
printf("%d", evenNumber);
s = s + evenNumber;}
printf("\n the Sum of %d even no is=%d \n",n,s);
return 0;
}

#include<stdio.h>
void main()
{
int i,n;
long long f=1;
printf("Enter a value =");
scanf("%d",&n);
for(i=1;i<=n;i++){
f *= i;
}
printf("Factorial of %d is=%.2u",n,f);
}

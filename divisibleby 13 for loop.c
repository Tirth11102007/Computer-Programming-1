#include <stdio.h>
int main(){
int sum=0;
int i;
for (i=1;i<=100;i++){
if(i % 13 == 0){
sum = sum + i;
}
}
printf("the sum of numbers are divisible by 13 in range of 1 to 100 =%d\n" ,sum);
return 0;
}

#include <stdio.h>
#include <math.h>
int main() {
int i, j;
int isPrime;
for (i = 2; i <= 100; i++) {
isPrime = 1;
for (j = 2; j <= sqrt(i); j++) {
if (i % j == 0) {
isPrime = 0;
break;}
}
if (isPrime == 1) {
printf("%d ", i);
}
}
printf("\n");
return 0;
}

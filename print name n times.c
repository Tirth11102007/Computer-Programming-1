#include <stdio.h>
int main() {
int i;
int n;
char Name[50];
printf("enter your name:");
scanf("%s",&Name);
printf("enter the value of repetation:");
scanf("%d",&n);
for (i = 0; i <= n; i++) {
printf("%s\n",Name);
}
return 0;
}

#include <stdio.h>
int main() {
char sex;
int boys = 0, girls = 0, i;
for (i = 1; i <= 50; i++) {
printf("Enter sex for student %d (M/F): ", i);
scanf(" %c", &sex);
if (sex == 'M' || sex == 'm')
boys++;
else if (sex == 'F' || sex == 'f')
girls++;
else
printf("Invalid input!\n");
}
printf("Total Boys = %d\n", boys);
printf("Total Girls = %d\n", girls);
return 0;
}

#include <stdio.h>
int main(){
float grossSalary;
float allowances;
float deductions;
float netSalary;
printf("Enter Gross Salary: ");
scanf("%f", &grossSalary);
if (grossSalary > 10000) {
allowances = 0.10 * grossSalary;
deductions = 0.03 * grossSalary;
}
else if (grossSalary > 5000) {
allowances = 0.07 * grossSalary;
deductions = 0.02 * grossSalary;
} else{
printf("Invalid gross salary");
return 1;
}
netSalary = grossSalary + allowances - deductions;
printf("\nGross Salary: %.2f\n", grossSalary);
printf("Allowances: %.2f\n", allowances);
printf("Deductions: %.2f\n", deductions);
printf("Net Salary: %.2f\n", netSalary);
return 0;
}

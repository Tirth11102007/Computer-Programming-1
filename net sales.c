#include <stdio.h>
int main(){
float net_sales;
float gross_sales;
float discount;
printf("Enter Gross sales :");
scanf("%f", &gross_sales);
discount = (0.10) * gross_sales;
net_sales = gross_sales - discount;
printf("Net sales %.2f \n" ,net_sales);
return 0;
}

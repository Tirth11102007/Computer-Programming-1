#include <stdio.h>
int main(){
float net_sales;
float gross_sales;
float discount;
printf("Enter Gross sales :");
scanf("%f", &gross_sales);
if (gross_sales > 20000) {
discount = (0.15) * gross_sales;
}
else if (gross_sales > 10000) {
discount = (0.10) * gross_sales;
} else{
discount = (0.05) * gross_sales;
}
net_sales = gross_sales - discount;
printf("Net sales %.2f \n" ,net_sales);
return 0;
}

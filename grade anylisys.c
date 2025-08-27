#include <stdio.h>
int main(){
int sub1,sub2,sub3;
int total;
float average;
printf("Enter the Marks of Sunject-1:");
scanf("%d",&sub1);
printf("Enter the Marks of Sunject-2:");
scanf("%d",&sub2);
printf("Enter the Marks of Sunject-3:");
scanf("%d",&sub3);
total = sub1 + sub2 + sub3;
average = (float)total / 3;
if(sub1<35 || sub2<35 || sub3<35){
printf("Grade:Fail(Student fail one subject or more than one subject)");
} else if(average >=70){
printf("Grade: Distinction\n");
}else if(average >=60){
printf("Grade: First Class\n");
}else if(average >=50){
printf("Grade: Second Class\n");
}else if(average >=35){
printf("Grade: Third Class\n");
} else{
printf("Grade: Fail\n");
}
return 0;
}

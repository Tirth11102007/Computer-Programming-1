#include <stdio.h>
int main(){
int physics_marks,chemistry_marks,maths_marks;
int total_marks;
float average_marks;
printf("Enter obtained Marks in Physics :");
scanf("%d", &physics_marks);
printf("Enter obtained Marks in Chemistry :");
scanf("%d", &chemistry_marks);
printf("Enter obtained Marks in Maths :");
scanf("%d", &maths_marks);
total_marks = physics_marks + chemistry_marks + maths_marks;
average_marks = (float)total_marks / 3;
printf("Total Marks %d \n" ,total_marks);
printf("Average Marks %.2f \n" ,average_marks);
return 0;
}

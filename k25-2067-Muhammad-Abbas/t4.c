#include <stdio.h>
int main(){
	float sub1, sub2, sub3, sub4, sub5, totalmarks, percentage, cgpa;
	
	printf("Enter Marks Of 5 Subjects Out Of 100 Each\n ");
	scanf("%f %f %f %f %f", &sub1, &sub2, &sub3, &sub4, &sub5);
	
	totalmarks = sub1 + sub2 + sub3 + sub4 + sub5;
	percentage = (totalmarks/500)*100;
	cgpa = (percentage/100)*4;
	
	printf("\n-----------------------------------\n");
    printf("           STUDENT RESULT         \n");
    printf("-----------------------------------\n");
    printf("Marks: %.1f, %.1f, %.1f, %.1f, %.1f \n", sub1, sub2, sub3, sub4, sub5);   
    printf("Total: %.1f \n", totalmarks);
    printf("Percentage: %.2f%% \n", percentage);
    printf("CGPA: %.2f / 4.00\n", cgpa);
    printf("-----------------------------------\n");

	return 0;	
}

#include <stdio.h>
#include <math.h>
int main(){
	int loanyears, totalmonths ;
	float loan, annualRate, monthlyRate, emi;
	
	printf("Enter Loan Amount: ");
	scanf("%f", &loan);
	
	printf("Enter Annual Interest Rate(%%): ");
	scanf("%f", &annualRate);
	
	printf("Enter Loan Duration In Years: ");
	scanf("%d", &loanyears);
	
	totalmonths = loanyears*12;
	monthlyRate = annualRate/(12 * 100);
	emi = (loan * monthlyRate * pow( 1+ monthlyRate, totalmonths ))/(pow(1+monthlyRate, totalmonths) - 1);
	
	
	printf("\n-----------------------------------\n");
    printf("           LOAN CALCULATIONS         \n");
    printf("-----------------------------------\n");
    printf("Loan Amount: %.2f \n", loan);   
    printf("Duration: %d Years (%d months) \n", loanyears, totalmonths);
    printf("Interest Rate: %.2f%% per year \n", annualRate);
	printf("Monthly EMI: %.2f \n", emi);	
    printf("-----------------------------------\n");
    
	return 0;
}

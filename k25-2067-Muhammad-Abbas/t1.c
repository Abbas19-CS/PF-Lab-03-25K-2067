#include <stdio.h>
int main(){
	char name[50];
	int units;
	float pricepu, totalbill;
	
	printf("Enter Your Name: ");
	scanf("%s", &name);
	
	printf("Enter Number Of Units Consumed: ");
	scanf("%d", &units);
	
	printf("Enter Price Per Unit: ");
	scanf("%f", &pricepu);
	
	totalbill= (units*pricepu);
	
	printf("\n-----------------------------------\n");
    printf("           ELECTRICITY BILL         \n");
    printf("-----------------------------------\n");
    printf("Customer Name: %s \n", name);   
    printf("Units Consumed: %d \n", units);
    printf("Price per Unit: %.2f\n", pricepu);
    printf("-----------------------------------\n");
    printf("Total Bill: %.2f PKR\n", totalbill);
    printf("-----------------------------------\n");
    
    return 0;
	
}

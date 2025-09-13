#include <stdio.h>
int main(){
	float dist, fuelused, fuelppl, efficiency, totalcost;
	
	printf("Enter Distance Travelled In Kilometers (KM): ");
	scanf("%f", &dist);
	
	printf("Enter Fuel Used In Litres: ");
	scanf("%f", &fuelused);
	
	printf("Enter Fuel Price Per Litre: ");
	scanf("%f", &fuelppl);
	
	totalcost = fuelused * fuelppl;
	efficiency = dist/fuelused;
	
	
	printf("\n-----------------------------------\n");
    printf("           FUEL REPORT         \n");
    printf("-----------------------------------\n");
    printf("Distance: %.2f \n", dist);   
    printf("Fuel Used: %.2f \n", fuelused);
    printf("Efficiency: %.2f \n", efficiency);
    printf("Total Cost: %.2f \n", totalcost);
    printf("-----------------------------------\n");
    
	return 0;
}

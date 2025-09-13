#include <stdio.h>
int main(){
	float item1p, item2p, item3p, subtot, tax, grandtot;
	
	printf("Enter Price Of Eggs: ");
	scanf("%f", &item1p);
	
	printf("Enter Price Of Bread: ");
	scanf("%f", &item2p);
	
	printf("Enter Price Of Butter: ");
	scanf("%f", &item3p);
	
	subtot = item1p + item2p + item3p;
	tax = (subtot/100)*17;
	grandtot = tax + subtot ;
	
	printf("\n-----------------------------------\n");
    printf("           SHOP RECEIPT         \n");
    printf("-----------------------------------\n");
    printf("Item 1: %.2f \n", item1p);   
    printf("Item 2: %.2f \n", item2p);
    printf("Item 3: %.2f \n", item3p);
    printf("-----------------------------------\n");
    printf("Subtotal: %.2f PKR\n", subtot);
    printf("Tax(17 Percent): %.2f PKR\n", tax);
    printf("-----------------------------------\n");
	printf("Grand Total: %.2f PKR\n", grandtot);
    printf("-----------------------------------\n");
    
    return 0;
}

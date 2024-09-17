#include <stdio.h>
int main(){
	int avg;
	int fuelA=0; 
	int fuelB=0;
	int costA=0; 
	int costB=0;
	int totalFuel=0;
	int totalCost=0;
	printf("Enter fuel avg in Km/litre: ");
	scanf("%u", &avg);
	fuelA = 850/avg;
	fuelB = 420/avg;
	costA = fuelA*115;
	costB = fuelB*120;
	totalFuel = fuelA + fuelB;
	totalCost = costA + costB;
	printf("Total Fuel required is: %d \n", totalFuel);
	printf("Total Cost: %d", totalCost);
}
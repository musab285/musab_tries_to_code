/*Create a C program that defines a constant for the conversion factor of meters to
kilometers. Use a static variable in a function to count how many times the function is
called.*/
#include <stdio.h>
#define conversion 0.001

int convert(int meter){
	static int count = 0;
	float result = meter*conversion;
	printf("Kilometers: %.2f\n", result);
	count++;
	return count;
}

int main(){
	int n, count;
	printf("How many conversions? "); scanf("%d", &n);
	for(int i = 0; i<n;i++){
		int meter;
		printf("length in meters: "); scanf("%d", &meter);
		count = convert(meter);
	}
	printf("count: %d", count);
}
/*Create a structure to store details about cars in a dealership, including make, model,
year, price, and mileage. Write a program that allows users to add new cars, display a
list of available cars, and search for cars by make or model.*/
#include<stdio.h>
#include<string.h>


struct car{
	char make[20];
	char model[20];
	int year;
	double price;
	int mileage;
};

void available_cars(struct car carr_arr[], int size){
	for(int i =0; i<size; i++){
		printf("CAR %d\n", i+1);
		printf("Make: %s\n", carr_arr[i].make);
		printf("Model: %s\n", carr_arr[i].model);
		printf("Year: %d\n", carr_arr[i].year);
		printf("Price: %lf\n", carr_arr[i].price);
		printf("Mileage: %d\n", carr_arr[i].mileage); 
	}
}

int main(){
	int num;
	printf("how many cars to add? ");
	scanf("%d", &num);
	struct car car_arr[num];
	for(int i = 0; i<num; i++){
		printf("Car %d\n", i);
		printf("Make: "); scanf("%s", &car_arr[i].make);
		printf("Model: "); scanf("%s", &car_arr[i].model);
		printf("Year: "); scanf("%d", &car_arr[i].year);
		printf("Price: "); scanf("%lf", &car_arr[i].price);
		printf("Mileage: "); scanf("%d", &car_arr[i].mileage);
	}
	
	available_cars(car_arr, num);
}
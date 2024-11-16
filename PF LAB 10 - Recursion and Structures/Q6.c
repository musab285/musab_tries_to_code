//Design a structure to store information about travel packages, including package name,
//destination, duration, cost, and number of seats available. Write a program that allows
//users to book a travel package and display available packages.
#include <stdio.h>
#include <string.h>

#define MAX_PACKAGES 5

typedef struct {
    char packageName[50];
    char destination[50];
    int duration; // in days
    float cost;
    int seatsAvailable;
} TravelPackage;

void displayPackages(TravelPackage packages[], int count) {
    printf("\nAvailable Travel Packages:\n");
    for (int i = 0; i < count; i++) {
        printf("Package %d:\n", i + 1);
        printf("  Name: %s\n", packages[i].packageName);
        printf("  Destination: %s\n", packages[i].destination);
        printf("  Duration: %d days\n", packages[i].duration);
        printf("  Cost: $%.2f\n", packages[i].cost);
        printf("  Seats Available: %d\n\n", packages[i].seatsAvailable);
    }
}

void bookPackage(TravelPackage packages[], int count) {
    int choice;
    printf("\nEnter the package number you want to book: ");
    scanf("%d", &choice);

    if (choice < 1 || choice > count) {
        printf("Invalid package number.\n");
        return;
    }

    int index = choice - 1;
    if (packages[index].seatsAvailable > 0) {
        packages[index].seatsAvailable--;
        printf("Booking successful! You have booked '%s'.\n", packages[index].packageName);
    } else {
        printf("Sorry, no seats are available for this package.\n");
    }
}

int main() {
    TravelPackage packages[MAX_PACKAGES] = {
        {"Beach Paradise", "Maldives", 7, 1500.00, 10},
        {"Mountain Adventure", "Nepal", 10, 1200.00, 5},
        {"City Lights", "New York", 5, 800.00, 20},
        {"Cultural Tour", "Italy", 14, 2000.00, 3},
        {"Safari Experience", "Kenya", 7, 1800.00, 8}
    };

    int choice;

    while (1) {
        printf("\nTravel Package Booking System\n");
        printf("1. Display Available Packages\n");
        printf("2. Book a Package\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                displayPackages(packages, MAX_PACKAGES);
                break;
            case 2:
                bookPackage(packages, MAX_PACKAGES);
                break;
            case 3:
                printf("Exiting program. Have a great day!\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}

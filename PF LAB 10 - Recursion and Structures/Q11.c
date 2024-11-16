#include <stdio.h>
#include <string.h>

#define MAX_FLIGHTS 5
struct Flight {
    int flightNumber;
    char departureCity[50];
    char destinationCity[50];
    char date[20];
    int availableSeats;
};

void displayFlightDetails(struct Flight flight) {
    printf("Flight Number: %d\n", flight.flightNumber);
    printf("Departure City: %s\n", flight.departureCity);
    printf("Destination City: %s\n", flight.destinationCity);
    printf("Date: %s\n", flight.date);
    printf("Available Seats: %d\n", flight.availableSeats);
}

void bookSeat(struct Flight *flight) {
    if (flight->availableSeats > 0) {
        flight->availableSeats--;
        printf("Seat booked successfully. Remaining seats: %d\n", flight->availableSeats);
    } else {
        printf("No seats available on this flight.\n");
    }
}

int main() {
    struct Flight flights[MAX_FLIGHTS] = {
        {101, "Karachi", "Islamabad", "2024-11-20", 50},
        {102, "Quetta", "Lahore", "2024-11-21", 20},
        {103, "Sialkot", "Lahore", "2024-11-22", 0},
        {104, "Islamabad", "Multan", "2024-11-23", 15},
        {105, "Karachi", "Lahore", "2024-11-24", 10}
    };

    int choice, flightNumber, i;
    struct Flight *selectedFlight = NULL;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Display Flight Details\n");
        printf("2. Book a Seat\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                for (i = 0; i < MAX_FLIGHTS; i++) {
                    printf("\nFlight %d\n", i + 1);
                    displayFlightDetails(flights[i]);
                }
                break;

            case 2:
                printf("Enter flight number to book a seat: ");
                scanf("%d", &flightNumber);

                selectedFlight = NULL;
                for (i = 0; i < MAX_FLIGHTS; i++) {
                    if (flights[i].flightNumber == flightNumber) {
                        selectedFlight = &flights[i];
                        break;
                    }
                }

                if (selectedFlight) {
                    bookSeat(selectedFlight);
                } else {
                    printf("Flight not found.\n");
                }
                break;

            case 3:
                printf("Exiting the program.\n");
                return 0;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

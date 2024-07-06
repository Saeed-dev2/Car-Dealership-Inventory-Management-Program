#include <stdio.h>
#include <string.h>

struct Car {
    char make[50];
    char model[50];
    int year;
    float price;
};

void fillCar(struct Car *car, const char *make, const char *model, int year, float price) {
    strcpy(car->make, make);
    strcpy(car->model, model);
    car->year = year;
    car->price = price;
}

void displayCarDetails(struct Car car, int carNumber) {
    printf("%-5d%-20s%-20s%-10d$%.2f\n", carNumber, car.make, car.model, car.year, car.price);
}

int main() {
    struct Car cars[10];

    fillCar(&cars[0], "Toyota", "Camry", 2020, 24000.50);
    fillCar(&cars[1], "Honda", "Civic", 2019, 22000.00);
    fillCar(&cars[2], "Ford", "Mustang", 2021, 30000.00);
    fillCar(&cars[3], "Chevrolet", "Malibu", 2018, 18000.75);
    fillCar(&cars[4], "Nissan", "Altima", 2022, 25000.00);
    fillCar(&cars[5], "BMW", "3 Series", 2020, 40000.00);
    fillCar(&cars[6], "Audi", "A4", 2021, 42000.50);
    fillCar(&cars[7], "Mercedes-Benz", "C-Class", 2019, 45000.00);
    fillCar(&cars[8], "Hyundai", "Elantra", 2020, 20000.00);
    fillCar(&cars[9], "Kia", "Optima", 2021, 23000.00);

    int choice;
    char continueChoice;

    do {
        printf("\nSelect a car by entering the corresponding number:\n");
        printf("---------------------------------------------------------\n");
        printf("No.  Make                Model               Year    Price\n");
        printf("---------------------------------------------------------\n");
        for (int i = 0; i < 10; i++) {
            displayCarDetails(cars[i], i + 1);
        }
        printf("---------------------------------------------------------\n");

        printf("Enter the number of the car you want to see details of: ");
        while (scanf("%d", &choice) != 1 || choice < 1 || choice > 10) {
            printf("Invalid choice! Please enter a number between 1 and 10: ");
            while (getchar() != '\n'); // Clear input buffer
        }

        printf("\nDetails of Car %d:\n", choice);
        printf("---------------------------------------------------------\n");
        printf("Make: %s\n", cars[choice - 1].make);
        printf("Model: %s\n", cars[choice - 1].model);
        printf("Year: %d\n", cars[choice - 1].year);
        printf("Price: $%.2f\n", cars[choice - 1].price);
        printf("---------------------------------------------------------\n");

        printf("Do you want to see details of another car? (y/n): ");
        while (scanf(" %c", &continueChoice) != 1 || (continueChoice != 'y' && continueChoice != 'n' && continueChoice != 'Y' && continueChoice != 'N')) {
            printf("Invalid input! Please enter 'y' or 'n': ");
            while (getchar() != '\n'); // Clear input buffer
        }

    } while (continueChoice == 'y' || continueChoice == 'Y');

    return 0;
}

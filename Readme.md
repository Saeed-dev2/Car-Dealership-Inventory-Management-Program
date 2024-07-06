# Car Dealership Inventory Management Program

## Overview
This program manages a small inventory of cars at a dealership. It allows the user to view details of various cars in the inventory by selecting from a list of available cars. The program is written in C and uses a structured approach to manage the car data.

## Features
Stores details of 10 cars including `make, model, year, and price`.
Allows the user to view details of each car by selecting from a numbered list.
Continues to prompt the user until they choose to exit.
## Code Discreption
### Files

`main.c`: Contains the main code for the program.

### Data Structures
`struct Car`

The Car structure stores information about a car, including its make, model, year, and price.
```
struct Car {
    char make[50];
    char model[50];
    int year;
    float price;
};
```
## Functions
`void fillCar(struct Car *car, const char *make, const char *model, int year, float price)`

Fills in the details of a `Car` structure.

### Parameters:
- `car`: A pointer to the Car structure to fill.

- `make`: A string representing the make of the car.

- `model`: A string representing the model of the car.

- `year`: An integer representing the year of the car.

- `price`: A float representing the price of the car.

`void displayCarDetails(struct Car car, int carNumber)`

## Displays the details of a car in a formatted manner.
- ### parameters
- `car`: The Car structure to display.

- `carNumber`: An integer representing the position of the car in the list.

## Usage
- Compile the program using a C compiler :

```
gcc main.c -o car_inventory
```

- Run the program :
```
./car_inventory
```
- Follow the prompts to view the details of the cars. Enter the number corresponding to the car you wish to view when prompted.

- After viewing the details of a car, you can choose to view another car or exit the program by entering 'y' (yes) or 'n' (no) when prompted.

## Example Output
Select a car by entering the corresponding number:

No.   | Make        | Model           | Year         | Price         | 
:---  | :---        |    :----:       |     ---:     |    ---:       |
1     | Toyota       |      Camry     |   2020       |  $24000.50
2     |Honda         |      Civic     |    2019      |   $22000.00
3    | Ford          |      Mustang   |    2021      |   $30000.00
4    | Chevrolet     |      Malibu    |    2018      |    $18000.75
5    | Nissan        |      Altima    |    2022      |    $25000.00
6    | BMW           |      3 Series  |    2020      |    $40000.00
7    | Audi          |      A4        |    2021      |    $42000.50
8    | Mercedes-Benz |      C-Class   |    2019      |    $45000.00
9    | Hyundai       |      Elantra   |    2020      |    $20000.00
10   | Kia           |      Optima    |     2021     |    $23000.00
--------------------------------------------------------- 

Enter the number of the car you want to see details of:   3

### Details of Car 3:
---------------------------------------------------------
Make:  Ford

Model: Mustang

Year: 2021

Price: $30000.00

---------------------------------------------------------

Do you want to see details of another car? (y/n): n

## Author

This code was written by `M.Saeed`.





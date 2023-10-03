#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[])
{
    if (argc != 6)
    {
        printf("Invalid input. Format: ./exec_file <miles> <mpg> <bridge_fee> <gas_price> <people>\nWhere:\n");
        printf("\t<miles>: how far you/they have driven\n");
        printf("\t<mpg>: the car's fuel efficiency value, in miles per gallon\n");
        printf("\t<bridge_fee>: bridge's fee or toll paid\n");
        printf("\t<gas_price>: current gas price\n");
        printf("\t<people>: how many people were in the car\n");
    }
    else
    {
        double miles_driven = atof(argv[1]); // Ex: 77
        double car_mpg = atof(argv[2]);      // Ex: 22 mpg on freeway for Highlander, ES350
        double gallon_consumed = miles_driven / car_mpg;

        double bridge_fee = atof(argv[3]); // US dollars
        double gas_price = atof(argv[4]);  // US dollars per gallon
        double cost = gallon_consumed * gas_price + bridge_fee;

        printf("Trip info: miles driven = %.2f, MPG = %.2f, bridge's fee = %.2f\n", miles_driven, car_mpg, bridge_fee);
        printf("Estimated gas price: %.2f\n", gas_price);
        printf("Total cost: $%.2f\n", cost);

        int people = atoi(argv[5]);
        printf("Number of people: %d\nTrip's cost per person: $%.2f\n", people, cost / people);
    }
}
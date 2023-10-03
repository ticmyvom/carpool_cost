#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[])
{
    if (argc != 6)
    {
        printf("Invalid input. Format: ./exec_file <miles> <mpg> <bridge_fee> <gas_price> <people>\nFormat:\n");
        printf("\t<miles>: how far you have driven\n");
        printf("\t<mpg>: the car's MPG value\n");
        printf("\t<bridge_fee>: whether there is a bridge fee (1 for true, 0 for false)\n");
        printf("\t<gas_price>: current gas price\n");
        printf("\t<people>: how many people were in the car\n");
    }
    else
    {
        double miles_driven = atof(argv[1]); // Ex: 100
        double car_mpg = atof(argv[2]);      // Ex: 22 mpg on freeway for Highlander, ES350
        double gallon_consumed = miles_driven / car_mpg;

        // There's bridge's fee only when driving up from Martinez to Benicia
        bool up = atoi(argv[3]);
        double bridge_fee = 0; // US dollars
        if (up)
        {
            bridge_fee = 7; // Hard-coded for now
        }

        double gas_price = atof(argv[4]); // US dollars per gallon
        double cost = gallon_consumed * gas_price + bridge_fee;

        printf("Trip info: miles_driven = %.2f, MPG = %.2f, bridge_fee = %.2f\n", miles_driven, car_mpg, bridge_fee);
        printf("Estimated gas price: %.2f\n", gas_price);
        printf("Total cost: $%.2f\n", cost);

        int people = atoi(argv[5]); // how many people were in the vehicle
        printf("Number of people in the vehicle: %d\nTrip cost per person: $%.2f\n", people, cost / people);
    }
}
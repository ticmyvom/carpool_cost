#include <stdio.h>
#include <stdbool.h>

int main()
{
    double miles_driven = 100;
    double car_mpg = 22; // Highlander, ES350
    double gallon_consumed = miles_driven / car_mpg;

    // There's bridge's fee only when driving up from SJ to Davis
    bool up = true;
    double bridge_fee = 0; // US dollars
    if (up)
    {
        bridge_fee = 7;
    }
    else
    {
        bridge_fee = 0;
    }

    double gas_price = 5.2; // US dollars per gallon
    double cost = gallon_consumed * gas_price + bridge_fee;
    printf("Trip info: miles_driven = %.2f, MPG = %.2f, bridge_fee = %.2f\n", miles_driven, car_mpg, bridge_fee);
    printf("Estimated gas price: %.2f\n", gas_price);
    printf("Total cost: $%.2f\n", cost);

    int people = 2; // how many people were in the vehicle
    printf("Trip cost per person: $%.2f\n", cost / people);
}
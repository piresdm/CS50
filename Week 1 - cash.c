#include <stdio.h>
#include <cs50.h>
#include <math.h>

// This is a program to print the minimum number of coins necessary to give the costumer's change.

int main(void)
{

    float change;

//Loop to check if the number is positive
    do
    {
        change = get_float("Type the change owed: ");
    }
    while (change < 0);

// Variables

    int cents = round(change * 100);
    int rest = cents;
    int quarters;
    int dimes;
    int nickels;
    int pennies;

// Loop to define how many quarter coins can be used

    for (quarters = 0; rest >= 25; quarters++)
    {
        rest = rest - 25;
    }

// Loop to define how many dime coins can be used

    for (dimes = 0; rest >= 10; dimes++)
    {
        rest = rest - 10;
    }

// Loop to define how many nickel coins can be used

    for (nickels = 0; rest >= 5; nickels++)
    {
        rest = rest - 5;
    }

// Loop to define how many penny coins can be used

    for (pennies = 0; rest >= 1; pennies++)
    {
        rest = rest - 1;
    }

    int coins = quarters + dimes + nickels + pennies;
    printf("The minimum number of coins to give the change is %i\n", coins);
}
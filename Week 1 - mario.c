#include <stdio.h>
#include <cs50.h>

//This is a program to bulid a pyramid to mario's game.

int main(void)
{

    int num;

    do
    {
        num = get_int("Type a positive number until 8 to be the height of the pyramid: ");
    }
    while (num < 1 || num > 8);

    for (int i = 0; i < num; i++)
    {

// Loop to print out the spaces

        for (int spaces = 0; spaces < num - i - 1; spaces++)

        {

            printf(" ");

        }

// Loop to print out hashes

        for (int hash = 0; hash <= i; hash++)

        {

            printf("#");

        }

        printf("\n");

    }
}
#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)

{
    // prompting user for change

    float dollars;
    do
    {
        dollars = get_float("Change: ");
    }
    while (dollars < 0);

    // converting dollars to cents

    int cents = round(100 * dollars);

    // keeping track of coins

    int coins = 0;

    while (cents >= 25)
    {
      cents = cents - 25;
      coins = coins + 1;
    }
    while (cents >= 10)
    {
        cents = cents - 10;
        coins = coins + 1;
    }
    while (cents >= 5)
    {
        cents = cents - 5;
        coins = coins + 1;
    }
    while (cents >= 1)
    {
        cents = cents - 1;
        coins = coins + 1;
    }

    // printing out minimum no. of coins
    printf("%i\n", coins);
}
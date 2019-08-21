#include <stdio.h>
#include <cs50.h>
#define AMEX 10000000000000
#define MASCARD 100000000000000
#define VISA1 1000000000000000
#define VISA2 1000000000000

int main() {

    int i, r, q, sum1 = 0, sum2 = 0, check;
    long long int dup, card_num = get_long_long("Credit card number? ");

    dup = card_num;


    for(; dup > 0; dup = dup / 100)
    {
        i = dup % 100;

        if (i > 9)
        i = i / 10;
        else
        i = 0;

        i = i * 2;

        if(i > 9) {

            r = i % 10;                        // r = remainder
            q = i / 10;                        // q = quotient

            i = r + q;
        }

        sum1 = sum1 + i;
    }

    dup = card_num;

    for (; dup > 0; dup = dup / 100)
    {
        i = dup % 10;
        sum2 = sum2 + i;
    }

    check = sum2 + sum1;

    if(check % 10 == 0) {

        if(card_num / AMEX == 34 || card_num / AMEX == 37)
        printf("AMEX\n");

        else if(card_num / VISA1 == 4 || card_num / VISA2 == 4)
        printf("VISA\n");

        else {
            switch(card_num / MASCARD)
        {
            case 51: printf("MASTERCARD\n"); break;
            case 52: printf("MASTERCARD\n"); break;
            case 53: printf("MASTERCARD\n"); break;
            case 54: printf("MASTERCARD\n"); break;
            case 55: printf("MASTERCARD\n"); break;
            default: printf("INVALID\n"); break;
        }
        }
    }

    else printf("INVALID\n");

    return 0;

}
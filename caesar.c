#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])  // Getting the key,k from user
{
    int k;

    // Making sure argc = 2 else terminating the program
    if (argc != 2)
    {
        printf("Usage: ./caesar k\n");
        return 1;
    }

    else
    {
        // Converting data in k from string type to int type
        k = atoi(argv[1]);                                          // k = key

        // Prompting for plaintext
        string p = get_string("plaintext: ");                       // p = plaintext
        printf("ciphertext: ");

        // Iterating over each character of the string that is input
        for (int i = 0, l = strlen(p); i < l; i++)
        {
            if (isalpha(p[i]))
            {
                if (isupper(p[i]))
                {
                    int AI = p[i] - 65;         // AI = Alphabetical Index  // Converting ASCII values to AI
                    int m = (AI + k) % 26;      // caesar equation
                    int c = m + 65;             // c = ciphertext   // Converting encrypted text from AI to ASCII
                    printf("%c", c);
                }
                else if (islower(p[i]))
                {
                    int AI = p[i] - 97;
                    int m = (AI + k) % 26;      // caesar equation
                    int c = m + 97;
                    printf("%c", c);
                }

            }
            else
            {
                printf("%c", p[i]);
            }

        }

        printf("\n");

    }
    return 0;
}
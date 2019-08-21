// Vigenere encryption


#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main (int argc, string argv[])
{
    if (argc == 2)                                         // Checking whether correct number of arguments are passed.
    {
        string k = argv[1];
        int l = strlen(k);


        for (int i = 0; i < l; i++)                       // Checking whether the provided key is valid.
        {
            if (!isalpha(k[i]))
            {
                printf("Invalid key\nTry again\n");
                return 1;
            }
        }

        string p = get_string("plaintext: ");
        printf("ciphertext: ");
        
        int j = 0, m = 0;                                              // j = index of key

        for (int i = 0, lp = strlen(p); i < lp; i++)                   // Process of encryption begins here
        {
            if(isalpha(p[i]))
            {
               j = m % l;
               m++;
                    if (isupper(p[i]))
                    {
                        if (isupper(k[j]))
                        {
                            printf("%c", (((p[i] - 65) + (k[j] - 65)) % 26) + 65);
                        }
                        else if (islower(k[j]))
                        {
                            printf("%c", (((p[i] - 65) + (k[j] - 97)) % 26) + 65);
                        }
                    }
                    else if (islower(p[i]))
                    {
                        if (isupper(k[j]))
                        {
                            printf("%c", (((p[i] - 97) + (k[j] - 65)) % 26) + 97);
                        }
                        else if (islower(k[j]))
                        {
                            printf("%c", (((p[i] - 97) + (k[j] - 97)) % 26) + 97);
                        }
                    }
            }
            else
            {
                printf("%c", p[i]);
            }
        }

    }

    else                                              
    {
        printf("Error :( \n");
        return 1;
    }
    printf("\n");
}
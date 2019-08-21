#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;

    do
    {
        n = get_int("height= ");
    }
    while (n>23 || n<0);

  for (int i=0; i<n; i++)
  {
      // to print required spaces
      for (int j=0; j<n-i-1; j++)
      {
          printf(" ");
      }

    // to print hashes
    for (int k=0; k < i+2; k++)
    {
        printf("#");
    }

    // to print new line
        printf("\n");
 }

}
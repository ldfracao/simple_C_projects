// a simple password generator

#include <stdio.h>
#include <string.h>
#include <inttypes.h>
#include <stdlib.h>
#include <time.h>

int main (int argc, char *argv[])
{
    char *endp = NULL;
    int key = 0;
    int random_number = 0;

    if(argv[1] == NULL)
    {
        printf("Usage: rpgen x where x how many characters long you want your password to be. (between 8 and 16)\n");
        return 1;
    }
    else
    {
        key = strtoimax(argv[1], &endp, 10);
        srand(time(NULL));
        if (argc != 2)
        {
            printf("Usage: rpgen x where x how many characters long you want your password to be. (between 8 and 16)\n");
            return 1;
        }
        else if (key < 8 || key > 16)
        {
            printf("Please enter a number between 8 and 16\n");
            return 1;
        }
        else
        {
            for (int i = 0; i < key; i++)
            {
                // generates a random number between 33 and 126
                random_number = (rand() % (126 - 33 + 1)) + 33;
                printf("%c", random_number);
            }
        }
    }
    return 0;
}
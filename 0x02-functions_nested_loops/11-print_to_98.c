#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: The number to start printing from
 */

void print_to_98(int n)
{
    if (n <= 98)
    {
        while (n <= 98)
        {
            if (n == 98)
            {
                printf("%d\n", n);
                break;
            }
            else
            {
                printf("%d, ", n);
                n++;
            }
        }
    }
    else
    {
        while (n >= 98)
        {
            if (n == 98)
            {
                printf("%d\n", n);
                break;
            }
            else
            {
                printf("%d, ", n);
                n--;
            }
        }
    }
}

int main(void)
{
    int start_number = 10; // Replace with the desired starting number
    print_to_98(start_number);
    return (0);
}

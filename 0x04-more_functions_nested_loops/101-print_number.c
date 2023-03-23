#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
    int i = 1, j, k;

    if (n < 0) { // Handle negative numbers
        _putchar('-');
        n = -n;
    }

    j = n;
    while (j > 9) { // Determine divisor for the largest power of 10
        i *= 10;
        j /= 10;
    }

    while (i >= 1) { // Print each digit
        k = n / i;
        _putchar(k + '0');
        n -= k * i;
        i /= 10;
    }
}

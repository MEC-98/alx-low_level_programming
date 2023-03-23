#include <stdio.h>
#include "math.h"

int main(void)
{
    long n = 612852475143;
    long i;

    while (n % 2 == 0) { // Check for 2 as a factor
        n /= 2;
        i = 2;
    }

    for (i = 3; i <= sqrt(n); i += 2) { // Check for odd prime factors
        while (n % i == 0) {
            n /= i;
        }
    }

    if (n > 2) { // The largest factor is greater than the square root of n
        printf("%ld\n", n);
    } else { // The largest factor is the last prime factor we found
        printf("%ld\n", i-2);
    }

    return 0;
}

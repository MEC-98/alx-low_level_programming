#include <stdio.h>

int main() {
    int *array;
    unsigned int size = 100;

    array = (int *) malloc_checked(size * sizeof(int));

    // use the allocated memory here

    free(array); // remember to free the memory when you're done with it
    return 0;
}

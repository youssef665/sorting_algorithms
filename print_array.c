#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - Prints an array
 *
 * @array: The array to be printed
 * @size: Number of elements
 */

void print_array(const int *array, size_t size)
{
    size_t j;

    j = 0;
    while (array && j < size)
    {
        if (j > 0)
            printf(", ");
        printf("%d", array[j]);
        ++j;
    }

    printf("\n");
}

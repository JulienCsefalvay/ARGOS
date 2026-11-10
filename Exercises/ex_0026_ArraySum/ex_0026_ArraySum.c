// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0026_ArraySum.h"

// Function definitions
// TODO: implement ex_0026_ArraySum

void ex_0026_ArraySum(void)
{
    int size_array = 0;
    int status = 0;
    int array_sum = 0;

    do
    {

        printf("Nb values (max.50): ");
        status = scanf(" %d", &size_array);

        int empty_buffer = 0;
        do
        {
            empty_buffer = getchar();
        } while (empty_buffer != '\n' && empty_buffer != EOF);

        if (size_array < 0 || size_array > 50)
        {
            status = 0;
        }

    } while (status != 1 && status != EOF);

    int array[size_array];

    for (int i = 0; i < size_array; ++i)
    {

        status = 0;

        do
        {

            printf("Value %d? ", i);
            status = scanf(" %d", &array[i]);

            int empty_buffer = 0;
            do
            {
                empty_buffer = getchar();
            } while (empty_buffer != '\n' && empty_buffer != EOF);

        } while (status != 1 && status != EOF);
    }

    printf("array:\n");

    for (int i = 0; i < size_array; ++i)
    {
        printf("%d", array[i]);
        if (i != size_array - 1)
        {
            printf(" ");
        }
        array_sum += array[i];
    }

    printf("\nTotal sum: %d\n", array_sum);
}

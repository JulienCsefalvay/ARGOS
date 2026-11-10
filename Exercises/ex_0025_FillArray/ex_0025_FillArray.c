// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0025_FillArray.h"

// Function definitions
// TODO: implement ex_0025_FillArray

int ex_0025_FillArray(int array[], int max_capacity)
{
    int count = 0;

    if (max_capacity <= 0)
    {
        return 0;
    }
    else
    {
        for (; count < max_capacity; ++count)
        {
            int status = 0;
            int add_to_array = 0;

            do
            {
                status = scanf(" %d", &add_to_array);

                int empty_buffer = 0;
                do
                {
                    empty_buffer = getchar();
                } while (empty_buffer != '\n' && empty_buffer != EOF);

            } while (status != 1 && status != EOF);

            if (add_to_array < 0 || status == EOF)
            {
                return count;
            }
            else
            {
                array[count] = add_to_array;
            }
        }
        return count;
    }
}
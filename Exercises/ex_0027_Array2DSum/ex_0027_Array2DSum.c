// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0027_Array2DSum.h"

// Function definitions
// TODO: implement ex_0027_Array2DSum

void ex_0027_Array2DSum(void)
{
    int status = 0;
    int lines = 0;
    int columns = 0;
    int sum = 0;

    do
    {
        printf("Nb lines (max.50): ");
        status = scanf(" %d", &lines);
        int c = 0;
        do
        {
            c = getchar();
        } while (c != '\n' && c != EOF);
        if (lines < 0 || lines > 50)
        {
            status = 0;
        }
    } while (status != 1 && status != EOF);

    status = 0;
    do
    {
        printf("Nb columns (max.50): ");
        status = scanf(" %d", &columns);
        int c = 0;
        do
        {
            c = getchar();
        } while (c != '\n' && c != EOF);
        if (columns < 0 || columns > 50)
        {
            status = 0;
        }
    } while (status != 1 && status != EOF);

    int array[lines][columns];

    for (int i = 0; i < lines; ++i)
    {
        for (int j = 0; j < columns; ++j)
        {
            status = 0;
            do
            {
                printf("array[%d][%d]: ", i, j);
                status = scanf("%d", &array[i][j]);
                int c = 0;
                do
                {
                    c = getchar();
                } while (c != '\n' && c != EOF);
            } while (status != 1 && status != EOF);
        }
    }

    for (int i = 0; i < lines; ++i)
    {
        for (int j = 0; j < columns; ++j)
        {
            sum += array[i][j];
        }
    }
    printf("Total sum: %d\n", sum);
}
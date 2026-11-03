// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0012_DecreasingOutput.h"

// Function definitions
void ex_0012_DecreasingOutput(void)
{
  // TODO: read 3 integers separated by commas, then print them in decreasing order

  int integer_1 = 5;
  int integer_2 = 5;
  int integer_3 = 5;
  int integer_memory = 0;
  int scan_check = 0;

  do
  {
    printf("Please enter 3 integers separated by commas: ");
    scan_check = scanf("%d,%d,%d", &integer_1, &integer_2, &integer_3);

    int c = 0;
    do
    {
      c = getchar();
    } while (c != '\n' && c != EOF);
  } while (scan_check != 3 && scan_check != EOF);

  if (integer_1 > integer_3)
  {
    integer_memory = integer_1;
    integer_1 = integer_3;
    integer_3 = integer_memory;
  }

  if (integer_2 > integer_3)
  {
    integer_memory = integer_2;
    integer_2 = integer_3;
    integer_3 = integer_memory;
  }

  if (integer_1 > integer_2)
  {
    integer_memory = integer_2;
    integer_2 = integer_1;
    integer_1 = integer_memory;
  }

  printf("The 3 integers sorted in decreasing order: %d, %d, %d\n", integer_3, integer_2, integer_1);
}

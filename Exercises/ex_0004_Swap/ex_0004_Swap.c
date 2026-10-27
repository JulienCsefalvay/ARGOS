// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0004_Swap.h"

// Function definitions
void ex_0004_Swap(void)
{
  int variable1 = 10;
  int variable2 = 5;

  // Before the swap
  printf("Variable 1: %d\n", variable1); // Variable 1: 10
  printf("Variable 2: %d\n", variable2); // Variable 2: 5

  int swap_memory = 0;
  
  swap_memory = variable1;
  variable1 = variable2;
  variable2 = swap_memory;

  // After the swap
  printf("Variable 1: %d\n", variable1); // Variable 1: 5
  printf("Variable 2: %d\n", variable2); // Variable 2: 10
}

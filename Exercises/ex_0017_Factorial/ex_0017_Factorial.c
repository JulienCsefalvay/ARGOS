// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0017_Factorial.h"

// Function definitions
void ex_0017_Factorial(void)
{
  // Use the following message
  // print with printf("%s", input_message);
  const char *input_message = "Please enter a non-negative integer N: ";

  // TODO: read a non-negative integer N, then compute and print N!

  int status = 0;
  unsigned long long factorial = 1;
  int positiv_integer = 0;

  do
  {
    printf(input_message);
    status = scanf("%d", &positiv_integer);
    int empty_buffer = 0;
    do
    {
      empty_buffer = getchar();
    } while (empty_buffer != '\n' && empty_buffer != EOF);
    if (positiv_integer < 0)
    {
      status = 0;
    }
  } while (status != 1 && status != EOF);
  for (int i = 0; i < positiv_integer; ++i)
  {
    factorial *= (unsigned long long)i + 1;
  }
  printf("%d! = %llu\n", positiv_integer, factorial);
}

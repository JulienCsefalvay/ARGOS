// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0016_SumProductMean.h"

// Function definitions
void ex_0016_SumProductMean(void)
{
  // Use the following messages
  // print with printf("%s", input_message);
  const char *input_message = "Number of values to read: ";
  // print with printf(value_message, i); where i is the value number, starting at 1
  const char *value_message = "%d. number: ";

  // TODO: read N (between 1 and 15), then N integers, and print their sum, product and mean

  int status = 0;
  int loop_size = 0;
  int total_sum = 0;
  int total_product = 1;
  double mean = 0.;

  do
  {

    printf("%s", input_message);
    status = scanf(" %d", &loop_size);

    int empty_buffer = 0;
    do
    {
      empty_buffer = getchar();
    } while (empty_buffer != '\n' && empty_buffer != EOF);

    if (loop_size < 1 || loop_size > 15)
    {
      status = 0;
    }

  } while (status != 1 && status != EOF);

  for (int i = 0; i < loop_size; ++i)
  {

    int num = 0;

    do
    {

      printf(value_message, i + 1);
      status = scanf("%d", &num);

      int empty_buffer = 0;
      do
      {
        empty_buffer = getchar();
      } while (empty_buffer != '\n' && empty_buffer != EOF);

    } while (status != 1 && status != EOF);

    total_product = total_product * num;
    total_sum = total_sum + num;
  }

  mean = (double)total_sum / loop_size;

  printf("Sum = %d\nProduct = %d\nMean = %.4lf\n", total_sum, total_product, mean);
}

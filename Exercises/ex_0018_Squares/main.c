// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0018_Squares.h"

int main(void)
{
  int status = 0;
  int value = 0;

  do
  {
    printf("enter a value : ");
    status = scanf("%d", &value);
    int empty_buffer = 0;
    do
    {
      empty_buffer = getchar();
    } while (empty_buffer != '\n' && empty_buffer != EOF);
  } while (status != 1 && status != EOF);

  bool squares_var = ex_0018_Squares(value);
  int square_var = ex_0018_Square(value);
  printf("\n%d %d\n", squares_var, square_var);
  return 0;
}

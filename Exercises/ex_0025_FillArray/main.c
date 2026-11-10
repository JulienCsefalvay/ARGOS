// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0025_FillArray.h"

int main(void)
{

  int array[] = {-2, -2, -2, -2};

  int test = ex_0025_FillArray(array, 4);

  printf("value test : %d\n", test);

  return 0;
}

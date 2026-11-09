// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0022_Invert.h"

int main(void)
{
  int i = 0;
  scanf(" %d", &i);

  int val = ex_0022_Invert(i);

  printf("%d, %d\n", i, val);

  return 0;
}

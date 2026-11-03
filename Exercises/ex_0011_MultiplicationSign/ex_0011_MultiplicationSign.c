// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0011_MultiplicationSign.h"

// Function definitions
void ex_0011_MultiplicationSign(void)
{
  // TODO: read 2 integers, then print the sign of their product without computing it

  int a = 0;
  int b = 0;

  while (true)
  {
    int scan_check = 0;

    printf("Please enter 2 integers: ");
    scan_check = scanf("%d %d", &a, &b);

    int c = 0;
    do
    {
      c = getchar();
    } while (c != '\n' && c != EOF);

    if (scan_check == 2)
    {
      break;
    }
  }

  if ((a < 0 && b < 0) || (a > 0 && b > 0))
  {
    printf("%d * %d > 0\n", a, b);
  }
  else if ((a > 0 && b < 0) || (a < 0 && b > 0))
  {
    printf("%d * %d < 0\n", a, b);
  }
  else
  {
    printf("%d * %d = 0\n", a, b);
  }
}

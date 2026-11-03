// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0008_ScanfPrintf.h"

// Function definitions
void ex_0008_ScanfPrintf(void)
{
  // TODO: read 3 letters with scanf, then print their ASCII codes

  char letter_1 = 'a';
  char letter_2 = 'b';
  char letter_3 = 'c';

  printf("\n\nPlease enter 3 letters:\n");
  scanf("%c %c %c", &letter_1, &letter_2, &letter_3);

  int c;
    do
    {
      c = getchar();
    } while (c != '\n' && c != EOF);

  printf("\nHere are the corresponding ASCII codes:\n%c--------->%d\n%c--------->%d\n%c--------->%d\n", letter_1, letter_1, letter_2, letter_2, letter_3, letter_3);
}

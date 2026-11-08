// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0015_DaysInMonth.h"

// Function definitions
void ex_0015_DaysInMonth(void)
{
  // Use the following message
  // print with printf("%s", input_message);
  const char *input_message = "Please enter the number of the month (january=1, ... , december=12): ";

  // TODO: read a month number between 1 and 12, then print its number of days

  int month = 0;
  int days = 0;
  int status = 0;

  do
  {
    printf("%s", input_message);
    status = scanf(" %d", &month);

    int empty_buffer = 0;
    do
    {
      empty_buffer = getchar();
    } while (empty_buffer != '\n' && empty_buffer != EOF);

    if (month > 12 || month < 1)
    {
      status = 0;
    }
  } while (status != 1 && status != EOF);

  if (month == 2)
  {
    days = 28;
  }
  else if (month == 4 || month == 6 || month == 9 || month == 11)
  {
    days = 30;
  }
  else
  {
    days = 31;
  }
  printf("Month %d has %d days.\n", month, days);
}

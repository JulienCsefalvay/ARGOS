// Author: HE-Arc

// Standard includes
#include <stdio.h>
#include <stdbool.h> // for bool, true, false

// Local includes
#include "ex_0014_CurrencyConverter.h"

// Function definitions
void ex_0014_CurrencyConverter(void)
{
  // Use the following messages
  // print with printf("%s", input_message);
  const char *input_message = "USAGE: non-negative value [W | $ | Y | P]\n"
                              "Won = W  Dollar = $  Yen = Y  Pound = P\n"
                              "Please enter the amount to convert: ";
  // print with printf("%s", error_message);
  const char *error_message = "The input format is not correct!!\n";
  // print with printf("%s", unsupported_currency_message);
  const char *unsupported_currency_message = "Unsupported currency!!\n";
  // print with printf("%s", negative_amount_message);
  const char *negative_amount_message = "The input amount is negative!!\n";

  // TODO: read an amount and a currency, validate them, then convert to Swiss francs

  const double WON2CHF = 0.00070;
  const double USD2CHF = 0.99;
  const double YEN2CHF = 0.0067;
  const double POUND2CHF = 1.13;

  char currency = 0;
  int status = 0;
  double amount = 0.;

  do
  {

    printf("%s", input_message);
    status = scanf(" %lg %c", &amount, &currency); // To store in a double

    int empty_buffer = 0;
    do
    {
      empty_buffer = getchar();
    } while (empty_buffer != '\n' && empty_buffer != EOF);

    if (status == 2)
    {
      if (currency != 'W' && currency != '$' && currency != 'Y' && currency != 'P')
      {
        printf("%s", unsupported_currency_message);
        status = 0;
      }
      if (amount < 0)
      {
        printf("%s", negative_amount_message);
        status = 0;
      }
    }
    else
    {
      printf("%s", error_message);
    }

  } while (status != 2 && status != EOF);

  switch (currency)
  {
  case 'W':
    printf("Swiss francs: %.3lf\n", amount * WON2CHF);
    break;
  case '$':
    printf("Swiss francs: %.3lf\n", amount * USD2CHF);
    break;
  case 'Y':
    printf("Swiss francs: %.3lf\n", amount * YEN2CHF);
    break;
  case 'P':
    printf("Swiss francs: %.3lf\n", amount * POUND2CHF);
    break;
  }
}

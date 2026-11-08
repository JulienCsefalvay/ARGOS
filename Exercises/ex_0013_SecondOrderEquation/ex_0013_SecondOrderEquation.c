// Author: HE-Arc

// Standard includes
#include <stdio.h>
#include <math.h>

// Local includes
#include "ex_0013_SecondOrderEquation.h"

// Function definitions
void ex_0013_SecondOrderEquation(void)
{
  // Use the following messages
  // print with printf("%s", usage_message);
  const char *usage_message = "Compute solutions of an equation of the form ax^2 + bx + c = 0\n";
  // print with printf("%s", input_message);
  const char *input_message = "Please enter coefficients a, b, and c: ";
  // print with printf("%s", no_solution_message);
  const char *no_solution_message = "This equation has no solution.\n";
  // print with printf("%s", no_real_solution_message);
  const char *no_real_solution_message = "This equation has no real solution.\n";
  // print with printf("%s", linear_solution_message);
  const char *linear_solution_message = "The solution of this linear equation is: \n";
  // print with printf("%s", double_real_solution_message);
  const char *double_real_solution_message = "The double real solution of this equation is: \n";
  // print with printf("%s", two_real_solutions_message);
  const char *two_real_solutions_message = "The real solutions of this equation are: \n";
  // print with printf("%s", any_real_solution_message);
  const char *any_real_solution_message = "Any real is solution of this equation.\n";

  // TODO: read coefficients a, b and c, then print the real solutions of the equation

  double a = 0.;
  double b = 0.;
  double c = 0.;
  int status = 0;

  do{
    printf("%s%s", usage_message, input_message);
    status = scanf(" %lf %lf %lf", &a, &b, &c);

    int x = 0;
    do{
      x = getchar();
    }while(x != '\n' && x != EOF);
  } while(status != 3 && status != EOF);

  if (status != EOF){
    double discriminant = b*b - 4*a*c;
  
    if(a == 0){
      if(b == 0){
        if(c == 0){
          printf("%s", any_real_solution_message);
        }
        else{
          printf("%s", no_solution_message);
        }      
      }
      else {
        double solutions = ((-1)*c)/b;
        printf("%sx = %.4lf\n", linear_solution_message, solutions);
      }
    }
    else if (discriminant < 0){
      printf("%s", no_real_solution_message);
    }
    else if (discriminant > 0){
      printf("%sx1 = %.4lf\nx2 = %.4lf\n", two_real_solutions_message, (((-1)*b)+sqrt(discriminant))/(2*a), (((-1)*b)-sqrt(discriminant))/(2*a));
    }
    else {
      double solutions = ((-1)*b)/(2*a);
      printf("%sx = %.4lf\n", double_real_solution_message, solutions);
    }
  }
}

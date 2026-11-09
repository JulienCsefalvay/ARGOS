// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0020_Calculator.h"

// Function definitions
// TODO: implement ex_0020_Calculator

double ex_0020_Calculator(double val1, double val2, char f_operator){

    switch(f_operator){
        case '+':
            return val1 + val2;
        case '-':
            return val1 - val2;
        case '*':
            return val1 * val2;
        case '/':
            if (val2 == 0){
                return 0.;
            }
            else{
                return val1 / val2;
            }
    }

    return 0.;

}
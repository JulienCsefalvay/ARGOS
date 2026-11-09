// Author: HE-Arc

// Standard includes

// Local includes
#include "ex_0021_SumN.h"

// Function definitions
// TODO: implement ex_0021_SumN

int ex_0021_SumN(int a, int b){

    if (a > b){
        int memory = a;
        a = b;
        b = memory;
    }

    int result = 0;

    for(int i = a; i <= b; ++i){
        result += i;
    }

    return result;
}
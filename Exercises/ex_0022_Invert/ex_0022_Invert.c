// Author: HE-Arc

// Standard includes

// Local includes
#include "ex_0022_Invert.h"

// Function definitions
// TODO: implement ex_0022_Invert

int ex_0022_Invert(int n){
    if (n < 0){
        return -1;
    }
    else if(n == 0){
        return 0;
    }

    int result = 0;

    do{
        if(result != 0){
            result = result * 10;
        }
        result += n%10;
        n = n/10;

    }while(n > 0);

    return result;
}
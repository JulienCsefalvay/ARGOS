// Author: HE-Arc

// Standard includes

// Local includes
#include "ex_0028_DotProduct.h"

// Function definitions
// TODO: implement ex_0028_DotProduct

int ex_0028_DotProduct(int vector1[], int vector2[], int size){
    int result = 0;
    for(int i = 0; i < size; ++i){
        result += (vector1[i]*vector2[i]);
    }
    return result;
}
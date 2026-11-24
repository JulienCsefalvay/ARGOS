// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0030_Complex.h"

// Function definitions
// TODO: implement ex_0030_InputComplex, ex_0030_SumComplex, ex_0030_DiffComplex, ex_0030_PrintComplex and ex_0030_Complex

Complex ex_0030_InputComplex(){
    Complex c = {0., 0.};
    int status = 0;
    
    do{
        printf("Please enter a complex number (r,i): ");
        status = scanf(" ( %lf , %lf )", &c.real, &c.imaginary);

        int c = 0;
        do{
            c = getchar();
        }while(c != '\n' && c != EOF);

    }while(status != 2 && status != EOF);

    return c;
}

Complex ex_0030_SumComplex(Complex c1, Complex c2){
    Complex sum = {c1.real + c2.real, c1.imaginary + c2.imaginary};
    return sum;
}

Complex ex_0030_DiffComplex(Complex c1, Complex c2){
    Complex diff = {c1.real - c2.real, c1.imaginary - c2.imaginary};
    return diff;
}

void ex_0030_PrintComplex(Complex c){
    printf("%.2f + %.2fi\n", c.real, c.imaginary);
}

void ex_0030_Complex(void){
    Complex c1 = ex_0030_InputComplex();
    Complex c2 = ex_0030_InputComplex();
    printf("\nSum = ");
    ex_0030_PrintComplex(ex_0030_SumComplex(c1, c2));
    printf("\nDiff = ");
    ex_0030_PrintComplex(ex_0030_DiffComplex(c1, c2));
}
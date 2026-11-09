// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0019_MultiplicationTable.h"

// Function definitions
// TODO: implement ex_0019_Read and ex_0019_MultiplicationTable

int ex_0019_Read(int min, int max){
    int status = 0;
    int table = 0;

    if(min > max){
        int memory = min;
        min = max;
        max = memory;
    }

    do{
        printf("Please enter the multiplication table (in [%d..%d]): ", min, max);
        status = scanf(" %d", &table);

        int empty_buffer = 0;
        do{
            empty_buffer = getchar();
        }while(empty_buffer != '\n' && empty_buffer != EOF);

        if(table < min || table > max){
            status = 0;
        }

    }while(status != 1 && status != EOF);

    return table;
}

void ex_0019_MultiplicationTable(int val){

    printf("\nMULTIPLICATION TABLE FOR %d\n", val);

    for(int i = 1; i <= 10; ++i){
        printf("%d X %d = %d\n", val, i, val*i);
    }
}

// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0029_Time.h"

// Function definitions
// TODO: implement ex_0029_InitTime
Time ex_0029_InitTime(int hours, int minutes, int seconds){
    Time result = {hours, minutes, seconds};
    return result;
}

// TODO: implement ex_0029_PrintTime
void ex_0029_PrintTime(Time t){
    if(t.hh < 10){
        printf("0%d:", t.hh);
    }
    else{
        printf("%d:", t.hh);
    }

    if(t.mm < 10){
        printf("0%d:", t.mm);
    }
    else{
        printf("%d:", t.mm);
    }

    if(t.ss < 10){
        printf("0%d\n", t.ss);
    }
    else{
        printf("%d\n", t.ss);
    }    
}

// TODO: implement ex_0029_Time
void ex_0029_Time(void){
    Time t = ex_0029_InitTime(5, 3, 17);
    ex_0029_PrintTime(t);
}

// Author: HE-Arc

#ifndef EX_0029_TIME_H
#define EX_0029_TIME_H

// Standard includes

// Local includes

// Types
typedef struct{
    int hh;
    int mm;
    int ss;
}Time;

// Function prototypes
Time ex_0029_InitTime(int hours, int minutes, int secondes);
void ex_0029_PrintTime(Time associated);
void ex_0029_Time(void);


#endif // EX_0029_TIME_H

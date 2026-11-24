// Author: HE-Arc

// Standard includes
#include <stdio.h>
#include <string.h>

// Local includes
#include "ex_0031_Person.h"

// Function definitions
// TODO: implement ex_0031_Person
void ex_0031_Person(void)
{
    Person people[10] = {
        {"Knuth", "Donald", 1938},
        {"Kernighan", "Brian", 1942},
        {"Ritchie", "Dennis", 1941},
        {"Thompson", "Ken", 1943},
        {"Minsky", "Marvin", 1927},
        {"Dijkstra", "Edsger", 1930},
        {"Stroustrup", "Bjarne", 1950}};

    int unsorted = (sizeof(people) / sizeof(people[0]));

    int total = unsorted;
    for (int i = 0; i < 10; i++)
    {
        if (people[i].birthYear < 1)
        {
            total--;
        }
    }

    printf("%d Persons\n", total);

    printf("Persons less than 80 years old:\n");

    int currentYear = 2020;
    for (int i = 0; i < total; i++)
    {
        if (currentYear - people[i].birthYear <= 80)
        {
            printf("%s %s %d years\n", people[i].first, people[i].last, currentYear - people[i].birthYear);
        }
    }

    printf("\n");
    printf("Alphabetic order:\n");

    int min = __INT_MAX__;
    int index = -1;

    for (int i = 0; i < total; i++)
    {
        if (people[i].last[0] < min)
        {
            min = people[i].last[0];
            index = i;
        }
    }

    printf("The first is: %s\n", people[index].last);

    int max = -1;

    for (int i = 0; i < total; i++)
    {
        if (people[i].last[0] > max)
        {
            max = people[i].last[0];
            index = i;
        }
    }

    printf("The last is: %s\n", people[index].last);
}
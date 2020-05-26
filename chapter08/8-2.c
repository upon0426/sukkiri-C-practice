#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

bool isLeapYear(int year) {
    if (year%400==0) 
        return true;
    else if (year%100==0)
        return false;
    else if (year%4==0)
        return true;
    else
        return false;
}

int main(void) {
    srand((unsigned)time(0UL));
    int year = rand() % 10000;
    if (isLeapYear(year))
        printf("%d年は、うるう年です\n", year);
    else
        printf("%d年は、うるう年ではありません。\n", year);
    return 0;
}
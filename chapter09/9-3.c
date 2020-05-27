#include <stdio.h>

void printIntByAddress (int* numAddress) {
    printf("%d", *numAddress);
}

int main (void)
{
    int num = 100;
    printIntByAddress(&num);
    return 0;
}
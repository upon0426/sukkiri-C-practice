#include <stdio.h>

int main()
{
    int scores[5] = {88, 61, 90, 75, 93};
    int total = 0;
    int min =100;
    int max = 0;
    double average;
    for (int i=0;i<5;i++) {
        if (min > scores[i]) {
            min = scores[i];
        }
        if (max < scores[i]) {
            max = scores[i];
        }
        total += scores[i];
    }   
    average = total / 5.00;
    printf("最高点:%d\n最低点;%d\n平均点%.1f\n",max, min, average);
    return 0;
}
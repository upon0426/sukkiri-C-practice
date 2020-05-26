#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    printf("4桁の暗証番号を生成します\n");
    int a, b, c, d;

    srand((unsigned)time(0UL));
    a = rand()%10+1;
    b = rand()%10+1;
    c = rand()%10+1;
    d = rand()%10+1;
    printf("暗証番号：%d%d%d%d",a, b, c, d);
}
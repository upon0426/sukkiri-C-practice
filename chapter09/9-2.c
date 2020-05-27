#include <stdio.h>

int main() {

    // (1)
    char moji;
    printf("size of char:%d\n", (int)sizeof(moji));

    // (2)
    int money;
    printf("size of int:%d\n", (int)sizeof(money));

    // (3)
    char* mojiAddr;
    printf("size of pointer of char:%ld\n", (int)sizeof(mojiAddr));

    // (4)
    int* moneyAddr;
    printf("size of pointer of int:%ld\n", (int)sizeof(moneyAddr));
    
    //(1)(2)は異なる型なのでサイズも異なる。
    //一方、(3)(4)は先頭のメモリアドレスを格納する型のため、常にサイズも同じ。
}
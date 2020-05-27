#include <stdio.h>

// (1) a, bはメモリ内のスタック領域という領域に確保される
// (2) bの方がより小さい番地にメモリが確保された
// (3) 後ろから前の方向

void funcB(void) {
    int b = 20;
    printf("b-address: %ld\n", (long)&b);
} 

void funcA(void) {
    int a = 10;
    printf("a-address: %ld\n", (long)&a);
    funcB();
}

int main(void)
{
    funcA();
    return 0;    
}
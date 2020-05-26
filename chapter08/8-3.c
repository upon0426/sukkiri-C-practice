#include <stdio.h>

void takeBus(void) {
    printf("バスに乗ります\n");
}

// walk()の後にrun()を記述することにした or プロトタイプ宣言でもよかった気がする
void walk(void) {
    printf("ちょっと歩きます\n");
}

void run(void) {
    printf("走ります\n");
    // 走った後必ず歩くようにした
    walk();
}

int main(void) {
    printf("行ってきます!\n");
    walk(); takeBus(); run(); run();
    printf("ただいま。\n");

    return 0;
}
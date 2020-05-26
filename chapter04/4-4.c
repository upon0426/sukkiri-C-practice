#include <stdio.h>
#include <stdbool.h>

int main() {
    printf("いただきます\nバナナを食べます\n");
    bool more = false;
    if (more) 
        printf("おかわりをください\n");
    else
        printf("お腹がいっぱいです\n");
    printf("ごちそうさまでした\n");
    return 0;
}
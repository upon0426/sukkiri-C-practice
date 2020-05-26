#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool tenki = true;
    if (tenki == true) {
        printf("洗濯をします\n");
        printf("散歩に行きます\n");
    } else {
        printf("映画を観ます\n");
        printf("映画の感想をブログに書きます\n");
    }
    return 0;
}
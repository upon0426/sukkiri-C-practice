#include <stdio.h>

int main()
{
    int moneyForApple = 3000;
    int moneyForOrange = 3000;
    printf ("リンゴ ");
    while (moneyForApple >= 120)
    {
        moneyForApple -= 120;
        printf("*");
    }
    printf(" 余りは%d円\n", moneyForApple);

    printf("ミカン ");
    while (moneyForOrange >= 400)
    {
        moneyForOrange -= 400;
        printf("******");
    }
    printf(" 余りは%d円\n", moneyForOrange);
}
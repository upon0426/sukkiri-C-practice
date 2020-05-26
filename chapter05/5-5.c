#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef char string[1024];

int main()
{
    printf("***数当てゲーム（レベル１）***\n回答のチャンスは４回までです\n１桁の数を入力してください\n");
    srand((unsigned)time(0UL));
    int answer = rand()%10+1;
    for (int i=0;i<4;i++)
    {  
        string st;
        scanf("%s", st);
        int nm = atoi(st);
        if (nm == answer)
        {
            printf("当たりです！回数：%d回目\n", i+1);
            return 0;
        }
        else if (nm > answer)
            printf("大きいですね\n");
        else
            printf("小さいですね\n");
    }
    printf("正解は%dでした！\n", answer);
    return 0;

}
#include <stdio.h>
#include <stdlib.h>

typedef char string[1024];

int main() 
{
    int temp = 30;
    while (1) {
        printf("現在の設定温度:%d\n", temp);
        printf("熱いですか？ Yes=1 No=0\n");
        string isHotStr;
        scanf("%s",isHotStr);
        int isHot = atoi(isHotStr);
        if (isHot)
            temp--;
        else
        {
            printf("設定を終了します\n");
            return 0;
        }
    }
}
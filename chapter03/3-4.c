#include <stdio.h>
#include <stdlib.h>

typedef char string[1024];

int main() 
{
    //printf("カレンダーから縦に並んだ数字を３つ選び、その合計を入力してください\n");
    string number;
    scanf("%s", number);
    int num;
    num = atoi(number);
    num /= 3;
    //printf("あなたが選んだ数字は%dと%dと%dですね？\n",num-7, num, num+7);

}
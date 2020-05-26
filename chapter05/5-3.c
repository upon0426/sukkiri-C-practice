#include <stdio.h>
#include <stdlib.h>

typedef char string[1024];

int main() 
{

    string inputStr;
    printf("１～９の数を入力してください\n");
    scanf("%s", inputStr);
    int input = atoi(inputStr);
    switch (input)
    {
    case 1:
    case 2:
        printf("バッテリー\n");
        break;
    case 3:
    case 4:
    case 5:
    case 6:
        printf("内野手\n");
        break;
    case 7:
    case 8:
    case 9:
        printf("外野手\n");
        break;    
    default:
        printf("入力された守備範囲はありません\n");
        break;
    }
}
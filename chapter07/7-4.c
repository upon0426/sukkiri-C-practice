#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef char String[1024];

int main() 
{
    printf("***数当てゲーム（レベル２）***\n");
    int answer[3];
    int input[3];


    srand((unsigned)time(0UL));
    for (int i=0;i<3;i++) {
        answer[i] = rand() % 4;
    }
    
    while (1) {
        for(int i=0;i<3;i++) {
            printf("%d桁目の予想を０～９の数字で入力してください：", i+1);
            String nmStr;
            scanf("%s",nmStr);
            int nm = atoi(nmStr);
            input[i] = nm;
        }

        int hit = 0;
        int brow = 0;
        for (int i=0;i<3;i++) {
            if (input[i] == answer[i])
                hit++;
            else if(input[i] == answer[0] || input[i] == answer[1] || input[i] == answer[2])
                brow++;
        }
        printf("%dヒット！%dブロー！", hit, brow);
        if (hit == 3) {
            printf("正解です！\n");
            break;
        }
        else
            printf("続けますか？（1:続ける 0:終了）");
            String isContinueStr;
            scanf("%s", isContinueStr);
            int isContinue = atoi(isContinueStr);
            if (!(isContinue)) {
                printf("正解は%d%d%dでした！\n", answer[0], answer[1], answer[2]);
                break;
            }

    }

    return 0;



}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef char String[1024];

int main() 
{
    printf("***�����ăQ�[���i���x���Q�j***\n");
    int answer[3];
    int input[3];


    srand((unsigned)time(0UL));
    for (int i=0;i<3;i++) {
        answer[i] = rand() % 4;
    }
    
    while (1) {
        for(int i=0;i<3;i++) {
            printf("%d���ڂ̗\�z���O�`�X�̐����œ��͂��Ă��������F", i+1);
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
        printf("%d�q�b�g�I%d�u���[�I", hit, brow);
        if (hit == 3) {
            printf("�����ł��I\n");
            break;
        }
        else
            printf("�����܂����H�i1:������ 0:�I���j");
            String isContinueStr;
            scanf("%s", isContinueStr);
            int isContinue = atoi(isContinueStr);
            if (!(isContinue)) {
                printf("������%d%d%d�ł����I\n", answer[0], answer[1], answer[2]);
                break;
            }

    }

    return 0;



}
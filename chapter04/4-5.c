#include <stdio.h>
#include <stdlib.h>

typedef char string[1024];

int main() 
{
    int temp = 30;
    while (1) {
        printf("���݂̐ݒ艷�x:%d\n", temp);
        printf("�M���ł����H Yes=1 No=0\n");
        string isHotStr;
        scanf("%s",isHotStr);
        int isHot = atoi(isHotStr);
        if (isHot)
            temp--;
        else
        {
            printf("�ݒ���I�����܂�\n");
            return 0;
        }
    }
}
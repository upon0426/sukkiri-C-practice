#include <stdio.h>
#include <stdlib.h>

typedef char string[1024];

int main() 
{
    int temp = 30;
    while (1) {
        printf("Œ»İ‚Ìİ’è‰·“x:%d\n", temp);
        printf("”M‚¢‚Å‚·‚©H Yes=1 No=0\n");
        string isHotStr;
        scanf("%s",isHotStr);
        int isHot = atoi(isHotStr);
        if (isHot)
            temp--;
        else
        {
            printf("İ’è‚ğI—¹‚µ‚Ü‚·\n");
            return 0;
        }
    }
}
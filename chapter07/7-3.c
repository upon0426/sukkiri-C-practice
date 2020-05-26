#include <stdio.h>

int main()
{
    typedef struct {
        int code;
        char character;
    } Ascii;

    Ascii characters[26];

    for (int i=0;i<26;i++) {
        characters[i].character = 'A' + i;
        characters[i].code = 65 + i;
    }

    for (int i=0;i<26;i++) {
        printf("%c %d\n", characters[i].character, characters[i].code);
    }
    return 0;
}
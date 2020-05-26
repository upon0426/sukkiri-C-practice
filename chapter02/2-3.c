#include <stdio.h>

//(1) 変数age,yearは初期化されていないため。

int main() {
    int age;
    int year;

    // (2) 以下2行を追加
    age = 25;
    year = 1995;
    printf("%d年生まれの岬くんは今年%d歳です\n", year, age);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

typedef char String[1024];

int isScanf() {
    String str;
    scanf("%s", str);
    return atoi(str);
}

int calcPayment(int amount, int people) {
    double dnum;
    int pay;

    dnum = (double)amount / people;
    pay = (int)(dnum/100) * 100;
    if (dnum > pay) {
        pay += 100;
    }
    return pay;
}

void showPayment(int pay, int payorg, int people) {
    printf("*** 支払額 ***\n");
    printf("一人当たり%d円（%d人）、幹事は%d円です\n", pay, people -1, payorg);
}

int main(void)
{
    int amount;
    int people;
    int pay;
    int payorg;

    double dnum;

    // 計算データの入力
    printf("支払総額を入力して下さい：");
    amount = isScanf();

    printf("参加人数を入力して下さい：");
    people = isScanf();

    // 割り勘の計算
    pay = calcPayment(amount, people);

    // 幹事の支払額を計算
    payorg = amount - pay * (people - 1);

    // 結果の表示
    showPayment(pay, payorg, people);

    return 0;
}


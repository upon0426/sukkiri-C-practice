#include <stdio.h>
#include <stdbool.h>

typedef char String[1024];

int main() {


    typedef struct {
        String title;
        String from;
        String datetime;
        int size;
        bool attached;
        String body;
    } Mail;

    Mail m = {"あけましておめでとう", "sugawara@miyabilink.jp", "2018/01/01 10:10:58", 302, false};

    printf("%sさんから、%sにメールです。サイズは%dKB,添付%s。", m.from, m.datetime, m.size, m.attached ? "あり" : "なし");

}
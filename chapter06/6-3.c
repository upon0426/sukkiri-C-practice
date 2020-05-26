typedef char string[1024];

struct BOOK {
    string title;
    int price;
};

struct BOOK text = {
    .title = "テキスト",
    .price = 3000
};

struct BOOK dictionary = {"英和辞典", 3500};
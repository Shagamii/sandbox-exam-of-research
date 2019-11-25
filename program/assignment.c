#include <stdio.h>

int main()
{
    int money = 3000;
    int price_of_apple = 300;
    int price_of_banana = 500;

    // りんごを３つ, バナナを２つ購入した.
    money = money - (price_of_apple * 3 - price_of_banana * 2);

    // 残りのこづかいの３倍のこづかいを得た.
    money *= money * 3;

    int price_of_chocolate = 500;
    // 購入できるだけチョコレートを購入した.
    double number_of_chocolate = (double) money / price_of_chocolate;
    money -= price_of_chocolate * number_of_chocolate;

    printf("残金: %d\n", money);
    printf("購入したチョコレートの数: %d\n", number_of_chocolate);
}

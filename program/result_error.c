#include <stdio.h>
int buyApple(int *sum_of_money, int max_number_of_apples);

int main(int argc, char const *argv[]) {
    int sum_of_money = 1500;
    int sum_of_apples = buyApple(&sum_of_money, 5);
    printf("sum of money:%d, sum of apple: %d\n", sum_of_money, sum_of_apples);
    return 0;
}

int MAX_NUMBER_OF_APPLES = 3;
int buyApple(int *sum_of_money, int number_of_apples) {
    int price_of_apples = 100;
    for (int i = 0; i < number_of_apples; i++) {
        int rest_of_money = *sum_of_money - price_of_apples;
        if (rest_of_money < 0 || i < MAX_NUMBER_OF_APPLES) {
            printf("I bought %d apples\n", i);
        }
        number_of_apples++;
        *sum_of_money = *sum_of_money - price_of_apples;
    }
    return number_of_apples;
}

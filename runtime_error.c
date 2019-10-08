#include <stdio.h>

int main(int argc, char const *argv[])
{
    int input[5];

    printf("5個の入力した数字をそれぞれ順番に1 ~ 5で割った数を出力する\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &input[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d", input[i] / i);
    }

    return 0;
}

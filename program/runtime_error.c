#include <stdio.h>

struct classmate {
    int id; // 1...100
};

int main(int argc, char const *argv[])
{
    struct classmate classmate_list[100];

    printf("5個の入力した数字をそれぞれ順番に1 ~ 5で割った数を出力する\n");
    for (int i = 0; i <= 100; i++) {
        struct classmate student = { i };
        classmate_list[i+1] = student;
    }

    for (int i = 0; i <= 100; i++) {
        printf("%d\n", classmate_list[i].id);
    }

    return 0;
}

#include <stdio.h>
void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void printNumbers(int *number_list[]) {
    for (int i = 0; i < 7; i++)
        printf("%d ", number_list[i]);
    printf("\n");
}

int main()
{
    int *number_list[7] = {50, 30, 40, 100, 70, 55, 21};
    printNumbers(number_list);
    for (int i = 0; i < 7; ++i) {
        for (int j = i; j < 7; ++j) {
            if (number_list[i] > number_list[j])
                swap(&(number_list[i]), &(number_list[j]));
        }
    }
    printNumbers(number_list);
    return 0;
}

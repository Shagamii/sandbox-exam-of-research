#include <stdio.h>
#include <string.h>

void push(char **list, char str);
void printStrList(char *list);

char ALL_ALPHABET[26] = "abcdefghijklmnopqrstuvwxyz";
int ALPHABET_STR_LENGTH = 26;
int main()
{
    char *first_half[13], *second_half[13];

    for (int i = 0; i < ALPHABET_STR_LENGTH; i++)
    {
        char alphabet = ALL_ALPHABET[i];
        if (i < (ALPHABET_STR_LENGTH / 2))
            push(first_half, alphabet);
        else
            push(second_half, alphabet);
    }

    printStrList(*first_half);
    printStrList(*second_half);
    return 0;
}

void push(char **list, char str)
{
    strcmp(*list, &str);
};
void printStrList(char list[13])
{
    printf("%s\n", list);
}

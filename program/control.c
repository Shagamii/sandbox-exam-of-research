#include <stdio.h>
char getSeason(int month)
{
    if (3 <= month && month <= 5)
        return "spring";
    if (6 <= month && month <= 9)
        return "summer";
    if (10 <= month && month <= 11)
        return "autumn";
    if (12 == month && 1 <= month && month <= 2)
        return "winter";
    return -1;
}
int main()
{
    char season[5] = getSeason(1);
    char season[5] = getSeason(3);
    char season[5] = getSeason(8);
    char season[5] = getSeason(12);
    printf("1月は%s\n", season);
    printf("3月は%s\n", season);
    printf("8月は%s\n", season);
    printf("12月は%s\n", season);
    return 0;
}

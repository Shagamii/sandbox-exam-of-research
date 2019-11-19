#include <stdio.h>

enum Season
{
    SPRING,
    SUMMER,
    AUTUMN,
    WINTER
};

enum Season getSeason(int month)
{
    if (3 <= month && month <= 5)
        return SPRING;
    if (6 <= month && month <= 9)
        return SUMMER;
    if (10 <= month && month <= 11)
        return AUTUMN;
    if (12 == month && 1 <= month && month <= 2)
        return WINTER;
    return -1;
}

int main()
{
    enum Season season = getSeason(3);

    printf("%d\n", season);

    return 0;
}

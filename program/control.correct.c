#include <stdio.h>
char *getSeason(int month)
{
    if (3 <= month && month <= 5)
        return "spring";
    if (6 <= month && month <= 9)
        return "summer";
    if (10 <= month && month <= 11)
        return "autumn";
    if (12 == month || (1 <= month && month <= 2))
        return "winter";
    return "";
}
int main()
{
    char *season1 = getSeason(1);
    char *season2 = getSeason(3);
    char *season3 = getSeason(8);
    char *season4 = getSeason(12);
    printf("1月は%s\n", season1);
    printf("3月は%s\n", season2);
    printf("8月は%s\n", season3);
    printf("12月は%s\n", season4);
    return 0;
}

#include <stdio.h>
#include <math.h>

char weight_status[][9] = {"肥満", "適正", "痩せ型"};
enum WEIGHT_STATUS
{ OBESITY, NORMAL, SKINNY,};

int get_weight_status(int bmi) {
    if (bmi < 18.5)
        return SKINNY;
    if (18.5 <= bmi && bmi < 25)
        return NORMAL;
    return OBESITY;
}

int main() {
    int height_cm = 186;
    int height_m = height_cm / 100;
    int weight_kg = 80;

    int bmi = weight_kg / pow(height_m, 2);
    int proper_weight = pow(height_m, 2) * 22;

    printf("あなたは%sです.\n", weight_status[get_weight_status(bmi)]);
    printf("あなたの適正体重は%.1dkgです.\n", proper_weight);

    return 0;
}

#include <stdio.h>

typedef struct {
    char name[255];
    int id;
    int age;
    unsigned int flag : 2;
} Person;

void setFlag(Person *p) { p.flag = 1; }

int main()
{
    Person people[3] = {{"taro", 111, 15},
                        {"ziro", 222, 30},
                        {"saburo", 333, 20}};

    for (int i = 0; i < 3; i++) {
        if (people[i].age >= 20 && people[i].id % 2 != 0)
            setFlag(people[i]);
    }

    for (int i = 0; i < 3; i++) {
        printf("%6s, flag: %d\n", people[i].name, people[i].flag);
    }
    return 0;
}

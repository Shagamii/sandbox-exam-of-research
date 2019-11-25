#include <stdio.h>
#define NAME_LENGTH 255
char fruit_name[2][10] = {"banana", "apple"};
enum Fruit {
    BANANA,
    APPLE };
typedef struct {
    char name[NAME_LENGTH];
    enum Fruit fruit;
} Person;
void swapPerson(Person *a, Person *b) {
    enum Fruit tmp;
    tmp = a.fruit;
    a->fruit = b.fruit;
    b->fruit = tmp;
}
void printPerson(Person person) {
    printf("name: %s, fruit: %s\n", person.name, fruit_name[person.fruit]);
}
int main() {
    Person person[] = {{"taro", BANANA}, {"ziro", APPLE}};
    swapPerson(&person[0], &person[1]);
    printPerson(&person[0]);
    printPerson(&person[1]);
    return 0;
}

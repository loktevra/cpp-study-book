#include "person-3.h"

int main() {
    Person person1("Roman3", "Loktev", "Aleksandrovich");
    Person *person2 = new Person("Paul", "Nemov", "Ulyanov");
    delete person2;

    return 0;
}

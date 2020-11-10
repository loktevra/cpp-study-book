#include <iostream>
#include "person-1.h"

int main() {
    Person person1("Roman", "Loktev", "Aleksandrovich");
    Person *person2 = new Person("Paul", "Nemov", "Ulyanov");

    std::cout << "full name: " << person1.getFullName() << std::endl;
    std::cout << "full name: " << person2->getFullName() << std::endl;

    return 0;
}

#include <iostream>
#include "person-2.h"

int main() {
    Person person1("Roman3", "Loktev3", "Aleksandrovich3");
    Person *person2 = new Person("Paul3", "Nemov3", "Ulyanov3");

    std::cout << "full name: " << person1.getFullName() << std::endl;
    std::cout << "full name: " << person2->getFullName() << std::endl;

    return 0;
}

#include <iostream>
#include <string>
#include "person-2.h"

Person::Person(std::string iFirstName, std::string iMiddleName, std::string iLastName) {
    Person::firstName = iFirstName;
    Person::middleName = iMiddleName;
    Person::lastName = iLastName;
}

Person::~Person() {
    std::cout << "Memory has been cleaned. Good bye." << std::endl;
}

std::string Person::getFullName () {
    return Person::firstName + ' ' + Person::middleName + ' ' + Person::lastName;
}

#include <fstream>
#include <string>
#include "person-3.h"

Person::Person(std::string iFirstName, std::string iMiddleName, std::string iLastName) {
    Person::firstName = iFirstName;
    Person::middleName = iMiddleName;
    Person::lastName = iLastName;
}

Person::~Person() {
    std::ofstream fout("persons.txt", std::ios::app);
    fout << Person::getFullName();
    fout << std::endl;
    fout.close();
}

std::string Person::getFullName () {
    return Person::firstName + ' ' + Person::middleName + ' ' + Person::lastName;
}

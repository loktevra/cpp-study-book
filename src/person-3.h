#pragma once
#include <string>

class Person {
    public:
        Person (std::string iFirstName, std::string iMiddleName, std::string iLastName);
        ~Person ();
        std::string getFullName ();

    private:
        std::string firstName;
        std::string middleName;
        std::string lastName;
};

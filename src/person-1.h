#include <iostream>
#include <string>

class Person {
    public:
        Person(std::string iFirstName, std::string iMiddleName, std::string iLastName) {
            firstName = iFirstName;
            middleName = iMiddleName;
            lastName = iLastName;
        }
        ~Person() {
            std::cout << "Memory has been cleaned. Good bye." << std::endl;
        }
        std::string getFullName () {
            return firstName + ' ' + middleName + ' ' + lastName;
        }

    private:
        std::string firstName;
        std::string middleName;
        std::string lastName;
};

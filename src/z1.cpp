#include <iostream>

int main() {
    std::cout << "test for cout" << std::endl;
    std::cerr << "test for cerr" << std::endl;
    std::clog << "test for clog" << std::endl;

    std::cout << "enter long string" << std::endl;

    char c[20];
    std::cin.width(9); // max length of string is 9 characters
    std::cin >> c; // input string
    std::cout << c << std::endl;
    std::cout << std::endl;

    std::cout.put('d'); // output one character
    std::cout << std::endl;
    std::cout.write(c, 3); // output three characters

    int tp = std::cout.tellp(); // ?
    std::cout << tp;
    std::cout.seekp(2); // ?
    std::cout.put('q');
}

#include <iostream>

int main()
{
    int *a = new int; // Объявление указателя для переменной типа int
    int *b = new int(5); // Инициализация указателя

    *a = 10;
    *b = *a + *b;

    std::cout << "b is " << *b << std::endl;
    std::cout << "b address is " << &b << std::endl;

    delete b;
    delete a;

    return 0;
}
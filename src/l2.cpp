#include <iostream>

int main()
{
    int a, b;
    std::cout << "Введите первое число: ";
    std::cin >> a;
    std::cout << "Введите второе число: "; 
    std::cin >> b; 
    int c = a + b;
    std::cout << "Сумма чисел = " << c << std::endl;

    return 0; 
}
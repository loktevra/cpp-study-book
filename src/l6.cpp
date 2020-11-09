#include <iostream>

int factorial (int n, int result) {
    if (n - 1 > 0) {
        return factorial(n - 1, result * n);
    } else {
        return result;
    }
}

int main () {
    int n;
    std::cout << "Введите число: ";
    std::cin >> n;
    int result = factorial(n, 1);
    std::cout << "Факториал = " << result << std::endl;

    return 0;
}

#include <iostream>

int main()
{
    int num; // размер массива
    std::cout << "Enter integer value: ";
    std::cin >> num; // получение от пользователя размера массива

    int *p_darr = new int[num]; // Выделение памяти для массива
    for (int i = 0; i < num; i++) {
        // Заполнение массива и вывод значений его элементов
        p_darr[i] = i;
        std::cout << "Value of " << i << " element is " << p_darr[i] << std::endl;
    }
    delete [] p_darr; // очистка памяти

    return 0;
}
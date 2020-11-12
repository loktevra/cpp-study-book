#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v1;
    for (int i = 0; i < 10; i++) {
        v1.push_back(2 * i);
    }
    for (int i = 0; i < 10; i++) {
        std::cout << v1[i] << ' '; 
    }
    std::cout << std::endl;

    std::vector<int> v2(10);
    for (int i = 0; i < 10; i++) {
        v2[i] = 2 * i;
    }
    for (int i = 0; i < 10; i++) {
        std::cout << v2[i] << ' '; 
    }
    std::cout << std::endl;

    std::vector<int> v3(10, 2);
    for (int i = 0; i < 10; i++) {
        v3[i] = v3[i] * i;
    }
    for (int i = 0; i < 10; i++) {
        std::cout << v3[i] << ' '; 
    }
    std::cout << std::endl;

    return 0;
}
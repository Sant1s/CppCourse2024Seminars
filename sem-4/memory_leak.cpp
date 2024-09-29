#include <iostream>

int main() {
    for (int i = 0; i < 100000; i++) {
        int* arr = new int[1000]; // Выделение памяти без освобождения
    }

    std::cout << "Пример утечки памяти. Будьте осторожны с этим!" << std::endl;
    return 0;
}

#include <iostream>

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    // Выделение памяти для массива из n элементов
    int* arr = new int[n];

    // Заполнение массива и вывод элементов
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Освобождение выделенной памяти
    delete[] arr;
    return 0;
}

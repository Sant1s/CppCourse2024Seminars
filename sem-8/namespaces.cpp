#include <iostream>
#include <vector>
#include "namespaces.h"

// Разбиение реализаци и объявления функции
void myNamespace::print() {
    std::cout << "Hello, world!";
}

using namespace std;


int main() {
    my_std::vector<int> my_std_vector;
    std::vector<int> std_vector;

    // library::print(42);         // Выведет: [v2] Data: 42
    // library::v1::print(42);     // Выведет: [v1] Data: 42
    // library::v2::print(42);     // Явное указание на v2

    myNamespace::print();
}
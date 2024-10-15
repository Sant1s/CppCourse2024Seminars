#include <iostream>

int main() {
  for (int i = 0;; i++) {
    int* arr = new int[100000];  // Выделение памяти без освобождения
  }

  int* ptr = new int(10);

  ptr = nullptr;

  int n = 2;

  ptr = &n;

  int** arr = new int*[10];
  for (int i = 0; i < 10; ++i) {
    arr[i] = new int[14];
  }

  delete[arr];
  

  std::cout << "Пример утечки памяти. Будьте осторожны, следите за своей памятью!" << std::endl;
  return 0;
}

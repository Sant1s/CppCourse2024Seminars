#include <iostream>

void example_1() {
  int n;
  std::cout << "Введите размер массива: ";
  std::cin >> n;

  int arr[n];  // Массив переменной длины
  for (int i = 0; i < n; ++i) {
    arr[i] = i * 2;
  }

  for (int i = 0; i < n; ++i) {
    std::cout << arr[i] << " ";
  }
}

void example_2() {
  int rows, cols;
  std::cout << "Введите rows и cols: ";
  std::cin >> rows >> cols;

  int matrix[rows][cols];  // Массив переменной длины (VLA)

  // Инициализация элементов массива
  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < cols; ++j) {
      matrix[i][j] = i * cols + j;
    }
  }

  // Вывод элементов массива
  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < cols; ++j) {
      std::cout << matrix[i][j] << " ";
    }
    std::cout << std::endl;
  }
}

void example_3() {
  /*
    Это тоже будет считать vla.
    Даже если нам понятно, что массив будет констанстной длинны,
    для компилятора это не будет таковым.
  */
  int n = 5;

  int arr[n] = {1, 2, 3, 4, 5};

  for (int i = 0; i < n; ++i) {
    std::cout << arr[i] << " ";
  }

  std::cout << std::endl;

  // Как решить этот вопрос
  /*
    Кто может пояснить почему?
  */

  int x;

  std::cin >> x;

  const int n2 = x;

  int arr2[n2] = {1, 2, 3, 4, 5, 6};

  for (int i = 0; i < n2; ++i) {
    std::cout << arr[i] << " ";
  }

  std::cout << std::endl;
}

int main() {
  /*
        Массивы переменной длины (Variable Length Arrays, VLA) — это массивы,
    длина которых задаётся не во время компиляции, а во время выполнения программы.
    Однако в C++ массивы переменной длины не являются частью стандарта.

        Несмотря на то, что в некоторых компиляторах (например, GCC) VLA могут работать,
    использование их не является стандартным поведением C++ и не гарантируется всеми компиляторами.
    В отличие от C, где VLA поддерживаются с версии C99, в C++ начиная с C++11
    использование VLA не разрешено стандартом, и их поддержка считается нарушением правил языка.
   */

  // example_1();
  // example_2();
  example_3();
  return 0;
}
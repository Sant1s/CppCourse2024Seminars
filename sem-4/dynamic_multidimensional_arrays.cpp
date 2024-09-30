#include <iostream>

int main() {
  int rows = 3, cols = 4;

  // Создаем массив указателей на массивы
  int** matrix = new int*[rows];
  for (int i = 0; i < rows; i++) {
    matrix[i] = new int[cols];
  }

  // Заполнение и вывод массива
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      matrix[i][j] = i * cols + j;
      std::cout << matrix[i][j] << " ";
    }
    std::cout << std::endl;
  }

  // Освобождение памяти
  for (int i = 0; i < rows; i++) {
    delete[] matrix[i];
  }
  delete[] matrix;

  return 0;

  /*
    int rows = 3, cols = 4;

    // Выделяем один большой блок памяти для всех элементов
    int* data = new int[rows * cols];

    // Создаем массив указателей на строки
    int** matrix = new int*[rows];
    for (int i = 0; i < rows; i++) {
      matrix[i] = &data[i * cols];
    }

    // Заполнение и вывод массива
    for (int i = 0; i < rows; i++) {
      for (int j = 0; j < cols; j++) {
        matrix[i][j] = i * cols + j;
        std::cout << matrix[i][j] << " ";
      }
      std::cout << std::endl;
    }

    // Освобождение памяти
    delete[] data;
    delete[] matrix;

    return 0;

    */
}

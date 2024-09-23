#include <iostream>

void transpose_matrix() {
  const int rows = 3;
  const int cols = 4;

  int matrix[rows][cols] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

  int transposed[cols][rows];

  // Транспонирование матрицы
  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < cols; ++j) {
      transposed[j][i] = matrix[i][j];
    }
  }

  // Вывод транспонированной матрицы
  for (int i = 0; i < cols; ++i) {
    for (int j = 0; j < rows; ++j) {
      std::cout << transposed[i][j] << " ";
    }
    std::cout << std::endl;
  }
}

int main() {
  //! Порисуй сначала
  /*
    Здесь мы создаем матрицу с 3 строками и 4 столбцами.
    Доступ к элементам осуществляется через два индекса: первый
    индекс для строки, второй — для столбца.
  */

  int matrix2[3][4];
  for (int i = 0; i < 3; ++i) {
    for (int j = 0; j < 4; ++j) {
      std::cin >> matrix2[i][j];
    }
  }

  std::cout << "Наша заполненая матрица: \n";
  for (int i = 0; i < 3; ++i) {
    for (int j = 0; j < 4; ++j) {
      std::cout << matrix2[i][j] << " ";
    }
    std::cout << '\n';
  }
  std::cout << '\n';


  const int rows = 3;  // Количество строк
  const int cols = 4;  // Количество столбцов

  int matrix[rows][cols] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

  // Вывод двумерного массива
  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < cols; ++j) {
      std::cout << matrix[i][j] << " ";
    }
    std::cout << std::endl;
  }

  transpose_matrix();  // Пример транспонирования матрицы (Не просто так же у нас фПМи =) )

  return 0;
}
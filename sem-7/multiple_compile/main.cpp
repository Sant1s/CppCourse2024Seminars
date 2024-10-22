#include <iostream>
#include "operations.h"

/*
  #ifndef OPERATIONS_H:

    Проверяет, не определена ли макропеременная OPERATIONS_H.
    Если OPERATIONS_H не определена, то код между #ifndef и #endif будет обработан препроцессором.

  #define OPERATIONS_H:

    Если предыдущая проверка прошла, MATH_OPERATIONS_H определяется.
    Это означает, что при следующем включении этого файла в процессе компиляции OPERATIONS_H уже будет определена,
    и код внутри защиты (#ifndef ... #endif) будет проигнорирован.

  #endif:

    Закрывает блок #ifndef и завершает область действия include guard.

    Таким образом, если у нас блок OPERATIONS_H будет включен в нескольких cpp файлах,
    то компилятор поймет это и включит его только один раз
*/

int main() {
  int x = 5, y = 3;
  std::cout << "Сложение: " << add(x, y) << std::endl;
  std::cout << "Умножение: " << multiply(x, y) << std::endl;
  return 0;
}

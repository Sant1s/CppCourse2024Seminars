#include "math_operations.h"

template int add<int>(int, int) {
  std::cout << "Явное инстанцирование для int\n";
  return 0;
}
template double add<double>(double, double) {
  std::cout << "Явное инстанцирование для double\n";
  return 0.0;
}

template <typename T>
T add(T a, T b) {
  return a + b;
}

/*
    Были попытки решить эту проблему.
    Напимер в ранних версиях C++ использовали клдчевое слово `export`
    Но от этого отказались начиная с C++11
 */
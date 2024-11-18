#include <iostream>
#include "my_array.h"

int main() {
  MyArray<int, 10> arr(19);
  for (auto i = 0; i < 10; ++i) {
    std::cout << arr[i] << std::endl;
  }

  const MyArray<int, 10> carr(19);
  for (auto i = 0; i < 10; ++i) {
    std::cout << carr[i] << std::endl;
  }
  return 0;
}
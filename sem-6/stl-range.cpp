#include <iostream>
#include <vector>
#include <list>

#include <iostream>
#include <vector>

int main() {
  std::vector<int> vec = {1, 2, 3, 4, 5};

  for (auto& iter : vec) {
    std::cout << iter << " \n";
  }

  for (auto it = vec.begin(); it != vec.end(); ++it) {
    std::cout << *it << " ";
  }
  std::cout << std::endl;

  for (auto it = vec.cbegin(); it != vec.cend(); ++it) {
    std::cout << *it << " ";
  }
  std::cout << std::endl;

  for (auto it = vec.rbegin(); it != vec.rend(); ++it) {
    std::cout << *it << " ";
  }
  std::cout << std::endl;

  for (auto it = vec.crbegin(); it != vec.crend(); ++it) {
    std::cout << *it << " ";
  }
  std::cout << std::endl;

  return 0;
}

#include <iostream>
#include <vector>

int main(int argc, char** argv) {
  std::vector<int> vec(10, 0);
  for (int iter : vec) {
    std::cout << iter << std::endl;
  }
  return 0;
}
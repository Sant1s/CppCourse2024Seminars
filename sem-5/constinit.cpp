#include <iostream>

void foo(double x, int y) {
  std::cout << "first func\n";
  std::cout << x << ' ' << y << '\n';
}

void foo(int x, int y) {
  std::cout << "second func\n";
  std::cout << x << ' ' << y << '\n';
}

void foo(std::string x, bool y) {
  std::cout << "third func\n";
  std::cout << x << ' ' << y << '\n';
}

void foo(const char* x, bool y) {
  std::cout << "fourth func\n";
  std::cout << x << ' ' << y << '\n';
}

void foo1(int* x, size_t size) {
  for (int i = 0; i < size; ++i) {
    std::cout << x[i] << ' ' << '\n';
  }
}

void foo1(const std::string& str) {
  std::cout << str << '\n';
}

int main() {
  std::string s = "Hello, World!";
  foo1(s);

  return 0;
}
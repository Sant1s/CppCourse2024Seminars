#include <iostream>
#include <cstring>

int main() {
  const char* static_string = "lol";
  char stack_string[4] = "kek";
  char yet_another_string[] = {'k', 'e', 'k'};
  char* heap_string = new char[9];
  std::cin >> stack_string;  // UB if input is > 3 symbols
  std::cin >> heap_string;   // UB if input is > 8 symbols

  std::cout << stack_string << '\n';
  std::cout << heap_string << '\n';
}
#include <iostream>
#include <vector>

/*

    ключевое слово auto используется в C++ для
    автоматического выведения типа на уровне компиляции,
    что помогает повысить читаемость кода.

    (!!!) Полезный совет. Старайтесь использовать auto чаще

 */

std::vector<int> foo() {
  return std::vector<int>(10, 0);
}

template <typename T>
std::vector<T> foo(T default_value) {
  return std::vector<T>(10, default_value);
}

////// Функция, возвращающая результат умножения двух чисел
//// template <typename T, typename U>
//// auto multiply(T a, U b) -> decltype(a * b) {
////   return a * b;
//// }

int main() {
  auto x = 10;       // компилятор определит тип x как int
  auto y = 3.14;     // компилятор определит тип y как double
  auto z = "Hello";  // компилятор определит тип z как const char*

  auto vec_non_template = foo();  // компилятор определит тип vec как std::vector<int>
  for (const auto& iter : vec_non_template) {
    std::cout << iter << " ";
  }
  std::cout << '\n';

  /*
      Компилятор инстарцирует шаблон функций для std::string и double
      после чего на этапе компиляции будет известно какого типа будет функция foo
      и для auto уже не будет никаких проблем с подстановкой типа =)
   */
  auto vec_string = foo<std::string>("hello");
  for (const auto& iter : vec_string) {
    std::cout << iter << " ";
  }
  std::cout << '\n';

  auto vec_double = foo<double>(3.14);
  for (const auto& iter : vec_double) {
    std::cout << iter << " ";
  }
  std::cout << '\n';

  std::vector<int> numbers = {1, 2, 3, 4, 5};

  /*
      Так же удобно пользоваться auto при итерации по STL контейнерам
  */

  std::vector<int> numbers = {1, 2, 3, 4, 5};

  // Без auto
  for (std::vector<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) {
    std::cout << *it << " ";
  }
  std::cout << '\n';

  // С auto
  for (auto it = numbers.begin(); it != numbers.end(); ++it) {
    std::cout << *it << " ";
  }
  std::cout << '\n';

  // Range Based For
  for (auto iter : numbers) {
    std::cout << iter << " ";
  }
  std::cout << '\n';

  /*
    Вывод типа при использовании auto
  */

  // Неявное преобразование типов
  auto a = 5.0;  // a - double
  auto b = 5;    // b - int

  // Использование с ссылками и указателями
  int x = 10;
  int& ref = x;

  auto copy = ref;      // copy - int, а не int&. Здесь создается копия x.
  auto& refCopy = ref;  // refCopy - int&, сохраняется ссылка на x.

  int arr[3] = {1, 2, 3};
  auto p = arr;  // p имеет тип int*, а не int[3]

  // При использовании auto константность и ссылки будут отбрасываться, но есть нюанс
  int x = 10;
  const int& y = x;

  auto a = y;         // a - int (копия значения y)
  const auto b = y;   // b - const int (неизменяемая копия y)
  auto& c = y;        // c - const int& (ссылка на y, не изменяемая)
  const auto& d = y;  // d - const int& (ссылка на y, не изменяемая)

  return 0;
}
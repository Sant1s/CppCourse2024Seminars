#include <iostream>

int main() {
  //* Напоминание: индексирование, как и подсчёт в целом происходит начиная с нуля(0).

  /*
    Массивы тесно связаны с указателями.
    По сути массив - это указатель на первый элемент
  */

  int arr[5];
  for (int i = 0; i < 5; ++i) {
    std::cin >> arr[i];
  }

  std::cout << "Вот исходный массив: ";
  for (int i = 0; i < 5; ++i) {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;

  arr[4] = 1337;
  arr[2] = 228;

  std::cout << "Вот изменённый массив: ";
  for (int i = 0; i < 5; ++i) {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;

  /*
    Обращение за границы массива является UB (Undefined Behavior, неопределенное поведение)
  */

  std::cout << arr[6] << std::endl;  // обратимся недалеко. Скорее всего, выдаст рандомное число

  /*
    обратимся чуть-чуть подальше.
    Скорее всего получим "segmentation fault (core dumped)"
  */

  std::cout << arr[1000000] << std::endl;

  /*
    В памяти массив будет храниться цельным куском памяти
    То есть схематически вот так [1,2,3,4,5]
    А не вот так [1]...[2,3]...[4]... ...[5]

    По этому можно работать с арифметикой указателей и делать вот так *(arr+i),
    i - unsigned integer number (uint, uint*_t, suze_t, ... etc.)
  */

  int arr2[5] = {1, 2, 3, 4, 5};
  int* ptr = arr2;  // Указатель на первый элемент массива

  std::cout << *ptr << std::endl;        // Выведет 1 (нулевой элемент)
  std::cout << *(ptr + 1) << std::endl;  // Выведет 2 (первый элемент)

  *ptr + 1 = 12;  // Вот тут мы увеличиваем именно указатель (то есть адрес)

  *(ptr + 1) = 42;  // А вот так уже увеличиваем значение, под указателей (приоритет операций)
  // Про приоритет операций https://en.cppreference.com/w/cpp/language/operator_precedence

  for (int i = 0; i < 5; ++i) {
    std::cout << arr2[i] << "\n";
  }

  return 0;
}
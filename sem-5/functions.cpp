#include <iostream>

// Функция с передачей указателя на переменную
void modifyValue(int* ptr) {
  *ptr = 20;  // Изменяем значение по указателю
}

// Функция с передачей ссылки на переменную
void modifyValueRef(int& ref) {
  ref = 30;  // Изменяем значение по ссылке
}

// Передача массива в функцию (по сути указатель)
void printArray(const int* arr, int size) {
  for (int i = 0; i < size; ++i) {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;
}

// Функция, возвращающая указатель на динамический массив
int* createArray(int size) {
  int* newArray = new int[size];  // Динамическое выделение памяти
  for (int i = 0; i < size; ++i) {
    newArray[i] = i;  // Инициализация массива
  }
  return newArray;  // Возвращаем указатель на массив
}

// Пример использования const
void printConstValue(const int* ptr) {
  // ptr указывает на константные данные, изменение данных через ptr невозможно
  std::cout << "Const value: " << *ptr << std::endl;
}

int main() {
  // Передача указателя
  int value = 10;
  std::cout << "Original value: " << value << std::endl;
  modifyValue(&value);
  std::cout << "Modified value through pointer: " << value << std::endl;

  // Передача ссылки
  modifyValueRef(value);
  std::cout << "Modified value through reference: " << value << std::endl;

  // Передача массива
  int arr[] = {1, 2, 3, 4, 5};
  int size = sizeof(arr) / sizeof(arr[0]);
  printArray(arr, size);

  // Возврат указателя на массив
  int* dynamicArray = createArray(5);
  printArray(dynamicArray, 5);
  delete[] dynamicArray;  // Освобождение динамически выделенной памяти

  // Пример использования const
  const int constValue = 100;
  printConstValue(&constValue);

  return 0;
}

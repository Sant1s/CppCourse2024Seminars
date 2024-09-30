#include <iostream>
#include <cstring>  // Для работы с функциями cstring

void sortStrings(char arr[][20], int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (std::strcmp(arr[i], arr[j]) > 0) {
        char temp[20];
        std::strcpy(temp, arr[i]);
        std::strcpy(arr[i], arr[j]);
        std::strcpy(arr[j], temp);
      }
    }
  }
}

int main() {
  const char* str1 = "Hello";
  char str2[20];

  // Копирование строки
  std::strcpy(str2, str1);

  // Вывод строк
  std::cout << "String 1: " << str1 << std::endl;
  std::cout << "String 2: " << str2 << std::endl;

  // Вычисление длины строки
  std::cout << "Length of String 1: " << std::strlen(str1) << std::endl;

  return 0;

  // Безопасное копирование строки
  /*
    const char* source = "This is a long string";
    char destination[10];

    // Копируем только первые 9 символов (оставляем место для нуля)
    std::strncpy(destination, source, 9);
    destination[9] = '\0';  // Не забываем явно указать нуль-терминатор

    std::cout << "Source: " << source << std::endl;
    std::cout << "Destination: " << destination << std::endl;

    return 0;
  */

  // Сравнение строк с помощью strcmp
  /*
    const char* str1 = "apple";
    const char* str2 = "banana";

    int result = std::strcmp(str1, str2);

    if (result == 0) {
      std::cout << "Strings are equal." << std::endl;
    } else if (result < 0) {
      std::cout << "str1 is less than str2." << std::endl;
    } else {
      std::cout << "str1 is greater than str2." << std::endl;
    }

    return 0;
  */

  // Конкатенация строк с помощью strcat
  /*
    char str1[50] = "Hello, ";
    const char* str2 = "World!";

    // Объединяем строки
    std::strcat(str1, str2);

    std::cout << "Result: " << str1 << std::endl;

    return 0;
  */

  // Безопасная конкатенация строк с помощью strncat
  /*
    char str1[50] = "Hello, ";
    const char* str2 = "World!";

    // Конкатенируем только 3 символа из str2
    std::strncat(str1, str2, 3);

    std::cout << "Result: " << str1 << std::endl;

    return 0;
  */

  // Вычисление длины строки с помощью strlen
  /*
    const char* str = "Hello, World!";

    // Вычисляем длину строки
    std::size_t length = std::strlen(str);

    std::cout << "Length of the string is: " << length << std::endl;

    return 0;
  */

  // Поиск подстроки с помощью strstr
  /*
    const char* str = "Hello, World!";
    const char* substr = "World";

    // Ищем подстроку в строке
    const char* result = std::strstr(str, substr);

    if (result) {
      std::cout << "Substring found: " << result << std::endl;
    } else {
      std::cout << "Substring not found." << std::endl;
    }

    return 0;
  */

  // Копирование части строки с помощью memcpy
  /*
    const char* source = "Hello, memcpy!";
    char destination[20];

    // Копируем первые 5 символов
    std::memcpy(destination, source, 5);
    destination[5] = '\0';  // Добавляем нуль-терминатор вручную

    std::cout << "Source: " << source << std::endl;
    std::cout << "Copied part: " << destination << std::endl;

    return 0;
  */

  // Пример работы с strtok — разбиение строки на токены
  /*
    char str[] = "Hello, how are you?";
    const char* delimiters = " ,?";

    // Получаем первый токен
    char* token = std::strtok(str, delimiters);

    // Печатаем все токены
    while (token != nullptr) {
      std::cout << "Token: " << token << std::endl;
      token = std::strtok(nullptr, delimiters);
    }

    return 0;
  */

  // Использование strcmp для сортировки строк
  /*
    char strings[5][20] = {"banana", "apple", "grape", "cherry", "orange"};

    int n = 5;
    sortStrings(strings, n);

    std::cout << "Sorted strings:" << std::endl;
    for (int i = 0; i < n; i++) {
      std::cout << strings[i] << std::endl;
    }

    return 0;
  */
}

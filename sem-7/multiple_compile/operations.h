#ifndef OPERATIONS_H  // проверка на включение блока кода
#define OPERATIONS_H  // включение боока кода

int add(int a, int b);
int multiply(int a, int b);

#endif  // конец блока защиты от многократного включения

/*
    При использовании заголовочного файла
    каждый раз, когда мы пишем #include<...>
    Код из этого файла, фактически записывается в
    тот файл, в который мы его включили

    Директивы включение (include guards) позволяют
    нам избежать случая дублирования кода
*/

// Аналог include grants
#pragma once

/*

    Делает тоже самое, только пишется проще =)
    Используется с более новых версиях компиляторов
    Помогает избежать ошибки "человеческого фактора"

*/
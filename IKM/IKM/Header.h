#pragma once

#ifndef FACTORIAL_SUM_H // Проверка на многократное включение
#define FACTORIAL_SUM_H // Определяем макрос для предотвращения повторного подключения

#include <string> // Подключаем библиотеку для работы со строками

using namespace std;
// Функция для вычисления факториала
long long factorial(int n);

// Функция для нахождения НОД двух чисел
long long gcd(long long a, long long b);

// Функция для вычисления суммы дробей
// Возвращает числитель и знаменатель по ссылкам
void calculateSum(int n, long long& numerator, long long& denominator);

// Функция для форматирования ответа в виде строки "P / Q"
string formatFraction(long long numerator, long long denominator);

#endif // FACTORIAL_SUM_H
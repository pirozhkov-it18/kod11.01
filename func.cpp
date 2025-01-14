#include "Header.h" // Подключаем заголовочный файл с объявлениями функций

using namespace std;
// Функция для вычисления факториала числа n
long long factorial(int n) {
    long long result = 1;         // Начальное значение факториала
    for (int i = 2; i <= n; ++i) { // Перебираем числа от 2 до n
        result *= i;              // Умножаем текущее значение на i
    }
    return result;                // Возвращаем вычисленный факториал
}

// Функция для нахождения НОД двух чисел с использованием алгоритма Евклида
long long gcd(long long a, long long b) {
    while (b != 0) {              // Пока b не равно 0
        long long temp = b;       // Сохраняем значение b
        b = a % b;                // Остаток от деления a на b
        a = temp;                 // Меняем местами a и b
    }
    return a;                     // Возвращаем НОД
}

// Функция для вычисления суммы дробей
void calculateSum(int n, long long& numerator, long long& denominator) {
    numerator = 0;                // Инициализируем числитель суммы
    denominator = 1;              // Инициализируем знаменатель суммы

    // Проходим по каждому числу от 1 до n
    for (int i = 1; i <= n; ++i) {
        long long currentFactorial = factorial(i); // Вычисляем факториал i!

        // Приведение к общему знаменателю:
        // Умножаем числитель на текущий знаменатель и прибавляем дробь
        numerator = numerator * currentFactorial + denominator;
        denominator *= currentFactorial;          // Обновляем знаменатель

        // Сокращение дроби с помощью НОД
        long long commonDivisor = gcd(numerator, denominator);
        numerator /= commonDivisor;              // Делим числитель на НОД
        denominator /= commonDivisor;            // Делим знаменатель на НОД
    }
}

// Функция для форматирования результата в виде строки "P / Q"
string formatFraction(long long numerator, long long denominator) {
    return to_string(numerator) + " / " + to_string(denominator);
}
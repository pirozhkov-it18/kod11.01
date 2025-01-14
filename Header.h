#pragma once

#ifndef FACTORIAL_SUM_H // �������� �� ������������ ���������
#define FACTORIAL_SUM_H // ���������� ������ ��� �������������� ���������� �����������

#include <string> // ���������� ���������� ��� ������ �� ��������

using namespace std;
// ������� ��� ���������� ����������
long long factorial(int n);

// ������� ��� ���������� ��� ���� �����
long long gcd(long long a, long long b);

// ������� ��� ���������� ����� ������
// ���������� ��������� � ����������� �� �������
void calculateSum(int n, long long& numerator, long long& denominator);

// ������� ��� �������������� ������ � ���� ������ "P / Q"
string formatFraction(long long numerator, long long denominator);

#endif // FACTORIAL_SUM_H
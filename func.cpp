#include "Header.h" // ���������� ������������ ���� � ������������ �������

using namespace std;
// ������� ��� ���������� ���������� ����� n
long long factorial(int n) {
    long long result = 1;         // ��������� �������� ����������
    for (int i = 2; i <= n; ++i) { // ���������� ����� �� 2 �� n
        result *= i;              // �������� ������� �������� �� i
    }
    return result;                // ���������� ����������� ���������
}

// ������� ��� ���������� ��� ���� ����� � �������������� ��������� �������
long long gcd(long long a, long long b) {
    while (b != 0) {              // ���� b �� ����� 0
        long long temp = b;       // ��������� �������� b
        b = a % b;                // ������� �� ������� a �� b
        a = temp;                 // ������ ������� a � b
    }
    return a;                     // ���������� ���
}

// ������� ��� ���������� ����� ������
void calculateSum(int n, long long& numerator, long long& denominator) {
    numerator = 0;                // �������������� ��������� �����
    denominator = 1;              // �������������� ����������� �����

    // �������� �� ������� ����� �� 1 �� n
    for (int i = 1; i <= n; ++i) {
        long long currentFactorial = factorial(i); // ��������� ��������� i!

        // ���������� � ������ �����������:
        // �������� ��������� �� ������� ����������� � ���������� �����
        numerator = numerator * currentFactorial + denominator;
        denominator *= currentFactorial;          // ��������� �����������

        // ���������� ����� � ������� ���
        long long commonDivisor = gcd(numerator, denominator);
        numerator /= commonDivisor;              // ����� ��������� �� ���
        denominator /= commonDivisor;            // ����� ����������� �� ���
    }
}

// ������� ��� �������������� ���������� � ���� ������ "P / Q"
string formatFraction(long long numerator, long long denominator) {
    return to_string(numerator) + " / " + to_string(denominator);
}
#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    setlocale(LC_ALL, "rus");
    int n;
    double sum = 0.0;

    cout << "������� �������� n (> 10): ";
    cin >> n;

    if (n <= 10) {
        cout << "������, ������������ ����. ";
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        double fact = factorial(i);
        sum += 1.0 / fact;
    }

    // ����� ������������ �����
    // ��� �������� ������� ���������� �����
    cout.precision(10);
    cout << "C����: " << sum << endl;

    return 0;
}
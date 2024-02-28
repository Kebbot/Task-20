#include <iostream>
#include <string.h>
#include <stdio.h>
#include <time.h>
#include <cmath>
#include <iomanip>
#include <windows.h>
using namespace std;

struct ComplexNumber {
public:
    ComplexNumber();
    ComplexNumber(double a, double b);
    ComplexNumber plus(ComplexNumber&);
    ComplexNumber minus(ComplexNumber&);
    ComplexNumber multiply(ComplexNumber&);
    ComplexNumber divide(ComplexNumber&);
    void print();
    void setA(double a);
    void setB(double b);
    void read();
private:
    double a, b;
};

ComplexNumber::ComplexNumber() {
    a = 0;
    b = 0;
}

ComplexNumber::ComplexNumber(double a, double b) {
    this->a = a;
    this->b = b;
}

void ComplexNumber::setA(double a) {
    this->a = a;
}

void ComplexNumber::setB(double b) {
    this->b = b;
}

void ComplexNumber::read() {
    cout << "Введите вещественную часть: ";
    cin >> a;
    cout << "Введите мнимую часть: ";
    cin >> b;
}

void ComplexNumber::print() {
    cout << a << (b > 0 ? "+" : "") << b << "*i\n";
}

ComplexNumber ComplexNumber::plus(ComplexNumber& right) {
    return ComplexNumber(this->a + right.a, this->b + right.b);
}

ComplexNumber ComplexNumber::minus(ComplexNumber& right) {
    return ComplexNumber(this->a - right.a, this->b - right.b);
}

ComplexNumber ComplexNumber::multiply(ComplexNumber& right) {
    double a = this->a,
        b = this->b,
        c = right.a,
        d = right.b;
    return ComplexNumber(a * c - b * d, b * c + a * d);
}

ComplexNumber ComplexNumber::divide(ComplexNumber& right) {
    double a = this->a,
        b = this->b,
        c = right.a,
        d = right.b;
    double resultA = (a * c + b * d) / (c * c + d * d),
        resultB = (b * c - a * d) / (c * c + d * d);
    return ComplexNumber(resultA, resultB);
}

int menu() {
    int answer;
    cout << "\n1 - Сложить\n"
        << "2 - Вычесть\n"
        << "3 - Умножить\n"
        << "4 - Разделить\n"
        << "0 - Выход из программы\n"
        << "> ";
    cin >> answer;
    cout << endl;
    return answer;
}

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    setlocale(LC_ALL, "Rus");
    srand((int)time(NULL));

    ComplexNumber a, b, result;
    int answer;
    do {
        answer = menu();
        if (answer != 0) {
            cout << "Число А\n";
            a.read();
            cout << "Число B\n";
            b.read();
        }
        switch (answer) {
        case 0:
            break;
        case 1:
            result = a.plus(b);
            break;
        case 2:
            result = a.minus(b);
            break;
        case 3:
            result = a.multiply(b);
            break;
        case 4:
            result = a.divide(b);
            break;
        }
        if (answer != 0) {
            cout << "Результат: ";
            result.print();
        }
    } while (answer != 0);
}

#include <iostream>
#include <string.h>
#include <stdio.h>
#include <time.h>
#include <cmath>
#include <iomanip>
#include <windows.h>
using namespace std;

struct car
{
    float dlina; // длинна 
    float clirence; //высота посадки
    float obDvig; //объем двигателя
    float silDvig; //мощьность двигателя
    float diametr_koles; // Диаметр колес
    char color[15]; // цвет авто
    char korobka[15]; //тип коробки передач 
};

car zapolnen()
{
    car temp;
    cout << "Введите длинну автомобиля: ";
    cin >> temp.dlina;
    cout << "Введите высоту посадки автомобиля: ";
    cin >> temp.clirence;
    cout << "Введите объем двигателя автомобиля: ";
    cin >> temp.obDvig;
    cout << "Введите мощность двигателя автомобиля: ";
    cin >> temp.silDvig;
    cout << "Введите диаметр колес автомобиля: ";
    cin >> temp.diametr_koles;
    cout << "Введите цвет автомобиля: ";
    cin >> temp.color;
    cout << "Введите тип коробки передач автомобиля: ";
    cin >> temp.korobka;
    return temp;
}

void print(car a)
{
    cout << endl;
    cout << "Вы ввели следующие данные: " << endl;
    cout << "Длинна автомобиля: " << a.dlina << endl;
    cout << "Высота посадки: " << a.clirence << endl;
    cout << "Объем двигателя: " << a.obDvig << endl;
    cout << "Мощьность двигателя: " << a.silDvig << endl;
    cout << "Диаметр колес: " << a.diametr_koles << endl;
    cout << "Цвет автомобиля: " << a.color << endl;
    cout << "Тип коробки передачи: " << a.korobka << endl;
    cout << endl;

}

int menu() {
    int answer;
    cout << endl;
    cout << "Какой параметр Вам необходимо найти из введеных?\n";
    cout << "\n1 - Длинна\n"
        << "2 - Высота посадки\n"
        << "3 - Объем двигателя\n"
        << "4 - Мощьность двигателя\n"
        << "5 - Диаметр колес\n"
        << "6 - Цвет автомобиля\n"
        << "7 - Тип коробки передачи\n"
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



    car temp = zapolnen();
    print(temp);

    car result;
    int answer = menu();
    switch (answer) {
    case 0:
        break;
    case 1:
        cout << temp.dlina;
        break;
    case 2:
        cout << temp.clirence;
        break;
    case 3:
        cout << temp.obDvig;
        break;
    case 4:
        cout << temp.silDvig;
        break;
    case 5:
        cout << temp.diametr_koles;
        break;
    case 6:
        cout << temp.color;
        break;
    case 7:
        cout << temp.korobka;
        break;
    }
    return 0;
}

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
    float dlina; // ������ 
    float clirence; //������ �������
    float obDvig; //����� ���������
    float silDvig; //��������� ���������
    float diametr_koles; // ������� �����
    char color[15]; // ���� ����
    char korobka[15]; //��� ������� ������� 
};

car zapolnen()
{
    car temp;
    cout << "������� ������ ����������: ";
    cin >> temp.dlina;
    cout << "������� ������ ������� ����������: ";
    cin >> temp.clirence;
    cout << "������� ����� ��������� ����������: ";
    cin >> temp.obDvig;
    cout << "������� �������� ��������� ����������: ";
    cin >> temp.silDvig;
    cout << "������� ������� ����� ����������: ";
    cin >> temp.diametr_koles;
    cout << "������� ���� ����������: ";
    cin >> temp.color;
    cout << "������� ��� ������� ������� ����������: ";
    cin >> temp.korobka;
    return temp;
}

void print(car a)
{
    cout << endl;
    cout << "�� ����� ��������� ������: " << endl;
    cout << "������ ����������: " << a.dlina << endl;
    cout << "������ �������: " << a.clirence << endl;
    cout << "����� ���������: " << a.obDvig << endl;
    cout << "��������� ���������: " << a.silDvig << endl;
    cout << "������� �����: " << a.diametr_koles << endl;
    cout << "���� ����������: " << a.color << endl;
    cout << "��� ������� ��������: " << a.korobka << endl;
    cout << endl;

}

int menu() {
    int answer;
    cout << endl;
    cout << "����� �������� ��� ���������� ����� �� ��������?\n";
    cout << "\n1 - ������\n"
        << "2 - ������ �������\n"
        << "3 - ����� ���������\n"
        << "4 - ��������� ���������\n"
        << "5 - ������� �����\n"
        << "6 - ���� ����������\n"
        << "7 - ��� ������� ��������\n"
        << "0 - ����� �� ���������\n"
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

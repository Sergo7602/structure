﻿#include <iostream>
using namespace std;
enum months {
    Exit,
    Январь,
    Февраль,
    Март,
    Апрель,
    Май,
    Июнь,
    Июль,
    Август,
    Сентябрь,
    Октябрь,
    Ноябрь,
    Декабрь,
};
int main() {
    int mn;
    bool temp = true;

    do {
        cout << "Введите номер месяца: ";
        cin >> mn;

        months month = static_cast<months>(mn);

        switch (month) {
        case months::Exit:
            temp = false;
            cout << "До свидания";
            break;
        case months::Январь:
            cout << "Январь" << endl;
            break;
        case months::Февраль:
            cout << "Февраль" << endl;
            break;
        case months::Март:
            cout << "Март" << endl;
            break;
        case months::Апрель:
            cout << "Апрель" << endl;
            break;
        case months::Май:
            cout << "Май" << endl;
            break;
        case months::Июнь:
            cout << "Июнь" << endl;
            break;
        case months::Июль:
            cout << "Июль" << endl;
            break;
        case months::Август:
            cout << "Август" << endl;
            break;
        case months::Сентябрь:
            cout << "Сентябрь" << endl;
            break;
        case months::Октябрь:
            cout << "Октябрь" << endl;
            break;
        case months::Ноябрь:
            cout << "Ноябрь" << endl;
            break;
        case months::Декабрь:
            cout << "Декабрь" << endl;
            break;
        }
    } while (temp);
}
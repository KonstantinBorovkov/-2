#include <iostream>
using namespace std;

int main() {
    char operation;
    double num1, num2, result;

    cout << "Доступные операции:" << endl;
    cout << "+ - сложение" << endl;
    cout << "- - вычитание" << endl;
    cout << "* - умножение" << endl;
    cout << "/ - деление" << endl;
    cout << "% - деление по модулю (остаток от деления)" << endl;

    cout << "Выберите операцию: ";
    cin >> operation;

    cout << "Введите первое число: ";
    cin >> num1;

    cout << "Введите второе число: ";
    cin >> num2;

    if (operation == '+') {
        result = num1 + num2;
        cout << "[ + ] Результат: " << num1 << " + " << num2 << " = " << result << endl;
    }
    else if (operation == '-') {
        result = num1 - num2;
        cout << "[ + ] Результат: " << num1 << " - " << num2 << " = " << result << endl;
    }
    else if (operation == '*') {
        result = num1 * num2;
        cout << "[ + ] Результат: " << num1 << " * " << num2 << " = " << result << endl;
    }
    else if (operation == '/') {
        if (num2 != 0) {
            result = num1 / num2;
            cout << "[ + ] Результат: " << num1 << " / " << num2 << " = " << result << endl;
        }
        else {
            cout << "[ - ] Ошибка: Деление на ноль запрещено!" << endl;
            return 1;
        }
    }
    else if (operation == '%') {
        if (num2 != 0) {
            int intNum1 = static_cast<int>(num1);
            int intNum2 = static_cast<int>(num2);
            result = intNum1 % intNum2;
            cout << "[ + ] Результат: " << intNum1 << " % " << intNum2 << " = " << result << endl;
        }
        else {
            cout << "[ - ] Ошибка: Деление на ноль запрещено!" << endl;
            return 1;
        }
    }
    else {
        cout << "[ - ] Ошибка: Неизвестная операция!" << endl;
        return 1;
    }

    return 0;
}

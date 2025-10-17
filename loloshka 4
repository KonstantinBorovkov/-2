#include <iostream>
using namespace std;

int main() {
    int userNumber;
 
    cout << "[ + ] Введите число: ";
    cin >> userNumber;

    int programMultiplier = 1;

    
    while (programMultiplier <= 9) {
        
        cout << "[ + ] Решите пример: " << userNumber << " x " << programMultiplier << endl; 

        cout << "[ + ] Ответ: ";
        int userAnswer;
        cin >> userAnswer;

        int correctAnswer = userNumber * programMultiplier;

        if (userAnswer == correctAnswer) {
            cout << "[ + ] Пример решен правильно!" << endl;
            programMultiplier++;
        }
        else {
            cout << "[ - ] Ошибка, пример решен неверно!" << endl;
            return 0; 
        }
    }

    cout << "[ + ] Примеры решены, поздравляем!" << endl;

    return 0;

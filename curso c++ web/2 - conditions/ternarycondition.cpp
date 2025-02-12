#include <iostream>

using namespace std;

int main()
{
    // int grade;

    // cout << "Enter your grade" << endl;
    // cin >> grade;

    // grade >= 18 ? cout << "OK" : cout << "Not OK";

    float num1, num2;
    cout << "First number: ";
    cin >> num1;

    cout << "Second number: ";
    cin >> num2;

    cout << "Soma         : " << num1 + num2 << endl;
    cout << "Subtracao    : " << num1 - num2 << endl;
    cout << "Multiplicacao: " << num1 * num2 << endl;
    num2 == 0 ? cout << "Não pode divir número por 0" << endl : cout << "Divisao      : " << num1 / num2 << endl;
    cout << "Modulo       : " << (int)num1 % (int)num2 << endl;
    cout << "Porcentagem  : " << 100.0 * (num1 / num2) << endl;
    cout << "Media        : " << (num1 + num2) / 2 << endl;

    return 0;
}
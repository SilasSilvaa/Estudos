#include <iostream>

using namespace std;

int main()
{
    int option;

    cout << "1. Saque" << endl;
    cout << "2. Extrato" << endl;
    cout << "3. Transferência" << endl;
    cout << "4. Depósito" << endl;
    cout << "Digite sua opção: ";
    cin >> option;

    switch (option)
    {
    case 1:
        cout << "Opção selecionada: Saque" << endl;
        break;
    case 2:
        cout << "Opção selecionada: Extrato" << endl;
        break;
    case 3:
        cout << "Opção selecionada: Transferência" << endl;
        break;
    case 4:
        cout << "Opção selecionada: Depósito" << endl;
        break;
    default:
        cout << "Opção inválida" << endl;
        break;
    }

    char let;

    cout << "Digite uma letra: ";
    cin >> let;

    switch (let)
    {
    case 'a':
    case 'A':
        cout << "Você digitou A\n";
        break;

    case 'b':
    case 'B':
        cout << "Você digitou B\n";
        break;

    case 'c':
    case 'C':
        cout << "Você digitou C\n";
        break;

    default:
        cout << "Letra inválida";
    }
    return 0;
}
#include <iostream>

using namespace std;

int main()
{
    // && (and)

    int age;

    cout << "Enter your age" << endl;
    cin >> age;

    if (age >= 18 && age < 65)
    {
        cout << "Obrigatório votar " << endl;
    }
    else
    {
        cout << "Voto facultativo" << endl;
    }

    // || (or)
    int speed;

    cout << "Velocidade: " << endl;
    cin >> speed;

    if (speed < 40 || speed > 80)
    {
        cout << "Vai levar multa" << endl;
    }
    else
    {
        cout << "Tudo ok" << endl;
    }

    //! (not)
    if (!(speed < 40 || speed > 80))
    {
        cout << "Tudo OK" << endl;
    }
    else
    {
        cout << "Vai levar multa" << endl;
    }

    int year;
    cout << "Ano:" << endl;
    cin >> year;

    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
    {
        cout << "É bissexto" << endl;
    }
    else
    {
        cout << "Não é bissexto" << endl;
    }

    return 0;
}
#include <iostream>

using namespace std;

int main()
{
    int age;

    cout << "Enter your age" << endl;
    cin >> age;

    if (age >= 18)
        cout << "You are of age";

    float num1, num2;

    cout << "Enter number 1 and number 2" << endl;
    cin >> num1 >> num2;

    if (num1 == num2)
    {
        cout << "It's iquals"
    }
    else
    {
        if (num1 > num2)
        {
            cout << "Number 1 > Number 2" << endl;
        }
        else
        {
            cout << "Number 2 > Number 1" << endl;
        }
    }

    // Exercise
    int nassword;

    cout << "Enter number" << endl;
    cin >> number;

    if (number != 2112)
    {
        cout << "Number incorrect"
    }
    else
    {
        cout << "Number correct"
    }

    float sal, tax;

    cout << "Enter your salary" << endl;
    cin >> sal;

    if (sal > 3.000)
    {
        tax = 0.20;
        cout >> "Tax due " << tax * sal << endl;
    }
    else
    {
        tax = 0.15;
        cout >> "Tax due " << tax * sal << endl;
    }

    int num;

    cout << "Enter number " << endl;
    cin >> num;

    if (num % 2 == 0)
    {
        cout << "Odd number" << endl;
    }
    else
    {
        cout << "Even number" << endl;
    }

    return 0;
}
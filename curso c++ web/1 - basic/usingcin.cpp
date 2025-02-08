#include <iostream>
#include <string>

using namespace std;

int main()
{

    int age;
    cout << "Enter age" << endl;
    cin >> age;
    cout << "your age is " << age << endl;

    float num1, num2, sum;
    cout << "Firt number" << endl;
    cin >> num1;

    cout << "Second number" << endl;
    cin >> num2;

    sum = num1 + num2;

    cout << "The sum is " << sum << endl;

    cout << "Enter two numbers" << endl;
    cin >> num1 >> num2;

    char name[50];
    cout << "enter your name" << endl;
    getline(name);
    cout << name;

    bool val;
    cout << "Enter anything" << endl;
    cin >> val;
    cout << val;

    int num, b, l1, l2;
    cout << "Enter a value" << endl;
    cin >> num;
    cout << pow(num, 2);

    cout << "Digite o lado e a base" << endl;
    cin >> num >> b;
    cout << "A área é " << b * num;

    return 0;
}
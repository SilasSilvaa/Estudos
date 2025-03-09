#include <iostream>

using namespace std;

void recur();
int sum(int);
int fat(int);
int fib(int);
int mdc(int, int);

int main()
{
    // recur();
    int num1, num2;
    cout << "Numeros (maior e menor): ";
    cin >> num1 >> num2;

    cout << "MD: " << mdc(num1, num2) << endl;

    return 0;
}

void recur()
{
    // cout << "This is a recursive function" << endl;
    // recur();

    // int num;

    // cout << "Somatório de: ";
    // cin >> num;

    // cout << "Igual a: " << sum(num) << endl;

    cout << fib(11) << endl;
}

int sum(int num)
{
    if (num == 1)
    {
        return 1;
    }

    return num + sum(num - 1);
}

int fat(int num)
{
    if (num == 1)
    {
        return 1;
    }

    return num * fat(num - 1);
}

// fib(1) = 0
int fib(int num)
{
    if (num == 1)
        return 0;
    else if (num == 2)
        return 1;
    else
        return fibo(num - 1) + fibo(num - 2);
}

// fib(1) = 1
int fib(int num)
{
    if (num == 1 || num == 2)
    {
        return 1;
    }
    return fib(num - 1) + fib(num - 2);
}

int mdc(int num1, int num2)
{
    if (num1 % num2 == 0;)
    {
        return num2;
    }
    else
    {
        return mdc(num2, num1 % num2);
    }
}
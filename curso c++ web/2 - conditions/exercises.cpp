#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // int num1, num2;

    // cout << "Enter number 1 and number 2" << endl;
    // cin >> num1 >> num2;

    // if (num1 == num2)
    // {
    //     cout << "Its iquals";
    // }
    // else if (num1 > num2)
    // {
    //     cout << "Number 1 > number 2";
    // }
    // else
    // {
    //     cout << "Number 2 > number 1";
    // }

    // ---------------------

    // int num1;
    // cout << "Enter number" << endl;
    // cin >> num1;

    // num1 > 0 ? cout << "Number is positve" : cout << "Number is negative";

    // ---------------------

    // int num1, num2, aux;

    // cout << "Enter number 1 and number 2" << endl;
    // cin >> num1 >> num2;

    // aux = num1;
    // num1 = num2;
    // num2 = aux;

    // cout << "Number 1: " << num1 << " Number 2: " << num2;

    // ---------------------

    // int num1, num2, num3, temp;
    // cout << "Enter number 1, number 2, number 3" << endl;
    // cin >> num1 >> num2 >> num3;

    // if (num2 > num1)
    // {
    //     temp = num2;
    //     num2 = num1;
    //     num1 = temp;
    // }

    // if (num3 > num1)
    // {
    //     temp = num3;
    //     num3 = num1;
    //     num1 = temp;
    // }

    // if (num3 > num2)
    // {
    //     temp = num3;
    //     num3 = num2;
    //     num2 = temp;
    // }

    // cout << num1 << " " << num2 << " " << num3 << endl;

    // ---------------------

    // int x, y;

    // cout << "Enter x value and y value" << endl;
    // cin >> x >> y;

    // if (x > 0 && y > 0)
    // {
    //     cout << "1";
    // }
    // else if (x > 0 && y < 0)
    // {
    //     cout << "3";
    // }
    // else if (x < 0 && y > 0)
    // {
    //     cout << "4";
    // }
    // else
    // {
    //     cout << "3";
    // }

    // int val1, val2;
    // char op;

    // cout << "Enter value 1 and value 2" << endl;
    // cin >> val1 >> val2;

    // cout << "Enter operation method (*, +, -, /) ";
    // cin >> op;

    // switch (op)
    // {
    // case '+':
    //     cout << val1 + val2;
    //     break;

    // case '-':
    //     cout << val1 - val2;
    //     break;

    // case '*':
    //     cout << val1 * val2;
    //     break;

    // case '/':
    //     val2 <= 0 ? cout << "Operation not allowed" : cout << val1 / val2;
    //     break;
    // default:
    //     break;
    // }

    // ---------------------

    float a, b, c, delta, x;

    cout << "Enter value a, b, c" << endl;
    cin >> a >> b >> c;

    if (a == 0)
    {
        cout << "Value (a) not be negative";
        return 0;
    }

    delta = pow(b, 2) - 4 * a * c;

    if (delta < 0)
    {
        cout << "has no real roots";
    }
    else if (delta == 0)
    {

        x = (-b + sqrt(delta)) / (2 * a);
        cout << x << endl;

        x = (-b - sqrt(delta)) / (2 * a);
        cout << x << endl;
    }
    else
    {
        x = (-b + sqrt(delta)) / (2 * a);
        cout << x << endl;
    }

    return 0;
}
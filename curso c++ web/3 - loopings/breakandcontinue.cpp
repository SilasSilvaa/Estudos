#include <iostream>

using namespace std;

int main()
{

    // break

    int aux = 0;
    float num, sum = 0;

    while (true)
    {
        cout << "Enter num" << endl;
        cin >> num;

        if (num < 0 || num > 10)
        {
            break;
        }

        sum += num;
        aux++
    }

    cout << "Average: " << (sum / aux) << endl;

    // continue

    int sum = 0;

    for (int i = 0; i < 10; i++)
    {
        if (i % 4 = 0)
        {
            continue;
        }

        sum += i;
    }

    cout << sum << endl;

    // ------------

    int aux = 0;
    float num, sum = 0;

    while (true)
    {
        cout << "Enter number" << endl;
        cin >> num;

        if (num > 10)
        {
            cout << "Enter a number less than 10" << endl;
            continue;
        }

        if (num < 0)
        {
            cout << "Number invalid" << endl;
            break;
        }

        sum += num;
        aux++;
    }

    cout << "Avarege: " << (sum / aux) << endl;

    return 0;
}
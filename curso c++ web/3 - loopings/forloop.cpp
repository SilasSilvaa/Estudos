#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    for (int count = 0; count < 100; count += 2)
    {
        cout << count << " ";
    }

    int n;
    float grade, sum = 0;

    cout << "Enter the number of materials" << endl;
    cin >> n;

    for (int aux = 1; aux <= n; aux++)
    {
        cout << "Nota " << aux << endl;
        cin >> grade;
        sum += grade;
    }

    cout << "Average" << (sum / n);

    // ---------------------

    // Exercise

    int num;

    cout << "Enter number" << endl;
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        cout << num << " X " << i << " = " << num * i << endl;
    }

    int n, prod = 1;

    cout << "Enter number" << endl;
    cin >> n;

    for (int i = n; i > 0; i--)
    {
        prod *= i;
        cout << prod << " ";
    }

    // ---------------------

    int n, ult = 1, penult = 0;

    cout << "Enter number " << endl;
    cin >> n;
    cout << endl;

    for (int i = 3; i < n; i++)
    {
        int next = ult + penult;

        cout << (next) << endl;

        penult = ult;
        ult = next;
    }

    // ---------------------

    int op = 1;
    do
    {
        int n, ult = 1, penult = 0;
        cout << "Enter number " << endl;
        cin >> n;
        cout << endl;

        for (int i = 3; i < n; i++)
        {
            int next = ult + penult;

            cout << (next) << endl;

            penult = ult;
            ult = next;
        }

        cout << "Enter 0 for exit" << endl;
        cin >> op;

    } while (op != 0);

    // ---------------------

    int number, expo, x = 1;

    cout << "Enter number: " << endl;
    cin >> number;

    cout << "Enter expo: " << endl;
    cin >> expo;

    for (int i = 0; i < expo; i++)
    {
        x *= number;
        cout << x << " ";
    }

    // ----------------------

    int n, num = 1;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << " - ";
        }
        cout << endl;
    }

    // ----------------------

    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            cout << setw(4) << num;
            num++;
        }
        cout << endl;
    }

    // ----------------------

    char a = '*';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << a;
        }
        cout << endl;
    }

    // ----------------------

    int h, s, m;

    cout.fill('0');

    for (h = 0; h < 24; h++)
    {
        for (m = 0; m < 60; m++)
        {
            for (s = 0; s < 60; s++)
            {
                cout << setw(2) << h << ":";
                cout << setw(2) << m << ":";
                cout << setw(2) << s << ":" << endl;
            }
        }
    }

    // ----------------------

    int dez1, dez2, dez3, dez4, dez5, dez6, sum = 0;

    for (dez1 = 1; dez1 <= 55; dez1++)
        for (dez2 = dez1 + 1; dez2 <= 56; dez2++)
            for (dez3 = dez2 + 1; dez3 <= 57; dez3++)
                for (dez4 = dez3 + 1; dez4 <= 58; dez4++)
                    for (dez5 = dez4 + 1; dez5 <= 59; dez5++)
                        for (dez6 = dez5 + 1; dez6 <= 60; dez6++)
                            sum++;

    cout << "Total : " << sum << endl;
    return 0;
}
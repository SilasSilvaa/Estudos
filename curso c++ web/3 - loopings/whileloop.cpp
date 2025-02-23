#include <iostream>

using namespace std;

int main()
{
    int count = 0;

    while (count <= 10)
    {
        cout << count << " ";
        count++;
    }

    int num, aux = 1;

    cout << "Enter number: " << endl;
    cin >> num;

    while (aux <= 10)
    {
        cout << num << " x " << aux << " = " << num * aux << endl;
        aux++;
    }

    return 0;
}
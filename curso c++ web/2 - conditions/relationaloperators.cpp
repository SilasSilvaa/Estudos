#include <iostream>

using namespace std;

int main()
{
    cout << (1 == 1) << endl;
    cout << (1 == 2) << endl;

    cout << ('a' != 'b') << endl;

    cout << (10 > 20) << endl;
    cout << (10 >= 20) << endl;

    cout << (10 < 20) << endl;
    cout << (10 <= 20) << endl;

    // Exercise

    int val1, val2;

    cout << "Enter value 1 and 2" << endl;
    cin >> val1 >> val2;

    cout << val1 << " > " << val2 << (val1 > val2) << endl;
    cout << val1 << " >= " << val2 << (val1 >= val2) << endl;
    cout << val1 << " < " << val2 << (val1 < val2) << endl;
    cout << val1 << " <= " << val2 << (val1 <= val2) << endl;
    cout << val1 << " == " << val2 << (val1 == val2) << endl;
    cout << val1 << " != " << val2 << (val1 != val2) << endl;

    return 0;
}
#include <iostream>

using namespace std;

int main()
{
    int op;
    float grade1, grade2;

    do
    {
        cout << "Enter grade 1" << endl;
        cin >> grade1;

        cout << "Enter grade 2" << endl;
        cin >> grade2;

        cout << "Average: " << (grade1 + grade2) / 2 << endl;

        cout << "Calculate again?" << endl;
        cout << "1 - Yes" << endl;
        cout << "2 - No" << endl;
        cin >> op;

    } while (op != 2);

    return 0;
}
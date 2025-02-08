#include <iostream>

using namespace std;

int main()
{
    cout << "Variável 'int' ocupa   : " << sizeof(int) << " byte(s)" << endl;
    cout << "Variável 'char' ocupa  : " << sizeof(char) << " byte(s)" << endl;
    cout << "Variável 'float' ocupa : " << sizeof(float) << " byte(s)" << endl;
    cout << "Variável 'double' ocupa: " << sizeof(double) << " byte(s)" << endl;
    cout << "Variável 'bool' ocupa  : " << sizeof(bool) << " byte(s)" << endl;

    cout << "Variável 'short' ocupa           : " << sizeof(short) << " bytes" << endl;
    cout << "Variável 'unsigned short' ocupa  : " << sizeof(unsigned short) << " bytes" << endl;
    cout << "Variável 'unsigned int' ocupa    : " << sizeof(unsigned int) << " bytes" << endl;
    cout << "Variável 'long' ocupa            : " << sizeof(long) << " bytes" << endl;
    cout << "Variável 'unsigned long' ocupa   : " << sizeof(unsigned long) << " bytes" << endl;

    return 0;
}
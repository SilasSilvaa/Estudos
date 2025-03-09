#include <iostream>

using namespace std;

// Function prototypes
void menu();
void hello();
void menu_2();
void welcome();
void test();
void area(float = 1.0, float = 1.0);
void square_2(int &);
void func(int a, double b);
void func(double b, int a);
void func(int a, double b, double c);
int odd_or_even(int);
float sum(float, float);
float sub(float, float);
float mult(float, float);
float div(float, float);
float doub();
float square(float);
float cube(float);

int main()
{
    // hello();
    // menu();
    // welcome();

    // cout << doub() << endl;

    // odd_or_even(4) == 0 ? cout << "Odd" << endl : cout << "Even" << endl;

    // cout << square(10.4) << endl;

    // menu();

    // test();
    // test();
    // test();

    // cout << "Nenhum argumento passado:" << endl;
    // area();

    // cout << "\nPrimeiro argumento passado:" << endl;
    // area(2.0);

    // cout << "\nAmbos argumentos passados:" << endl;
    // area(2.0, 3.0);

    int number = 6.0;

    cout << "Antes  : num = " << number << endl;
    square_2(number);
    cout << "Depois : num = " << number << endl;

    return 0;
}

void menu()
{
    int op;
    float a, b;
    do
    {
        cout << "0. Sair\n";
        cout << "1. Somar\n";
        cout << "2. Subtrair\n";
        cout << "3. Multiplicar\n";
        cout << "4. Dividir\n";
        cin >> op;

        if (op)
        {
            cout << "\nPrimeiro numero: ";
            cin >> a;

            cout << "Segundo numero: ";
            cin >> b;

            switch (op)
            {
            case 1:
                cout << "Soma: " << sum(a, b) << endl;
                break;
            case 2:
                cout << "Diferença: " << sub(a, b) << endl;
                break;
            case 3:
                cout << "Produto: " << mult(a, b) << endl;
                break;
            case 4:
                if (b)
                    cout << "Divisão: " << div(a, b) << endl;
                else
                    div(a, b);
                break;
            default:
                cout << "Opção inválida\n";
            }
        }
        else
            cout << "Saindo...\n";
        cout << endl;
    } while (op);
}

// --------
float sum(float a, float b)
{
    return a + b;
}

float sub(float a, float b)
{
    return a - b;
}

float mult(float a, float b)
{
    return a * b;
}

float div(float a, float b)
{
    if (b != 0)
    {
        return a / b;
    }
    else
    {
        cout << "cannot be divide by zero" << endl;
        return 0;
    }
}
// --------

void hello()
{
    cout << "Hello" << endl;
}

void menu_2()
{
    cout << "Que período do dia está:\n";
    cout << "1. Manhã\n";
    cout << "2. Tarde\n";
    cout << "3. Noite\n";
}

void welcome()
{
    int op;
    cin >> op;

    if (op == 1)
        cout << "Bom dia!\n";
    else if (op == 2)
        cout << "Boa tarde!\n";
    else if (op == 3)
        cout << "Boa noite!\n";
    else
        cout << "Entrada inválida\n";
}

float doub()
{
    float num, n;

    cout << "Enter num" << endl;
    cin >> num;

    return (2 * num);
}

int odd_or_even(int num)
{
    if (num % 2 == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

float square(float num)
{
    return num * num;
}

float cube(float num)
{
    return num * num * num;
}

void test()
{
    static int num = 1;

    cout << num << " ";

    num++;
}

void area(float length, float width)
{
    cout << "Area " << length * width << endl;
}

void square_2(int &num)
{
    num = num * num;
    cout << "Durante: num = " << num << endl;
}

// Overloading
void func(int a, double b)
{
    cout << "Primeiro é int  : " << a << endl;
    cout << "Segundo é double: " << b << endl;
}

void func(int a, double b, double c)
{
    cout << a << b << c << endl;
}

void func(double b, int a)
{
    cout << "Primeiro é double: " << b << endl;
    cout << "Segundo é int    : " << a << endl;
}
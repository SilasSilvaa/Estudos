#include <iostream>

using namespace std;

int main()
{
    // --------------------------------
    float raio, area, perim;

    cout << "Raio: ";
    cin >> raio;

    area = 3.14 * pow(area, 2);
    perim = 2 * 3.14 * raio;

    cout << "Perímetro: " << perim << endl;
    cout << "Área: " << area << endl;

    // --------------------------------
    float raio, area;

    cout << "Raio: ";
    cin >> raio;

    area = 4 * 3.14 * pow(raio, 2);
    cout << "Área: " << area;

    // --------------------------------
    int age, total;

    cout << "Enter age: ";
    cin >> age;

    cout << "Your age in days is: " << age * 365 << " days";

    // --------------------------------
    int hour, minutes, totalMin, totalSec;

    cout << "Enter hour and minutes";
    cin >> hour >> minutes;

    totalMin = (hour * 60) + minutes;
    totalSec = totalMin * 60;

    cout << "Total in minutes: " << totalMin << endl;
    cout << "Total in Seconds: " << totalSec << endl;

    // --------------------------------
    int celsius, farenheit;

    cout << "Enter temperature: ";
    cin >> celsius;

    farenheit = (celsius * 1.8) + 32;
    cout << "Farenheit: " << farenheit;

    // --------------------------------
    int age, year, birthYear;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter current year: ";
    cin >> year;

    birthYear = year - age;

    cout << "Birth Year is: " << birthYear;
    cout << 2112.00 * 0.12;

    // --------------------------------
    double value;

    cout << "Enter value: " << endl;
    cin >> value;

    cout << value * 0.12;

    // --------------------------------
    double value, percentage;
    cout << "Enter value and percetage (ex: 0.10 == 10%)" << endl;
    cin >> value >> percentage;

    cout << value * percentage;

    // --------------------------------
    float val1, val2, result;

    cout << "Enter value 1 and value 2" << endl;
    cin >> val1 >> val2;

    if (val2 < val1)
    {
        cout << "The first value must be higher than the second value";
        return 0;
    }

    result = (val1 * 100) / val2;

    cout << result;

    // --------------------------------
    float salary, percentage, tax, grossSalary;

    cout << "Enter groos salary: " << endl;
    cin >> grossSalary;

    cout << "Enter tax: (ex: 0.10 == 10%)" << endl;
    cin >> percentage;

    tax = grossSalary * percentage;
    salary = grossSalary - tax;

    cout << "Gross Salary: " << grossSalary << endl;
    cout << "Tax: " << tax << endl;
    cout << "Salary: " << salary << endl;

    // --------------------------------
    float salary, inflation, newSalary;

    cout << "Enter the percetage of inflation: (ex: 0.10 == 10%)" << endl;
    cin >> inflation;

    cout << "Enter the salary: " << endl;
    cin >> salary;
    newSalary = salary + (salary * inflation);

    cout << "his current salary is: " << newSalary;

    // --------------------------------
    float limit, total;
    float tolerance = 0.15;

    cout << "Enter limit" << endl;
    cin >> limit;

    total = (limit * tolerance) + limit;

    cout << "The top of road is: " << total << endl;

    // --------------------------------
    int val1, val2, average;

    cout << "Enter value 1 and value 2";
    cin >> val1 >> val2;

    average = (val1 + val2) / 2;

    cout << "Average is " << average;

    // --------------------------------
    int val1, val2, val3, average;

    cout << "Enter value 1, value 2 and val3";
    cin >> val1 >> val2 >> val3;

    average = (val1 + val2 + val3) / 3;
    cout << "Average is " << average;

    // --------------------------------
    double math, physic, chemistry, portuguese, average;

    cout << "Enter math grade " << endl;
    cin >> math;

    cout << "Enter physic grade " << endl;
    cin >> physic;

    cout << "Enter chemistry grade " << endl;
    cin >> chemistry;

    cout << "Enter portuguese grade " << endl;
    cin >> portuguese;

    average = ((math * 3) + (physic * 2.5) + chemistry + portuguese) / 10;

    cout << "Average is " << average;

    // --------------------------------
    float num1, num2;
    cout << "First number: ";
    cin >> num1;

    cout << "Second number: ";
    cin >> num2;

    cout << "Soma         : " << num1 + num2 << endl;
    cout << "Subtracao    : " << num1 - num2 << endl;
    cout << "Multiplicacao: " << num1 * num2 << endl;
    cout << "Divisao      : " << num1 / num2 << endl;
    cout << "Modulo       : " << (int)num1 % (int)num2 << endl;
    cout << "Porcentagem  : " << 100.0 * (num1 / num2) << endl;
    cout << "Media        : " << (num1 + num2) / 2 << endl;

    return 0;
}
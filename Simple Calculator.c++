#include <iostream>
using namespace std;

float add(float x, float y)
{
    return x + y;
}

float sub(float x, float y)
{
    return x - y;
}

float mul(float x, float y)
{
    return x * y;
}

float divide(float x, float y)
{
    return x / y;
}

int main()
{
    float num1, num2;
    char op;

    cout << "!!! Simple Calculator !!!\n";

    cout << "Enter first Number: ";
    cin >> num1;

    cout << "Enter Second Number: ";
    cin >> num2;

    cout << "Enter Operator (+,-,*,/): ";
    cin >> op;

    if (op == '+')
        cout << "Result = " << add(num1, num2);
    else if (op == '-')
        cout << "Result = " << sub(num1, num2);
    else if (op == '*')
        cout << "Result = " << mul(num1, num2);
    else if (op == '/')
    {
        if (num2 == 0)
            cout << "Error! Division by zero is not allowed.";
        else
            cout << "Result = " << divide(num1, num2);
    }
    else
        cout << "Invalid Operator!";

    return 0;
}

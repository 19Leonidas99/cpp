#include <iostream>
#include <cmath>

using namespace std;

double Calculator()
{
    double num1, num2, result;
    char op;
    cout << "Enter num1: ";
    cin >> num1; 

    cout << "Enter operator: ";
    cin >> op;

    cout << "Enter num2: ";
    cin >> num2;
    
    if (op == '+'){
        result = num1 + num2;
    } else if (op == '-'){
        result = num1 - num2;
    } else if (op == '*') {
        result = num1 * num2;
    }else if (op == '/'){
        result = num1 / num2;
    } else {
        cout << "Invalid Operator";
    }

    return result;
}

int main()
{
    cout << Calculator() << endl;
}
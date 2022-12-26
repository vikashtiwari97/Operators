// Design a calculator to perform basic arithmetic operations (+,-,/,*,%)
#include <iostream>

using namespace std;
int main()
{
    float a, b;
    cout << "Enter the first number ";
    cin >> a;
    cout << "Enter the second number ";
    cin >> b;
    cout << "Sum = " << a + b << endl;
    cout << "Difference = " << a - b << endl;
    cout << "Product = " << a * b << endl;
    cout << "Division = " << a / b << endl;
    return 0;
}
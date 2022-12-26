// Write a program to calculate the sum of digits of a 3 digit number.
#include <iostream>

using namespace std;
int main()
{
    int a, first, second, third, sum;
    a = 123;
    /*Take out each digit of this number and then finally add the digits*/
    first = a / 100; // first digit
    a = a % 100;
    second = a / 10; // second digit
    third = a % 10;  // third digit
    sum = first + second + third;
    cout << "sum of 3 digits is: " << sum << endl;
    return 0;
}
// Write a program to calculate the sum of the first and the second last digit of a 5 digit number.
#include <iostream>

using namespace std;
int main()
{
    int a, first, second, third, fourth, fifth, sum;
    a = 12345;
    /*Take out each digit of this number and then finally add the first and the second last digits*/
    first = a / 10000; // first digit
    a = a % 10000;
    second = a / 1000; // second digit
    a = a % 1000;
    third = a / 100; // third digit
    a = a % 100;
    fourth = a / 10; // fourth digit
    fifth = a % 10;  // fifth digit
    sum = first + fourth;
    cout << "sum of first and fourth digit is: " << sum << endl;
    return 0;
}
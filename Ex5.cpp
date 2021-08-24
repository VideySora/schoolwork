/*
Write a program allow users to input an integer and test if the inputted number is a symmetrical number.

A number is symmetric if it is the same number whether you wrote its digits from left or right. 
For example: 123 is not a symmetrical number; 11 is a symmetrical number;
 -232 is a symmetrical nummber.
*/

#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a;
    int new_a = 0;
    b = a;
    while (a != 0)
    {
        new_a = new_a * 10 + a % 10;
        a /= 10;
    }
    if (b == new_a)
    {
        cout << 1;
    }
    else
    {
        cout << -1;
    }
}

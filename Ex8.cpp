#include <iostream>

using namespace std;

int main()
{
    int a, b, gcd;
    cin >> a >> b;
    if (a == 0 || b == 0)
    {
        gcd = a + b;
    }

    while (a != b)
    {
        if (a > b)
        {
            a -= b;
        }
        else if (b > a)
        {
            b -= a;
        }
    }

    if (a == 1)
    {
        cout << 1;
    }
    else
    {
        cout << -1;
    }
}

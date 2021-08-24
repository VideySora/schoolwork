#include <iostream>

using namespace std;

int main()
{
    int n, count = 0;
    int i = 2;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        count = 0;
        while (n % i == 0)
        {
            count++;
            n /= i;
        }
        if (count>=1)
        {
            cout << i;
            if (count > 1)
                cout << "^" << count;
            if (n > i)
            {
                cout << "*";
            }
        }
    }
}

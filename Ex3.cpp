#include <iostream>

using namespace std;

int main()
{
    double a;
    int count = 0;
    double Min = 0;
    do
    {
        cin >> a;
        if (a >= 0)
        {
            count += 1;
        }
        if (a <= Min)
        {
            Min = a;
        }
    } while (a != 0);
    cout << count << " " << Min;
    return 0;
}

#include <iostream>
using namespace std;

bool completnum(int N)
{
    int sum = 0;

    for (int i = 1; i <N ; i++)
    {
        if ((N % i) == 0)
        {
            sum += i;
        }
    }

    if (sum == N)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int N;
    cin >> N;
    if (completnum(N) == true)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}
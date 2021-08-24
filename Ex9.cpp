#include <iostream>

using namespace std;

int main()
{
    int m, j_min, n, max, min, i = 0;
    cin >> m >> n;
    int **arr = new int *[m];

    for (int i = 0; i < m; i++)
    {
        arr[i] = new int[n];
        for (int j = 0; i < n; i++)
        {
            cin >> arr[i][j];
        }
    }

    while (i < m)
    {
        min = arr[i][0];
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] < min)
            {
                j_min = j;
                min = arr[i][j_min];
            }
        }

        max = min;

        for (int i = 0; i < m; i++)
        {
            if (arr[i][j_min] > max)
            {
                max = arr[i][j_min];
            }
        }

        if (max == min)
        {
            break;
        }
        else
        {
            i++;
        }
    }

    if (max == min)
    {
        cout << arr[i][j_min];
    }
    else
    {
        cout << -1;
    }
}
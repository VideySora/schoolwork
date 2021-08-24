
// #include <iostream>
// #include<math.h>
// using namespace std;

// bool isPrime(int n) {
//   if (n <= 1) {
//     return false;
//   }
//   for (int i = 2; i <= sqrt(n); i++)
//   {
//     if (n % i ==0) {
//       return false;
//     }
//   }
//   return true;
// }

// int main()
// {
//   int n, num = -1;
//   cin>>n;
//   if (isPrime(n)) {
//     cout<<n<<" is a prime number"<<endl;
//   }
//   else {
//     cout<<n<<" is not a prime number"<<endl;
//   }

//   while(n > 0) {
//     num ++;
//     if (isPrime(num)) {
//       n --;
//     }
//   }
//   cout<<num;
// }

#include <iostream>
#include <math.h>
bool checkPrime(int n)
{
    int counts = 0;
    if (n < 2)
        return false;
    else
    {
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                counts++;
            }
            else
                ;
        }
        if (counts == 0)
            return true;
        else
            return false;
    }
}

using namespace std;

int main()
{
    int a;
    cin >> a;
    if (checkPrime(a) && a > 0)
    {
        for (int i = a + 1; i < 100000; i++)
        {
            if (checkPrime(i))
            {
                cout << a << " is a prime number" << endl;
                cout << i;
                break;
            }
        }
    }
    else if (checkPrime(a) && a < 0)
    {

        {
            cout << a << " is a prime number" << endl;
            cout << -1;
        }
    }

    else
    {
        cout << a << " is not a prime number" << endl;
        cout << -1;
    }
    return 0;
}

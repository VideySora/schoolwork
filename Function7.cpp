#include <iostream>
using namespace std;

int sum1(int array[], int numEls)
{
    int sum=0;
    for (int i = 0; i < numEls; i++)
    {
        sum += array[i];
    }
    return sum;
    
}

int main()
{
    int numEls;
    cin >> numEls;
    int* array= new int[numEls];
    for (int i = 0; i < numEls; i++)
    {
        cin>> array[i];
    }
    cout<<sum1(array, numEls);
    return 0;
}
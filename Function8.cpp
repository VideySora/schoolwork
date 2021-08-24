#include<iostream>
using namespace std;

void sum2(int * array, int numEls, int &result)
{
    result=0;
    for (int i = 0; i < numEls; i++)
    {
        result += array[i];
    }
    
}

int main(){
    int numEls;
    int result;
    cin>>numEls;
    int* array= new int[numEls];
    for (int i = 0; i < numEls; i++)
    {
        cin>>array[i];
    }
    sum2(array,numEls,result);
    cout<<result;

}
#include<iostream>
using namespace std;

int main(){
    int n;
    int Max, sum = 0;
    cin >> n;
    int* arr= new int[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    Max= arr[0];
    for (int i = 0; i < n; i++)
    {
        for(int j=i; j<n ; j++){
            //cout<<"i: "<<i<<endl;
            sum += arr[j];   
            //cout<<"sum: "<<sum<<endl;
            if(sum >= Max){
                Max = sum;
            }
            //cout<<"Max: "<<Max<<endl;
            //cout<<endl;
        }
        sum = 0;
    }

    cout<< Max;
    
    return 0;
}
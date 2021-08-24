#include <iostream>

using namespace std;
// implement calculate factorial function in here
long Factorial(int N){
    if(N==0){
        return 1;
    }
    return N*Factorial(N-1);   
}


int main(int narg, char** argv)
{
    int N;
    cin >> N;
    long result;
    // call function calculateFactorial in here and assign value to the variable result
    result = Factorial(N);


    cout << result << endl;
    return 0;
}
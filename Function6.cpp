#include <iostream>
using namespace std;

void sortedSquares(int *nums, int size)
{
    // TODO
    int temp;
    //square
    for (int i = 0; i < size; i++)
    {
        nums[i] = nums[i] * nums[i];
    }

    //sorted
    for (int i = 0; i < size; i++)
    {
        for (int j = size - 1; j > i; j--)
        {
            if (nums[i] > nums[j])
            {
                temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }

    //print
    for (int i = 0; i < size; i++)
    {
        if (i != size - 1)
        {
            cout << nums[i] << " ";
        }
        else
        {
            cout << nums[i];
        }
    }
}

int main()
{
    int size;
    cin >> size;
    int *nums = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> nums[i];
    }

    sortedSquares(nums, size);
}
#include <iostream>
using namespace std;

int flipBits(int arr[], int size)
{
    int ansArr[size];
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
            ansArr[i] = 1;
        else{
            ansArr[i] = -1;
            count++;
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << ansArr[i] << " ";
    }
    cout << endl;

    // kadane's algo
    int sum = 0, maxSum = INT16_MIN;
    for (int i = 0; i < size; i++)
    {
        sum += ansArr[i];
        if (sum < 0)
            sum = 0;
        maxSum = max(maxSum, sum);
    }
    cout << maxSum << " " << count << endl;

    return (count + maxSum);
}

int main()
{
    int array[6] = {0, 1, 1, 0, 0, 1};
    cout << flipBits(array, 6);
    return 0;
}
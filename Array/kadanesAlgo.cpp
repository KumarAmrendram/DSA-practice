#include <iostream>
using namespace std;

int kadanesAlgo(int arr[], int size)
{
    int sum = 0, MaxSum = INT16_MIN;

    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
        if (sum < 0)
            sum = 0;
        MaxSum = max(MaxSum, sum);
    }

    return MaxSum;
}

int main()
{
    int arr[7] = {1, -2, -3, 4, -1, 2, 1};
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << kadanesAlgo(arr, 7);

    return 0;
}


int kadane(int arr[], int n)
{
    // stores maximum sum subarray found so far
    int maxSum = 0;

    // stores the maximum sum of subarray ending at the current position
    int sum = 0;

    // traverse the given array
    for (int i = 0; i < n; i++)
    {
        /* update maximum sum of subarray "ending" at index i (by adding the current element to maximum sum ending at previous index i-1) */

        sum = sum + arr[i];

        /* if maximum sum is negative, set it to 0 (which represents an empty sub-array) */
        if (sum < 0)
        {
            sum = 0;
        }

        // update result if current subarray sum is found to be greater
        if (maxSum < sum)
        {
            maxSum = sum;
        }
    }
    return maxSum;
}
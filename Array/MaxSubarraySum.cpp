// Maximum subarray sum after K concatenation
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

long long maxSubSumKConcat(int arr[], int n, int k)
{
    int size = n * k;
    int CONCAT[size];

    int c = 0;
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < n; j++)
        {
            CONCAT[c] = arr[j];
            c++;
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << CONCAT[i] << " ";
    }
    cout << endl;

    // kadane's algo
    int sum = 0, maxSum = INT16_MIN, min = INT16_MIN;
    for (int i = 0; i < size; i++)
    {
        sum += CONCAT[i];
        cout << sum << endl;
        maxSum = max({maxSum, sum, CONCAT[i]});
        if (sum < 0)
        {
            sum = 0;
        }
    }

    return maxSum;
}

int main()
{

    int N = 3, K = 3;
    int array[N] = {1,-2,1};

    cout << maxSubSumKConcat(array, N, K);
    return 0;
}
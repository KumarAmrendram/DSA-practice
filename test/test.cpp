#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isPossible(int boards[], int n, int m, int mid)
{
    int partitionSum = 0;
    int painterSum = 1;

    for (int i = 0; i < n; i++)
        if (partitionSum + boards[i] <= mid)
        {
            partitionSum += boards[i];
        }
        else
        {
            painterSum++;
            if (painterSum > m || boards[i] > mid)
            {
                return false;
            }
            partitionSum = boards[i];
        }
    return true;
}
int findLargestMinDistance(int boards[], int k)
{
    int s = 0;
    int sum = 0;
    int n = sizeof(boards) / sizeof(boards[0]);

    for (int i = 0; i < n; i++)
    {
        sum += boards[i];
    }
    int e = sum;

    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (isPossible(boards, n, k, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }

        mid = s + (e - s) / 2;
    }
    return ans;
}


int size(int arr[]){
   int n = sizeof(arr)/sizeof(arr[0]);
   return n;
}

int main()
{
    int arr[4] = {10,20,30,40,};
    int n = 4, k = 2;
    // cout<<findLargestMinDistance(arr,2);
    cout<<size(arr);

    return 0;
}
#include <iostream>
#include <vector>

using namespace std;

bool isPossible(vector<int> &boards, int N, int k, int mid)
{
    int partitionSum = 0;
    int painterCount = 1;

    for (int i = 0; i < N; i++)
    {
        if (partitionSum + boards[i] <= mid)
        {
            partitionSum += boards[i];
        }
        else {
            painterCount ++;
            if (painterCount > k || boards[i] > mid){
                    return false;
            }
        }
        partitionSum = boards[i];
    }
    return true;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    int s = 0;
    int N = sizeof(boards)/sizeof(boards[0]);

    s = 0;
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += boards[i];
    }

    int e = sum;
    int mid = s + (e - s) / 2;

    int ans = -1;
    while (s <= e)
    {
        if (isPossible(boards, N, k, mid))
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

int main()
{

    int arr[4] = {
        10,
        20,
        30,
        40,
    };
    int n = 4, k = 2;
    return 0;
    // cout<<findLargestMinDistance(arr,2)
}
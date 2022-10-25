#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int firstOcc(int arr[], int n, int k)
{

    int l = 0, h = n-1;
    int mid = l + (h - l) / 2;
    int ans = -1;
    while (l <= h)
    {
        if (arr[mid] == k)
        {
            ans = mid;
            h = mid - 1;
        }

        else if (arr[mid] < k)
        {
            l = mid + 1;
        }
        else
        {
            h = mid - 1;
        }

        mid = l + (h - l) / 2;
    }
    return ans;
}

int lastOcc(int arr[], int n, int k)
{

    int l = 0, h = n-1;
    int mid = l + (h - l) / 2;
    int ans = -1;
    while (l <= h)
    {
        if (arr[mid] == k)
        {
            ans = mid;
            l = mid + 1;
        }

        else if (arr[mid] < k)
        {
            l = mid + 1;
        }
        else
        {
            h = mid - 1;
        }

        mid = l + (h - l) / 2;
    }
    return ans;
}
int main()
{
    int arr[5] = {1, 2, 3, 3, 5};

    cout << "first occurrence of 3 is at index " << firstOcc(arr, 5, 3) << endl;
    cout << "last occurrence of 3 is at index " << lastOcc(arr, 5, 3) << endl;

}
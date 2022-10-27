// merge two sorted arrays

#include <iostream>
#include "array.h"
using namespace std;

void BubbleSort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printArray(arr, size);
}

int main()
{
    int arr1[5] = {1, 3, 5, 7, 9}, arr2[4] = {2, 4, 6, 8};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int size = size1 + size2;

    int arr[size];
    int i = 0, j = size1;

    while (i < size1)
    {
        arr[i] = arr1[i];
        i++;
    }
    i = 0;
    while (j < size)
    {
        arr[j] = arr2[i];
        i++;
        j++;
    }
    printArray(arr1, 5);
    cout << endl;

    printArray(arr2, 4);
    cout << endl;
    cout << "merged array: ";
    BubbleSort(arr, size);
    return 0;
}

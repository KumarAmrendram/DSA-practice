#include <iostream>
#include "array.h"
using namespace std;

int main()
{
    int x = 6;
    int row = 3;
    int col = 3;
    int matrix[row][col] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            for (int k = 0; k < row; k++)
            {
                if (i != k)
                {
                    if (matrix[i][j] + matrix[j][k] == x)
                    {
                        cout << "(" << matrix[i][j] << "," << matrix[j][k] << ")" << endl;
                    }
                }
                else
                    cout << "no";
            }
        }
    }
    return 0;
}
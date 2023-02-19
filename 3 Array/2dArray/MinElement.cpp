#include <iostream>
#include <limits.h>
using namespace std;

int MinElement(int arr[][3], int row, int col)
{
    int min = INT_MAX;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[j][i] < min)
            {
                min = arr[i][j];
            }
        }
    }
    return min;
}

int main()
{
    int arr[3][3];
    int row = 3;
    int col = 3;

    // row wise input

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[j][i];
        }
    }
    
    if (MinElement(arr, row, col))
    {
        
        cout << "true"
             << " " << endl;
    }
    else
    {
        cout << "false"
             << " " << endl;
    }
    cout<<"Your No ::"<<" "<<(MinElement(arr, row, col))<<endl;
}

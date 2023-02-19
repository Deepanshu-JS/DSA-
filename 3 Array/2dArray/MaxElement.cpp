#include <iostream>
#include <limits.h>
using namespace std;

int MaxElement(int arr[][3], int row, int col)
{
    int max = INT_MIN;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[j][i] > max)
            {
                max = arr[i][j];
            }
        }
    }
    return max;
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
    
    if (MaxElement(arr, row, col))
    {
        
        cout << "true"
             << " " << endl;
    }
    else
    {
        cout << "false"
             << " " << endl;
    }
    cout<<"Your No :.:.:.:"<<" "<<(MaxElement(arr, row, col))<<endl;
}

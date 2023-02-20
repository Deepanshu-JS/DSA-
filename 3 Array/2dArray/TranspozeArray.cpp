#include <iostream>
#include <limits.h>
using namespace std;

void PrintArray(int arr[][3], int row, int col)
{
    cout<<"Your Array"<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<arr[i][j]<<" ";
           
        }
        cout<<endl;
    }
    
}

void transpose(int arr[][3], int row, int col, int transposeArr[][3]){
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            transposeArr[j][i] = arr[i][j];
           
        }
    }
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

    PrintArray(arr, row, col);
    int transposeArr[3][3];
    transpose(arr, row, col,transposeArr);
}

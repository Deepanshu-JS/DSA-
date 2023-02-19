#include <iostream>
using namespace std;


void PrintRowWiseSum(int arr[][3], int row, int col ){
    cout<<"Your Each Row Sum.";
    for (int i = 0; i < row; i++)
    {
        
        int sum=0;
        for (int j = 0; j < col; j++)
        {
           sum= sum+arr[j][i];
        }
        
        cout<<sum<<" ";
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
    

    
    PrintRowWiseSum(arr, row, col);
}
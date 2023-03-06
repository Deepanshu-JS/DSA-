#include <iostream>
using namespace std;

bool FindElement(int arr[][3], int row, int col, int key)
{
   
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
             if(arr[j][i]==key){
                return true;
             }
        }

       
    }
    return false;
}

int main()
{
    int arr[3][3];
    int row = 3;
    int col = 3;
    int key = 16;

    // row wise input

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[j][i];
        }
    }

    if(FindElement(arr, row, col, key)){
        cout<<"true"<<" "<<endl;
    }
    else{
        cout<<"false"<<" "<<endl;
    }
}
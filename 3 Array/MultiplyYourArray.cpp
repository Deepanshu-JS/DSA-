#include <iostream>
using namespace std;

int main()
{

    // Declaring Array
    int arr[100];

    // Taking Input
    cout<<"Array Size?"<<" ";
    int n;
    cin >> n;
    cout<<"Enter Input According Size"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // Printing Output
    cout<<"You Multipy Array is:"<<" ";
    for (int i = 0; i < n; i++)
    {
        cout << 2*arr[i]<<" ";
    }
}
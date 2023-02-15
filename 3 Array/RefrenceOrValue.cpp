#include <iostream>
using namespace std;

void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i]<<" ";
    }
    cout << endl;
}

void inc(int arr[], int size)
{
    arr[0] = arr[0] + 10;

    printArr(arr, size);
}

int main()
{
    int arr[] = {6, 7};
    int size = 2;

    inc(arr, size);
    printArr(arr, size);
}
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {3, 4, 5, 6, 67, 78, 89, 2, 4, 45, 12};
    int size = 11;

    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);          //Two Pointer
        start++;
        end--;
    }

    for (int i = 0;i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
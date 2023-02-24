#include <iostream>
using namespace std;

int BinarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        int element = arr[mid];
        if (key == element)
        {
            return arr[mid];
        }


        if (key < element)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }

    return -1;
}

int main()
{

    int arr[] = {2, 4, 5, 6, 12, 45, 67, 78, 89};
    int size = 9;
    int key = 78;

    int PrintNumber = BinarySearch(arr, size, key);

    if (PrintNumber == -1)
    {
        cout << "target Not Found";
    }
    else
    {
        cout << "Your"<<" " << PrintNumber<<" " << "Found";
    }

    
}
#include <iostream>
#include <vector>
using namespace std;

int PivotElement(vector<int> arr)
{

    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (mid + 1 < arr.size() && arr[mid] > arr[mid + 1])
        {
            return arr[mid];
        }

        if (mid - 1 >= 0 && arr[mid - 1] > arr[mid])
        {
            return mid - 1;
        }
        if (arr[start] > arr[mid])
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

    vector<int> arr{6, 7, 1, 2, 3, 4, 5};
    int PivotPrint = PivotElement(arr);
    cout << PivotPrint;

    
}
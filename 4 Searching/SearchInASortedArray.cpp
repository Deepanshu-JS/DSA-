#include <iostream>
#include <vector>
using namespace std;

// Binary Search
int BinarySearch(vector<int> arr, int key, int start, int end)
{

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

// Pivot

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

int Search(vector<int> arr, int target)
{
    int Pivot = PivotElement(arr);
    if (target >= arr[0] && target <= arr[Pivot])
    {

        int ans = BinarySearch(arr, target, 0, Pivot);
        return ans;
    }
    if (Pivot+1 < arr.size() && target >= arr[Pivot + 1] && target <= arr[arr.size() - 1])
    {

        int ans = BinarySearch(arr, target, Pivot + 1, arr.size() - 1);
        return ans;
    }
    return -1;
}

int main()
{

    vector<int> arr{4, 5, 6, 7, 0, 1, 2};
    int target = 2;

    int SortedElement = Search(arr, target);

    cout << SortedElement << " ";
}
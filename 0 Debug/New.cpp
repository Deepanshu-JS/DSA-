#include <iostream>
#include <vector>
using namespace std;

int findpivot(vector<int> arr)
{
    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {

        if (mid + 1 < arr.size() && arr[mid] > arr[mid + 1])
        {
            return mid;
        }
        else if (mid - 1 >= 0 && arr[mid - 1] > arr[mid])
        {
            return mid - 1;
        }
        else if (arr[mid] > arr[s])
        {
            e = mid - 1;
        }
        else
        {
            s = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

int findinpivot(vector<int> arr, int element, int s, int e)
{
    int mid = s + (e - s) / 2;
    while (s <= e)
    {

        if (mid == element)
        {
            return mid;
        }
        else if (arr[mid] > element)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}
int search(vector<int> &arr, int element)
{

    int pivot = findpivot(arr);
    if (element >= arr[0] && element <= arr[pivot])
    {
        int s = 0;
        int e = pivot;
        int j = findinpivot(arr, element, s, e);
        return j;
    }
    if (pivot < arr.size() && element >= arr[pivot + 1] && element <= arr[arr.size() - 1])
    {
        int s = pivot + 1;
        int e = arr.size() - 1;
        int j = findinpivot(arr, element, s, e);
        return j;
    }
    return -1;
}

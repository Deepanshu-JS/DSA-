#include <iostream>
#include <vector>
using namespace std;

int NearlySearch(vector<int> arr, int target)
{

    int start = 0;
    int end = arr.size() - 1;
    cout << end << endl;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == target)
        {
            return mid;
        }
        if (arr[mid - 1] == target)
        {
            return mid - 1;
        }
        if (arr[mid + 1] == target)
        {
            return mid + 1;
        }

        if (target > arr[mid])
        {
            start = mid + 2;
        }
        else
        {
            end = mid - 2;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{

    vector<int> arr{10, 3, 40, 60, 70, 80, 90};
    int target = 40;
    int NearPrint = NearlySearch(arr, target);
    cout << NearPrint << " ";
}
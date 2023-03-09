#include <iostream>
#include <vector>
using namespace std;

int binary(int arr[], int start, int end, int target)
{

    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        int element = arr[mid];
        if (target == element)
        {
            return mid;
        }

        if (target > element)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }

    return -1;
}

int expoSearch(int arr[], int sizen, int target)
{
    
    if (arr[0] == target)
    {
        return 0;
    }
    int i = 1;
    while (i < sizen && arr[i] <= target)
    {
        i = i * 2;
    }
    return binary(arr, i / 2, min(i, sizen - 1), target);
}

int main()
{
    int arr[] = {3, 4, 5, 6, 11, 13, 15, 56, 70};
    int sizen = sizeof(arr) / sizeof(int);
    int target = 13;
    int ans = expoSearch(arr, sizen, target);
    cout << ans << " ";

    return 0;
}
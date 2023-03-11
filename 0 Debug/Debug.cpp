#include <iostream>
#include <vector>

using namespace std;
int lastocc(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (target == arr[mid])
        {
            ans = mid;
            start = mid+1;   // ye chage hya
        }

        else if (target < arr[mid])
        {
            end = mid - 1;
        }
        else if (target > arr[mid])
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }

    return ans;
}

int firstocc(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (target == arr[mid])
        {
            ans = mid;
            end = mid - 1;
        }

        else if (target < arr[mid])
        {
            end = mid - 1;
        }
        else if (target > arr[mid])
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }

    return ans;
}

int totalocc(int arr[], int size, int target)
{
    int ans = -1;
    ans = (lastocc(arr, size, target) - firstocc(arr, size, target) + 1);
    return ans;
}

int main()
{
    int arr[] = {1, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 6, 7, 9};
    int size = 20;
    int target = 8;
    int answer = totalocc(arr, size, target);

    cout << answer;

    return 0;
}
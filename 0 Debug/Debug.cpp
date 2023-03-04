#include <iostream>
using namespace std;

// Binary Search
int Binary_Search(int arr[], int size, int x)
{
    int s = 0, e = size - 1;
    int m = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[m] == x)
        {
            return m;
        }
        else if (arr[m] < x)
        {
            s = m + 1;
        }
        else
            e = m - 1;
        m = s + (e - s) / 2;
    }
    return -1;
}

int main()
{
    int x;
    cin >> x;
    int arr[] = {1, 4, 6, 7, 8, 15, 18};
    int size = sizeof(arr) / sizeof(arr[0]);
    int ans = Binary_Search(arr, size, x);
    cout << ans;
}
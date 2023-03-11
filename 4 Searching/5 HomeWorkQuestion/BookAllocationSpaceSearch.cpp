#include <iostream>
#include <vector>
using namespace std;

bool ispossible(int arr[], int n int m, int mid)
{
    int pagesum = 0;
    int c = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > mid)
        {
            return false
        }
        if (pagesum + arr[i] > mid)
        {
            c++;
            pagesum = a[i];
            if (c > m)
            {
                return false;
            }
        }else{
            pagesum+=arr[i];
        }
        
    }
    return false;
}

int findPages(vector<int> arr, int n, int m)
{
    if (m > n)
    {
        return -1;
    }

    int start = 0;
    int end = accumulate(arr, arr + n, 0);
    int ans = -1;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (ispossible(arr, n, m, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr { 12, 34, 67, 90 }
    int n = arr.size();
    int m = 2; // no. of students

    int printAllocation = findPages(arr, n, m);
    cout << printAllocation << " ";
}
#include <iostream>
#include <vector>

using namespace std;

int peakindex(vector<int> arr)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;
    while (start < end)
    {
        if (arr[mid + 1] > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}
int main()
{
    vector<int> arr = {0, 10, 5, 3};
    // int size=4;
    int ans = peakindex(arr);
    cout<<ans<<" ";
    return 0;
}
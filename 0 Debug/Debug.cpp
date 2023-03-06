#include <iostream>
#include <vector>
using namespace std;

bool binarySearch(vector<int> &nums, int target, int s, int e)
{
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (nums[mid] == target)
        {
            return mid;
        }
        if (nums[mid] > target)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}
int findPivot(vector<int> &nums)
{
    int s = 0;
    int e = nums.size() - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (mid + 1 < nums.size() && nums[mid] > nums[mid + 1])
        {
            return mid;
        }
        if (mid - 1 >= 0 && nums[mid - 1] > nums[mid])
        {
            return mid - 1;
        }
        if (nums[s] >= nums[mid])
        {
            e = mid - 1;
        }
        else
        {
            s = mid ;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

bool Search(vector<int> &nums, int target)
{
    // int s=0;
    // int e=nums.size()-1;
    int pivot = findPivot(nums);
    if (target >= nums[0] && target <= nums[pivot])
    {
        bool ans = binarySearch(nums, target, 0, pivot);
        return ans;
    }
    if (pivot+1<nums.size()&& target >= nums[pivot + 1] && target <= nums[nums.size() - 1])
    {
        bool ans = binarySearch(nums, target, pivot + 1, nums.size() - 1);
        return ans;
    }
    return false;
}

int main()
{

    vector<int> arr{4, 5, 6, 7, 0, 1, 2};
    int target = 2;

    int SortedElement = Search(arr, target);

    cout << "Your Target Index is :"
         << " " << arr[SortedElement] << " ";
}
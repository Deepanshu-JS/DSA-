#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int binary(vector<int> arr, int start, int target)
{
    int end = arr.size() - 1;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == target)
        {
            return mid;
        }

        if (target > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
}

set<pair<int, int>> findpair(vector<int> arr, int target)
{
    sort(arr.begin(), arr.end());
    set<pair<int, int>> ans;

    for (int i = 0; i < arr.size(); i++)
    {
        if (binary(arr, i, arr[i] + target) != 1)
        {
            ans.insert({arr[i], arr[i] + target});
        }
    }
    return ans;
}

int main()
{
    vector<int> arr{3, 1, 4, 1, 5};
    int target = 2;
    set<pair<int, int>> printPair = findpair(arr, target);
    for (auto i : printPair)
    {
        cout << i.first << " ";
        cout << i.second << endl;
    }

    return 0;
}
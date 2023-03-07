#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int findPair(vector<int> arr, int k)
{
    sort(arr.begin(), arr.end());
    set<pair<int, int>> ans;
    int i = 0;
    int j = 1;
    while (j < arr.size())
    {
        int difference = arr[j] - arr[i];
        if (difference == k)
        {
            ans.insert({arr[i], arr[j]});
            i++, j++;
        }
        else if (difference > k)
        {
            j++;
        }
        else
        {
            i++;
        }
        if (i == j)
        { // ek index par
            j++;
        }
    }
    for (auto i : ans)
    {
        cout << i << endl;
    }
}

int main()
{
    vector<int> arr{3, 1, 4, 1, 5};
    int k = 2;

    findPair(arr, k);
    // vector<int> PrintPair = findPair(arr, k);
    // for (int i = 0; i < PrintPair.size(); i++)
    // {
    //     cout << PrintPair;
    // }
}
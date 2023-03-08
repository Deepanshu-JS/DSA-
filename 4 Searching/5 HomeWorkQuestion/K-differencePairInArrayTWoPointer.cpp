#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

set<pair<int, int>> findPair(vector<int> arr, int k)
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
        {                               // ek index par
            j++;
        }
    }
   return ans;
}

int main()
{
    vector<int> arr{3, 1, 4, 1, 5};
    int k = 2;

    set<pair<int, int>> printPair = findPair(arr, k);
     for (auto i : printPair)
    {
        cout << i.first <<" ";
        cout << i.second << endl;
    }
    
}
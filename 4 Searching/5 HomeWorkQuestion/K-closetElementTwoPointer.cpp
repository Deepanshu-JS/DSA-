#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<int> findcloset(vector<int> arr, int NoOfEle, int closeto)
{
    int start = 0;
    int end = arr.size() - 1;
    while (end - start >= NoOfEle)
    {
        if (closeto - arr[start] > arr[end] - closeto)
        {
            start++;
        }
        else
        {
            end--;
        }
    }
    vector<int> ans;
    for (int i = 0; i < NoOfEle; i++)
    {
        ans.push_back(arr[i]);
    }
    return ans;
}

int main()
{
    vector<int> arr{3, 1, 4, 1, 5};
    int NoOfEle = 4;
    int closeto = 3;
    vector<int> printPair = findcloset(arr, NoOfEle, closeto);
    for (int i = 0; i < printPair.size(); i++)
    {
        cout << printPair[i] << " ";
    }
}
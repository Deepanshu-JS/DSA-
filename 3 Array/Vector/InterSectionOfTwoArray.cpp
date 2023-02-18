#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> arr{1, 2, 3, 4, 3};
    vector<int> brr{5, 6, 7, 8, 4};

    vector<int> ans;

    for (int i = 0; i < arr.size(); i++)
    {
        int element = arr[i];

        for (int j = 0; j < brr.size(); j++)
        {
            if (element == brr[j])
            {
                brr[j]  =INT64_MIN;
                ans.push_back(element);
            }                                                // Unique
        }
    }
    for(auto value : ans){
        cout<<value<<" ";
    }
}
#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int main()
{

    vector<int> arr{1, 2, 3, 4, 3};
    vector<int> brr{5, 6,3,3, 7, 8, 4};

    vector<int> ans;

    for (int i = 0; i < arr.size(); i++)
    {
        int element = arr[i];                       // element have one element only jiske liye loop chal raha fro first array

        for (int j = 0; j < brr.size(); j++)
        {
            if (element == brr[j])
            {
                brr[j]  =INT_MIN;
                ans.push_back(element);
                break;                              //for remove duplicacy
                
            }                                       // Unique
        }
    }
    for(auto value : ans){
        cout<<value<<" ";
    }
}
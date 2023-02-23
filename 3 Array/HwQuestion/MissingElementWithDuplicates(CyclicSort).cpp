// Missing Element From And Array with Duplicates
// We use cycclic Array

#include <iostream>
#include <vector>
using namespace std;

void Dutch(vector<int> arr)
{
    int i = 0;
    int n = arr.size();
    while (i < n)                        //
    {                                    //
        int index = arr[i] - 1;         //
        if (arr[i] != arr[index])       // 
        {                                ////////////////> Cyclic sort
            swap(arr[i], arr[index]);    //
        }                               //
        else                            //
        {                              //
            i++;                       //
        }                               //
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i] != i + 1)
        {
            cout << i + 1<<" ";
        }
    }
}

int main()
{

    vector<int> arr{1,3,3,5,3};

    Dutch(arr);
    return 0;
}
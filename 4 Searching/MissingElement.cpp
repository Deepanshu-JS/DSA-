#include <iostream>
#include <vector>
using namespace std;

void MissingElement(vector<int> arr)
{
    int i = 0;
    int n = arr.size();
    for (i = 0; i < n; i++)
    {
        if (arr[i] != i + 1)
        {
            cout << i + 1<<" ";
            break;
        }
    }
}

int main()
{

    vector<int> arr{1,2,3,4,6,7};
    MissingElement(arr);
    return 0;
}
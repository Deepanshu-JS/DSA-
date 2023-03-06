#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr{7, 10, 1, 6, 14, 2};
    int n = arr.size();

    for (int i = 1; i < n; i++)
    {

        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    for (int j = 0; j < arr.size(); j++)
    {
        cout << arr[j] << " ";
    }
}
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr { 5, 4, 3, 2, 1 };
    int n = arr.size();

    for (int i = 0; i < n - 1; i++)
    {
        int index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[index])
            {
                index = j;
            }
        }
        swap(arr[i], arr[index]);
    }

    for (int j = 0; j < arr.size(); j++)
    {
        cout << arr[j] << " ";
    }
}
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr{1, 0, 1, 0, 2, 0, 1, 0, 2, 2};

    int l = 0;
    int m = 0;
    int h = arr.size() - 1;

    for (int i = 0; i < arr.size(); i++)
    {
        while (m <= h)
        {
            if (arr[m] == 0)
            {
                swap(arr[l], arr[m]);
                    l++,
                    m++;
            }

            else if (arr[m] == 1)
            {
                m++;
            }
            else
            {
                swap(arr[h], arr[m]);

                h--;
            }
        }
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}
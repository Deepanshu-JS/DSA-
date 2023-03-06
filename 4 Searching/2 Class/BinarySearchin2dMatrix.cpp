#include <iostream>
using namespace std;

bool find2dArrayNumber(int arr[][4], int row, int col, int target)
{
    int start = 0;
    int end = row*col - 1;
    int mid = start + (end - start) / 2;

    while (end <= start)
    {
        int rowindex = mid / col;
        int colindex = mid % col;

        if (arr[rowindex][colindex] == target)
        {
            return true;
        }

        if (arr[rowindex][colindex] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    return false;
}

int main()
{
    int arr[4][5] = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12},{13, 14, 15, 16} };

    int row = 4;
    int col = 4;

    int target = 14;

    bool ans = find2dArrayNumber(arr, row, col, target)

        if (ans)
    {
        cout << "Found";
    }
    else
    {
        cout << "not Found";
    }
}
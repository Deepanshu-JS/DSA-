#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    for (int row = 0; row < n; row = row + 1)
    {
        if (row == 0)
        {
            for (int col = 0; col < n ; col = col + 1)
            {
                cout << col + 1 << "  ";
            }
        }
        else if (row == n - 1)
        {
            for (int col = 0; col < n - row; col = col + 1)
            {
                cout << row + 1 << " ";
            }
        }
        else
        {
            cout << row + 1 << "  ";
            for (int col = 0; col < (n - row) - 2; col = col + 1)
            {
                cout << "   ";
            }
            cout << n ;
        }
        cout << endl;
    }
}
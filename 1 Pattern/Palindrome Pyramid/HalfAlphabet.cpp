#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        for (int col = 1; col < row + 1; col++)
        {
            cout << (char)('A' + col - 1) << " ";
        }
        for (int col = row+1; col >= 1; col--)
        {
            cout << (char)('A' + col - 1) << " ";
        }
        cout << endl;
    }
}
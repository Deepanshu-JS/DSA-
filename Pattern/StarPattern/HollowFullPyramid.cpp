#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    for (int row = 0; row < n; row = row + 1)
    {
        if (row == 0 || row == n - 1)
        {

            for (int col = 0; col < n - row; col = col + 1)
            {
                cout << " ";
            }

            for (int col = 0; col < row + 1; col = col + 1)
            {
                cout << "* ";
            }
        }
        else
        {
            for (int col = 0; col < n - row; col = col + 1)
            {
                cout << " ";
            }
            cout<<"* ";
             for (int col = 1; col < row; col = col + 1)
            {
                cout << "  ";
            }
            cout<<"* ";
        }
        cout << endl;
    }
}
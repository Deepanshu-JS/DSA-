#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    for (int row = 1; row < n; row = row + 1)
    {
        if (row == 1 || row == n - 1)
        {
            for (int col = 1; col < row + 1; col++)
            {
                cout << col << " ";
            }
        }else{
           
           cout << "1 ";
            for (int i = 1; i < row-1; i++)
            {
                cout << "  ";
            }
            cout << row;
        }
        cout << endl;
    }
}
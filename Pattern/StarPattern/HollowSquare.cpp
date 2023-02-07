#include <iostream>
using namespace std;

int main()
{
    int r,c;
    cin >> r;
    cin>>c;
    for (int row = 0; row < r; row++)
    {
        if (row == 0 || row == r-1 )
        {
            for (int col = 0; col < c; col++)
            {
                cout << "* ";
            }
        }
        else
        {
            cout << "* ";
            for (int i = 0; i < c-2 ; i++)
            {
                cout << "  ";
            }
            cout << "* ";
        }
        cout << endl;
    }
}

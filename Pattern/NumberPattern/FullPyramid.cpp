#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    for (int row = 0; row < n; row = row + 1)
    {
        for (int col = 0; col < n - row; col++)
        {
            cout << " ";
        }
        int start = row + 1;
        for (int col = 0; col < row + 1; col++)
        {
            cout << start<<"";
            start++;
        }
        //for third reverse triangle
        int startt = 2*row;
        for(int col=0; col<row;col++){
            cout<<startt;
            startt=startt-1; //reverse counting
        }
        cout << endl;
    }
}

#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    for (int row = 0; row < n; row = row + 1)
    {
        for (int col = 0; col < row + 1; col++)
        {
            cout << col + 1 << " ";
        }

        for (int col = row; col >= 1; col--) // reverse counting
        {
            cout << col << " ";
        }
        cout << endl;
    }
}

// second method  full palindrome ka manupulation hai

// int main()
// {

//     int n;
//     cin >> n;
//     for (int row = 0; row < n; row = row + 1)
//     {
//         int start =  1;
//         for (int col = 0; col < row + 1; col++)
//         {
//             cout << start<<"";
//             start++;
//         }
//         //f5rom third reverse triangle
//         int startt = row;
//         for(int col=0; col<row;col++){
//             cout<<startt;
//             startt=startt-1; //reverse counting
//         }
//         cout << endl;
//     }
// }
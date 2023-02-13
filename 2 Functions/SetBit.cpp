#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;   //11 => 0000101
    int ans = 0;

    while (n != 0)
    {
        if (n & 1)
        {
            ans++; //2
        }
        //right shift
        n = n >> 1;
    }

    cout << ans << " ";
}
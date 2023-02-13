#include <iostream>
using namespace std;

int main()
{
    int n[] = {4,
               5,
               6,
               3};

    int ans = 0;
    for (int i = 0; i < 4; i++)
    {
        ans = ans * 10 + n[i];
    }
    cout << ans;
}
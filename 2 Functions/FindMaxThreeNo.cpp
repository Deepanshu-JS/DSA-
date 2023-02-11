#include <iostream>
using namespace std;

int Max(int a, int b, int c)
{

    if (a > b && a > c)
    {
        return a;
    }
    if (b > c && b > a)
    {
        return b;
    }
    else
    {
        return c;
    }
}

int main()
{
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    int MaxNo = Max(a, b, c);
    cout << "Your Max No Is " << MaxNo << endl;
}

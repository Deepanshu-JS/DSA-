#include <iostream>
using namespace std;

double myPow(double x, int n)
{
    if (n < 0)
    {
        return 1 / x * myPow(1 / x, abs(n + 1));
    }
    if (n == 0)
    {
        return 1;
    }
    if (n == 2)
    {
        return x * x;
    }
    if ((n & 1) == 0)
    {
        return myPow(myPow(x, n / 2), 2);
    }
    else
    {
        return x * myPow(myPow(x, n / 2), 2);
    }
}


int main()
{
    double x;
    int n;
    cin>>x;
    cin >> n;
    double print =myPow(x,n);
    cout<<print<<" ";
    
}
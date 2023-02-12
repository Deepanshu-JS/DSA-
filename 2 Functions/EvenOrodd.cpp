#include <iostream>
using namespace std;

void EvenorOdd(int n)
{

    if (n % 2 == 0)
    {
        cout << "Your no " << n << " is even";
    }
    else
    {
        cout << "Your no " << n << " is odd";
    }
}

int main()
{
    int n;
    cin >> n;
    EvenorOdd(n);
    return 0;
}
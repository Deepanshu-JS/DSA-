#include <iostream>
using namespace std;

int sumNo(int n)
{
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum = sum + i;
    }
    return sum;
}

int main()
{

    int n;
    cin >> n;
    
    int printSum= sumNo(n);
    cout<<printSum;
    
}
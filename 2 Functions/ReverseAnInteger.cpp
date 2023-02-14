#include <iostream>
using namespace std;

void Reverse(int n)
{

    while(n!= 0)
    {
        int rem = n % 10;
        cout<< rem<<" "; // printing
        n = n / 10;
        
    }
    
}

int main()
{
    int n;
    cin >> n;
    Reverse(n);
    
}
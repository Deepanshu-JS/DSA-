#include <iostream>
using namespace std;

float convert(int n)
{

    float Fahren = (n*9/5)+32;
    return Fahren;
    
}

int main()
{
    int n;
    cin >> n;
    float converted=convert(n);
    cout<<converted;
}
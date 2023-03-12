#include <iostream>
#include <cmath>
using namespace std;

int binaryToDecimal(int n)
{
    int decimal = 0;
    int i = 0;
    while (n > 0)
    {
        int a = n & 1;
        decimal = a * (1 << i) + decimal;
        n = n >> 1;
        i++;
    }
    return decimal;
}
int main()
{
    int binary;
    cin >> binary;
    cout << binaryToDecimal(binary);
}

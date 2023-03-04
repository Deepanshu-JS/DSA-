#include <iostream>
#include <vector>
using namespace std;

int DivideNumber(int dividend, int divisor)
{

    int start = 0;
    int end = abs(dividend);
    int mid = start + (end - start) / 2;
    int ans = 0;
    while (start <= end)
    {
        if (abs(mid * divisor) == abs(dividend))
        {
            return mid;
        }
        if (abs(mid * divisor) > abs(dividend))
        {
            end = mid - 1;
        }
        if (abs(mid * divisor) < abs(dividend))     //handling -ive eith abs
        {
            ans = mid;
            start = mid + 1;
        }

        mid = start + (end - start) / 2;
    }
    if ((divisor < 0 && dividend < 0) || (divisor > 0 && dividend > 0))
    return ans;
    else{
        return -ans;
    }
}

int main()
{

    int dividend = 22;
    int divisor = 7;
    int PrintNumber = DivideNumber(dividend, divisor);
    cout << PrintNumber << " ";
}
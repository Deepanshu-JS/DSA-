#include <iostream>
#include <vector>
using namespace std;

int DivideNumber(int dividend, int divisor)
{

    int start = 0;
    int end = dividend;
    int mid = start + (end - start) / 2;
    int ans=0;
    while (start <= end)
    {
        if (mid*divisor == dividend)
        {
            return mid;
        }
        if (mid*divisor > dividend)
        {
            end= mid - 1;
        }
        if (mid*divisor < dividend)
        {
            ans=mid;
            start= mid + 1;
        }

        
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{

    int dividend = 22;
    int divisor = 7;
    int PrintNumber = DivideNumber(dividend, divisor);
    cout << PrintNumber << " ";
}
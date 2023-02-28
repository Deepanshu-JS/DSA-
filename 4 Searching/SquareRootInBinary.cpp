#include <iostream>
using namespace std;

int findsqrt(int n)
{
    int target = n;
    int s = 0;
    int e = n - 1;
    int ans = 0;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (mid*mid == target)
        {
            return mid;
        }
        if (mid * mid > target)
        {
            e = mid - 1;
        }
        else
        {
            int ans = mid;
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    int ans = findsqrt(n);


    int precision;
    cout << "Enter the Precision Number"<<endl;
    cin >> precision;
    double step = 0.1;
    double finalans = ans;

    for (int i = 0; i < precision; i++)
    {
        for (double j = finalans; j * j <= n; j = j + step)
        {
            finalans = j;
        }
        step = step / 10;
    }
    cout << "Your Final ans is : " << finalans << endl;
    return 0;
}
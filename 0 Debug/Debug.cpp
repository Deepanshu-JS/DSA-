#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    bool isPrime = true;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }
        if (isPrime=false)
        {
            cout << "Prime" << endl;
        }
        else
        {
            cout << "Not Prime" << endl;
        }
        return 0;


        

    //     int i = 0;
    // i = i + 1;
    // cout << i ;
    //     /*print i \*/

    //     i = i + 1;
    //     cout << ++i;




    // short i = 2300, j = 4322;
    // cout << -(i + j);




    // float l, b;
    // cin>> l;
    // cin>>b;
    // int p = 2*(l+b);
    // cout<<"Perimeter="<< p;



    // int n;
    // cin >> n;
    // for (int i = 0; i < n; ++i)
    // {
    //     for (int j = 0; j < n; ++j)
    //     {
    //         cout << n;
    //     }
    //     cout << endl;
    // }5.0 6.0
} 
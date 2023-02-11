#include <iostream>
using namespace std;



//function
void Counting(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
    cout << endl;
}


//main function
int main()
{

    int n;
    cin >> n;
    Counting(n);// function calling here

    return 0;
}
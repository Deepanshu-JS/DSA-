#include <iostream>
using namespace std;

int Add(int a, int b)
{

    int AddBothNo = (a + b);
    return AddBothNo;
}

int main()
{
    int a, b;
    cin >> a;
    cin >> b;
    int printAddedNo = Add(a, b);
    cout << "Your No Is " << printAddedNo << endl;
    
}

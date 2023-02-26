#include <iostream>
#include <iostream>
using namespace std;

int LengthString(char ch[])
{
    int length = 0; 
    int i = 0; 
    while (ch[i] != '\0')
    {
        length++;
        i++;
    }
    return length;
}

int main()
{
    char ch[100];
    cin >> ch;
    cout << LengthString(ch) <<endl<< " ";
    return 0;
}
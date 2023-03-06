#include <iostream>
#include <string.h>
using namespace std;

void ReplaceSpaces(char ch[])
{

    
    int n = strlen(ch);    //strlen is inbuilt 
    for (int i = 0; i < n; i++)
    {
        if (ch[i] == ' ')
        {
            ch[i] = '@';
        }
    }
}

int main()
{
    char ch[100];
    cin.getline(ch, 100);

    ReplaceSpaces(ch);
    cout << ch << " ";
}
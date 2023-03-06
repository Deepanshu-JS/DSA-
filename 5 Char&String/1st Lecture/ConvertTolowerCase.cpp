#include <iostream>
#include <string.h>
using namespace std;

void converttoUpper(char ch[])
{

    int n = strlen(ch);
    for (int i = 0; i < n; i++)
    {
        ch[i] = ch[i] - 'A' + 'a';
    }
}

int main()
{
    char ch[100] = "DEEPANSHU";
    converttoUpper(ch);
    cout << ch<<endl;
}
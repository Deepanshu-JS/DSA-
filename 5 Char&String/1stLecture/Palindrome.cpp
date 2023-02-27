#include <iostream>
#include <string.h>
using namespace std;

int  checkpalindrome(char ch[])
{

    int i=0;
    int n = strlen(ch); 
    int j=n-1;                           //strlen is inbuilt   (IMportant QUestion) 
    while (i<=j)
    {
        if(ch[i] !=ch[j]){
            return false;
        }
        else{
            i++;
            j--;
        }
    }
    return true;
    
}

int main()
{
    char ch[100] = "racecarq";
   
    cout <<  checkpalindrome(ch)<< " ";
}
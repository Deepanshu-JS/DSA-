#include <iostream>
#include <string.h>
using namespace std;
 

void reverseStr(char str[])
{
    int len = strlen(str);
    int n = len-1;
    int i = 0;
    while(i<=n){
        //Using the swap method to switch values at each index
        swap(str[i],str[n]);
        i++;
        n--;
  }
 
}
 
int main()
{
    char str[100];
    cin>>str;
    reverseStr(str);
    cout << str;
    return 0;
}
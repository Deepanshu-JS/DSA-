#include <bits/stdc++.h>
using namespace std;
 

void reverseStr(string& str)
{
    int len = str.length();
    int n = len-1;
    int i = 0;
    while(i<=n){
        //Using the swap method to switch values at each index
        swap(str[i],str[n]);
        n = n-1;
        i = i+1;
  }
 
}
 
int main()
{
    string str = "CURVE";
    reverseStr(str);
    cout << str;
    return 0;
}
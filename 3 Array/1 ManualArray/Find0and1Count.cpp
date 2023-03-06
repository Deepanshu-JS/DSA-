#include <iostream>
using namespace std;

int main(){
   int arr[]= {1,1,1,0,0,0,1,0,1,0,1,0,1,0,0,0,0};
   
   int size = 17;

   int zero=0;
   int one=0;

   for(int i=0;i<size;i++){
    if(arr[i]==0){
        zero++;
    }
    if(arr[i]==1){
        one++;
    }
   }
   cout<<"0's Counting is:"<<zero<<" "<<endl;
   cout<<"1's Counting is:"<<one<<" ";

}

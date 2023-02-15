#include <iostream>
using namespace std;

int main(){
   int arr[]= {3,4,5,6};
   
   for(int i=0;i<4;i++){
    arr[i]=1;
   }
   for(int i=0;i<4;i++){
    cout<<arr[i]<<" ";     //memset
   }
}


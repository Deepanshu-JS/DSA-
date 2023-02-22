#include <iostream>
#include<vector>
using namespace std;
void moveNleft(vector<int>&arr){
  int s=0,e=arr.size();
  cout<<"size of array is"<<e;
  while(s<e){
    if(arr[s]<0){
      s++;
      cout<<"start condition"<<arr[s]<<endl;
    }
    else if(arr[e]>0){
      e--;
      cout<<"end condition"<<arr[e]<<endl;
    }
    else{
      swap(arr[s],arr[e]);
      cout<<"swap condition"<<arr[s]<<arr[e]<<endl;
    }
  }
}
void printelements(vector<int> arr){
  for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<"  ";
  }
  cout<<endl;
}
int main() {
  vector<int> arr{1,2,4,5,-6,7,-8,-9,0};
  printelements(arr);
  moveNleft(arr);
  printelements(arr);
  return 0;
  }
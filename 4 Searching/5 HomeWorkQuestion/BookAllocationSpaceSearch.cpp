#include <iostream>
#include <vector>
using namespace std;


int main(){
    vector<int>arr{12,34,67,90}
    int n= arr.size();
    int m =2;  //no. of students

    int printAllocation  = findPages(arr,n,m);
    cout<<printAllocation<<" ";

}
#include <iostream>
#include <vector>
using namespace std;

int  MissingElement(vector<int> arr)
{
    
    int start=0;
    int end=arr.size()-1;
    int mid = start + (end - start) / 2;

    while(start+1 != end){
        if(arr[mid]==mid+1){
            start = mid;
        }else{
            end = mid;
        }
         mid = start + (end - start) / 2;
    }
    
    return start+2 ;
}

int main()
{

    vector<int> arr{1,2,3,4,6,7,8,9};
    int MisElement=MissingElement(arr);
    cout<< MisElement;
}
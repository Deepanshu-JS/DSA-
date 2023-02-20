#include <iostream>
#include<vector>
using namespace std;


int main(){
    vector<vector<int>>arr;

    vector<int>a{1,2,3};
    vector<int>b{1,2,3};
    vector<int>c{1,2,3};


    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);


    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[0].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
          
    }

    return 0;

}
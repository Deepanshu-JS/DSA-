#include <iostream>
using namespace std;

int  Add(int A,int B)
{
   
    int AddBothNo = (A + B);
    return AddBothNo;
}

int main()
{
    int A ;
    int B ;
    cin>>A;
    cin>>B;
    int CompleteAdd=Add(A ,B);
    cout<<CompleteAdd;

}

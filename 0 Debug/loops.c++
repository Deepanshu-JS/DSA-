#include<iostream>
using namespace std; 
int main()
{
    /// Hollow Full Pyramid
    int n;
    cin>>n;
    for(int rows=0;rows<n;rows++)
    {
        // For Spaces
        for (int cols = 0; cols < n-rows-1; cols++)
        {
            cout<<" ";
        }
        // For Stars
        for (int cols = 0; cols < rows+1; cols++)
        {
            if(rows==n-1||cols==0)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
            
        }
        cout<<"*  ";
        cout<<endl;
    }
    return 0; 
}
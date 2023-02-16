#include <iostream>
using namespace std;

int main()
{
    int arr[] = {3, 4, 5, 6,67,78,89,2,4,45,12};
    int size= 11;
    int max = INT64_MIN;
    for (int i = 0; i <size; i++)
    {
        
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout<<max;
}
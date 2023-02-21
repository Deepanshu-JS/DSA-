#include <iostream>
#include <vector>
using namespace std;

vector<int> Dutch(vector<int> arr)
{
    int low = 0;
    int high = arr.size() - 1;

    while (low < high)
    {
        if (arr[low] < 0)
        {
            low++;
        }
        else if (arr[high] > 0)
        {
            high--;
        }
        else
        {
            swap(arr[high], arr[low]);
        }
    }
    return arr;
}




int main()
{

    vector<int> arr{1, 2, 3, 4, -5, -6, -4, -5};

    vector<int>arrPrint = Dutch(arr);

    for(int i=0;i<arrPrint.size();i++){
        cout<<arrPrint[i]<<" ";
    }

    
}
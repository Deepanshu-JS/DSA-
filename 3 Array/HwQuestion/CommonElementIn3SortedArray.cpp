#include <iostream>
#include <vector>
using namespace std;

void CommonElement(const vector<int> arr, const vector<int> brr,const vector<int> crr)
{ 
    int i =0, j =0, k = 0;
    while (i < arr.size() && j < brr.size() && k < crr.size())
    {
        if (arr[i] == brr[j] && arr[i] == crr[k])
        {
            cout << arr[i] << " ";
            i++,j++,k++;
        }
        else if (arr[i] < brr[j])
        {
            i++;
        }                                                                         
        else if (brr[j] < crr[k])
        {
            j++;
        }
        else
        {
            k++;
        }
    }
}

int main()
{
    vector<int> arr{1, 5, 10, 20, 40, 80};
    vector<int> brr{6, 7, 20, 80, 100};
    vector<int> crr{3, 4, 15, 20, 30, 70, 80, 120};
    

    CommonElement(arr, brr, crr);
    cout<<endl;
    return 0;
}
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




// code move left ke liye hi hai but maintaining order !

// #include <iostream>
// #include <vector>
// #include <limits.h>
// using namespace std;

// vector<int> Dutch(vector<int> arr)
// {
//     int j = 0, i = 0;
//     int high = arr.size() ;
//     while (j < high)
//     {
//         if (arr[i] < 0)
//         {
//             if (arr[j] >= 0)
//             {
//                 swap(arr[i], arr[j]);
//                 i++;
//                 j++;
//             }
//             else
//             {
//                 j++;
//             }
//         }
//         else
//         {
//             i++;
//             j++;
//         }
        
            
//     }
//     for (int i = 0 ; i < high ; i++)
//         if (arr[i] < 0){
//             if(arr[i]<arr[i+1]){
//                 swap(arr[i],arr[i+1]);
//                 i++;
//             }
//         }
//     return arr;
// }

// ;

// int main()
// {

//     vector<int> arr{1, -1, 3, 2, -7, -5, 11, 6};

//     vector<int> arrPrint = Dutch(arr);

//     for (int i = 0; i < arrPrint.size(); i++)
//     {
//         cout << arrPrint[i] << " ";
//     }
// }

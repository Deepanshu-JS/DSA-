#include <iostream>
using namespace std;

int firstSearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (key == arr[mid])
        {
            ans = mid;
            end = mid - 1;
        }

        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }

    return ans;
}


int lastSearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (key == arr[mid])
        {
            ans = mid;
            start = mid+1;   // ye chage hya
        }

        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
   
    return ans;
}

int main()
{

    int arr[] = {1, 2, 4, 4, 4, 44, 66, 77, 88};
    int size = 9;
    int key = 8;

    int first = firstSearch(arr, size, key);
    int last = lastSearch(arr, size, key);
    

    cout << last-first+1 << " ";
}


// int ans = last - first + 1;
                                            //for jab element na ho  to -1 ke liye
//     if (ans == 1)
//     {
//         cout << -1 <<" ";
//     }else{
//         cout<<ans<<" ";
//     }
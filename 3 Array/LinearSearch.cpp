#include <iostream>
using namespace std;

bool linearFind(int arr[], int size, int key)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        
            return true;
    }
    return false;
}

int main()
{
    int arr[8] = {45, 67, 89, 12, 34, 56, 67, 78};
    int size = 8;
    int key;
    cin >> key;
    if (linearFind(arr, size, key))
    {
        cout << "found";
    }
    else
    {
        cout << "Notfound";
    }
}

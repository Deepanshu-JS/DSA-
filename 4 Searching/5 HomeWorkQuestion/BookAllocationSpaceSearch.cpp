//Accumulate with manual array

#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

bool ispossible(int arr[], int arrsize, int StudentNo, int midd)
{
    int pagesum = 0;
    int slot = 1;
    for (int i = 0; i < arrsize; i++)
    {
        if (arr[i] > midd)
        {
            return false;
        }
        if (pagesum + arr[i] > midd)
        {
            slot++;
            pagesum = arr[i];
            if (slot > StudentNo)
            {
                return false;
            }
        }
        else
        {
            pagesum += arr[i];
        }
    }
    return false;
}

int findPages(int arr[], int arrsize, int StudentNo)
{
    if (StudentNo > arrsize)
    {
        return -1;
    }

    int start = 0;
    int end = accumulate( arr, arr + arrsize, 0);
    int ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (ispossible(arr, arrsize, StudentNo, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int arr[]={12, 34, 67, 90};
    int arrsize = sizeof(arr) / sizeof(int);
    int StudentNo = 2; // no. of students

    int printAllocation = findPages(arr, arrsize, StudentNo);
    cout << printAllocation << " ";
}




 // Vector With Accumulate Function

 #include <iostream>
 #include <vector>
 #include <numeric>
 using namespace std;

bool ispossible(vector<int> arr, int arrsize, int StudentNo, int midd)
{
    int pagesum = 0;
    int slot = 1;
    for (int i = 0; i < arrsize; i++)
    {
        if (arr[i] > midd)
        {
            return false;
        }
        if (pagesum + arr[i] > midd)
        {
            slot++;
            pagesum = arr[i];
            if (slot > StudentNo)
            {
                return false;
            }
        }
        else
        {
            pagesum += arr[i];
        }
    }
    return true;
}

int findPages(vector<int> arr, int arrsize, int StudentNo)
{
    if (StudentNo > arrsize)
    {
        return -1;
    }

    int start = 0;
    int end = accumulate( arr.begin(), arr.begin() + arrsize, 0);
    int ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (ispossible(arr, arrsize, StudentNo, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }

    }
    return ans;
}

int main()
{
    vector<int> arr{12, 34, 67, 90};
    int arrsize = arr.size();
    int StudentNo = 2; // no. of students

    int printAllocation = findPages(arr, arrsize, StudentNo);
    cout << printAllocation << " ";
}













// vector without acumulate manually adding 


 #include <iostream>
 #include <vector>
 #include <numeric>
 using namespace std;

bool ispossible(vector<int> arr, int arrsize, int StudentNo, int midd)
{
    int pagesum = 0;
    int slot = 1;
    for (int i = 0; i < arrsize; i++)
    {
        if (arr[i] > midd)
        {
            return false;
        }
        if (pagesum + arr[i] > midd)
        {
            slot++;
            pagesum = arr[i];
            if (slot > StudentNo)
            {
                return false;
            }
        }
        else
        {
            pagesum += arr[i];
        }
    }
    return true;
}

int findPages(vector<int> arr, int arrsize, int StudentNo)
{
    if (StudentNo > arrsize)
    {
        return -1;
    }

    int start = 0;
    int end = 0;
    for (int j = 0; j < arrsize; j++)
    {
        end += arr[j];
    }
    int ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (ispossible(arr, arrsize, StudentNo, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }

    }
    return ans;
}

int main()
{
    vector<int> arr{12, 34, 67, 90};
    int arrsize = arr.size();
    int StudentNo = 2; // no. of students

    int printAllocation = findPages(arr, arrsize, StudentNo);
    cout << printAllocation << " ";
}
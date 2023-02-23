#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr{5, 1, 3, 3, 1, 2};
    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {

        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] == arr[j])
            {
             ans = i+1;
             break;
            }
        }
        if(ans != 0){
          break;
        }
    }
    cout << ans << endl;
}
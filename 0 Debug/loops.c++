include<iostream>
    include<vector>
        include<limits.h> using namespace std;
int main()
{
   vector<int> arr{1, 2, 3, 4, 5};
   vector<int> brr{6, 7, 4, 8, 5};
   vector<int> ans;
   for (int i = 0; i < arr.size(); i++)
   {
      for (int j = 0; j < brr.size(); j++)
      {
         if (arr[i] == brr[j])
         {

            brr[j] == INT_MIN;
         }
      }
   }
   for (int i = 0; i < arr.size(); i++)
   {

      ans.push_back(arr[i]);
   }
   for (int j = 0; j < brr.size(); j++)
   {
      if (brr[j] != INT_MIN)
      {
         ans.push_back(brr[j]);
      }
   }
   for (int i = 0; i < ans.size(); i++)
   {
      cout << ans[i] << " ";
   }
   return 0;
}
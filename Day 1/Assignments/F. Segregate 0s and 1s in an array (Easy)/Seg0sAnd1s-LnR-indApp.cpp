#include<bits/stdc++.h>
using namespace std;

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);

   vector<int> arr={1,0,1,0,1,0,1,0,0};

   //Left And Right Index Approach
   int left =0;
   int right=arr.size()-1;

   while(left<right)
   {
      if(arr[right]==1)
      {
         right--;
      }
      if(arr[left]==0)
      {
         left++;
      }
      if(arr[left]>arr[right])
      {
         arr[left] =0;
         arr[right]=1;
         left++;
         right--;
      }
   }
   cout<<"[ ";
   for (int i = 0; i < arr.size(); i++)
   {
      cout<<arr[i]<<" ";
   }
   cout<<"]";
   return 0;
}

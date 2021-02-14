#include<bits/stdc++.h>
using namespace std;

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);

   vector<int> arr={1,0,1,0,1,0,1,0};

   //Two pointer Approach
   int p0=0;
   int p1=arr.size()-1;
   
   //Getting 1 to the left side of array
   while(p0<p1)
   {
      if(arr[p0]==1)
      {
         swap(arr[p0],arr[p1]);
         p1--;
      }
      else{
         p0++;
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

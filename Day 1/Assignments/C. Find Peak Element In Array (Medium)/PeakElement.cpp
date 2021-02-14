#include<bits/stdc++.h>
using namespace std;

void peakElement(const vector<int> arr)
{
   int l=arr.size();
   //checking if array have only one element
   if(l==1)
   {
      cout<<arr[0];
      return;
   }

   //looping and checking and printing the peak element
   for(int i=0;i<l;i++)
   {
      //for 1st element
      if(i==0)
      {
         if(arr[i]>arr[i+1])
         {
            cout<<arr[i]<<" ";
         }
      }
      //for last element
      if(i==l-1)
      {
         if(arr[i]>arr[i-1])
         {
            cout<<arr[i]<<" ";
         }
         break;
      }
      //comparing pre and post elements 
      if((arr[i]>arr[i+1])&&(arr[i]>arr[i-1]))
      {
         cout<<arr[i]<<" ";
      }
   }
}

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);

   vector<int> arr = {5,1,2,3};

   peakElement(arr);

   return 0;
}

#include<bits/stdc++.h>
using namespace std;

void majorityElement(vector<int> arr)
{

   int maj=0;//store majority count
   int maj_ind=-1;//store majority index
   int l=arr.size();

   //looping and counting the elements one by one
   for(int i=0;i<l;i++)
   {
      int count=0;
      for(int j=0;j<l;j++)
      {
         if(arr[i]==arr[j])
         {
            count++;
         }
         if(count>maj)
         {
            maj=count;
            maj_ind=i;
         }
      }
   }
   //checking if any element satisfy majority condition
   if(maj>l/2)
   {
      cout<<arr[maj_ind];
   }
   else{cout<<"No Major Element";}
}

//main function
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);

   vector<int> arr = {1, 1, 1, 2, 1, 1, 2, 2, 2};
   majorityElement(arr);

   return 0;
}

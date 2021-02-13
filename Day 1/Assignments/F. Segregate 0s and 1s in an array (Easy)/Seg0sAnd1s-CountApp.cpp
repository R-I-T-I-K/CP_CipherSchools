#include<bits/stdc++.h>
using namespace std;

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);

   vector<int> arr={1,1,0,1,1,0,1,0};

   int c0=0;
   int c1=0;

    //Counting 0's and 1's
   for (int i = 0; i < arr.size(); i++)
   {
      if(arr[i]==0){ c0++;}
      else{c1++;}   
   }
    
    //Printing Elements
   cout<<"[ ";
   for (int i = 0; i < c0; i++)
   {
      cout<<0<<" ";
   }
   for (int i = 0; i < c1; i++)
   {
      cout<<1<<" ";
   }
   cout<<"]";
   
   return 0;
}

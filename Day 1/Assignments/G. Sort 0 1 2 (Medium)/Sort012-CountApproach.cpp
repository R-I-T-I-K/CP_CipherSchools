#include<bits/stdc++.h>
using namespace std;

void ZOTProb(const vector<int> vec)
{
      //simply counting the number of zeroes, ones and twos
      //and printing them in order.  
      int c0=0;
      int c1=0;
      int c2=0;

      for (int i = 0; i < vec.size(); i++)
      {
         if(vec[i]==0)
         {
            c0++;
         }
         else
         if(vec[i]==1)
         {
            c1++;
         }
         else
         {
            c2++;
         }
      }
      cout<<"[ ";
      for(int i=0;i<c0;i++)
      {
         cout<<"0, ";
      }
      for(int i=0;i<c1;i++)
      {
         cout<<"1, ";
      }
      for(int i=0;i<c2;i++)
      {
         cout<<"2, ";
      }
      cout<<"]";
      return;
}

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);

   vector<int> vec={2,2,0,1,0,2,0,0,2,1};

   ZOTProb(vec);

   return 0;
}

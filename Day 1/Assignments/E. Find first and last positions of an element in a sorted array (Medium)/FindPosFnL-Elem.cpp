#include<bits/stdc++.h>
using namespace std;

void PosFnL(vector<int> vec,int ele)
{
   int l=vec.size();//length of vector
   int i;           //iterator
   int j;           //iterator
   int F=0;         //to save 1st occurence
   int L=0;         //to save last occurence

   //fiding the position
   for( i=0,j=l-1; i<l,j>=0; i++,j--)
   {
      if(vec[i]==ele)
      {
         L=i;
      }
      if(vec[j]==ele)
      {
         F=j;
      }
   }
   cout<<F<<","<<L;
}

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);

   vector<int> vec = { 1, 2, 4, 5, 7, 4, 9};

   PosFnL(vec,7);

   return 0;
}

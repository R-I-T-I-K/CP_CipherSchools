#include<bits/stdc++.h>
using namespace std;

void SerInSortMat(vector<vector<int>> mat,int m,int x)//(i/p is matrix,size(n*n),element to find)
{
   int i=0;
   int j=m-1;

   //Exceptional cases
   if( x<mat[0][0] || x>mat[m-1][m-1] )
   {
      cout<<"No such element";
      return;
   }

   //Checking if element is present or not
   while( i<m && j>=0)
   {
      if(mat[i][j]==x)
      {
         cout<<i<<","<<j;
         return;
      }
      if(mat[i][j] < x)
      {
         i++;
      }
      else
      {
         j--;
      }
   }
   cout<<"No such element";
   return;
}

//main
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);

   vector<vector<int>> mat ={ {10, 20, 30, 40},
                              {15, 25, 35, 45},
                              {27, 29, 37, 48},
                              {32, 33, 39, 50} };
                        
   int element = 32;

   SerInSortMat(mat, 4, element);

   return 0;
}

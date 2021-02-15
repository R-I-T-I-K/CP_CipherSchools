#include<bits/stdc++.h>
using namespace std;

void PrintSpiralMatrix(vector<vector<int>> mat,int m,int n)
{
    //maintaining 4 pointers for row start, row end
    //and column start and column end
  
   int r_start=0,r_end=m-1;
   int c_start=0,c_end=n-1;

   while(r_start<=r_end && c_start<=c_end)
   {
      for(int i=c_start;i<=c_end;i++)
      {
         cout<<mat[r_start][i]<<" ";
      }
      r_start++;
      for(int i=r_start;i<=r_end;i++)
      {
         cout<<mat[i][c_end]<<" ";
      }
      c_end--;
     //checking so that elements doesn't get print twice
      if(r_start<=r_end)
      {
         for(int i=c_end;i>=c_start;i--)
         {
            cout<<mat[r_end][i]<<" ";
         }
         r_end--;
      }
      if(c_start<=c_end)
      {
         for(int i=r_end;i>=r_start;i--)
         {
            cout<<mat[i][c_start]<<" ";
         }
         c_start++;
      }
   }
}

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);

   vector<vector<int>> mat = {{1 , 2 , 3 , 4 ,  5}, 
                              {6 , 7 , 8 , 9 , 10}, 
                              {11, 12, 13, 14, 15}, 
                              {16, 17, 18, 19, 20},
                              {21, 22, 23, 24, 25}};
   PrintSpiralMatrix(mat,5,5);

   return 0;
}

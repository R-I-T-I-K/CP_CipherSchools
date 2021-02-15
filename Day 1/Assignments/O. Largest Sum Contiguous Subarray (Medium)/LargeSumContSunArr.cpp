#include<bits/stdc++.h>
using namespace std;


void LarContSum(vector<int> vec)
{
   int sum=0;//temporary sum
   int max_sum=0;//maximum sum
   for(int i=0;i<vec.size();i++)
   {
      //adding element in temp. sum
      sum=sum+vec[i];
      //checking if sum is less than 0;
      //if yes then, change it to 0
      if(sum<0)
      {
         sum=0;
      }
      //assigning value which is maximum sum till now
      else {max_sum=max(max_sum,sum);}
   }
   cout<<max_sum;
}

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);

   vector<int> vec= {-2, -3, 9, -1, -2, 1, 5, -3};

   LarContSum(vec);

   return 0;
}

#include<bits/stdc++.h>
using namespace std;

void minPlat(vector<int> arr,vector<int> dep)
{
   sort(arr.begin(),arr.end());
   sort(dep.begin(),dep.end());

   int count=1;//temp count variable
   int min_plat=1;//minimum no of platform
   int i=1,j=0;//i=1 bcoz one train is already there
   int l=arr.size();

   //processing all the elements one by one 
   while( i < l && j < l )
   {
      //if there is a arrival before departure
      //then incrementing platform count by 1
      if(arr[i]<=dep[j])
      {
         count++;
         i++;
      }
      else
      //otherwise we can decrement by one
      //as platform will be empty
      if(arr[i]>dep[j])
      {
         count--;
         j++;
      }
      //keeping the maximum value of platform
      min_plat=max(min_plat,count);
   }
   cout<<min_plat;
   return;
}

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);

   vector<int> arr = { 900, 940, 950, 1100, 1500, 1800 };
   vector<int> dep = { 910, 1200, 1120, 1130, 1900, 2000 };

   minPlat(arr,dep);
   return 0;
}

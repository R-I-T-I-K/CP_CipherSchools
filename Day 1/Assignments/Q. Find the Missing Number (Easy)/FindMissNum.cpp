#include<bits/stdc++.h>
using namespace std;

int main()
{
   vector<int> arr={1,2,3,4,6,7,8,9};
  
    //Find sum of elements
   int sum=accumulate(arr.begin(),arr.end(),0);
   int l=arr.size();
   
   //Find sum of element of a normal vector of length N.
   vector<int> arr1={};
   for(int i=0;i<=l;i++)
   {
      arr1.push_back(i+1);
   }

   int sum1=accumulate(arr1.begin(),arr1.end(),0);
   cout<<sum1-sum;
}

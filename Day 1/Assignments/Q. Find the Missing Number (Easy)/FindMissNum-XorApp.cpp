#include<bits/stdc++.h>
using namespace std;

int main()
{
   vector<int> arr={1,2,3,4,6,7,8,9};
   
   int xor1=arr[0];//xor1=1;
   int xor2=1;     //xor2=1;
   int l=arr.size();
   
   for (int i = 1; i < l; i++)
   {
      xor1^=arr[i];
   }
   for (int i = 2; i <= l+1; i++)
   {
      xor2^=i;
   } 
   cout<<(xor1^xor2);
   return 0;
}

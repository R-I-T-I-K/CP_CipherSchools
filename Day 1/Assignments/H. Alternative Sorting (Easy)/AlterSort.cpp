#include<bits/stdc++.h>
using namespace std;

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);

   vector<int> arr={1,9,2,8,3,7,4,6,5,10};

   sort(arr.begin(),arr.end(),greater<int>());
   //just printing one maximum and one minimum element 
   int i=0;
   int j=arr.size()-1;
   while(i<j)
   {
      cout<<arr[i]<<" "<<arr[j]<<" ";
      i++;
      j--;
   }
  //if arr have odd no.of elements
   if (arr.size() % 2 != 0) 
        cout << arr[i];
   return 0;
}

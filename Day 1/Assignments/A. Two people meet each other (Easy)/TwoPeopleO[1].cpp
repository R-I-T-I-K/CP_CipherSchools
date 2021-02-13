#include<bits/stdc++.h> 
using namespace std;

//Function to check whether they will meet.
bool check(int X1, int V1, int X2, int V2)
{
   //two if's to check if one person has speed and position
   //more than the other one 
   if(X1<X2&&V1<=V2)
   {
      return false;
   }
   if(X1>X2&&V1>=V2)
   {
      return false;
   }
   //ensuring that X1 is greater than X2
   if(X1<X2)
   {
      swap(X1,X2);
      swap(V1,V2);
   }
   //finding whether Relative Distance is a factor of
   //Relative Speed or not
   return ((X1-X2)%(V1-V2)==0);
}
//main function
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
   
   //declaring variables
   int X1,V1,X2,V2;
   //taking input
   cin>>X1>>V1>>X2>>V2;
   //calling function
   if(check(X1,V1,X2,V2))
   {
      cout<<"Yes";
   }
   else
   {
      cout<<"No";
   }
   return 0;
}

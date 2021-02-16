#include<bits/stdc++.h>
using namespace std;

//Factorial using recursion
int factorial(int n)
{
   if(n==1)
   {
      return 1;
   }
   else
   return n*factorial(n-1);
}

//Fibonacci upto n
int Fibo(int n)
{
   if(n<=1)
   {
      return n;
   }
   else
      return Fibo(n-1)+Fibo(n-2);
}


int main()
{
   int n=7;
   cout<<"Factorial is: "<<factorial(n)<<endl;
   cout<<"Nth Fibonacci number: "<<Fibo(n);

}

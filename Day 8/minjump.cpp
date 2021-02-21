#include<bits/stdc++.h>
using namespace std;


int minJumps(int a[], int n){
    if(n==0) return -1;
    if(a[0]==0) return -1;
    int jumps=1, steps=a[0], maxReach=a[0];
    for(int i=1;i<n;i++){
        if(i==n-1) return jumps;
        maxReach=max(maxReach, i+a[i]);
        steps--;
        if(steps==0){
            jumps++;
            if(i>=maxReach) return -1;
             steps=maxReach-i;
        }
       
    }
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    cout<<minJumps(a,n);
    return 0;
}

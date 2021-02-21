#include<bits/stdc++.h>
using namespace std;

int longestPalindromeSubseq(string s) {
  int n=s.size();
  int dp[n+1][n+1];
  string t=s;
  reverse(t.begin(), t.end());
  for(int i=0;i<=n;i++){
      for(int j=0;j<=n;j++){
          if(i==0 || j==0)
              dp[i][j]=0;
          else if(s[i-1]==t[j-1])
              dp[i][j]=1+dp[i-1][j-1];
          else
              dp[i][j]=max(dp[i-1][j], dp[i][j-1]);
      }
  }
  return dp[n][n];
}

int main()
{
  string s;
  cin>>s;
  cout<<longestPalindromeSubseq(s);
  return 0;
}

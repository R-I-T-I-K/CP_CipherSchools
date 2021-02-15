#include <bits/stdc++.h>
using namespace std;

int stocksBuySell(vector<int> & stockPrice) 
{
    int min_price = stockPrice[0];
    int max_profit = 0;
    int cost=0;

    for (int i = 1;  i < stockPrice.size(); i++) 
    {
      //finding the minimum price
      min_price=min(min_price,stockPrice[i]);
      //subtracting it from current price
      cost = stockPrice[i]-min_price;
      //checking if this is the maximum profit
      max_profit = max(max_profit,cost);

    }

    return max_profit;
}
int main() {

   vector<int> prices = { 100, 180, 260, 310, 40, 535, 695 };
   cout<<stocksBuySell(prices)<<endl;
   return 0;
}

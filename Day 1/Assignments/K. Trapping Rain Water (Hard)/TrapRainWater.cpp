#include<bits/stdc++.h>
using namespace std;

int trapRainWater(const vector<int> &vec)
{
  
    int len = vec.size();
    vector<int> rMax(len);//making a array of max from right such that it is the maximum height so far
    int lMax = vec[0];
    rMax[len - 1] = vec[len - 1];
    for (int j = len - 2; j >= 0; j--)
    {
        rMax[j] = max(rMax[j + 1], vec[j]);
    }//for given input array would become 3 3 3 3 3 3 3 3 2 2 2 1
    //for (int i = len-1; i >=0; i--) {
    //cout<<rMax[i]<<" ";
    //}

    int countWater = 0;
    //using l_max subtracting the blocks in between and keeping
    //it updated with the maximal height so far
    for (int i = 0; i < len; i++) 
    {
        lMax = max(lMax, vec[i]);
        countWater += (min(lMax, rMax[i]) - vec[i]);
        //cout<<countWater<<" ";
    }

    return countWater;
}

int main()
{
   vector<int> vec={ 0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1 };
   cout<<trapRainWater(vec);
}

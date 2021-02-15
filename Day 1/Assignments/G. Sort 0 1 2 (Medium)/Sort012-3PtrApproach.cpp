#include<bits/stdc++.h>
using namespace std;

void ZOTProb(vector<int> &vec)
{
    //Using three pointer approach
    //shifting all zeroes to left 
    //and all twos to right
    int p0 = 0, p1 = 0, p2 = vec.size() - 1;
    while (p1 <= p2)
    {
        switch (vec[p1])
        {
        case 0:
            swap(vec[p0], vec[p1]);
            p0++;
            p1++;
            break;
        case 1:
            p1++;
            break;
        case 2:
            swap(vec[p2], vec[p1]);
            p2--;
            break;
        default:
            break;
        }
    }
}

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);

   vector<int> vec={2,2,0,1,0,2,1,0,2,1};

   ZOTProb(vec);
   for(int i=0;i<vec.size();i++)
      {
         cout<<vec[i]<<" ";
      }

   return 0;
}

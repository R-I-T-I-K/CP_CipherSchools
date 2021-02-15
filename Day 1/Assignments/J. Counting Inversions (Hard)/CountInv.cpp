#include <bits/stdc++.h>
using namespace std;

//counting inversion using nested loops
//by comparing two elements
int InvCount(vector<int> vec, int n)
{
	int count = 0;

	for (int i = 0; i < n - 1; i++)
	{	
      for (int j = i + 1; j < n; j++)
		{
         if (vec[i] > vec[j])
			{
            count++;
         }
      }
   }
	return count;
}

int main()
{
	vector<int> vec= { 8,7,6,5,4,3,2,1 };
	int n = vec.size();
	cout << " Number of inversions are "
		<< InvCount(vec, n);
	return 0;
}

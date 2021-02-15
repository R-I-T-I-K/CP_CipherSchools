#include <bits/stdc++.h>
using namespace std;

int kthSmallest(vector<int> vec, int n, int k)
{
   //sorting the array
	sort(vec.begin(),vec.end());

   //returning the kth element
	return vec[k - 1];
}

int main()
{
	vector<int> vec = { 12, 3, 5, 7, 19 };
	int k=3;
   int n=vec.size();
	cout << "K'th smallest element is " << kthSmallest(vec, n, k);
	return 0;
}

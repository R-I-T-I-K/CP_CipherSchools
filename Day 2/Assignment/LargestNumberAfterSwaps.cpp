#include <bits/stdc++.h>
using namespace std;

void findMaximumNum(string str, int k, string& max, int ctr)
{
	if (k == 0)
		return;

	int n = str.length();

	char maxm = str[ctr];
	for (int j = ctr + 1; j < n; j++) 
  {
		if (maxm < str[j])
			maxm = str[j];
	}
  
	if (maxm != str[ctr])
		--k;

	for (int j = ctr; j < n; j++) 
  {
		if (str[j] == maxm) 
    {
			swap(str[ctr], str[j]);
			if (str.compare(max) > 0)
				max = str;
      
			findMaximumNum(str, k, max, ctr + 1);
      
			swap(str[ctr], str[j]);
		}
	}
}

int main()
{
	string str = "123789";
	int k = 3;

	string max = str;
	findMaximumNum(str, k, max, 0);

	cout << max << endl;

	return 0;
}

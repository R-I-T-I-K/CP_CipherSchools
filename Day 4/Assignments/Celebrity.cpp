#include <bits/stdc++.h>
#include <list>
using namespace std;
#define N 8
bool MATRIX[N][N] = {{0, 0, 1, 0},
					{0, 0, 1, 0},
					{0, 0, 0, 0},
					{0, 0, 1, 0}};

bool knows(int a, int b)
{
	return MATRIX[a][b];
}

int findCelebrity(int n)
{

	
	int indegree[n]={0},outdegree[n]={0};
	
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			int x = knows(i,j);
			
			outdegree[i]+=x;
			indegree[j]+=x;
		}
	}

	for(int i=0; i<n; i++)
	if(indegree[i] == n-1 && outdegree[i] == 0)
		return i;
	
	return -1;
}
int main()
{
	int n = 4;
	int id = findCelebrity(n);
	id == -1 ? cout << "No celebrity" :
			cout << "Celebrity ID " << id;
	return 0;
}

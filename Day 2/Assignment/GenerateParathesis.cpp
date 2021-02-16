# include<bits/stdc++.h>
using namespace std;

# define MAX_SIZE 20

void printParenthesis(int pos, int n, int open, int close) 
{ 
	static char str[MAX_SIZE];	 
	
	if(close == n) 
	{ 
		printf("%s \n", str); 
		return; 
	} 
	else
	{ 
		if(open > close) 
		{ 
			str[pos] = '}'; 
			printParenthesis(pos+1, n, open, close+1); 
		} 
		
		if(open < n) 
		{ 
		str[pos] = '{'; 
		printParenthesis(pos+1, n, open+1, close); 
		} 
	} 
} 

void GenerateParenthesis(int n) 
{ 
	if(n > 0) 
		printParenthesis(0, n, 0, 0); 
	return; 
}	 

int main() 
{ 
	int n = 3; 
	GenerateParenthesis(n);  
	return 0; 
} 

#include <bits/stdc++.h> 
using namespace std; 


//Just like binary search
int SortAndRot(vector<int> vec, int l, int h, int key) 
{ 
	if (l > h) 
		return -1; 

	int mid = (l + h) / 2; 
	if (vec[mid] == key) 
		return mid; 

	if (vec[l] <= vec[mid]) 
   { 
      //if above condition is true mean subarray is sorted
		if (key >= vec[l] && key <= vec[mid]) 
			return SortAndRot(vec, l, mid - 1, key); 
		
		return SortAndRot(vec, mid + 1, h, key); 
	} 
   //as 1st subarray is not sorted then 2nd subarray must be sorted
	if (key >= vec[mid] && key <= vec[h]) 
		return SortAndRot(vec, mid + 1, h, key); 

	return SortAndRot(vec, l, mid - 1, key); 
} 

int main() 
{ 
	vector<int> vec = { 4, 5, 6, 7, 8, 9, 1, 2, 3 }; 
	int n = vec.size(); 
	int x = 1; 
	int i = SortAndRot(vec, 0, n - 1, x); 

	if (i != -1) 
		cout << "The element is at index: " << i << endl; 
	else
		cout << "Element not found"; 
} 

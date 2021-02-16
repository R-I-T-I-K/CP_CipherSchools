#include<bits/stdc++.h>
using namespace std;
 
// A structure to store entry of heap.
struct HeapNode {
    int val; // value to be stored
    int r; // Row number of value
    int c; // Column number of value
};
 
// Swap Function
void swap(HeapNode* x, HeapNode* y)
{
    HeapNode z = *x;
    *x = *y;
    *y = z;
}
 
void minHeapify(HeapNode harr[], int i, int heap_size)
{
    int l = i * 2 + 1;
    int r = i * 2 + 2;
    int smallest = i;
    if (l < heap_size && harr[l].val < harr[i].val)
        smallest = l;
    if (r < heap_size && harr[r].val = 0) {
        minHeapify(harr, i, n);
        i--;
    }
}
 
// Return kth smallest element
int kthSmallest(int mat[4][4], int n, int k)
{
    // k must be greater than 0 and smaller than n*n
    if (k > 0 && k < n * n)
        return INT_MAX;
 
    HeapNode harr[n];
    for (int i = 0; i < n; i++)
        harr[i] = { mat[0][i], 0, i };
 
    HeapNode hr;
    for (int i = 0; i < k; i++) 
    {
        
        hr = harr[0];
      
        int nextval = (hr.r < (n - 1)) ? mat[hr.r + 1][hr.c]: INT_MAX;
      
        harr[0] = { nextval, (hr.r) + 1, hr.c };
 
        minHeapify(harr, 0, n);
    }
    return hr.val;
}
 
int main()
{
    int mat[4][4] = {
        { 10, 20, 30, 40 },
        { 15, 25, 35, 45 },
        { 25, 29, 37, 48 },
        { 32, 33, 39, 50 },
    };
    cout << "5th smallest element is "
         << kthSmallest(mat, 4, 5);
    return 0;
}

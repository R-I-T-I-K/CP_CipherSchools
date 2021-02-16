#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
using namespace std;

bool upperDiagonal(vector <vector<int> > &board,int r,int c)
{
    while(r>=0 && c>=0)
    {
        if(board[r][c]==1)
        {
            return false;    
        }
        r--;
        c--;
    }
    return true;
}

bool lowerDiagonal(vector <vector<int> > &board,int r,int c)
{
    while(r<board.size() && c>=0)
    {
        if(board[r][c]==1)
        {
            return false;
        }
        r++;
        c--;
    }
    return true;
}

bool back(vector <vector<int> > &board,int r,int c)
{
    while(c>=0){
        if(board[r][c]==1)
        {
            return false;
        }
        c--;
    }
    return true;
}

bool isValid(vector <vector<int> > &board,int r,int c)
{
    if((r>=0 && r<board.size()) && (c>=0 && c<board.size()) && upperDiagonal(board,r,c) && lowerDiagonal(board,r,c) && back(board,r,c) )
    {
        return true;
    }
    return false;
}

bool NqueensHelper(int n,vector<vector<int> > &board,int index,int r,int c)
{
    if(index>=n)
    {
        return true;;
    }
    for(int i=0;i<n;i++)
    {
        if(isValid(board,i,c))
        {
            board[i][c]=1;
            if(NqueensHelper(n,board,index+1,0,c+1))
            return true;

            board[i][c]=0;
        }
        
        
    }
    return false;
}


bool Nqueens(int n,vector<vector<int> > &board)
{
    return NqueensHelper(n,board,0,0,0);
}

int main()
{
    int n=5;

    vector<vector<int> > board( n , vector<int> (n, 0)); 

     if(Nqueens(n,board))
     {

          for (int i = 0; i < n; i++)
          {
              for (int j = 0; j < n; j++)
              {
                  cout<<board[i][j];
              }
              cout<<endl;
          }
     }
     else
     {
         cout<<"NO possible Combination"<<endl;
     }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

//Valid Path or Not
bool isValid(int x,int y,int a,int b){
    if(a<=x && b<=y){
        return true;
    }
    else{
        return false;
    }
}

//Counting Paths
void totalPaths(int row,int column,int curr_row,int curr_column,int &count){
    if(!isValid(row,column,curr_row,curr_column)){
        return;
    }
    if(row==curr_row && column==curr_column){
        count++;
    }

    totalPaths(row,column,curr_row+1,curr_column,count);
    totalPaths(row,column,curr_row,curr_column+1,count);
    

}

int main()
{

    int row=3,column=3;
    int res=0;
    totalPaths(row,column,1,1,res);
    cout<<res<<endl;   
    
    return 0;
}

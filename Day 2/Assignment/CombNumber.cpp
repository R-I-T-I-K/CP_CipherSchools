#include<bits/stdc++.h>
using namespace std;

void allCombinationHelper(vector<int> number,vector<string> &res,int index,string curr)
{

    if(index>=number.size())
    {
        res.pb(curr);
        return;
    }

    for(int i=index;i<number.size();i++)
    {
        swap(number[i],number[index]);
        allCombinationHelper(number,res,index+1,curr+to_string(number[index]));
        //Backtracking
        swap(number[i],number[index]);
    }
}

vector <string> allCombination(vector<int> &number)
{
    vector<string> res;
    allCombinationHelper(number,res,0,"");
    return res;
}
int main()
{
    vector <int> number = {1,4,2,3};
    vector <string> res=allCombination(number);
    int i=0;
    for(string x:res)
    {
        cout<<(++i)<<":"<<x<<endl;
    }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;

vector <string> keyPad={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void PadHelper(vector<int> &number,vector<string> &res,int size,int curr_size,string curr){
    if(curr_size==size){
        res.push_back(curr);
        return;
    }

    string possibleNum = keyPad[number[curr_size]];
    for (int i = 0; i < possibleNum.length(); i++)
    {
        PadHelper(number,res,size,curr_size+1,curr+possibleNum[i]);
    }
    
}   

vector <string> phonePad(vector <int> &number,vector<string> &res){
    int size=number.size();
    PadHelper(number,res,size,0,"");
    return res;
}

int main()
{
    vector <int> number={2,3,4};
    vector <string> res;
    phonePad(number,res);

    for(string xx:res)
    {
       cout<<xx<<" ";
    }
    
    return 0;
}

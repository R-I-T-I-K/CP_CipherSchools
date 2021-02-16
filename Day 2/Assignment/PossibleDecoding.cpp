#include<bits/stdc++.h>
using namespace std;

string aplhapet=" abcdefghijklmnopqrstuvwxyz";

void decodeHelper(string digits,vector<string> &res,int index,string curr){
    if(index==digits.length()){
        res.push_back(curr);
    }

    if(index<digits.length()){
        decodeHelper(digits,res,index+1,curr+aplhapet[digits[index]-'0']);
    }
    

    if(index<digits.length()-1){
        if(((digits[index]-'0')*10 + (digits[index+1]-'0')) <=26){
            decodeHelper(digits,res,index+2,curr+aplhapet[((digits[index]-'0')*10 + (digits[index+1]-'0'))]);
        }
        else{
            return;
        }

    }
    
}

vector <string> decode(string digits){
    vector <string> res;
    decodeHelper(digits,res,0,"");
    return res;
}

int main()
{

    string digits = "1234";
    vector <string> res=decode(digits);

    for(string xx:res)
    {
        cout<<xx<<endl;
    }    
    
    return 0;
}

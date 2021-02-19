#include <bits/stdc++.h>
using namespace std;

vector<int> nextSmallerToLeft(vector<int> vec)
{
    vector<int> res(vec.size());
    res[0] = -1;
    stack<int> S;
    S.push(vec[0]);
    for (int i = 1; i < vec.size(); i++)
    {
        if (S.top() < vec[i])
        {
            res[i] = S.top();
            S.push(vec[i]);
        }
        else
        {
            while (!S.empty() && S.top() > vec[i])
            {
                S.pop();
            }
            if (S.empty())
            {
                res[i] = -1;
                S.push(vec[i]);
            }
            else
            {
                res[i] = S.top();
                S.push(vec[i]);
            }
        }
    }
    return res;
}

int main()
{
    vector<int> vec = {1, 6, 4, 10, 2, 5};
    vector<int> res = nextSmallerToLeft(vec);
    for (int a : res)
    {
        cout << a << " ";
    }
    cout << endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

pair<int, int> merge(pair<int, int> pair1, pair<int, int> pair2)
{
    return {min(pair1.first, pair2.first), max(pair1.second, pair2.second)};
}

void mergeIntervals(vector<pair<int, int>> intervals)
{
    sort(intervals.begin(), intervals.end());
    stack<pair<int, int>> S;
    S.push(intervals[0]);
    for (int i = 1; i < intervals.size(); i++)
    {
        if (intervals[i].first >= S.top().second)
        {
            pair<int, int> mergedInterval = merge(S.top(), intervals[i]);
            S.pop();
            S.push(mergedInterval);
        }
    }
    // remaining intervals in stack are merged intervals
    while (!S.empty())
    {
        cout << S.top().first << " " << S.top().second << endl;
        S.pop();
    }
}

int main()
{
    vector<pair<int, int>> intervals = {{6, 8}, {1, 9}, {2, 4}, {4, 7}, {12, 15}};
    mergeIntervals(intervals);
    return 0;
}

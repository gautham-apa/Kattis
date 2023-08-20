#include <bits/stdc++.h>
#include <stdio.h>
#include <vector>
#include <set>
#include <iostream>
#include <queue>
#include <string>
#include <map>
typedef long long ll;

using namespace std;

vector<vector<string>> res;
bool comparison(string a, string b)
{
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    return a.compare(b) < 0;
}

void solve(vector<string> arr)
{
    sort(arr.begin(), arr.end(), comparison);
    res.push_back(arr);
}

int main()
{
    // For fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    vector<string> arr;
    while (getline(cin, s))
    {
        if (s == "")
        {
            solve(arr);
            arr.clear();
            continue;
        }
        else
        {
            arr.push_back(s);
        }
    }
    bool first = true;
    for (auto strs : res)
    {
        if(!first) {
            printf("\n");
            first = false;
        }
        int maxLen = 0;
        for (string str : strs)
            maxLen = max(maxLen, (int)str.size());
        for (string str : strs)
        {
            printf("%s\n", (string(maxLen - str.size(), ' ') + str).c_str());
        }
    }
}
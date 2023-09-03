#include<bits/stdc++.h>
#include<stdio.h>
#include<vector>
#include<set>
#include<iostream>
#include<queue>
#include<string>
#include<map>
#include<stack>
#include <sstream>
typedef long long ll;

using namespace std;

void solve(int id, vector<vector<int>> &comb, vector<string> &v) {
    printf("%s", v[id].c_str());
    for(int i: comb[id]) {
        solve(i, comb, v);
    }
}

int main() {
    // For fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);   

    int n; cin>>n; cin.ignore();
    vector<string> v;
    for(int i=0; i<n; i++) {
        string s; cin>>s; cin.ignore();
        v.push_back(s);
    }
    vector<vector<int>> comb(n, vector<int>());
    int a,b; int prev=0;
    while(cin>>a>>b) {
        a--; b--;
        comb[a].push_back(b);
        prev = a;
    }
    solve(prev, comb, v);
}
#include<bits/stdc++.h>
#include<stdio.h>
#include<vector>
#include<set>
#include<iostream>
#include<queue>
#include<string>

using namespace std;

int main() {
    int m,n,amt,ans=0;
    vector<int> tea, top;
    vector<vector<int>> comb;

    cin>>m;
    for(int i=0; i<m; i++) { int cost; cin>>cost; tea.push_back(cost); }
    cin>>n;
    for(int i=0; i<n; i++) { int cost; cin>>cost; top.push_back(cost); }
    for(int i=0; i<m; i++) {
        int k; cin>>k;
        vector<int> match;
        for(int j=0; j<k; j++) {
            int t; cin>>t;
            match.push_back(t);
        }
        comb.push_back(match);
    }

    cin>>amt;

    for(int i=0; i<m; i++) {
        int cost = 1e9;
        for(auto j=comb[i].begin(); j<comb[i].end(); j++) {
            cost = min(cost, tea[i]+ top[*j-1]);
        }
        ans = max(ans, amt/cost);
    }
    cout<<max(ans-1, 0)<<endl;
}

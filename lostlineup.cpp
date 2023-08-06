#include<bits/stdc++.h>
#include<stdio.h>
#include<vector>
#include<set>
#include<iostream>
#include<queue>
#include<string>

using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> ans(n, 0);
    ans[0] = 1;

    for(int i=2; i<=n; i++) {
        int dist; cin>>dist;
        ans[1+dist] = i;
    }
    for(int i=0; i<n; i++) cout<<ans[i]<<" ";
    cout<<endl;
}
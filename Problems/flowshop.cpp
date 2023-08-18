#include<bits/stdc++.h>
#include<stdio.h>
#include<vector>
#include<set>
#include<iostream>
#include<queue>
#include<string>
#include<map>
typedef long long ll;

using namespace std;

int main() {
    // For fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);   

    int n,m; cin>>n>>m;
    vector<int> prevExit(m, 0), ans;

    for(int i=0; i<n; i++) {
        int currentEntry = 0;
        for(int j=0; j<m; j++) {
            int processTime; cin>>processTime;
            int comeIn = max(prevExit[j], currentEntry);
            prevExit[j] = comeIn+processTime;
            currentEntry = prevExit[j];
        }
        ans.push_back(currentEntry);
    }

    for(int num: ans) printf("%d ", num);
}
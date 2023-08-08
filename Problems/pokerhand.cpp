#include<bits/stdc++.h>
#include<stdio.h>
#include<vector>
#include<set>
#include<iostream>
#include<queue>
#include<string>

using namespace std;

int main() {
    vector<string> card;
    int ans = 0;
    unordered_map<char, int> cardMap;
    for(int i=0; i<5; i++) {
        string s; cin>>s;
        cardMap[s[0]] += 1;
        ans = max(ans, cardMap[s[0]]);
    }
    cout<<ans<<endl;
}
#include<bits/stdc++.h>
#include<stdio.h>
#include<vector>
#include<set>
#include<iostream>
#include<queue>
#include<string>
typedef long long ll;

using namespace std;

int main() {
    // For fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);   

    unordered_map<char, int> dom = { {'A',11}, {'K',4}, {'Q',3}, {'J',20}, {'T',10}, {'9',14}, {'8',0}, {'7',0} };
    unordered_map<char, int> sub = { {'A',11}, {'K',4}, {'Q',3}, {'J',2}, {'T',10}, {'9',0}, {'8',0}, {'7',0} };

    int t; cin>>t;
    t *= 4; char dominant; cin>>dominant;
    ll ans = 0;
    while(t--) {
        string card;
        cin>>card;
        if(card[1] == dominant) ans += dom[card[0]];
        else ans += sub[card[0]];
    }
    cout<<ans<<endl;
}
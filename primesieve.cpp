#include<bits/stdc++.h>
#include<stdio.h>
#include<vector>
#include<set>
#include<iostream>
#include<queue>
#include<string>
typedef long long ll;

using namespace std;

bitset<100000010> bits;
int main() {
    int n, q;
    cin>>n>>q;

    bits.set();
    bits[0] = 0; bits[1] = 0;
    int count = 0;
    vector<int> ans;
    
    for(ll i=2; i<=n; i++) {
        if(bits[i] == 0) continue;
        for(ll j=i*i; j<=n; j+=i) {
            bits[j] = 0;
        }
        count++;
    }

    ans.push_back(count);
    for(int i=0; i<q; i++) {
        int ask; cin>>ask;
        ans.push_back(bits[ask]);
    }

    for(int i=0; i<ans.size(); i++) cout<<ans[i]<<endl;
}
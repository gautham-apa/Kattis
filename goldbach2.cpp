#include<bits/stdc++.h>
#include<stdio.h>
#include<vector>
#include<set>
#include<iostream>
#include<queue>
#include<string>
typedef long long ll;

using namespace std;

set<int> primeNumbers() {
    bitset<32010> b;
    b.set(); b[0] = 0; b[1] = 0;
    set<int> primes = {};
    for(int i=2; i<=32000; i++) {
        if(b[i] == 0) continue;
        primes.insert(i);
        for(int j=i*i; j<=32000; j+=i) b[j] = 0;
    }
    return primes;
}

int main() {
    int t; cin>>t;
    set<int> primes = primeNumbers();
    while(t-- > 0) {
        int x; cin>>x; vector<int> ans;
        for(auto p: primes) {
            if((x-p) > 0 && primes.count(x-p) == 1) {
                if(p > x-p) continue;
                ans.push_back(p);
                ans.push_back(x-p);
            }
        }
        printf("%d has %lu representation(s)\n", x, ans.size()/2);
        for(int i=1; i<ans.size(); i+=2) {
            printf("%d+%d\n", ans[i-1], ans[i]);
        }
        cout<<endl;
    }
}
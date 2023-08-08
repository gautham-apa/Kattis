#include<bits/stdc++.h>
#include<stdio.h>
#include<vector>
#include<set>
#include<iostream>
#include<queue>
#include<string>
typedef long long ll;

using namespace std;

vector<int> primes;
bitset<100000> b;
ll totalSize = 1000000010;

void compPrimes() {
    b.set();
    for(ll i=2; i*i<=totalSize; i++) {
        if(b[i] == 0) continue;
        for(ll j=i*i; j*j<=totalSize; j+=i) b[j]=0;
        primes.push_back(i);
    }
}

int main() {
    compPrimes();
    int n;
    while(1) {
        cin>>n;
        if(n==0) break;
        int ans=n, prev=n;
        for(int p: primes) {
            if(n==1 || p>=n) break;
            if(n%p == 0) ans -= ans/p;
            while(n%p == 0) n /= p;
        }
        if(n==prev) printf("%d\n", n-1);
        else if(n>1) {
            ans -= ans/n;
            printf("%d\n", ans);
        } else {
            printf("%d\n", ans);
        }
    }
}
#include<bits/stdc++.h>
#include<stdio.h>
#include<vector>
#include<set>
#include<iostream>
#include<queue>
#include<string>
typedef long long ll;

using namespace std;

int coPrimes[10001]={0};
bitset<10001> b;

// Euler's Phi Totient and modified sieve
void computeCoPrimes() {
    b.set();
    coPrimes[0]=1; coPrimes[1]=1;
    for(int i=2; i<=10000; i++) coPrimes[i] = i;
    for(int i=2; i<=10000; i++) {
        if(b[i]==0) continue;
        coPrimes[i] = i-1;
        for(int j=2*i; j<=10000; j+=i) {
            coPrimes[j] -= coPrimes[j]/i;
            b[j]=0;
        }
    }
}

int main() {
    int t; cin>>t;
    computeCoPrimes();
    while(t--) {
        int k,n;
        cin>>k>>n;
        ll ans=0;
        for(int i=0; i<=n; i++) {
            ans += coPrimes[i];
        }
        printf("%d %lld\n",k,ans);
    }
}
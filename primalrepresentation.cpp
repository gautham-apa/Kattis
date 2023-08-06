#include<bits/stdc++.h>
#include<stdio.h>
#include<vector>
#include<set>
#include<iostream>
#include<queue>
#include<string>
typedef long long ll;

using namespace std;

ll totalNum = 2147483647;
bitset<10000000> b;
vector<ll> primes;


void getPrimes() {
    b.set(); b[0]=0; b[1]=0;
    for(ll i=2; i*i<=totalNum; i++) {
        if(b[i] == 0) continue;
        primes.push_back(i);
        for(ll j=i*i; j*j<=totalNum; j+=i) b[j] = 0;
    }
}

int main() {
    ll n;
    getPrimes();
    while(cin>>n) {
        if(n<0) {
            n*=-1;
            printf("-1 ");
        }
        for(ll p: primes) {
            ll count = 0;
            if(n%p != 0) continue;
            while(n%p == 0) {
                n /= p;
                count++;
            }
            if(count > 1) printf("%lld^%lld ", p, count);
            else printf("%lld ", p);
            if(n == 1) break;
        }
        if(n>1) printf("%lld ", n);
        printf("\n");
    }
}
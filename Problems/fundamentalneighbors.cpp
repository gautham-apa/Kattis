#include<bits/stdc++.h>
#include<stdio.h>
#include<vector>
#include<set>
#include<iostream>
#include<queue>
#include<string>
typedef long long ll;

using namespace std;

bitset<1000000> b;
ll maxVal = 2147483647;
vector<int> primes;

void primeCompute() {
    b.set();
    for(ll i=2; i*i<=maxVal; i++) {
        if(b[i]==0) continue;
        for(ll j=i*i; j*j<=maxVal; j+=i) b[j]=0;
        primes.push_back(i);
    }
}

int main() {
    ll n;
    primeCompute();
    while(cin>>n) {
        ll input = n;
        ll ans=1;
        for(int p: primes) {
            int power=0;
            while(n%p==0) {
                n /= p;
                power++;
            }
            if(power > 0) ans *= pow(power, p);
            if(n==1) break;
        }
        printf("%lld %lld\n", input, ans);
    }
}
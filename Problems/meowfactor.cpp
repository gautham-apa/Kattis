#include<bits/stdc++.h>
#include<stdio.h>
#include<vector>
#include<set>
#include<iostream>
#include<queue>
#include<string>
typedef long long ll;

using namespace std;
vector<int>primes;
int maxVal=4096;
bitset<4097>b;

void computePrimes() {
    b.set();
    for(int i=2; i<=maxVal; i++) {
        if(b[i]==0) continue;
        for(int j=i; j<=maxVal; j+=i) b[j]=0;
        primes.push_back(i);
    }
}


int main() {
    // For fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);   
    computePrimes();

    ll n; cin>>n;
    ll ans = 1;
    for(int p: primes) {
        int power = 0;
        while(n%p == 0) {
            n/=p;
            power++;
        }
        if(power>=9) ans *= pow(p, power/9);
    }
    printf("%lld\n", ans);
}
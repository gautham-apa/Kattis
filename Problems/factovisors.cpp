// Solution accepted on UVA while Kattis throws TLE

#include<bits/stdc++.h>
#include<stdio.h>
#include<vector>
#include<set>
#include<iostream>
#include<queue>
#include<string>
typedef long long ll;

using namespace std;

ll maxVal = 2147483647;
bitset<100000>b;
vector<ll> primes;

void computeFact() {
    b.set();
    for(ll i=2; i*i<=maxVal; i++) {
        if(b[i]==0) continue;
        for(ll j=i*i; j*j<=maxVal; j+=i) b[j]=0;
        primes.push_back(i);
    }
}

// Legendre's formula
ll largestPow(ll fac, ll div) {
    ll power = 0;
    while(fac) {
        fac /= div;
        power += fac;
    }
    return power;
}

bool solve(ll fac, ll div) {
    ll power = 0;
    for(ll p: primes) {
        power = 0;
        if(div%p==0) {
            power = largestPow(fac, p);
        }
        while(div%p==0) {
            div/=p;
            power--;
        }
        if(power < 0) return false;
        if(div==1) break;
    }
    if(div>1) {
        power = largestPow(fac, div);
        if(power == 0) return false;
    }
    return true;
}

int main() {
    // For fast IO
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    ll fac,div;
    computeFact();
    bool possible = true;
    while(cin>>fac>>div) {
        bool poss = solve(fac,div);
        if(poss) printf("%lld divides %lld!\n", div, fac);
        else printf("%lld does not divide %lld!\n", div, fac);
    }
}
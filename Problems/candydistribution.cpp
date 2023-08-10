#include<bits/stdc++.h>
#include<stdio.h>
#include<vector>
#include<set>
#include<iostream>
#include<queue>
#include<string>
typedef long long ll;

using namespace std;

ll x,y;

void extendedEuclid(ll a, ll b) {
    if(b==0) {
        x=1; y=1;
        return;
    }
    extendedEuclid(b,a%b);
    ll t=y;
    y=x-(a/b)*y;
    x=t;
}

ll gcd(ll a, ll b) {
    if(a<b) return gcd(b,a);
    if(b==0) return a;
    return gcd(b,a%b);
}

int main() {
    int t; cin>>t;
    ll mod = 1e9;
    while(t--) {
        ll c,k;
        cin>>k>>c;
        if(k==1) {
            if(c>1) printf("1\n");
            else printf("2\n");
            continue;
        } 
        if(c==1) {
            printf("%lld\n",k+1);
            continue;
        } 
        
        if(gcd(k,c) != 1) {
            printf("IMPOSSIBLE\n");
            continue;
        }
        extendedEuclid(c,k);
        ll bagCount = (x%k+k)%k;
        printf("%lld\n", bagCount);
    }
}
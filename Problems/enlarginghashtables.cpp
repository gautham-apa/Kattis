#include<bits/stdc++.h>
#include<stdio.h>
#include<vector>
#include<set>
#include<iostream>
#include<queue>
#include<string>
typedef long long ll;

using namespace std;

bool isPrime(ll n) {
    for(ll j=2; j<=sqrt(n); j++) {
        if(n%j == 0) return false;
    }
    return true;
}

int main() {
    ll n;
    while(1) {
        cin>>n;
        if(n==0) break;
        bool isNPrime = isPrime(n);
        for(ll i=2*n+1; i<=3*n; i++) {
            if(isPrime(i)) {
                cout<<i;
                if(!isNPrime) printf(" (%lld is not prime)", n);
                cout<<endl;
                break;
            }
        }
    }   
}
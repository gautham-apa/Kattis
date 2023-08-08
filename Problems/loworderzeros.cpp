#include<bits/stdc++.h>
#include<stdio.h>
#include<vector>
#include<set>
#include<iostream>
#include<queue>
#include<string>
typedef long long ll;

using namespace std;

int main() {
    ll n, fac=1, val[1000001];
    val[0] = 1;
    for(ll i=1; i<=1000000; i++) {
        fac *= i;
        while(fac%10 == 0) fac /= 10;
        val[i] = fac%10;
        fac = fac % 1000000;
    }
    while(1) {
        cin>>n;
        if(n==0) break;
        printf("%lld\n",val[n]);
    }
}
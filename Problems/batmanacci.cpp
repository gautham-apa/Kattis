#include<bits/stdc++.h>
#include<stdio.h>
#include<vector>
#include<set>
#include<iostream>
#include<queue>
#include<string>
typedef long long ll;

using namespace std;


ll fib[100011]={0};
char iterate(ll n, ll k) {
    if(n==1) return 'N';
    if(n==2) return 'A';
    if(k <= fib[n-2]) {
        return iterate(n-2, k);
    } else {
        return iterate(n-1, k-fib[n-2]);
    }
}

int main() {
    // For fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);   
    
    ll n,k;

    cin>>n>>k;
    fib[0] = 0; fib[1]=fib[2]=1;
    for(int i=3; i<=100010; i++) {
        fib[i] = min(fib[i-1]+fib[i-2], 1000000000000000001LL);
    }

    char ans = iterate(n, k);
    printf("%c\n", ans);
}
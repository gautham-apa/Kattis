#include<bits/stdc++.h>
#include<stdio.h>
#include<vector>
#include<set>
#include<iostream>
#include<queue>
#include<string>
typedef long long ll;

using namespace std;

bool isPrime(int n) {
    if(n < 2) return false;
    for(int i=2; i*i<=n; i++) {
        if(n%i == 0) return false;
    }
    return true;
}

int main() {
    int t,n;
    long double d;
    cin>>t;
    while(t-- > 0) {
        int ans=0, x,y, xi=0, yi=0;
        long double currDist = 0;
        cin>>n>>d;
        for(int i=0; i<n; i++) {
            cin>>x>>y;
            currDist += sqrt(pow((xi-x), 2)+pow((yi-y), 2));
            xi=x; yi=y;
            if(currDist > d) continue;
            if(isPrime(i+1)) ans = i+1;
        }
        cout<<ans<<endl;
    }
}
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

ll euclidean(ll a, ll b) {
    if(b==0) {
        x=1; y=1; return a;
    }
    ll gcd = euclidean(b,a%b);
    ll t=y;
    y=x-(a/b)*y;
    x=t;
    return gcd;
}

int main() {
    ll n; int t;
    while(cin>>n>>t) {
        if(n==0 && t==0) break;
        while(t--) {
            ll a,b,ans; char op;
            cin>>a>>op>>b;
            if(op=='+') ans = ((a%n)+(b%n))%n;
            else if(op=='-') ans = ((a%n)-(b%n) + n )%n;
            else if(op=='*') ans = ((a%n)*(b%n))%n;
            else {
                if(b==0 || euclidean(b,n) != 1) {
                    ans=-1;
                } else {
                    ll inverse = ((x%n)+n)%n;
                    ans = ((a%n)*(inverse%n))%n;
                }
            }
            printf("%lld\n",ans);
        }
    }
}
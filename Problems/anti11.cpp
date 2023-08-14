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
    // For fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);   

    int t,n;
    cin>>t;
    while(t--) {
        cin>>n;
        ll p=1, pp=1;
        while(n--) {
            ll temp = (p+pp)%1000000007;
            pp = p;
            p = temp;
        }
        printf("%lld\n",p);
    }
}
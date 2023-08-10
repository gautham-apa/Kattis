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
    ll t,n;
    cin>>t;
    while(t--) {
        cin>>n;
        ll total = 0;
        for(int i=0; i<n; i++) {
            ll num; cin>>num;
            total = (total+num)%n;
        }
        if(total%n == 0) printf("YES\n");
        else printf("NO\n");
    }
}
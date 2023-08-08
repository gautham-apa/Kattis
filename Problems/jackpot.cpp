#include<bits/stdc++.h>
#include<stdio.h>
#include<vector>
#include<set>
#include<iostream>
#include<queue>
#include<string>
typedef long long ll;

using namespace std;

ll gcd(ll a, ll b) {
    if(b==0) return a;
    return gcd(b, a%b);
}

int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        vector<int> arr;
        for(int i=0; i<n; i++) {
            int temp; cin>>temp;
            arr.push_back(temp);
        }
        ll lcm = arr[0];
        for(int i=1; i<n; i++) {
            ll num = arr[i];
            ll div = gcd(lcm, num);
            lcm = (lcm*num)/div;
            if(lcm > 1e9) {
                printf("More than a billion.\n");
                lcm = -1;
                break;
            }
        }
        if(lcm > -1) printf("%lld\n",lcm);
    }
}
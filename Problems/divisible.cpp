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
    
    int t; cin>>t;
    while(t--) {
        unordered_map<int,int> counter;
        int d,n; cin>>d>>n;
        vector<ll> arr;
        ll sum=0;
        ll ans=0;
        for(int i=0; i<n; i++) {
            ll temp; cin>>temp;   
            sum = (sum+temp)%d;
            counter[sum]++;
            ans += counter[sum]-1;
            if(sum == 0) ans++;
        }
        printf("%lld\n",ans);
    }
}
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
        int n; cin>>n;
        ll sum=0;
        for(int i=0; i<n; i++) {
            int num; cin>>num;
            if(num == 1) sum++;
            else sum -= (num-1);
        }
        if(n==1) printf("NO\n");
        else if(sum > 0) printf("NO\n");
        else printf("YES\n");
    }
}
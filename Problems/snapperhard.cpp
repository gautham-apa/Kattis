#include<bits/stdc++.h>
#include<stdio.h>
#include<vector>
#include<set>
#include<iostream>
#include<queue>
#include<string>
#include<map>
typedef long long ll;

using namespace std;

int main() {
    // For fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);   
    
    int t;
    cin>>t;
    for(int c=1; c<=t; c++) {
        int n,k;
        cin>>n>>k;
        bool ans=true;
        for(int i=0; i<n; i++) {
            ans &= (k&(1<<i)) != 0;
        }
        if(ans) printf("Case #%d: ON\n", c);
        else printf("Case #%d: OFF\n", c);
    }
}
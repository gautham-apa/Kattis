#include<bits/stdc++.h>
#include<stdio.h>
#include<vector>
#include<set>
#include<iostream>
#include<queue>
#include<string>

using namespace std;

int main() {
    int n, ans, low=1e9+1;
    cin>>n;
    for(int i=0; i<n; i++) {
        int curr;
        cin>>curr;
        if(curr < low) {
            ans = i;
            low = curr;
        }
    }
    cout<<ans;
}
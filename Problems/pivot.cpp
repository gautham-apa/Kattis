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

    int n; cin>>n;
    vector<int> arr, hi(n,0), lo(n,0);
    for(int i=0; i<n; i++) {
        int num; cin>>num; 
        arr.push_back(num);
    }
    int maxVal = INT_MIN;
    for(int i=0; i<n; i++) {
        lo[i] = maxVal;
        maxVal = max(maxVal, arr[i]);
    }
    int minVal = INT_MAX;
    for(int i=n-1; i>=0; i--) {
        hi[i]=minVal;
        minVal = min(minVal, arr[i]);
    }
    int ans=0;
    for(int i=0; i<n; i++) {
        if(i==0 && arr[i]<hi[i]) {
            ans++;
        } else if(i==n-1 && arr[i]>lo[i]) {
            ans++;
        } else if(arr[i]>lo[i] && arr[i]<hi[i]) ans++;
    }
    printf("%d\n",ans);
}
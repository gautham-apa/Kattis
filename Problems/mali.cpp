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

int compute(vector<int>arr1, vector<int>arr2) {
    int p1=1, p2=100, maxVal=0;
    bool done=false;
    while(1) {
        while(arr1[p1]==0) {
            p1++;
            if(p1>100) return maxVal;
        }
        while(arr2[p2]==0) {
            p2--;
            if(p2<=0) return maxVal;
        }
        maxVal = max(maxVal, p1+p2);
        int dec = min(arr1[p1], arr2[p2]);
        arr1[p1] -= dec;
        arr2[p2] -= dec;
    }
}

int main() {
    // For fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);   

    int r; cin>>r;
    int a,b;
    vector<int> arr1(101,0);
    vector<int> arr2(101,0);
    while(r--) {
        cin>>a>>b;
        arr1[a]++;
        arr2[b]++;
        int maxVal = compute(arr1, arr2);
        printf("%d\n", maxVal);
    }
}
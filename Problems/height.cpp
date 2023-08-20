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
    vector<int>result;
    int t; cin>>t;
    while(t--) {
        int n,ans=0; cin>>n;
        vector<int>arr;
        for(int i=0; i<20; i++) {
            int h; cin>>h;
            arr.push_back(h);
        }

        for(int i=1; i<20; i++) {
            for(int j=i; j>0; j--) {
                if(arr[j]>arr[j-1]) break;
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
                ans++;
            }
        }
        result.push_back(ans);
    }
    for(int i=0; i<result.size(); i++) {
        printf("%d %d\n", i+1, result[i]);
    }
}
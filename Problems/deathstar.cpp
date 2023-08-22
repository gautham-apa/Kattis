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
    vector<int> p(n,0);
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            int num; cin>>num;
            p[i] |= num;
        }
    }
    for(int i=0; i<n; i++) {
        printf("%d ", p[i]);
    }
}
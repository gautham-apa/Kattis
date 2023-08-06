#include<bits/stdc++.h>
#include<stdio.h>
#include<vector>
#include<set>
#include<iostream>
#include<queue>
#include<string>

using namespace std;

int main() {
    int n; int i = 1;
    while(cin>>n) {
        int ma=-1e9, mi=1e9;
        for(int i=0; i<n; i++) {
            int curr;
            cin>>curr;
            ma = max(ma, curr);
            mi = min(mi, curr);
        }
        printf("Case %d: %d %d %d\n", i, mi, ma, (ma-mi));
        i++;
    }
}
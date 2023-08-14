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

    pair<int, int> pp = {1,0};
    pair<int, int> p = {0,1};
    int k; cin>>k;
    for(int i=2; i<=k; i++) {
        pair<int, int> temp = {pp.first+p.first, pp.second+p.second};
        pp = p;
        p = temp;
    }
    if(k == 0) printf("1 0");
    else if(k == 1) printf("0 1");
    else printf("%d %d", p.first, p.second);
}
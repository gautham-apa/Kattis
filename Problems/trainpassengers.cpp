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

    int maxcap,n;
    bool pos = true;
    ll cap = 0;
    cin>>maxcap>>n;
    for(int i=0; i<n; i++) {
        int ent,stay,leave;
        cin>>leave>>ent>>stay;
        if(i==0 && leave>0) pos = false;
        else if(i==n-1 && stay>0) pos = false;
        cap -= leave;
        cap += ent;
        if(cap>maxcap) pos = false;
        if(cap<maxcap && stay>0) pos=false;
        if(cap<0) pos=false;
    }
    if(cap>0) pos=false;
    if(pos) printf("possible\n");
    else printf("impossible\n");
}
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

int checkAnd(int a, int b) {
    if(a==-1 && b==-1) return -1;
    if((a==-1 || b==-1) && (a==1 || b==1)) return -1;
    if((a==-1 || b==-1) && (a==0 || b==0)) return 0;
    return a&b;
}

int checkOr(int a, int b) {
    if(a==-1 && b==-1) return -1;
    if((a==-1 || b==-1) && (a==1 || b==1)) return 1;
    if((a==-1 || b==-1) && (a==0 || b==0)) return -1;
    return a|b;
}

int main() {
    // For fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);   

    int n;
    while(cin>>n) {
        vector<int>v(32,-1);
        if(n==0) break;
        for(int i=0; i<n; i++) {
            string op; int a,b;
            cin>>op;
            if(op=="SET") {
                cin>>a;
                v[a]=1;
            } else if(op=="CLEAR") {
                cin>>a;
                v[a]=0;
            } else if(op=="AND") {
                cin>>a>>b;
                v[a]=checkAnd(v[a],v[b]);
            } else {
                cin>>a>>b;
                v[a]=checkOr(v[a],v[b]);
            }
        }
        for(int i=31; i>=0; i--) {
            if(v[i]==-1) printf("?");
            else printf("%d",v[i]);
        }
        printf("\n");
    }
}
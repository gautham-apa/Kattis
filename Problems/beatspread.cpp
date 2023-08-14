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

    int t; cin>>t;
    while(t-->0) {
        int s,d;
        cin>>s>>d;
        int a = (s+d)/2;
        int b = s-a;
        if(a<0 || b<0 || (s<d) || (s+d)%2 == 1) printf("impossible\n");
        else printf("%d %d\n", max(a,b), min(a,b));
    }
}
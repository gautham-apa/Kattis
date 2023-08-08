#include<bits/stdc++.h>
#include<stdio.h>
#include<vector>
#include<set>
#include<iostream>
#include<queue>
#include<string>
typedef long long ll;

using namespace std;

int gcd(int a, int b) {
    if(b==0) return a;
    return gcd(b, a%b);
}

int main() {
    int n; cin>>n;
    vector<int> r;
    for(int i=0; i<n; i++) {
        int rad; cin>>rad;
        r.push_back(rad);
    }
    for(int i=1; i<n; i++) {
        int div = gcd(r[0], r[i]);
        printf("%d/%d\n",r[0]/div, r[i]/div);
    }
}
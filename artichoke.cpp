#include<bits/stdc++.h>
#include<stdio.h>
#include<vector>
#include<set>
#include<iostream>
#include<queue>
#include<string>

using namespace std;

int main() {
    int p,a,b,c,d,n;
    cin>>p>>a>>b>>c>>d>>n;
    double ma = -1e9;
    double ans = 0;

    for(int i=1; i<=n; i++) {
        double price = p*(sin(a*i + b) + cos(c*i + d) + 2);
        ma = max(ma, price);
        ans = max(ma-price, ans);
    }
    printf("%.6f", ans);
}

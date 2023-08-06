#include<bits/stdc++.h>
#include<stdio.h>
#include<vector>
#include<set>
#include<iostream>
#include<queue>
#include<string>

using namespace std;

int main() {
    int x, y;
    cin>>x>>y;
    if(x == 0 && y==1) printf("ALL GOOD");
    else if(y == 1) printf("IMPOSSIBLE");
    else printf("%0.6f", x/(1.0-y));
}
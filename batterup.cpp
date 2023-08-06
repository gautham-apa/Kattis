#include<bits/stdc++.h>
#include<stdio.h>
#include<vector>
#include<set>
#include<iostream>
#include<queue>
#include<string>

using namespace std;

int main() {
    int n; cin>>n;
    int total=0, denom=0;
    for(int i=0; i<n; i++) {
        int num; cin>>num;
        if(num == -1) continue;
        total += num;
        denom++;
    }
    cout<<total/(1.0*denom)<<endl;
}
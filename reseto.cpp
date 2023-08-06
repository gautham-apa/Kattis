#include<bits/stdc++.h>
#include<stdio.h>
#include<vector>
#include<set>
#include<iostream>
#include<queue>
#include<string>

using namespace std;

bitset<100010> b;
int main() {
    int n,k;
    b.set();
    cin>>n>>k;
    b[1] = 0; b[0] = 0;
    for(int i=2; i<=n; i++) {
        if(b[i] == 0) continue;
        for(int j=i; j<=n; j+=i) {
            if(b[j] == 0) continue;
            b[j] = 0;
            k--;
            if(k==0) {
                cout<<j<<endl;
                return 0;
            }
        }
    }
}
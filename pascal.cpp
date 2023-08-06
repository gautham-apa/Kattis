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
    int n; cin>>n;
    int div = 1;
    for(int i=2; i*i<=n; i++) {
        if(n%i == 0) {
            div = n/i; break;
        }
    }
    cout<<n-div<<endl;
}
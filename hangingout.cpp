#include<bits/stdc++.h>
#include<stdio.h>
#include<vector>
#include<set>
#include<iostream>
#include<queue>
#include<string>

using namespace std;

int main() {
    int l, n;
    cin>>l>>n;
    int total = 0, ans = 0; 
    for(int i=0; i<n; i++) {
        string action;
        int num;
        cin>>action>>num;
        if(action == "leave") { total -= num; continue; }
        if(num > l-total) {
            ans++; continue;
        }
        total += num;
    }
    cout<<ans<<endl;
}
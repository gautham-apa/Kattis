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
    bool neither = false;
    string prev = "";
    string curr = "";
    int dir = 0;
    for(int i=0; i<n; i++) {
        cin>>curr;
        if(i == 0) {
            prev = curr;
            continue;
        }
        if(i == 1) {
            dir = prev.compare(curr);
            dir /= abs(dir);
            prev = curr;
            continue;
        }
        int tempDir = prev.compare(curr);
        tempDir /= abs(tempDir);
        if(tempDir != dir) {
            neither = true;
        }
        prev = curr;
    }

    if(neither) cout<<"NEITHER"<<endl;
    else {
        if(dir == 1) cout<<"DECREASING"<<endl;
        else cout<<"INCREASING"<<endl;
    }
}
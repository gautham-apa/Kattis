#include<bits/stdc++.h>
#include<stdio.h>
#include<vector>
#include<set>
#include<iostream>
#include<queue>
#include<string>

using namespace std;

int main() {
    int t, n, prev;
    cin>>t;
    while(t-- > 0) {
        cin>>n;
        vector<int> input;
        for(int i=0; i<n; i++) {
            int in; cin>>in;
            input.push_back(in);
        }
        prev = input[0];
        for(int i=1; i<n; i++) {
            if(input[i]-prev != 1) { cout<<i+1<<endl; break; }
            else prev = input[i];
        }
    }
}

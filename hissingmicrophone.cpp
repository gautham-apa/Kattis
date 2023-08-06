#include<bits/stdc++.h>
#include<stdio.h>
#include<vector>
#include<set>
#include<iostream>
#include<queue>
#include<string>

using namespace std;

int main() {
    string s;
    cin>>s;
    for(int i=1; i<s.size(); i++) {
        if(s[i]=='s' && s[i-1]=='s') {
            cout<<"hiss\n";
            return 0;
        }
    }
    cout<<"no hiss\n";
}
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
    int ans = 0;
    for(int i=0; i<s.size();) {
        if(s[i] == '1') {
             i++;
            continue;
        }
        int start = i;
        while(s[i] != '1') i++;
        ans = max(ans, i-start);
    }
    cout<<(ans+1)/2<<endl;
    return 0;
}
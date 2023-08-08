#include<bits/stdc++.h>
#include<stdio.h>
#include<vector>
#include<set>
#include<iostream>
#include<queue>
#include<string>

using namespace std;

int main() {
    string s, ans=""; cin>>s;
    for(int i=0; i<s.size();) {
        if(i+2 < s.size()) {
            if(s[i] != s[i+1] && s[i] != s[i+2] && s[i+1] != s[i+2]) {
                ans += 'C'; i+=3;
                continue;
            }
        }
        if(s[i] == 'R') ans+='S';
        else if(s[i] == 'B') ans+='K';
        else ans+='H';
        i++;
    }
    cout<<ans<<endl;
}
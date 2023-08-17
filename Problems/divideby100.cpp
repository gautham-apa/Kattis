#include<bits/stdc++.h>
#include<stdio.h>
#include<vector>
#include<set>
#include<iostream>
#include<queue>
#include<string>
#include<map>
typedef long long ll;

using namespace std;

void removeTrailingZero(string &s) {
    for(int i=s.size()-1; i>=0; i--) {
        if(s[i]=='0') continue;
        s = s.substr(0,i+1);
        return;
    }
    s="";
}

int main() {
    // For fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);   

    string n,m,ans;
    cin>>n>>m;

    int power = m.size()-1;
    if(power == 0) {
        ans = n;
    } else if(n.size() > power) {
        ans = n.substr(0,n.size()-power);
        string trailing = n.substr(n.size()-power);
        removeTrailingZero(trailing);
        if(trailing.size()>0) ans += "."+trailing;
    } else {
        string trailing = string(power-n.size(),'0')+n;
        ans = "0."+trailing;
    }
    printf("%s\n", ans.c_str());
}

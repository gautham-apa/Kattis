#include<bits/stdc++.h>
#include<stdio.h>
#include<vector>
#include<set>
#include<iostream>
#include<queue>
#include<string>
#include<map>
#include<stack>
typedef long long ll;

using namespace std;

int main() {
    // For fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);   
    

    int t, m; 
    vector<string> res;
    while(cin>>t) {
        if(t==0) break;
        string action; 
        int s1=0, s2=0;
        for(int i=0; i<t; i++) {
            cin>>action>>m;
            cin.clear();
            if(action=="DROP") {
                s2 += m;
                string ans="DROP 2 "+to_string(m);
                res.push_back(ans);
            } else {
                if(s1>=m) {
                    s1-=m;
                    string ans="TAKE 1 "+to_string(m);
                    res.push_back(ans);
                } else if(s1>0) {
                    string ans="TAKE 1 "+to_string(s1);
                    res.push_back(ans);
                    m-=s1;
                    ans = "MOVE 2->1 "+to_string(s2);
                    res.push_back(ans);
                    s1=s2; s2=0;
                    ans="TAKE 1 "+to_string(m);
                    res.push_back(ans);
                    s1-=m;
                } else {
                    string ans = "MOVE 2->1 "+to_string(s2);
                    res.push_back(ans);
                    s1=s2; s2=0;
                    ans="TAKE 1 "+to_string(m);
                    res.push_back(ans);
                    s1-=m;
                }
            }
        }
        res.push_back("");
    }
    for(string s: res) {
        printf("%s\n", s.c_str());
    }
}
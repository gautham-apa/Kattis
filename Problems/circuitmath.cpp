#include<bits/stdc++.h>
#include<stdio.h>
#include<vector>
#include<set>
#include<iostream>
#include<queue>
#include<string>
#include<map>
#include<stack>
#include <sstream>
typedef long long ll;

using namespace std;

int main() {
    // For fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);   
    
    char c;
    stack<bool> vars;
    vector<bool>res;
    int ops; cin>>ops;
    
    for(int i=0; i<ops; i++) {
        char c; cin>>c;
        if(c=='T') res.push_back(true);
        else res.push_back(false);
    }
    cin.ignore();
    string l; getline(cin, l);
    istringstream iss(l);

    while(iss>>c) {
        if(c=='+') {
            bool a = vars.top(); vars.pop();
            bool b = vars.top(); vars.pop();
            vars.push(a|b);
        } else if(c=='*') {
            bool a = vars.top(); vars.pop();
            bool b = vars.top(); vars.pop();
            vars.push(a&b);
        } else if(c=='-') {
            bool a = vars.top(); vars.pop();
            vars.push(!a);
        } else {
            vars.push(res[c-'A']);
        }
    }
    if(vars.top()) printf("T\n");
    else printf("F\n");
}
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

pair<int, char> solve() {
    char c;
    int t; cin>>t; cin.ignore();

    string l; getline(cin, l);
    stack<char> match;
    for(int i=0; i<l.size(); i++) {
        if(l[i]==' ') {
            continue;
        } else if(l[i]=='(' || l[i]=='{' || l[i]=='[') {
            match.push(l[i]);
        } else if(match.empty() || match.top() != l[i]-2 && match.top() != l[i]-1) {
            return make_pair(i, l[i]);
        } else {
            match.pop();
        }
    }
    return make_pair(-1, ' ');
}

int main() {
    // For fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);   

    pair<int, char> ans = solve();
    if(ans.first == -1) printf("ok so far\n");
    else printf("%c %d\n", ans.second, ans.first);
}
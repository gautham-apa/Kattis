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

    int n; cin>>n;
    stack<int>s1,s2;

    for(int i=0; i<2*n; i++) {
        int num; cin>>num;
        s1.push(num);
    }
    int ans=0, prevSize=s1.size();
    while(!s1.empty()) {
        if(s2.empty()) {s2.push(s1.top()); ans++; s1.pop();}
        if(!s1.empty()) {
            if(s1.top() == s2.top()) {
                ans++;
                s1.pop(); s2.pop();
            } else {
                ans++;
                s2.push(s1.top());
                s1.pop();
            }
        }
        if(s1.empty()) {
            s1=s2;
            s2=stack<int>();
            if(s1.size()==prevSize) {
                ans=-1;
                break;
            }
            prevSize = s1.size();
        }
    }
    if(ans==-1) printf("impossible\n");
    else printf("%d\n", ans);
}
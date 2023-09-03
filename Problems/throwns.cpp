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

    int n,k;
    cin>>n>>k;
    stack<int>actions;
    int curr = 0;
    for(int i=0; i<k; i++) {
        string op;
        cin>>op;
        if(op=="undo") {
            string num;
            cin>>num;
            int popCount = stoi(num);
            while(popCount--) {
                int dist = actions.top();
                curr = ((curr+dist)%n+n)%n;
                actions.pop();
            }
        } else {
            int dist = stoi(op);
            if(abs(dist)%n==0) {
                actions.push(dist);
            } else {
                curr = ((curr+dist)%n+n)%n;
                actions.push(-1*dist);
            }
        }
    }
    printf("%d\n", curr);
}

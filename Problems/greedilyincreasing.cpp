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

int main() {
    // For fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);   

    int n,prev; cin>>n;
    vector<int>ans;
    cin>>prev;
    ans.push_back(prev);
    for(int i=1; i<n; i++) {
        int num; cin>>num;
        if(num>prev) {
            ans.push_back(num);
            prev = num;
        }
    }
    printf("%ld\n",ans.size());
    for(int num: ans) printf("%d ", num);
}
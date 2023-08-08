#include<bits/stdc++.h>
#include<stdio.h>
#include<vector>
#include<set>
#include<iostream>
#include<queue>
#include<string>

using namespace std;

int main() {
    int t; cin>>t;
    while(t-- > 0) {
        int n, total=0; cin>>n;
        vector<int> votes;
        for(int i=0; i<n; i++) {
            int vote; cin>>vote;
            total += vote;
            votes.push_back(vote);
        }
        int id = (max_element(votes.begin(), votes.end()) - votes.begin())+1;
        sort(votes.begin(), votes.end());
        if(votes.size()>=2 && votes[votes.size()-1] == votes[votes.size()-2]) cout<<"no winner\n";
        else if(total/2 < votes[votes.size()-1]) printf("%s %d\n", "majority winner", id);
        else printf("%s %d\n", "minority winner", id);
    }
}
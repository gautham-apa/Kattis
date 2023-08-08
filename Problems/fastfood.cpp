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
    vector<int> ans;
    while(t-- > 0) {
        int n,m,total=0;
        vector<int> costList, countList;
        vector<vector<int> > codeList;
        cin>>n>>m;
        for(int i=0; i<n; i++) {
            int k; cin>>k; 
            vector<int> codes;
            for(int j=0; j<k; j++) {
                int code; cin>>code;
                codes.push_back(code);
            }
            codeList.push_back(codes);
            int cost; cin>>cost;
            costList.push_back(cost);
        }
        for(int i=0; i<m; i++) {
            int count; cin>>count;
            countList.push_back(count);
        }

        for(int i=0; i<codeList.size(); i++) {
            int maxCount = 1e9;
            for(int j=0; j<codeList[i].size(); j++) {
                maxCount = min(maxCount, countList[codeList[i][j] - 1]);
            }    
            total += maxCount*costList[i];
        }
        ans.push_back(total);
    }

    for(int i=0; i<ans.size(); i++) cout<<ans[i]<<endl;
}
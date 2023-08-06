#include<bits/stdc++.h>
#include<stdio.h>
#include<vector>
#include<set>
#include<iostream>
#include<queue>
#include<string>

using namespace std;

class Compare {
    public:
    bool operator() (pair<int, int> a, pair<int, int> b) {
        return a.second > b.second;
    }
};

int main() {
    vector<pair<int, int> > servers;
    int n, k;
    cin>>n>>k;
    int ans = 0;

    for(int i=0; i<n; i++) {
        int a;
        cin>>a;
        bool added = false;
        for(vector<pair<int, int> >::iterator s = servers.begin(); s<servers.end(); s++) {
            if(s->first == k && s->second <= a) servers.erase(s);
            if(!added && s->first < k) {
                *s = make_pair(s->first+1, a+1000);
                added = true;
            }
        }
        if(!added) servers.push_back(make_pair(1, a+1000));
        ans = max(ans, (int)servers.size());
    }
    cout<<ans<<endl;
    return 0;
}
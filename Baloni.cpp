#include<bits/stdc++.h>
#include<stdio.h>
#include<vector>
#include<set>
#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    vector<int> arr;
    cin>>t;
    for(int i=0; i<t; i++) {
        int k;
        cin >> k;
        arr.push_back(k);
    }

    unordered_map<int, int> s; 
    int ans = 0;
    for(int i=0; i<arr.size(); i++) {
        if(s[arr[i]] > 0) {
            s[arr[i]] -= 1;
            s[arr[i]-1] += 1;
            continue;
        }
        ans++;
        s[arr[i]-1] += 1;
    }
    cout<<ans<<endl;
    return 0;
}
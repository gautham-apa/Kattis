#include<bits/stdc++.h>
#include<stdio.h>
#include<vector>
#include<set>
#include<iostream>
#include<queue>
#include<string>
typedef long long ll;

using namespace std;

int median(vector<long> arr) {
    sort(arr.begin(), arr.begin()+3);
    return arr[1];
}

int main() {
    int t, n;
    vector<long> arr;
    cin>>n>>t;
    for(int i=0; i<n; i++) {
        int num; cin>>num;
        arr.push_back(num);
    }

    if(t==1) {
        cout<<7<<endl;
    } else if(t==2) {
        if(arr[0]>arr[1]) cout<<"Bigger\n";
        else if(arr[0]==arr[1]) cout<<"Equal\n";
        else cout<<"Smaller\n";
    } else if(t==3) {
        cout<<median(arr)<<endl;
    } else if(t==4) {
        ll sum = 0;
        for(auto i=arr.begin(); i<arr.end(); i++) sum += *i;
        cout<<sum<<endl;
    } else if(t==5) {
        ll sum = 0;
        for(auto i=arr.begin(); i<arr.end(); i++) 
            if(*i % 2 == 0) sum += *i;
        cout<<sum<<endl;
    } else if(t==6) {
        string s="";
        for(auto i=arr.begin(); i<arr.end(); i++) {
            char c = 'a'+(*i%26);
            s += c;
        }
        cout<<s<<endl; 
    } else {
        set<int> vis; int i=0;
        while(1) {
            if(i > n-1) {
                cout<<"Out\n";
                return 0;
            } else if(i == n-1) {
                cout<<"Done\n";
                return 0;
            } else if(vis.count(i) == 1) {
                cout<<"Cyclic\n";
                return 0;
            }
            vis.insert(i);
            i = arr[i];
        }
    }
}
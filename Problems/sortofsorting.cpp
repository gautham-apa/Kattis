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

bool shouldSwap(string a, string b) {
    string tempa = a.substr(0,2);
    string tempb = b.substr(0,2);
    return tempa.compare(tempb) > 0;
}

int main() {
    // For fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);   

    vector<vector<string> > res;

    int n; 
    while(cin>>n) {
        if(n==0) break;
        cin.ignore();
        vector<string> arr;
        for(int i=0; i<n; i++) {
           string s; getline(cin, s);
            arr.push_back(s);     
        }

        for(int i=1; i<arr.size(); i++) {
            for(int j=i; j>0; j--) {
                bool swap = shouldSwap(arr[j-1], arr[j]);
                if(!swap) break;
                string temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
        }
        res.push_back(arr);
    }
    for(auto arr: res) {
        for(string s: arr) printf("%s\n", s.c_str());
        printf("\n");
    }
}
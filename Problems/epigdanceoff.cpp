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
    
    int n,m,ans=0; cin>>n>>m;
    cin.ignore();
    vector<string> matrix;
    for(int i=0; i<n; i++) {
        string s; getline(cin, s);
        matrix.push_back(s);
    }
    for(int i=0; i<m; i++) {
        bool blank = true;
        for(int j=0; j<n; j++) {
            if(matrix[j][i] == '_') continue;
            blank = false;
            break;
        }
        if(blank) ans++;
    }
    printf("%d\n", ++ans);
}
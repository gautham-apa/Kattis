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

    string a,b,ans;
    cin>>a>>b;
    int c=0;
    int p1=a.size()-1; 
    int p2=b.size()-1; 
    for(int i=0; i<max(a.size(), b.size()); i++) {
        int d1=0,d2=0;
        if(p1>=0) d1=a[p1--]-'0';
        if(p2>=0) d2=b[p2--]-'0';
        int sum = d1+d2+c;
        c = sum/10;
        sum = sum%10;
        ans = to_string(sum) + ans;
    }
    if(c>0) ans = "1" + ans;
    printf("%s", ans.c_str());
}
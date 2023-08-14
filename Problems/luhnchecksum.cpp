#include<bits/stdc++.h>
#include<stdio.h>
#include<vector>
#include<set>
#include<iostream>
#include<queue>
#include<string>
typedef long long ll;

using namespace std;

int main() {
    // For fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);   

    int t; cin>>t;
    while(t--) {
        string s; cin>>s;
        int sum = 0;
        for(int i=0; i<s.size(); i++) {
            int dig = (s[s.size()-1-i]-'0');
            if(i%2 == 1) {
                dig *= 2;
                while(dig>0) {
                    sum += dig%10;
                    dig /= 10;
                }
            } else {
                sum += dig;
            }
        }
        if(sum%10 == 0) printf("PASS\n");
        else printf("FAIL\n");
    }
}
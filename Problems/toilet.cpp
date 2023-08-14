#include<bits/stdc++.h>
#include<stdio.h>
#include<vector>
#include<set>
#include<iostream>
#include<queue>
#include<string>
typedef long long ll;

using namespace std;

int solve12(string s, char ext) {
    char ent = s[0];
    int sum = 0;
    for(int i=1; i<s.size(); i++) {
       if(ent != s[i]) {
            sum++;
            ent = s[i];
       }
       if(s[i] != ext) {
            ent = ext;
            sum++;
       }
    }
    return sum;
}

int solve3(string s) {
    char ent = s[0];
    int sum = 0;
    for(int i=1; i<s.size(); i++) {
       if(ent != s[i]) {
            sum++;
            ent = s[i];
       }
    }
    return sum;
}

int main() {
    // For fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);   

    string s; cin>>s;
    int p1 = solve12(s, 'U');
    int p2 = solve12(s, 'D');
    int p3 = solve3(s);

    printf("%d\n%d\n%d\n",p1,p2,p3);
}
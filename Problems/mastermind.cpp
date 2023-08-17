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

    int n; cin>>n;
    string act,guess;
    cin>>act>>guess;
    int a[26]={0}, g[26]={0};
    int samePos=0, diffPos=0;
    for(int i=0; i<n; i++) {
        if(act[i]==guess[i]) {
            samePos++; continue;
        }
        a[act[i]-'A']++;
        g[guess[i]-'A']++;
    }
    for(int i=0; i<26; i++) {
        diffPos += min(a[i], g[i]);
    }
    printf("%d %d\n", samePos, diffPos);
}
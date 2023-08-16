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
    
    int n;
    while(cin>>n) {
        bitset<3001>b; b[0]=1; int num,prev=0;
        for(int i=0; i<n; i++) {
            cin>>num;
            if(i==0) {
                prev=num;
                continue;
            }
            b[abs(num-prev)]=1;
            prev=num;
        }   
        bool jolly = true;
        for(int i=1; i<n; i++) {
            jolly &= b[i];
        }
        if(jolly) printf("Jolly\n");
        else printf("Not jolly\n");
    }
}
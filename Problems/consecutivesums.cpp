#include<bits/stdc++.h>
#include<stdio.h>
#include<vector>
#include<set>
#include<iostream>
#include<queue>
#include<string>
typedef long long ll;

using namespace std;

ll a,counter; 

bool solve(ll n) {
    counter = 2;
    while(1) {
        ll sum = n;
        ll apSum = (counter*(counter-1))/2;
        if(apSum > sum) return false;
        sum -= apSum;
        if(sum%counter == 0) {
            a = sum/counter;
            return true;
        }
        counter++;
    }
    return false;
}

int main() {
    int t; cin>>t;
    while(t--) {
        ll n; cin>>n;
        bool poss = solve(n);
        if(!poss || n==1) {
            printf("IMPOSSIBLE\n");
            continue;
        }
        printf("%lld = ",n);
        for(int i=a; i<a+counter; i++) {
            if(i==a) printf("%d",i);
            else printf(" + %d",i);
        }
        printf("\n");
    }
}
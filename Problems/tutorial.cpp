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
    ll m,n,t;
    cin>>m>>n>>t;
    if(t==1) {
        ll fact = 1;
        for(ll i=1; i<=n; i++) {
            fact *= i;
            if(fact > m) {
                printf("TLE\n"); return 0;
            }
        }
        printf("AC\n");
    } else if(t==2) {
        ll prod = 1;
        for(int i=1; i<=n; i++) {
            prod *= 2;
            if(prod > m) {
                printf("TLE\n"); return 0;
            }
        }
        printf("AC\n");
    } else if(t==3) {
        ll prod = 1;
        for(int i=1; i<=4; i++) {
            prod *= n;
            if(prod > m) {
                printf("TLE\n"); return 0;
            }
        }
        printf("AC\n");
    } else if(t==4) {
        ll prod = 1;
        for(int i=1; i<=3; i++) {
            prod *= n;
            if(prod > m) {
                printf("TLE\n"); return 0;
            }
        }
        printf("AC\n");
    } else if(t==5) {
        ll prod = 1;
        for(int i=1; i<=2; i++) {
            prod *= n;
            if(prod > m) {
                printf("TLE\n"); return 0;
            }
        }
        printf("AC\n");
    } else if(t==6) {
        long double prod = 1.0L*n*log2(n);
        if(prod > m) {
            printf("TLE\n"); return 0;
        }
        printf("AC\n");
    } else {
        if(n > m) {
            printf("TLE\n"); return 0;
        }
        printf("AC\n");
    }
}
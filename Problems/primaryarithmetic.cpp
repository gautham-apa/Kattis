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

int add(ll a, ll b) {
    int c=0, res=0;
    while(b>0 || a>0) {
        int d1 = a%10;
        int d2 = b%10;
        if(d1+d2+c>=10) {
            c=1;
            res++;
        } else {
            c=0;
        }
        a/=10;
        b/=10;
    }
    return res;
}

int main() {
    // For fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);   

    ll a,b;
    while(cin>>a>>b) {
        if(a==0 && b==0) break;
        int ans = add(a,b);
        if(ans==0) printf("No carry operation.\n");
        else if(ans==1) printf("1 carry operation.\n");
        else printf("%d carry operations.\n",ans);
    }
}
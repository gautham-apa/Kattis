#include<bits/stdc++.h>
#include<stdio.h>
#include<vector>
#include<set>
#include<iostream>
#include<queue>
#include<string>
typedef long long ll;

using namespace std;

vector<int> primes;
bitset<500> b;

void compPrimes() {
    b.set();
    for(int i=2; i<=450; i++) {
        if(b[i] == 0) continue;
        for(int j=i*i; j<=450; j+=i) b[j] = 0;
        primes.push_back(i);
    }
}

ll factorise(int n, int k) {
    int arr[500]={0};
    for(int i=k+1; i<=n; i++) {
        int temp=i;
        for(int p: primes) {
            while(temp%p == 0){
                arr[p]++;
                temp /= p;
            } 
            if(temp==1) break;
        }
    }

    for(int i=2; i<=n-k; i++) {
        int temp=i;
        for(int p: primes) {
            while(temp%p == 0){
                arr[p]--;
                temp /= p;
            } 
            if(temp==1) break;
        }
    }

    ll ans=1;
    for(int i=2; i<=450; i++) {
        if(arr[i]==0) continue;
        ans *= (arr[i]+1);
    }    
    return ans;
}

int main() {
    int n,k;
    compPrimes();
    while(cin>>n && cin>>k) {
        ll ans = factorise(n,k);
        printf("%lld\n",ans);
    }
}
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
bitset<3000001> b;
int maxCount = 3000000;

void computePrimes() {
    b.set();
    for(int i=2; i*i<=maxCount; i++) {
        if(b[i]==0) continue;
        for(int j=i*i; j<=maxCount; j+=i) b[j]=0;
        primes.push_back(i);
    }
}

int main() {
    // added the two lines below
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);   

    computePrimes();
    int t; cin>>t;
    while(t--) {
        int primeCount=0, totalCount=1,n; 
        cin>>n;
        for(int p: primes) {
            int power=0;
            if(n%p==0) primeCount++;
            while(n%p==0) {
                n/=p;
                power++;
            }
            totalCount *= (power+1);
            if(n==1) break;
        }
        if(n>1) {
            primeCount++;
            totalCount *= 2;
        }
        printf("%d\n",totalCount-primeCount);
    }
}
#include<bits/stdc++.h>
#include<stdio.h>
#include<vector>
#include<set>
#include<iostream>
#include<queue>
#include<string>
typedef long long ll;

using namespace std;

bitset<1000000010> b;
int maxVal = 1000000010;
vector<int> primes;

void computePrimes() {
    b.set(); b[0]=0; b[1]=1;
    for(int i=2; i*i<=maxVal; i++) {
        if(b[i] == 0) continue;
        primes.push_back(i);
        for(int j=i*i; j*j<=maxVal; j+=i) b[j] = 0;
    }
}

bool isPrime(int n) {
    for(int i=2; i*i<=n; i++) {
        if(n%i == 0) return false;
    }
    return true;
}

int computeSum(int n) {
    int sum = 0;
    for(int p: primes) {
        while(n%p == 0) {
            n /= p;
            sum += p;
        }
        if(p>n/2 || n==1) break;
    }
    if(n>1) sum += n;
    return sum;
}

int main() {
    computePrimes();
    int n;
    while(1) {
        cin>>n;
        if(n == 4) break;
        int count = 1;
        while(!isPrime(n)) {
            n = computeSum(n);     
            count++;       
        }
        printf("%d %d\n", n, count);
    }
}
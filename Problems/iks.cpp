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
bitset<1000001>b;
int maxVal = 1000001;

void compPrimes() {
    b.set();
    for(ll i=2; i*i<=maxVal; i++) {
        if(b[i]==0) continue;
        for(ll j=i*i; j<=maxVal; j+=i) b[j]=0;
        primes.push_back(i);
    }
}

int main() {
    int n;
    vector<int> arr;
    compPrimes();
    unordered_map<int,int> factCounter;
    cin>>n;
    for(int i=0; i<n; i++) {
        int temp; cin>>temp;
        arr.push_back(temp);
    }
    // Calculate prime factors sum of all nums
    for(int num: arr) {
        for(int p: primes) {
            while(num%p==0) {
                factCounter[p]++;
                num/=p;
            }
            if(num==1) break;
        }
        if(num>1) factCounter[num]++;
    }

    int gcd = 1;
    // Calculate gcd and req factors
    for(auto pair: factCounter) {
        int power = pair.second/n;
        gcd *= pow(pair.first, power);
        factCounter[pair.first] = power;
    }

    int operations = 0;
    // Count how many numbers to move
    for(int num: arr) {
        for(auto pair: factCounter) {
            if(pair.second == 0) continue;
            // cout<<pair.first<<" ";
            int power = 0;
            int p = pair.first;
            while(num%p==0) {
                power++;
                num/=p;
            }
            if(pair.second-power > 0) operations += pair.second-power;
        }
    }

    printf("%d %d\n",gcd,operations);
}

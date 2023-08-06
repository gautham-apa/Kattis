#include<bits/stdc++.h>
#include<stdio.h>
#include<vector>
#include<set>
#include<iostream>
#include<queue>
#include<string>
typedef long long ll;

using namespace std;

int divSum(int n) {
    int sum=1;
    for(int i=2; i*i<=n; i++) {
        if(n%i == 0) sum += n/i;
        if(n%i==0 && i!=n/i) sum += i;
    }
    return sum;
}

int main() {
    int n;
    while(cin>>n) {
        int sum = divSum(n);
        if(sum == n) printf("%d perfect\n", n);
        else if(abs(sum-n) <= 2) printf("%d almost perfect\n", n);
        else printf("%d not perfect\n", n);
    }
}
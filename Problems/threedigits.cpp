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
    ll num, ans=1;
    cin>>num;
    int twos=0, fives=0;
    for(ll i=1; i<=num; i++) {
        ll temp=i;
        while(temp%10 == 0) temp/=10;
        ans = ans*temp;
        while(ans%2 == 0) {
            twos++;
            ans /= 2;
        }
        while(ans%5 == 0) {
            fives++;
            ans /= 5;
        }
        ans %= 10000000;
    }

    int diff = twos-fives;
    while(diff--) {
        ans = (ans*2)%10000000;
    }
    while(ans%10==0) ans/=10;
    ans = ans%1000;
    if(num>6 && ans<10) printf("00");
    else if(num>6 && ans<100) printf("0");
    printf("%lld\n", ans);
}

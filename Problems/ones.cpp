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
    int div;
    while(cin>>div) {
        ll num = 1;    
        int count = 1;
        while(num%div != 0) {
            num *= 10;
            num++;
            num = num % div;
            count++;
        }
        printf("%d\n",count);
    }
}
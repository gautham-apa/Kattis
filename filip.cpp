#include<bits/stdc++.h>
#include<stdio.h>
#include<vector>
#include<set>
#include<iostream>
#include<queue>
#include<string>

using namespace std;

int rev(int num) {
    int r = 0;
    while(num != 0) {
        r = r*10 + (num%10);
        num /= 10;
    }
    return r;
}

int main() {
    int a, b;
    cin>>a>>b;
    cout<<max(rev(a), rev(b))<<endl;
}
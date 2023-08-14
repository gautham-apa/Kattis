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
    // For fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);   

    int a, b, d1, d2;
    cin>>a>>b;
    if(a<b) {
        d1=b-a;
        d2=-1*(360-b+a);
        
    } else {
        d1=360-a+b;
        d2=-1*(a-b);
    }
    if(abs(d1)<abs(d2)) cout<<d1;
    else if(abs(d1)>abs(d2))cout<<d2;
    else cout<<abs(d1);
}
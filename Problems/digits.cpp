#include<bits/stdc++.h>
#include<stdio.h>
#include<vector>
#include<set>
#include<iostream>
#include<queue>
#include<string>

using namespace std;

int main() {
    string s;
    while(1) {
        cin>>s;
        if(s=="END") break;
        if(s=="1") {
            cout<<1<<endl;
            continue;
        }
        int i = 1;
        int prev = s.size();
        while(prev != 1) {
            int temp = prev;
            int curr = 0;
            while(temp != 0) {curr++; temp /= 10;}
            prev = curr;
            i++;
        }
        cout<<i+1<<endl;
    }
}

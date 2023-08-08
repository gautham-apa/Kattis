#include<bits/stdc++.h>
#include<stdio.h>
#include<vector>
#include<set>
#include<iostream>
#include<queue>
#include<string>

using namespace std;

int main() {
    int total = 0, count = 0;
    vector<int> prob(26, 0);

    while(1) {
        int t; char q; string d;
        cin>>t; 
        if(t == -1) break;
        cin>>q>>d;
        if(d == "right") {
            prob[q-'A'] += t;
            total += prob[q-'A'];
            count++;
        }
        else prob[q-'A'] += 20;
    }
    cout<<count<<" "<<total<<endl;
}
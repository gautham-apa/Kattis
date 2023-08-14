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
    vector<pair<string, string>> pairs = { {"Ab", "G#"}, {"A#", "Bb"}, {"C#", "Db"}, {"D#", "Eb"}, {"F#", "Gb"} };

    string note, tone;
    int counter=0;
    while(cin>>note>>tone) {
        counter++;
        bool found = false;
        for(auto p: pairs) {
            if(p.first == note) {
                printf("Case %d: %s %s\n", counter, p.second.c_str(), tone.c_str());
                found = true;
                break;
            } else if(p.second == note) {
                printf("Case %d: %s %s\n", counter, p.first.c_str(), tone.c_str());
                found = true;
                break;
            }
        }
        if(!found) printf("Case %d: UNIQUE\n", counter);
    }
}
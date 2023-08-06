#include<bits/stdc++.h>
#include<stdio.h>
#include<vector>
#include<set>
#include<iostream>
#include<queue>
#include<string>

using namespace std;

int main() {
    int t;
    cin>>t;
    bool found = false; string rest = "Anywhere is fine I guess";
    while(t-- > 0) {
        int k; cin>>k; string name;
        set<string> items;
        cin.ignore();
        getline(cin, name);
        for(int i=0; i<k; i++) {
            string item;
            getline(cin, item);
            if((item=="pea soup" || item=="pancakes") && !found) {                
                items.insert(item);
                if(items.size() == 2) {
                    found = true;
                    rest = name;
                }
            }
        }
    }
    cout<<rest<<endl;
}
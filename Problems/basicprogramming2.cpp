#include<bits/stdc++.h>
#include<stdio.h>
#include<vector>
#include<set>
#include<iostream>
#include<queue>
#include<string>
#include<map>
typedef long long ll;

using namespace std;

int main() {
    // For fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);   

    int n,t; cin>>n>>t;
    vector<int>arr;
    for(int i=0; i<n; i++) {
        int num; cin>>num;
        arr.push_back(num);
    }
    sort(arr.begin(), arr.end());

    if(t==1) {
        int lo=0, hi=n-1; bool yes=false;
        while(lo<hi) {
            if(arr[lo]+arr[hi]>7777) hi--;
            else if(arr[lo]+arr[hi]<7777) lo++;
            else {
                yes=true; break;
            }
        }
        if(yes) printf("Yes\n");
        else printf("No\n");
    } else if(t==2) {
        bool unique = true;
        for(int i=1; i<n; i++) {
            if(arr[i-1]==arr[i]) unique = false;
        }
        if(unique) printf("Unique\n");
        else printf("Contains duplicate\n");
    } else if(t==3) {
        int counter = 1, found=-1;
        for(int i=1; i<n; i++) {
            if(arr[i-1]==arr[i]) counter++;
            else counter=1;
            if(counter>n/2) {
                found = arr[i]; break;
            }
        }
        printf("%d\n", found);
    } else if(t==4) {
        if(n%2==1) printf("%d\n", arr[n/2]);
        else printf("%d %d\n", arr[(n-1)/2], arr[n/2]);
    } else if(t==5) {
        for(int i=0; i<n; i++) {
            if(arr[i]>=100 && arr[i]<=999) printf("%d ", arr[i]);
        }
    }
}
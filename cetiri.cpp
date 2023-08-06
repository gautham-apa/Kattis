#include<bits/stdc++.h>
#include<stdio.h>
#include<vector>
#include<set>
#include<iostream>
#include<queue>
#include<string>

using namespace std;

int main() {
    vector<int> arr;
    for(int i=0; i<3; i++) {
        int num;
        cin>>num;
        arr.push_back(num);
    }
    sort(arr.begin(), arr.end());
    if(arr[1] - arr[0] == arr[2] - arr[1]) cout<<arr[2]+(arr[1] - arr[0])<<endl;
    else {
        int diff = abs(arr[1] - arr[0] - (arr[2] - arr[1]));
        if(arr[1] - arr[0] < (arr[2] - arr[1]) ) cout<<arr[1]+diff<<endl;
        else cout<<arr[0]+diff<<endl;
    }
}
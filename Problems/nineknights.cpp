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

bool check(vector<string>m, int x, int y) {
    int xaxis[8] = {-2,-2,2,2,-1,-1,1,1};
    int yaxis[8] = {1,-1,1,-1,2,-2,2,-2};
    for(int i=0; i<8; i++) {
        int xi = x+xaxis[i];
        int yi = y+yaxis[i];
        if(xi<0 || yi<0 || xi>=5 || yi>=5) continue;
        if(m[xi][yi] == 'k') return false;
    }
    return true;
}

int main() {
    // For fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);   

    vector<string> matrix;
    for(int i=0; i<5; i++) {
        string s; getline(cin, s);
        matrix.push_back(s);
    }

    bool valid = true; int total=0;
    for(int i=0; i<5; i++) {
        for(int j=0; j<5; j++) {
            if(matrix[i][j] == 'k') {
                valid &= check(matrix,i,j);
                total++;
            }
        }
    }

    if(valid && total == 9) printf("valid\n");
    else printf("invalid\n");
}
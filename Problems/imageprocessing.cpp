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

void flip(vector<vector<int> > &filter, int n, int m) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<m/2; j++) {
            int temp = filter[i][j];
            filter[i][j] = filter[i][m-1-j];
            filter[i][m-1-j] = temp;
        }
    }

    for(int i=0; i<m; i++) {
        for(int j=0; j<n/2; j++) {
            int temp = filter[j][i];
            filter[j][i] = filter[n-1-j][i];
            filter[n-1-j][i] = temp;
        }
    }
}

int main() {
    // For fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);   

    int h,w,n,m; cin>>h>>w>>n>>m;
    vector<vector<int> > matrix, filter;
    for(int i=0; i<h; i++) {
        int num; vector<int>row;
        for(int j=0; j<w; j++) {
            cin>>num; row.push_back(num);
        }
        matrix.push_back(row);
    }

    for(int i=0; i<n; i++) {
        int num; vector<int>row;
        for(int j=0; j<m; j++) {
            cin>>num; row.push_back(num);
        }
        filter.push_back(row);
    }

    flip(filter, n, m);

    int r=0,c=0;
    vector<vector<int> >ans;
    vector<int> ansRow;

    while((r+n)<=h) {
        if(c+m > w) {
            r++;
            c=0;
            ans.push_back(ansRow);
            ansRow = {};
            continue;
        }
        int convVal = 0;
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                convVal += filter[i][j]*matrix[r+i][c+j];
            }
        }
        ansRow.push_back(convVal);
        c++;
    }

    for(int i=0; i<ans.size(); i++) {
        for(int j=0; j<ans[i].size(); j++) {
            printf("%d ", ans[i][j]);
        }
        printf("\n");
    }
}
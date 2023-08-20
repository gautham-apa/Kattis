#include <bits/stdc++.h>
#include <stdio.h>
#include <vector>
#include <set>
#include <iostream>
#include <queue>
#include <string>
#include <map>
typedef long long ll;

using namespace std;

string stringToLower(string str) {
    string res="";
    for(char c: str) res+=tolower(c);
    return res;
}

bool compare(string a, string b) {
    string tempa = stringToLower(a);
    string tempb = stringToLower(b);
    return tempa.compare(tempb) < 0;
}

int main()
{
    // For fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int r, c, counter=0;
    while (cin >> r >> c)
    {
        cin.ignore();
        if(r==0 && c==0) break;
        
        if(counter > 0) printf("\n");

        vector<string> arr;
        for (int i = 0; i < r; i++)
        {
            string s;
            getline(cin, s);
            arr.push_back(s);
        }
        vector<string> trans;
        for (int i = 0; i < c; i++)
        {
            string s = "";
            for (int j = 0; j < r; j++)
            {
                s += arr[j][i];
            }
            trans.push_back(s);
        }
        stable_sort(trans.begin(), trans.end(), compare);

        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < trans.size(); j++)
            {
                printf("%c", trans[j][i]);
            }
            printf("\n");
        }
        counter++;
    }
}
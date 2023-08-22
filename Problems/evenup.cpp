#include <bits/stdc++.h>
#include <stdio.h>
#include <vector>
#include <set>
#include <iostream>
#include <queue>
#include <string>
#include <map>
#include <stack>
typedef long long ll;

using namespace std;

int main()
{
    // For fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    stack<int> s1, s2;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        s1.push(num);
    }

    int curr = 0;
    int prevSize = s1.size();
    while (!s1.empty()) {
        s2.push(s1.top());
        s1.pop();
        if(!s1.empty() && (s1.top() + s2.top())%2==0 ) {
            s1.pop(); s2.pop();
        }
        if(s1.empty()) {
            s1=s2;
            s2=stack<int>();
            if(s1.size() == prevSize) break;
            prevSize = s1.size();
        }
    }
    printf("%d\n", (int)s1.size());
}
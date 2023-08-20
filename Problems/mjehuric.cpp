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

void display(vector<int> arr) {
    for(int i=0; i<5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    // For fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> arr;
    for (int i = 0; i < 5; i++)
    {
        int num;
        cin >> num;
        arr.push_back(num);
    }
    bool done = false;
    while (!done)
    {   
        done = true;
        for (int i = 0; i < 4; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                done = false;
                display(arr);
            }
        }
    }
}
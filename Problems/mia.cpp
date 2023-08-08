#include <bits/stdc++.h>
#include <stdio.h>
#include <vector>
#include <set>
#include <iostream>
#include <queue>
#include <string>

using namespace std;

int checkGreater(int vala, int valb)
{
    if (vala > valb)
        return -1;
    else if (vala < valb)
        return 1;
    else
        return 0;
}

int checkCat(int val)
{
    if (val == 21)
        return 2;
    else if (val % 11 == 0)
        return 1;
    else
        return 0;
}

int main()
{
    while (1)
    {
        int s0, s1, r0, r1;
        cin >> s0 >> s1 >> r0 >> r1;
        
        if(s0 == 0 && s1 == 0 && r0==0 && r1==0) break;

        int vala = max(s0, s1) * 10 + min(s0, s1);
        int valb = max(r0, r1) * 10 + min(r0, r1);

        int cata = checkCat(vala);
        int catb = checkCat(valb);

        if (cata == catb)
        {
            int great = checkGreater(vala, valb);
            if (great == 0)
                cout << "Tie.\n";
            else if (great == -1)
                cout << "Player 1 wins.\n";
            else
                cout << "Player 2 wins.\n";
        }
        else if (cata > catb)
        {
            cout << "Player 1 wins.\n";
        }
        else
        {
            cout << "Player 2 wins.\n";
        }
    }
}
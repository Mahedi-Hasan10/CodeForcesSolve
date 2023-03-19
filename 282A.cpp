/*
     Author : Mahedi-Hasan10
     Date : 20-03-2023
     Topic:
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x = 0;
    cin >> n;
    string a;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a == "X++" || a == "++X")
        {
            x += 1;
        }
        else if (a == "--X" || a == "X--")
        {
            x -= 1;
        }
    }

    cout << x << "\n";

    return 0;
}
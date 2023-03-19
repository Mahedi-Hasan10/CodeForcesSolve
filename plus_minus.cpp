/*
     Author : Mahedi-Hasan10
     Date : 19-03-2023
     Topic: +-
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a + b == c)
        {
            cout << "+\n";
        }
        else
        {
            cout << "-\n";
        }
    }

    return 0;
}
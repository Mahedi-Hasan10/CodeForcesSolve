/*
     Author : Mahedi-Hasan10
     Date : 03-03-2023
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, p1 = 0, p2 = 0;
        cin >> n >> m;
        string s1, s2;
        cin >> s1 >> s2;
        for (int i = 0; i < n; i++)
            if (s1[i] == s1[i + 1])
                p1++;
        for (int i = 0; i < m; i++)
            if (s2[i] == s2[i + 1])
                p2++;
        if (p1 <= 0 && p2 <= 0)
            cout << "YES"
                 << "\n";
        else if (p1 >= 2 || p2 >= 2)
            cout << "NO"
                 << "\n";
        else if (p1 >= 1 && p2 >= 1)
            cout << "NO"
                 << "\n";
        else
        {
            if (s1[n - 1] == s2[m - 1])
                cout << "NO"
                     << "\n";
            else
                cout << "YES"
                     << "\n";
        }
    }

    return 0;
}
/*
     Author : Mahedi-Hasan10
     Date : 20-03-2023
     Topic: A. Stones on the Table
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == s[i + 1])
            cnt++;
    }
    cout << cnt << "\n";

    return 0;
}
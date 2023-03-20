/*
     Author : Mahedi-Hasan10
     Date : 20-03-2023
     Topic: A. Anton and Danik
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int anton = 0, danik = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
            anton++;
        else
            danik++;
    }
    if (anton > danik)
        cout << "Anton\n";
    else if (danik > anton)
        cout << "Danik\n";
    else
        cout << "Friendship\n";
    return 0;
}
/*
     Author : Mahedi-Hasan10
     Date : 20-03-2023
     Topic: A. Soldier and Bananas
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, n, w;
    cin >> k >> n >> w;
    int total = 0;
    for (int i = 1; i <= w; i++)
    {
        total = total + i * k;
    }
    if (total > n)
    {
        cout << total - n << "\n";
    }
    else
    {
        cout << 0 << "\n";
    }
    return 0;
}
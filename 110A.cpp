/*
     Author : Mahedi-Hasan10
     Date : 20-03-2023
     Topic: A. Nearly Lucky Number
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, count = 0;
    cin >> n;
    while (n > 0)
    {
        if (n % 10 == 7 || n % 10 == 4)
            count++;
        n /= 10;
    }
    if (count == 4 || count == 7)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
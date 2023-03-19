/*
     Author : Mahedi-Hasan10
     Date : 19-03-2023
     Topic: Codeforces 1807B
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, even = 0, odd = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 0)
            {
                even = even + arr[i];
            }
            else
            {
                odd = odd + arr[i];
            }
        }
        if (even > odd)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
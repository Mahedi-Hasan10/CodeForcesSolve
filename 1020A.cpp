/*
     Author : Mahedi-Hasan10
     Date : 20-03-2023
     Topic:
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        int in;
        cin >> in;
        v.push_back(in);
    }
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 1)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
    {
        cout << "HARD\n";
    }
    else
    {
        cout << "EASY\n";
    }

    return 0;
}
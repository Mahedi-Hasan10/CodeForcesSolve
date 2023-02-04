#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int u_count = 0;
    int l_count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 65 && s[i] <= 90)
            u_count++;
        if (s[i] >= 97 && s[i] <= 122)
            l_count++;
    }
    if (u_count > l_count)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] >= 97 && s[i] <= 122)
                s[i] -= 32;
        }
    }
    else
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] >= 65 && s[i] <= 90)
                s[i] += 32;
        }
    }
    cout << s << "\n";

    return 0;
}
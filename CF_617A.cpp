#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, s = 0;
    cin >> n;
    if (n % 5 == 0)
    {
        s = n / 5;
    }
    else
    {
        s = n / 5 + 1;
    }
    cout << s << "\n";
    return 0;
}
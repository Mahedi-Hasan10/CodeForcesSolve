#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int sum_xi = 0, sum_yi = 0, sum_zi = 0;

    cin >> n;
    while (n-- > 0)
    {
        int x, y, z;
        cin >> x >> y >> z;

        sum_xi += x;
        sum_yi += y;
        sum_zi += z;
    }

    if (sum_xi == 0 && sum_yi == 0 && sum_zi == 0)
    {
        cout << "YES"
             << "\n";
    }
    else
    {
        cout << "NO"
             << "\n";
    }
    cout << sum_xi << "\n";
    cout << sum_yi << "\n";
    cout << sum_zi << "\n";
    return 0;
}
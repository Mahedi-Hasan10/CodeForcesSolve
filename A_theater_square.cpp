#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long m,n,a;
    cin>>m>>n>>a;
    unsigned long long value = ceil((double)m/a)*ceil((double)n/a);
    cout<<value;
    return 0;
}
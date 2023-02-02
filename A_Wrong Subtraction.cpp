#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,k;
    cin>>n>>k;
    for(int i = 1;i<=k;i++)
   {
    long long int last_digit = n%10;
    if(last_digit == 0)
        n/=10;
    else
        n--;
   }
   cout<<n<<"\n";
}

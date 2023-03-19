/*
     Author : Mahedi-Hasan10
     Date : 20-03-2023
     Topic: A. Bear and Big Brother
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int Limak, Bob, year = 0;
    cin >> Limak >> Bob;
    while (Limak <= Bob)
    {
        Limak = Limak * 3;
        Bob = Bob * 2;
        year++;
    }
    cout << year << "\n";

    return 0;
}
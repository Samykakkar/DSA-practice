#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int table[256];

void initialize()
{
    table[0] = 0;
    for (int i = 0; i < 256; i++)
    {
        table[i] = (i & 1) + table[i / 2];
    }
}

int countsetbit(int n)
{
    int res = table[n & oxff];
    n = n >> 8;
    res = res + table[n & oxff];
    n = n >> 8;
    res = res + table[n & oxff];
    n = n >> 8;
    res = res + table[n & oxff];
    n = n >> 8;
    return res;

    int main()
    {
        initialize();
        int n = 9;
        cout << countSetBits(n);
        return 0;
    }

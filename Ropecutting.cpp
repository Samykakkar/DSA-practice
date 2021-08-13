#include <iostream>
using namespace std;

int ropecutpieces(int n, int a, int b, int c)
{
    if (n == 0)
        return 0;

    if (n < 0)
        return -1;

    int res = max(ropecutpieces(n - a, a, b, c),
         max(ropecutpieces(n - b, a, b, c), ropecutpieces(n - c, a, b, c)));

    if (res == -1)
        return -1;
    return res + 1;
}

int main()
{
    int n = 14, a = 3, b = 4, c= 3;
    cout << ropecutpieces(n, a, b, c);

    return 0;
}
#include <iostream>
using namespace std;

int Gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return Gcd(b, a % b);
    }
}

int main()
{
    int a=15, b=12;
    cout<<Gcd(a,b);
    return 0;
}
#include <iostream>
using namespace std;

int pallin(int x)
{
    int temp, r = 0;
    temp = x;

    while (x > 0)
    {
        int id = x % 10;
        r = r * 10 + id;
        x = x / 10;
    }
    {
        if (r == temp)
            return 0;
        else
            return 1;
    }
}

int main()
{
    int a=8787;
    cout<<pallin(a);

    return 0;
}
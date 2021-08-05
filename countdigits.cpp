#include <iostream>
using namespace std;

int count(int x)
{
    int res = 0;
    while (x > 0)
    {
        x = x / 10;
        res++;
    }
    return res;
}

int main()
{
    int a= 789;

    cout << count(a);
}
#include <iostream>
using namespace std;

int majoritywins(int a[], int n, int x, int y)
{
    int countx = 0;
    int county = 0;

    for (int i = 0; i < n; i++)
    {
        if (x == a[i])
        {
            countx++;
        }
        if (y == a[i])
        {
            county++;
        }
    }
    if (countx > county)
    {
        return x;
    }
    else if (county > countx)
    {
        return y;
    }
    else
    {
        return x < y ? x : y;
    }
}

int main()
{
    int a[] = {1, 1, 2, 2, 4, 4, 4, 4, 5, 5, 5};
    int n = 12;
    int x = 4;
    int y = 5;
    cout << "Majority" <<" "<< majoritywins(a, n, x, y);
    return 0;
}
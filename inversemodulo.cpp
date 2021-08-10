#include <iostream>
using namespace std;

int inversemodulo(int a, int M)
{
    for (int i = 1; i < M; i++)
    {
        if (((a % M) * (i % M)) % M == 1)
        {
            return i;
        }
        else
        {
            return -1;
        }
    }
}

int main()
{
    int a = 3, M = 11;
    cout << "inverse modulo is" << inversemodulo(a, M);
    return 0;
}
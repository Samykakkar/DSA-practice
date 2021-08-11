#include <iostream>
using namespace std;

int consecutive(int n)
{
    int count = 0;
    while (n)
    {
        n = n & (n << 1);
        count++;
    }
    return count;
}

int main()
{
    int a = 555;
    cout << "Length of consecutive 1's :" << consecutive(a);
    return 0;
}
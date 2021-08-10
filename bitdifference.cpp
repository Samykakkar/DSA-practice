#include <iostream>
using namespace std;

int countbit(int n)
{
    int count = 0;
    while (n)
    {
        count+= n & 1;
        n >>= 1;
    }
    return count;
}

int flipbit(int a, int b)
{
    int ans = a ^ b;
    return countbit(ans);
}

int main()
{
    int a=12,b=18;
     cout<<"flipbit"<<endl<<flipbit(a,b);
    return 0;
}
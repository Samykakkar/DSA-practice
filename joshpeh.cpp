#include <iostream>
using namespace std;

int joshpeh(int n, int k)
{
    if (n == 1)
        return 0;
    return((joshpeh(n-1,k) +k)%n);
}
int main()
{
    int n=5;
    int k=3;
    cout<<joshpeh(n,k);

    return 0;
}
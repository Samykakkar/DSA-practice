#include <iostream>
using namespace std;

void toh(int N, int from, int to, int aux)
{
    // Your code here
    if (N == 1)
    {
        cout << "Move disk 1 From rod " << from << "to" << to << endl;
        return;
    }

    toh(N - 1, from, aux, to);
    cout << "Move" << N << "from" << from << "to" << to << endl;
    toh(N - 1, aux, from, to);
}

int main()
{
    int n= 3;
    int f= 1,t=3,a=2;
    toh(n,f,t,a);
    return 0;
}

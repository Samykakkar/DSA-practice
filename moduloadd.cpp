#include <iostream>
using namespace std;

int moduloAdd(long long a, long long b, long long M)
{
    return ((a %M )+(b % M)) % M;
}

int main()
{  
     long int a= 1000, b=2000;
     int M=1000000007;
     cout<<"Modulo addition "<<moduloAdd(a,b,M);

    return 0;
}
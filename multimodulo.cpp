#include <iostream>
using namespace std;

int multimodulo(long long a, long long b, long long M)
{
    return ((a % M) * (b % M)) % M;
}
int main()
{    
     long long  a=92233720368547758;
     long long b=92233720368547758;
     long long M=1000000007;
     cout<<"MODULO IS "<<multimodulo(a,b,M);

    return 0;
}
#include <iostream>
#include <cmath>
using namespace std;

int getrightmostsetbit(int n){
    return log2(n & -n) +1;
}

int positionofdiffbit(int m , int n){
    if(m==n){
        return -1;

    }
    return getrightmostsetbit(m^n);
}

int main()
{
    int m =52,n=24;
    cout<<"Position of rightmost diff bit"<<positionofdiffbit(m,n);
    
    return 0;
}
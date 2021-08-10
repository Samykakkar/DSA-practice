#include <iostream>
#include <cmath>
using namespace std;

unsigned int getfirstbit(int n){
    return log2(n&-n)+1;
}


int main()
{
    int a=12;
    cout<<getfirstbit(a);
    
    return 0;
}
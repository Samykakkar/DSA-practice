#include <iostream>
using namespace std;

int countzero(int x){
    int res=0;

    for (int  i = 5; i <=x; i=i*5)
    {
        res=res+ x/i;

    }
    return res;
    
}

int main()
{
    int a=100;
    cout<<countzero(a);
    return 0;
}
#include <iostream>
using namespace std;

int gradecode(int n ){
    int Gray=n>>1;

    return n^Gray;
}


int main()
{
   int a=4;
   cout<<"binary to grade code"<<endl<<gradecode(a);

    return 0;
}
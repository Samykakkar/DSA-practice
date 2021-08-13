#include <iostream>
using namespace std;

void PrintNos(int N)
{    
    if (N == 0)
        return;
    else{
        PrintNos(N-1);
        cout<<N;
    }
}

int main()
{  
    int a=10;
    PrintNos(a);

    return 0;
}
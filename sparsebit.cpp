#include <iostream>
using namespace std;

bool issparse(int n)
{
    int count = 0;
    while (n)
    {
        count += n & 1;
        n >>= 1;
    }
    if (count == 1)
    {
        return true;
        
    }
    else 
    return false;
}

int main()
{
    int a = 10;
    printf("Sparse check %s", issparse(a)? "true": "false");
    return 0;
}
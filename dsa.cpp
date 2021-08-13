#include <iostream>
using namespace std;

int gg(int n)
{
    if (n ==0){
        return 0;
    }
    return gg(n/10) +n%10;
}
int main()
{
    int a = 24;
    cout << gg(a);
    return 0;
}
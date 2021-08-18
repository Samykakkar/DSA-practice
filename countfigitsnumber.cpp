#include <iostream>
using namespace std;

int countdigits(int n)
{
    static int count = 0;

    if (n > 0)
    {
        count++;
        countdigits(n / 10);
    }
        return count;
    
}
int main()
{
    int a = 100;

    cout << countdigits(a);
    return 0;
}
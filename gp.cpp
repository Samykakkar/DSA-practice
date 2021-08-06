#include <iostream>
#include <cmath>
using namespace std;

double GP(int a, int b, int N)
{
    double r = ((double)b) / a;

    return (a * pow(r, N - 1));
}
int main()
{
    int a = 2;
    int b = 4;
    int N = 9;
    cout << "Nth term is" << GP(a, b, N);

    return 0;
}
#include <iostream>
using namespace std;


int factorial(int n)
{
    int fact = 1;
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

int main()
{
     
    int num = 5;
    cout << "Factorial of a number is " <<factorial(num)<<endl;

        return 0;
}
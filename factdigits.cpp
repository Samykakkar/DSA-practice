#include <iostream>
using namespace std;


int factorial(int n)
{
    int fact = 1;
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

int digits(int n){
    int count=0;
    while(n!=0){
        n=n/10;
        count++;
    }
    return count;
}


int main()
{
     
    int num = 5;
    int fact=factorial(num);
    cout << "Factorial of a number is " <<fact<<endl;
    cout<<"Digits of factorial "<<digits(fact);

        return 0;
}


#include <iostream>
using namespace std;


void fun(int n)
{
  if (n == 0)
    return;

  printf("%d", n%2);
  fun(n/2);
}  

int main()
{
    int a=25;
    fun(a);
    
    return 0;
}
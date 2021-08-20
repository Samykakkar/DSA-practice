#include <iostream>
using namespace std;

void leftrotate(int arr[], int n, int d)
{
    reverse(arr, 0, d - 1);
    reverse(arr, d, n - 1);

    reverse(arr, 0, n - 1);
}

int main()
{

    return 0;
}
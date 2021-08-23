#include <iostream>
using namespace std;

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
 



void wave(int arr[], int n)
{
    for (int i = 0; i < n-1 ; i+=2)
    {
        swap(&arr[i], &arr[i + 1]);
    }
    
    
}

int main()
{
    int arr[] = {1, 2, 3, 4,5};
    int n = 5;

    wave(arr, n);

    for( int i=0; i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
#include <iostream>
using namespace std;

void insert(int arr[], int sizeOfArray, int index, int element)
{

    if (index == sizeOfArray - 1)
    {
        arr[index] = element;
    }
    for (int i = sizeOfArray - 1; i > index; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[index] = element;

    for(int i=0; i<sizeOfArray-1;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int ele = 9;
    int n = 6;
    int index = 2;
    insert(arr, n, index, ele);
    return 0;
}
#include <iostream>
using namespace std;

void insert(int arr[], int ele, int size)
{
   arr[size-1]=ele;
   for(int i=0; i<size;i++)
   {
       cout<<arr[i]<<" ";
   }
}

int main()
{ int arr[]={2,3,5,6,7};
  int ele=10;
  int n=6;
  insert(arr,ele,n);
    
    return 0;
}
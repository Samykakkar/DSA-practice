#include <iostream>
using namespace std;

int equilibrium(int arr[], int n)
{
    int sum=0;
    int left_sum=0;
    // find sum of whole array
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    for(int i=0; i<n;i++)
    {
        sum=sum-arr[i];
        if(left_sum==sum)
        return i;

        left_sum+=arr[i];
    }
    return -1;
}

int main()
{
    int arr[]={-7,1,5,2,-4,3,0};
    int arr_size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Equilibrium index is"<< equilibrium(arr,arr_size);
    
    return 0;
}
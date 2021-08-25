#include <iostream>
using namespace std;

int trappingwater( int arr[], int n)
{
    int res=0, lmax[n], rmax[n];
    lmax[0]=arr[0];
    rmax[n-1]=arr[n-1];
    for(int i=1;i<n;i++)
    {
        lmax[i]=max(lmax[i-1],arr[i]);

    }
    for( int i=n-2;i>=0;i--)
    {
        rmax[i]=max(rmax[i+1],arr[i]);
    }
    for(int i=1;i<n-1;i++)
    {
        res+=min(lmax[i], rmax[i]) -arr[i];
    }
    return res;
}

int main()
{
    int  arr[]={3,0,0,2,0,4};
    int n=6;

    cout<<trappingwater(arr,n);
    
    return 0;
}
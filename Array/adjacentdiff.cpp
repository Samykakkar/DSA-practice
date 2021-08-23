#include <iostream>
using namespace std;

int minadjacent(int arr[], int n)
{
    int res=abs(arr[1]-arr[0]);

    for(int i= 2;i<n;i++)
    {
        res=min(res, abs(arr[i-1]-arr[i]));
    }
    res=min(res,abs(arr[n-1]-arr[0]));
    return res;
}

int main()
{
    int arr[] ={8,-8,9,-9,10,-11,12};
    int n =sizeof(arr)/sizeof(arr[0]);
    cout<<minadjacent(arr,n);
    
    return 0;
}
#include <iostream>
#include<vector>
using namespace std;

void reversegroup(vector<long long> &arr, int n, int k)
{
    for (long long i = 0; i < n; i += k)
    {
        if (i + k < n)
        {
            reverse(arr.begin() + i, arr.begin() + (i + k));
        }
        else
        {
            reverse(arr.begin() + i, arr.begin());
        }
    }
}

int main()
{
    vector<long long> arr[]={1,2,3,4,5,6,};
    int k=4;
    int n=6;

    reversegroup(arr,n,k);
    for(long long i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
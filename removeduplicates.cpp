#include <iostream>
using namespace std;

int duplicates(int arr[], int n)
{
    int res=1;
    for(int i =1;i<n;i++)
    {
        if(arr[i]!=arr[res-1])
        {
            arr[res]=arr[i];
            res++;
        }

    }
    return res;
}

int main()
{
     int arr[]={10,10,20,30,40,40};
     int n =6;

     for(int i=0;i<n;i++)
     {
         cout<<arr[i]<<" ";
     }
     cout<<endl;

     cout<<duplicates(arr,n);
     cout<<endl;
     
     for(int i=0;i<duplicates(arr,n);i++)
     cout<<arr[i]<<" ";
    return 0;
}
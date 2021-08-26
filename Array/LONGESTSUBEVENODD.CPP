#include <iostream>
using namespace std;

int longestsubarrayevenodd(int arr[], int n)
{
    int max_len=1;
    int curr_sum=1;

    for(int i=1; i<n;i++)
    {
       if((arr[i-1]%2==0 && arr[i] %2!=0)||(arr[i-1]%2!=0 && arr[i]%2==0))
       {
           curr_sum++;
           max_len=max(max_len,curr_sum);
       }
       else curr_sum=1;
    }
    return max_len;
}

int main()
{
    int arr[]={ 10,12,14,7,8};
    int n=5;
    cout<<"Longest subarray of even and odds"<<" "<<longestsubarrayevenodd(arr,n);
    
    return 0;
}
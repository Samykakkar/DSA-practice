#include <iostream>
using namespace std;

int maxsubarraysum(int arr[], int n)
{
    int max = 0;
    int currentsum = 0;
    for (int i = 0; i < n; i++)
    {
        currentsum = currentsum + arr[i];

        if (currentsum > max)
        {
            max = currentsum;
        }
        if (currentsum < 0)
        {
            currentsum = 0;
        }
    }
    return max;
}

int main()
{  
    int arr[]={1,2,3,-2,5};
    int n=5;
    cout<<" contiguous sub-arrary"<< " " <<maxsubarraysum(arr,n);

    return 0;
}
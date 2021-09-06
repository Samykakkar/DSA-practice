#include <iostream>
using namespace std;

int consecu(int arr[], int n, int conse[])

{
    conse[0] = arr[0];

    for (int i = 1; i < n; i++)
    {
        conse[i] = conse[i - 1] + arr[i];
    }




    ///TO CHECK SUM IS  0 or not
    for (int i = 0; i < n; i++)
    {
            int count = 0;

        for(int j=i+1;j<n;j++)
        {
            if(conse[j+1]==conse[i])
            {
                count++;
            }
        }
        if(count>0)
        {
            return 1;
        }
        else{
            return 0;
        }
    }
}

int main()
{
    int arr[] = {6, -2, 3, -1};
    int n = 4;
    int prefix[n];
    cout<<consecu(arr, n, prefix);
   
    return 0;
}
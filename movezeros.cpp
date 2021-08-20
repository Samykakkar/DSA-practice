#include <iostream>
using namespace std;

int zeros(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[j] != 0)
                {
                    swap(arr[i], arr[j]);
                }
            }
        }
    }
}
/////////////SECOND METHODDDD/////////////////////

void zeros(int arr[], int n)
{
    int count=0;
    for(int i=0 ; i<n;i++)
    {
        if(arr[i]!=0)
        {
            swap(arr[i],arr[count]);
            count++
        }
    }
}
int main()
{

    return 0;
}
#include <iostream>
using namespace std;

int maxindexdiff(int arr[]), int n)
{
    if (n == 1);
    return 0;
}
int maxdiff;
int i, j;

int *Lmin = new int[n];
int *Rmax = new int[n];

Lmin[0] = arr[0];

for (i = 0; i < n; i++)
{
    Lmin[i] = max(arr[j], Lmin[i - 1]);
}

Rmax[n-1]=arr[n-1];
for(i=n-2;j>=0;j--)
{
    Rmax[j]=max(arr[j], Rmax[j+1]);
}

i=0, j=0, maxdiff=-1;


while(j<n && i<n)
{
    if(Lmin[i]<=Rmax[j])
    {
        maxdiff=max(maxdiff, j-i);
        j=j+1;
    }
    else
    {
        i=i+1;
    }
    return maxdiff;
}

int main()
{

    return 0;
}
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

for (i = 1; i < n; i++)
{
    Lmin[i] = min(arr[i], Lmin[i - 1]);        7 3 1 8 9 10 4 5 6
                                                lmin={7,3,1, 1, 1,1,1,1}
}

Rmax[n-1]=arr[n-1];
for(j=n-2;j>=0;j--)                             7 3 1 8 9 10 4 5 6
                                                rmax={ 10,10,10,10,10,10,6,6,6}
                                                       0 1 2 3 4 5 6 7 8
{
    Rmax[j]=max(arr[j], Rmax[j+1]);                 Rmax[j]=max(arr[j], Rmax[j+1]);
}                                                     rmax[7]=max(arr[7],rmax[8]) 
 
i=0, j=0, maxdiff=-1;         

                                
while(j<n && i<n)
{
    if(Lmin[i]<=Rmax[j])
    {
        maxdiff=max(maxdiff, j-i);
        j=j+1;                                lim[0]=7,rmax[0]=7,,,,i==7,,j=7 -==???i<=j===>>>>>>>>maxdiff=0
                                                j=1==>>>
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



    7 3 1 8 9 10 4 5 6

    lmin[]={7, 3 , 1 , 1 , }
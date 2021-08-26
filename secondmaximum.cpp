#include <iostream>
#include<vector>
using namespace std;


vector<int> largestandsecondlargest(int sizeofarray, int arr[])
{
    int max= INT_MIN , max2=INT_MIN;

    for(int i=0;i<sizeofarray;i++)
    {
        if(arr[i]>max)
        {
            max2=max;
            max=arr[i];
        }
        else if(arr[i]>max2 && arr[i]!=max)
        {
            max2=arr[i];
        }       
    }
    if(max2==INT_MIN)
    {
        max2=-1;
    }
    vector<int> temp(2);
    temp[0]=max;
    temp[1]=max2;
    return temp;
}


int main()
{
   std::vector<int> arr[]={2,3,5,3,5};
    int n= sizeof(arr)/sizeof(arr[0]);
    cout<<"Largest and second largest are"<<" "<<largestandsecondlargest(n, arr)<<endl;
    
    return 0;
}
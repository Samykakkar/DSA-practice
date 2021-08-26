#include <iostream>
using namespace std;


void strongest(int arr[], int n)
{
    for(int i=0; i<n;i++)
    {
        int res;
        res=max(arr[i],arr[i+1]);
        cout<<"Maximum of"<< arr[i] << " "<<"and"<<" "<< arr[i+1] <<"is" <<res<<" "<<endl;
    }
    
}

int main()
{
    int arr[]={1,2,3,1,5,7};
    int n=6;
    strongest(arr,n);
    
    return 0;
}
#include <iostream>
using namespace std;
int count(int n){
    int res=0;
    while(n>0){
        if((n&1)==1){
            res++;
        }
        n=n>>1;
    }
    return res;

}


int main()
{
   int a =5;
   cout<<"asdasd"<<endl<<count(a); 
    return 0;
}
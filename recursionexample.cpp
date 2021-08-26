
#include <iostream>

using namespace std;
                                             a=3 func(3) 
                                                    func(2)--cout<<"2"---fun(1)---  
                                                                                func(0) cout<"0" ---fun(-1)
void fun(int x)                              a=2  func(2)
{                                                    func(1)---cout<<"1"---func(0) *does nothing
                                             a=1...func(1)
    if(x > 0)                                        func(0)---cout<<"0"---func(-1)

    { 

        fun(--x); 

        cout << x <<" "; 

        fun(--x); 

    } 
} 
 

int main() 
{ 

    int a = 4; 

    fun(a); 

    return 0; 
} 
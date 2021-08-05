#include <iostream>
using namespace std;


double Ctof(double C){
    double F;
    F=(C*9/5) +32;
    return F;
}
int main()
{   double a=15;
    cout<<"Temp in Fara is "<<Ctof(a);
    
    return 0;
}
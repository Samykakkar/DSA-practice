#include <iostream>
using namespace std;

int median(int a[], int n)
{
    int median;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            median = n / 2;
        }
        else
        {
            median = (n / 2) + 1;
        }
    }
    return median;
}

int mean(int a[], int n)
{
    int sum = 0;
    int mean;
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    mean = sum / n;
    return mean;
}

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int n = 5;
    cout << "Mean is" << mean(a, n)<<endl;
    cout<<"Median is"<<median(a,n);

    return 0;
}
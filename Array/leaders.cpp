#include <iostream>
using namespace std;
vector<int> leaders(int a[], int n)
{
    vector<int> v;
    int max = a[n - 1];
    for (int i = n; i >= 0; i--)
    {
        if (a[i] >= max)
        {
            max = a[i];
            v.push_back(max);
        }
    }
    reverse(v.begin(), v.end());
    return v;
}
int main()
{

    return 0;
}
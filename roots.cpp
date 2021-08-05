#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> quadraticroots(int a, int b, int c)
{
    vector<int> roots;
    int root1, root2;
    int d = b * b - 4 * a * c;
    if (d < 0)
    {
        roots.push_back(-1);
    }
    else
    {
        root1 = floor((-b + sqrt(d)) / (2 * a));
        root2 = floor((-b - sqrt(d)) / (2 * a));

        roots.push_back(max(root1, root2));
        roots.push_back(min(root1, root2));
    }
    return roots;
}

int main()
{
   int a=1, b=-2, c=3;
    return 0;
}
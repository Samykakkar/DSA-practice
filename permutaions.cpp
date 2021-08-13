#include <iostream>
using namespace std;

void permute(string s, int i = 0)
{
    if (i == s.length() - 1)
    {
        cout << s << " ";
        return;
    }
    else
    {
        for (int j = i; j < s.length(); j++)
        {
            swap(s[i], s[j]);
            permute(s, i + 1);
            swap(s[i], s[j]);
        }
    }
}

int main()
{
    string s = "ABC";
    int i;
    cout << permute(s, i);
    return 0;
}
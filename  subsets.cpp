#include <iostream>
using namespace std;

void subse(string s, string curr = "", int i = 0)
{
    if (i == s.length)
    {
        print(curr);
        return;
    }
    subse(s, curr, i + 1);
    subse(s, curr + s[i], i + 1)''
}

int main()
{
    string s = "ABC";

    subse(s, "", 0);

    return 0;
}
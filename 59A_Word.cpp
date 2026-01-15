#include <iostream>
using namespace std;

int main()
{
    string s;
    int lower = 0;
    int upper = 0;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if ((int)s[i] >= 65 && (int)s[i] <= 90)
        {
            upper++;
        }
        else if ((int)s[i] >= 97 && (int)s[i] <= 122)
        {
            lower++;
        }
    }
    if (lower >= upper)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if ((int)s[i] >= 65 && (int)s[i] <= 90)
            {
                char g = (int)s[i] + 32;
                s[i] = g;
            }
        }
    }
    else
    {
        for (int i = 0; i < s.length(); i++)
        {
            if ((int)s[i] >= 97 && (int)s[i] <= 122)
            {
                char g = (int)s[i] - 32;
                s[i] = g;
            }
        }
    }
    cout<<s;

    return 0;
}
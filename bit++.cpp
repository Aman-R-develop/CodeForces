#include <iostream>
#include <string>
using namespace std;

int main()
{
    int X = 0;
    string inp;
    int n;
    cin >> n;
    if (n >= 1 && n <= 150)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> inp;
            if (inp.find("X") == 0)
            {
                if (inp.substr(1, 2).compare("++") == 0)
                {
                    X = X + 1;
                }
                else
                {
                    X = X - 1;
                }
            }
            else if (inp.find("X") == 2)
            {
                if (inp.substr(0, 2).compare("++") == 0)
                {
                    X = X + 1;
                }
                else
                {
                    X = X - 1;
                }
            }
        }
    }
    cout << X;

    return 0;
}
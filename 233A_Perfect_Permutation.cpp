#include <iostream>
using namespace std;

int main()
{
    int n;
    int i = 1;
    int j = 2;
    cin >> n;
    if (n % 2 != 0)
    {
        cout << -1;
    }
    else
    {
        for (int k = 0; k < n; k++)
        {
            if (i < n)
            {
                cout << j << " " << i << " ";
                j += 2;
                i += 2;
            }
        }
    }

    return 0;
}
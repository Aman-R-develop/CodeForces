#include <iostream>
using namespace std;

int main()
{
    int n;
    int count = 0;
    int f1, f2, f3;
    cin >> n;
    if (n >= 1 && n <= 1000)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> f1 >> f2 >> f3;
            if ((f1 && f2) == 1 || (f3 && f2) == 1 || (f3 && f1) == 1 || (f1 && f2 && f3) == 1)
            {
                count++;
            }
        }
        cout << count;
    }

    return 0;
}